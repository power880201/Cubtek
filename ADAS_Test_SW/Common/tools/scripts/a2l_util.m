function a2l_util(command, varargin)
%A2L_UTIL: Utilities to manage data dictionaries. 
%
% You may need cygwin installed to run this script.
%
%Syntax:	a2l_util command [arguments]
%
%Commands:
%			a2l_util visual	  [sys]	-> to collect visualization signals in the model.
%			a2l_util para	  [sys]	-> to collect parameter information in the model.
%			a2l_util clean	  [sys] -> remove redundant lines in *.cal
%			a2l_util update	  [sys] -> update *.cal with workspace values, clean inclusive
%			a2l_util match	  [sys] -> sort *.cal to match *.var, update inclusive
%			a2l_util list	  [sys] -> display variable list
%			
%Bug report:
%	Wenchuan.Xia@ricardo.com
% 

% $Id: a2l_util.m 2 2019-09-19 09:28:50Z JuneXmas $

%% argument check
if nargin<1
	help(mfilename);	return;
end

%% switch commands
switch command		
	case {'visual', 'visualization'}
		sys = a2l_util_getsys(varargin);
		a2l_visual(sys);

	case {'para', 'parameter', 'parameters'}
		sys = a2l_util_getsys(varargin);
		a2l_para(sys);

	case 'list'
		sys = a2l_util_getsys(varargin);
		currdir = cd(fileparts(which(sys)));
 		if a2l_isdirty(sys)
 			error('%s is not up-to-date. stop.', sys);
 		end
		a2l_list(sys);
		cd(currdir);

	case 'match'
		sys = a2l_util_getsys(varargin);
		currdir = cd(fileparts(which(sys)));
 		if a2l_isdirty(sys)
 			error('%s is not up-to-date. stop.', sys);
 		end
		a2l_match(sys);
		a2l_update(sys);
		a2l_clean(sys);
		cd(currdir);
		
	case 'update'
		sys = a2l_util_getsys(varargin);
		currdir = cd(fileparts(which(sys)));
		if a2l_isdirty(sys)
			error('%s is not up-to-date. stop.', sys);
		end
		a2l_update(sys);
		a2l_clean(sys);
		cd(currdir);
		
	case 'clean'
		sys = a2l_util_getsys(varargin);
		currdir = cd(fileparts(which(sys)));
		if a2l_isdirty(sys)
			error('%s is not up-to-date. stop.', sys);
		end
		a2l_clean(sys);
		cd(currdir);

	otherwise
		error('Invalid command.');
		
end

%% end of main

% following sub routines ...


%% input check
function sys = a2l_util_getsys(varargin)

if isempty(varargin)
	error('unknown module name');
end

if ~ismember(varargin{:}, dragon_modules)
	error('unknown module name');
end

sys = varargin{1}{1};

%% a2l_list sub routine: to list all calibrations (in workspace)
function a2l_list(sys)
cmd = ['who( ''-regexp'', ''\<[AKM]' upper(sys) '_[a-zA-Z_0-9]+'' )'];
list = evalin('base', cmd);

% SEARCH MODEL FOR VARIABLES
expr = 'tr -d "\r\n[:blank:]" | sed -r s/"\"{2}"//g ';
cmd = sprintf('type %s.mdl | %s', sys, expr);
[err,m]=system(cmd);	% disp(['## !' cmd]);
if ~err
	lisv=regexp(m, ['\<[AKM]' upper(sys) '_\w*\>'], 'match');
else
	lisv={};
	warning('A2L_USAGE:GREP', 'Error processing %s', file);
end

% FORMAT OUTPUT
disp('# The following variable name are shown in model, but not in workspace. ');
disp('  it is most likely because incorrect name conventions in model. ');
disp(setdiff(lisv, list)'); 
disp(' ');
disp('# The following variables are defined but never used in the model. ')
disp(setdiff(list, lisv));	
disp(' ');
disp(' ');

disp('#  VARIABLE LIST ')
% link_to  variable_name    1-d/2-d/const
% find_system('tqs', 'BlockType', 'Constant', 'Value', 'KTQS_EngTempHigh_C')

disp(' ');

% constants
list_cnst = list(strmatch('K', list));
for i=1:length(list_cnst)
	var_name = list_cnst{i};
	httpcmd = sprintf('CONSTANT\t%s', var_name);
	var = evalin('base', [var_name '.Value']);
	fprintf('%s%s%s\n', httpcmd, blanks(40-length(var_name)), mat2str(var));
end

% lookups
list_look = list(strmatch('M', list));
for i=1:length(list_look)
	var_name = list_look{i};
	% get MXXX_id_??
	
	var = evalin('base', [var_name '.Value']);
	info = regexp(var_name,  '[^_]*', 'match'); 
	id = info{2};

	axe_names = list(strmatch(['A' upper(sys) '_'  id], list));
	
	if length(axe_names) == 2	&&	min(size(var)) > 1		% 2-d lookup
		var_x = evalin('base', [axe_names{1} '.Value']);
		var_y = evalin('base', [axe_names{2} '.Value']);
		if length(var_x) == size(var, 2)
			httpcmd = sprintf('2D-LOOKUP\t<a href="matlab:mesh(%s.Value, %s.Value, %s.Value, ''Tag'', %s);">%s</a>', axe_names{1}, axe_names{2}, var_name, var_name, var_name);
		else
			httpcmd = sprintf('2D-LOOKUP\t<a href="matlab:mesh(%s.Value, %s.Value, %s.Value, ''Tag'', %s);">%s</a>', axe_names{2}, axe_names{1}, var_name, var_name, var_name);
		end	
		fprintf('%s%s%s\n', httpcmd, blanks(40-length(var_name)), sprintf('%s, ', axe_names{:}));
	elseif length(axe_names) == 1	&&  min(size(var))== 1		% 1-d lookup
		httpcmd = sprintf('1D-LOOKUP\t<a href="matlab:plot(%s.Value, %s.Value);">%s</a>', axe_names{1}, var_name, var_name);
		fprintf('%s%s%s\n', httpcmd, blanks(40-length(var_name)), sprintf('%s, ', axe_names{:}));
	else														% error
		fprintf('??-LOOKUP\t%s%sCHECK\n', var_name, blanks(40-length(var_name)));
	end
end


%% a2l_match sub routine: to sort *.cal from *.var
function a2l_match(sys)
vfname = [sys '_var.m'];
cfname = [sys '_cal.m'];
cmd = sprintf('sed -e "s/^a2l_par/a2l_cal/g" -e "/^a2l_mon/d" %s > %s', vfname, cfname);
system(cmd);


%% a2l_update sub routine: to update *.cal file with workspace values
function a2l_update(sys)
cfname = [sys '_cal.m'];

% replace
command = sprintf('grep -E -o "^a2l_cal[()][\''][AKM]%s_[a-zA-Z_0-9]+[\'']" %s', upper(sys), cfname );	% run grep for all variables
[err,m] = system(command);
list = regexp(m, '[^\n]*', 'match')';																	% string to cell
for i = 1:length(list)
	str = strrep(strrep(list{i}, 'a2l_cal(', ''), '''', '');											% get variable value from workspace
	try
		var = evalin('base', [str '.Value']);																
	catch e
		fprintf('## Error: <%s>, %s %s\n', str, blanks(40-length(str)), e.message);
		var = [];
	end
	
 	new_line = [list{i} ',' blanks(40-length(str)) mat2str(var) ' );'];								% new line generation
	system(['sed -i "s/^a2l_cal[()][\'']' str '[\''].*$/' new_line '/g"' ' ' cfname ]);					% run sed
end


%% a2l_clean sub routine: to remove redundant statements
function a2l_clean(sys)
cfname = [sys '_cal.m'];
cf_new = [sys '_cal_new.m'];

% try run grep
command = [ 'grep -E "^a2l_cal|^disp|^\s|^%|^$" ' cfname ' > ' cf_new ];
system(command);

% replace file
system(['mv -f ' cf_new ' ' cfname]);

% % try run diff
% command = sprintf('TortoiseMerge.exe /base:"%s" /mine:"%s"', cfname, cf_new);
% system(command);


%% a2l_isdirty: SVN dirty check for *.cal file
function tf = a2l_isdirty(sys)
[err,m] = system(['svn status ' sys '_cal.m']);
if err
	% SVN command line tool not found, presume it is not dirty
	tf = 0;
else
	tf = ~isempty(m);	% SVN status is emtpy means updated (not dirty)
end

%% A2L_VISUAL
% A2L_VISUAL - visualization variable auto definition. It picks up all
% "resolved signals" in a system to create statements for XXX_VAR files.
function a2l_visual(sys)

load_system(sys);
lines = find_system(sys, 'FindAll', 'on','FollowLinks', 'on','LookUnderMasks', 'all', 'type', 'line');

sn = get(lines, 'Name');
sr = get(lines, 'MustResolveToSignalObject');
sp = get(lines, 'signalPropagation');

idx = cellfun('isempty', sn);				% remove un-named signals
sn(idx)=[];	sr(idx)=[];	sp(idx)=[];	sr=[sr{:}];

idx = strmatch('on', sp);					% remove propgate signals
sn(idx)=[];	sr(idx)=[];	sp(idx)=[];

idx = regexp(sn, '<.*>', 'match');			% remove propgate signals <>
idx = cellfun('isempty', idx);
idx = ~idx;
sn(idx)=[];	sr(idx)=[];	sp(idx)=[];

idx = strmatch(['V' upper(sys)], sn);		% check incorrect names

list_chk = setdiff(sn, sn(idx));

sn=sn(idx); sr=sr(idx); sp=sp(idx);	% signal with corrected names

list_rsv = sn(~sr);					% signal is not resolved

if ~isempty(list_chk)
	disp(' ');
	disp('Please check name convention of the following signals: ');
	disp(unique(sort(list_chk)))
	disp(' ');
end

if ~isempty(list_rsv)
	disp(' ');
	disp('The following signals are not resolved: ');
	disp(unique(sort(list_rsv)))
	disp(' ');
end

X = sn(sr);							% signal is resolved
X = unique(sort(X));				% unique

cmd = sprintf('who(''\\<[VN]%s_.+'', ''-regexp'');', upper(sys));
Y = evalin('base', cmd);

list_del = setdiff(Y,X);
list_add = setdiff(X,Y);

list_del = setdiff(list_del, list_rsv);	% do not delete named signals

if ~isempty(list_add)
	disp(' ');
	disp('The following signals are added: ');
	disp(' ');
end

if ~isempty(list_add)
	for i=1:length(list_add)
		var = list_add{i};

		[ dt, units, ms1, ms2 ] = a2l_guess(var);
		
		mon_txt = sprintf('a2l_mon(''%s''%s,\t''%s'',\t%s,\t%s,\t''%s'',\t'''');', var, blanks(max(0,32-length(var))), units, ms1, ms2, dt);
		disp(mon_txt);
	end
	disp(' ');
	disp(' ');
end


if ~isempty(list_del)
	disp(' ');
	disp('The following signals are deleted: ');
	disp(list_del);
	
	q = questdlg('Do yo want to remove unused variables from DD files?', 'Delete Variables', 'Yes', 'No', 'No');
	if strcmp(q, 'Yes')
		a2l_var_delete(sys, list_del);
	end
	disp(' ');
end

%%
%%
function a2l_para(sys)

load_system(sys);
disp(['Checking ' upper(sys) ' for parameters...']);

s1 = find_system(sys, 'FollowLinks', 'on','LookUnderMasks', 'all', 'BlockType', 'Constant');
s2 = find_system(sys, 'FollowLinks', 'on','LookUnderMasks', 'all', 'BlockType', 'Lookup');
s3 = find_system(sys, 'FollowLinks', 'on','LookUnderMasks', 'all', 'BlockType', 'Lookup2D');
N = length(s1) + 2*length(s2) + 3*length(s3);
X = cell(N,1);

k=1;
for i=1:length(s1)
	X{k} = get_param(s1{i}, 'Value');
	k = k+1;
end

for i=1:length(s2)
	X{k} = get_param(s2{i}, 'InputValues');
	k = k+1;
	X{k} = get_param(s2{i}, 'Table');
	k = k+1;
end

for i=1:length(s3)
	X{k} = get_param(s3{i}, 'RowIndex');
	k = k+1;
	X{k} = get_param(s3{i}, 'ColumnIndex');
	k = k+1;
	X{k} = get_param(s3{i}, 'Table');
	k = k+1;
end

X = [ X; a2l_para_list_sf(sys) ];
X = sort(unique(X));

o1 = strmatch(['K' upper(sys)], X);
o2 = strmatch(['A' upper(sys)], X);
o3 = strmatch(['M' upper(sys)], X);

X = [X(o1); X(o2); X(o3)];

cmd = sprintf('who(''\\<[AKM]%s_.+'', ''-regexp'');', upper(sys));
Y = evalin('base', cmd);

list_del = setdiff(Y,X);
list_add = setdiff(X,Y);

if ~isempty(list_add)
	disp(' ');
	disp('The following parameters are added: ');
	disp(' ');
end

for i=1:length(list_add)
	var = list_add{i};
	
	[ dt, units, ms1, ms2 ] = a2l_guess(var);
	
	par_txt = sprintf('a2l_par(''%s''%s,\t''%s'',\t%s,\t%s,\t''%s'',\t'''');', var, blanks(max(0,32-length(var))), units, ms1, ms2, dt);
	disp(par_txt);
end

if ~isempty(list_add)
	disp(' ');
	disp(' ');
end

for i=1:length(list_add)
	var = list_add{i};
	cal_txt = sprintf('a2l_cal(''%s''%s,\t0 );', var, blanks(max(0,32-length(var))));
	disp(cal_txt);
end

if ~isempty(list_del)
	disp(' ');
	disp(' ');
	disp('The following parameters are not used: ');
	disp(' ');
	disp(list_del);
	
	q = questdlg('Do yo want to remove unused variables from DD files?', 'Delete Variables', 'Yes', 'No', 'No');
	if strcmp(q, 'Yes')
		a2l_var_delete(sys, list_del);
	end
end

disp('Done.');
disp(' ');


function para_list_sf = a2l_para_list_sf(sys)
para_list_sf = {};
load_system(sys);

model = get_param(sys, 'object');
mCharts = model.find('-isa','Stateflow.Chart');

for i=1:length(mCharts)
	mChart = mCharts(i);
	mParameter=mChart.find('Scope','Parameter');
	para_list_sf = [ para_list_sf ; get(mParameter, 'Name') ]; %#ok<AGROW>
end


function a2l_var_delete(sys, list_del)
var_file_name = [ sys '_var.m' ];
cal_file_name = [ sys '_cal.m' ];

disp('## Removing');
disp(' ');
list_str = sprintf('%s|', list_del{:}); list_str =list_str(1:end-1);
[err, m] = system(sprintf('grep -E "(%s)" %s', list_str, var_file_name)); disp(m);
[err, m] = system(sprintf('grep -E "(%s)" %s', list_str, cal_file_name)); disp(m);

for i=1:length(list_del)
	cmd = sprintf('sed -i "/''%s''/d" %s', list_del{i}, var_file_name);
	system(cmd);
	
	cmd = sprintf('sed -i "/''%s''/d" %s', list_del{i}, cal_file_name);
	system(cmd);
end



%% END