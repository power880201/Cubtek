function bus_gen

prompt = {'Enter Bus Name:','Paste Signal List Here!:'};
dlg_title = 'Bus Generator';
num_lines = 5;
def = {'BXXX_outputs','' };
answer = inputdlg(prompt,dlg_title,num_lines,def);

if isempty(answer)
    return;
end

bus_name = answer{1};
sig_text = answer{2};
if(isempty(sig_text))
    error('No signal found.');
end

sig_format_line = cellstr(sig_text);
sig_format_text = sprintf('%s, ', sig_format_line{:});
sig_list = regexp(sig_format_text, '\w+', 'match')';

module = regexprep(bus_name, 'B(\w+)_outputs', '$1');
module = lower(module);

module_dir = which(module);
if isempty(module_dir)
    module_dir = pwd;
elseif iscell(module_dir)
    disp(module_dir)
    error('Unable to locate %s', upper(module));
else
    module_dir = fileparts(module_dir);
end

bus_file = fullfile(module_dir, [bus_name, '.txt']);

disp(bus_file);

fid = fopen(bus_file, 'w');

try
    fprintf(fid, 'function cellInfo = %s(varargin)                       \n', bus_name);
    fprintf(fid, 'cellInfo = { ...                                       \n');
    fprintf(fid, '  { ...                                                \n');
    fprintf(fid, '	''%s'', ...                                          \n', bus_name);
    fprintf(fid, '    '''', ...                                          \n');
    fprintf(fid, '    sprintf(''''), {                                   \n');

    for i=1:length(sig_list)
        fprintf(fid, '\t\t\t{''%s'', 1, ''%s'', -1, ''real'', ''Sample''};... \n', sig_list{i}, a2l_guess(sig_list{i}));
    end


    fprintf(fid, '    } ...                                               \n');
    fprintf(fid, '  } ...                                                 \n');
    fprintf(fid, '}'';                                                    \n');
    fprintf(fid, 'Simulink.Bus.cellToObject(cellInfo);                    \n');

catch e
    fclose(fid);
    throw(e);
end

fclose(fid);
