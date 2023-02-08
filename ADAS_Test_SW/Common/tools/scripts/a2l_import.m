function a2l_import(sys, file0, file1)

if ~exist('file0', 'var')
	[f, p] = uigetfile('*.xls*');
	if f==0
		return;
	else
		file0 = [p filesep f];
	end	
end

if ~exist('file1', 'var')
	[f p] = uigetfile('*.mat');
	if f==0
		file1 = '';
	else
		file1 = [p filesep f];		
	end
end
try
	cal_set = load(file1);
catch e
	cal_set.STRUCTURE_BUT_NOT_DATA_SET = [];
end


%% 
cal_file = which([sys '_cal.m']);
var_file = which([sys '_var.m']);

if iscell(cal_file) || iscell(var_file)
	error('cannot locate dd files. too many found.');
end

if isempty(cal_file) || isempty(var_file)
	arch_path = dragon_flying('arch');
	old_path = cd(arch_path);
	[e,m] = system(['dir /s/b/ad ' sys '*']);
	cd(old_path);
	
	if e
		error('cannot locate dd files. not found');
	else
		path_list = regexp(m, '\n', 'split');
		hit = regexp(path_list, [lower(sys) '$'], 'match');
		path_list(cellfun('isempty', hit)) = [];
		if length(path_list)~=1
			disp(['Skip ' sys]);
			return
		end
		sys_path = strrep(m, sprintf('\n'), '');

		var_file = [sys_path filesep sys '_var.m'] ;
		cal_file = [sys_path filesep sys '_cal.m'] ;
	end	
end

%% files found.
disp(var_file);
disp(cal_file);

[num,txt,raw] = xlsread(file0, 'Variables');

var_id = fopen(var_file, 'a');
cal_id = fopen(cal_file, 'a');

if var_id<0 || cal_id<0
	error('file open fail');
end

fprintf(var_id, '\n');
fprintf(var_id, '%% ==========================================================\n');
fprintf(var_id, '%%  Fill by a2l_import automatically, %s \n', datestr(now));
fprintf(var_id, '%% ==========================================================\n');
fprintf(var_id, '\n');

fprintf(cal_id, '\n');
fprintf(cal_id, '%% =========================================================\n');
fprintf(cal_id, '%%  Fill by a2l_import automatically, %s \n', datestr(now));
fprintf(cal_id, '%% =========================================================\n');
fprintf(cal_id, '\n');

all_list = raw(:,1);
for i = 2:length(all_list)
	
	var_name = all_list{i};
	if ~ischar(var_name)
		continue
	end

	sys_name = strtok(var_name, '_');
	sys_name = sys_name(2:end);
	
	if ~strcmpi(sys_name, sys)
		continue;
	end
	
	du  = guess_docunit(var_name);
	dt  = guess_datatype(var_name, raw{i,5});
	min = guess_min(dt, raw{i,9} );
	max = guess_max(dt, raw{i,10});
	des = guess_desc(raw{i,2});	

	if var_name(1) == 'V'
		fun_name = 'a2l_mon';
	else
		fun_name = 'a2l_par';
	end
	
	a2l_string = sprintf('%s(''%s''%s, ''%s''%s, %s%s, %s%s, ''%s''%s, ''%s'' );', fun_name, ...
						var_name, 	blanks(50-length(var_name)), ...
						du,			blanks(8-length(du)), ...
						min,		blanks(8-length(min)), ...
						max,		blanks(8-length(max)), ...
						dt,			blanks(8-length(dt)), ...
						des		);

	fprintf(var_id, '%s\n', a2l_string);

	if var_name(1) ~= 'V'
		if isfield(cal_set, var_name)
			v = getfield(cal_set, var_name);
		else
			v = [];
		end
		
		cal_string = sprintf('a2l_cal(''%s'',%s%s );', var_name, blanks(50-length(var_name)), mat2str(v) );	
		fprintf(cal_id, '%s\n', cal_string);
	end
end

fclose(var_id);
fclose(cal_id);


function docunit = guess_docunit(var_name)

fields = regexp(var_name, '_', 'split');

if length(fields) <3
	docunit = '';
elseif strcmp(fields{end}, 'ovrdflg')
	docunit = 'flg';
elseif strcmp(fields{end}, 'ovrdval')
	docunit = fields{end-1};	
elseif strcmp(fields{end}, 'gain')
	docunit = 'gain';	
elseif strcmp(fields{end}, 'offset')
	docunit = fields{end-1};	
else
	docunit = fields{end};
end


function datatype = guess_datatype(var_name, dt_str)
switch dt_str
	case 	'Bool'
		datatype = 'boolean';
	case 	'Int8'
		datatype = 'uint8';
	case 	'UInt8'
		datatype = 'uint8';
	case 	'Int16'
		datatype = 'uint16';
	case 	'UInt16'
		datatype = 'uint16';
	case 	'Int32'
		datatype = 'single';
	case 	'UInt32'
		datatype = 'single';
	case 	'Float32'
		datatype = 'single';
	case 	'Float64'
		datatype = 'single';
	case 	'Void'
		datatype = 'single';
	case 	'Bitfield'
		datatype = 'uint16';
	case 	'IMPLICIT_STRUCT'
		datatype = 'single';
	case 	'CONTINUOUS'
		datatype = 'single';
	case 	'Bool8'
		datatype = 'boolean';
	case 	'ADC'
		datatype = 'single';
	case 	'DAC'
		datatype = 'single';
	case 	'uint8'
		datatype = 'uint8';
	case 	'float32'
		datatype = 'single';
	case 	'void'
		datatype = 'single';
	case 	'bool'
		datatype = 'boolean';
	otherwise
		datatype = 'single';
		
end


function min_str = guess_min(dt, value)

switch dt
case 'uint8'
	def_min = '0';
case 'uint16'
	def_min = '0';
case 'boolean'
	def_min = '0';
case 'single'
	def_min = '-1e6';
otherwise
	def_min = '-1e6';
end

if isempty(value)
	min_str = def_min;
elseif isnan(value)
	min_str = def_min;
elseif isnumeric(value)
	min_str = num2str(value);
else
	min_str = value;
end

function max_str = guess_max(dt, value)
switch dt
case 'uint8'
	def_max = '255';
case 'uint16'
	def_max = '65535';
case 'boolean'
	def_max = '1';
case 'single'
	def_max = '1e6';
otherwise
	def_max = '1e6';

end

if isempty(value)
	max_str = def_max;
elseif isnan(value)
	max_str = def_max;
elseif isnumeric(value)
	max_str = num2str(value);
else
	max_str = value;
end

function des_str = guess_desc(x)
if isnan(x)
	des_str = '';
else
	des_str = x;
end
