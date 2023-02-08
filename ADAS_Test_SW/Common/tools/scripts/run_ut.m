function run_ut(string)
%RUN_UT		Run unit tests.
%
%This script is developed for Blue Dragon in order to simplify the input arguments
%for RUNSILTEST script. Unit tests must follow the unit test name convention 
%in [SVN]/
%
%Examples:
%	run_ut fun 
%	run_ut fun_ut_*.xls 
%	run_ut fun_ut_002 
%	run_ut fun_ut_002.xls#t001#t002 
%
%Bug report:
%	Wenchuan.Xia@ricardo.com
%

%$Id: run_ut.m 2 2019-09-19 09:28:50Z JuneXmas $

global mdl;
global folder;

%% INPUT CHECK
if nargin<1
	disp('** Error: no enough arguments.');
	help(mfilename)
	return
end

% Append "&" to the command string for test only.
test_flag = 0;
if string(length(string))=='&'				% "run_ut mdl_ut_001&" only display cmd,
	string = string(1:length(string)-1);
	string = lower(string);
	test_flag = 1;
end

% get model name
mdl = get_model_name(string);

% get model folder
folders = which(mdl, '-all');
if isempty(folders)
	error('UT:FILE', '%s not found. Check input name or name conventions.', mdl);
end
if length(folders) > 1
	error('UT:FILE', 'Too many %s found. Check path settings!', mdl);
else
	folder = fileparts(folders{1});
end


%% PREPARE TEST FILE LIST

underscore = strfind(string, '_');		%#ok<NASGU>
poundkey = strfind(string, '#');
xlsext = strfind(string, '.xls');
starkey = strfind(string, '*');

if ~isempty(poundkey)									% 'mdl_ut_004.xls#t001#t002' is given
	xlsfile = string(1:poundkey(1)-1);
	sheetlist = string(poundkey(1):length(string));
	if ~isempty(xlsext)
		if poundkey(1) <= xlsext(1)						% '#' happens before '.xls' 
			error('UT:STRING', '"#" happens before ".xls"');
		end
	else
		xlsfile = [xlsfile '.xls'];
	end
	
	if exist([folder '\Test_Case\' xlsfile], 'file')
		UTS = {[xlsfile sheetlist]};
	else
		error('UT:FILE', 'Unit test file %s not found', xlsfile);
	end
elseif ~isempty(starkey)								% 'mdl*' or 'mdl_ut_*.xls' is given
	if string(length(string))=='*'
		% last char is *, to append '.xls'
		string = [string '.xls'];
	end
	find_str1 = [folder '\Test_Case\' string];
	FILES = dir(find_str1);
	UTS = {FILES(:).name}';
elseif ~isempty(xlsext)									% 'mdl_ut_002.xls' is given
	if exist([folder '\Test_Case\' string], 'file')
		UTS = {string};
	end
else
	if strmatch(string, mdl, 'exact')					% 'mdl' is given, to test all MODEL and all SCRIPTS
		find_str1 = [folder '\Test_Case\' mdl '_ut*.xls'];
	else
		find_str1 = [folder '\Test_Case\' string '*.xls'];
	end
	FILES = dir(find_str1);
	if isempty(FILES)
		error('UT:FILE', 'File not found: %s', find_str1);
	end
	UTS = {FILES(:).name}';
end


%% XLS FILE LIST READY. RUN TEST ONE BY ONE
for i=1:length(UTS)
	
	% ###### PREPARE TEST PARAMETERS
	
	xls_name = UTS{i};
	th_name = guess_th_name(xls_name);
	xlsfile = [folder '\Test_Case\' xls_name];
	resfile = [folder '\Test_Results\' strrep(xls_name, '.xls', '') '_results.xls'];
	respath = fileparts(resfile);
	if ~exist(respath, 'dir'); mkdir(respath); end
	cmd = sprintf('runsiltest(''%s'',''%s'', ''%s'')', xlsfile, th_name, resfile);
	fprintf('## %s\n', cmd);
	
	if test_flag
		continue;		% skip test, just display
	end
	
	% ###### TEST EACH FILE
	
	currpath = pwd;
	cd(folder);
	try
		load_system(th_name);
		evalin('base', cmd);
% 		close_system(th_name, 0);	% close without saving
		cd(currpath);
	catch e
		cd(currpath);
		throw(e);
	end

end


end

%% 
function mdl_name = get_model_name(xls_str)
	
	underscore = strfind(xls_str, '_');
	if isempty(underscore)
		mdl_name = xls_str(1:min(4, length(xls_str)));	% take at most 4 chars 
		mdl_name = mdl_name(regexp(mdl_name, '\w'));
	else
		mdl_name = xls_str(1:underscore(1)-1);
	end
	
	mdl_chk = strmatch(mdl_name, dragon_modules('ut'), 'exact');
	if isempty(mdl_chk)
		error('UT:NAME', 'Invalid model name: %s', mdl_name);
	end
	
end

%%
function th_name = guess_th_name(xls_name)
global folder;

% 	[path, name, ext, version] = fileparts(lower(xls_name)); %#ok<NASGU>
    [path, name, ext] = fileparts(lower(xls_name)); %#ok<NASGU>

	% Check if 'mdl_ut.xls' is given
	if exist(name, 'file')
		th = which(name);
		if ~isempty(th)
			fd = fileparts(th);
			if ~isempty(strmatch(fd, folder, 'exact'))
				[fpath, th_name, fext] = fileparts(th);				
				return;
			end
		end
	end

	% Check if 'mdl_ut_001.xls' is given
	udsc = strfind(name, '_');
	if isempty(udsc)
		error('file name should include underscore "_"');
	end
	th_name = name(1:udsc(length(udsc))-1);		% trim last underscore ('_')

end

