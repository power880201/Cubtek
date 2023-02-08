function the_path = dragon_flying( dir_abbrev )

% To get current dragon project environment from dir abbreviation

path_list = regexp(path, ';', 'split')';
hit = regexp(path_list, 'Dragon\\software\\sw_development\\arch$', 'match');
idx = cellfun('isempty', hit);
path_list(idx) = [];

if isempty(path_list)
    the_path = '';
    return
end

if length(path_list)>1
    disp(path_list);
    error('too many dragons. stop.');
end

arch_path = path_list{1};
switch dir_abbrev
    case 'arch'
        the_path = arch_path;
        
    case 'mil'
        the_path = strrep(arch_path, 'sw_development\arch', 'sw_validation\MiL\MiL_model');
        
    case 'mil_bicycle'
        the_path = strrep(arch_path, 'sw_development\arch', 'sw_validation\MiL_Bicycle\MiL_model');
        
    case 'mil_carsim'
        the_path = strrep(arch_path, 'sw_development\arch', 'sw_validation\MiL_CarSim\MiL_model');
        
    case 'hil'
        the_path = strrep(arch_path, 'sw_development\arch', 'sw_validation\HiL\HiL_model');
        
    case 'droot'    % dragon root
        the_path = strrep(arch_path, '\software\sw_development\arch', '');
        
    case 'trunk'    % trunk
        the_path = strrep(arch_path, '\software\sw_development\arch', '');
        the_path = fileparts(the_path);
        
    case 'root'
        the_path = regexprep(arch_path, '\\(trunk|tags|branches)\\.+Dragon\\software\\sw_development\\arch', '');
        
    case 'simu'
        the_path = strrep(arch_path, 'sw_development\arch', 'sw_validation\simu');
        
    otherwise
        error('unknown dir abbrev. %s', dir_abbrev);
        
end

