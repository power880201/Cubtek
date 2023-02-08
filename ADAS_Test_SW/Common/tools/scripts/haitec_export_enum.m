% ==== $Id: haitec_export_enum.m 2 2019-09-19 09:28:50Z JuneXmas $ =====
% Export Enum Table from enum_def.xls
% ========================================


function haitec_export_enum()
arch_folder = dragon_flying('arch');

fileID = fopen([arch_folder filesep 'hcu_local_hdr.m'],'w');

%% General Header
fprintf(fileID, '%s\n\n', '% Header defining ADAS Dragon constants');
fprintf(fileID, '%s\n', '% =========== $Id: haitec_export_enum.m 2 2019-09-19 09:28:50Z JuneXmas $  ===========');
fprintf(fileID, '%s\n\n', 'disp(''Loading $Id: haitec_export_enum.m 2 2019-09-19 09:28:50Z JuneXmas $'')');

%% General Constants
fprintf(fileID, '%s\n', '%-----------------------------');
fprintf(fileID, '%s\n', '% General global constants');
fprintf(fileID, '%s\n\n', '%-----------------------------');

enum_def = 'enum_def.xls';
enum_def_full = [arch_folder filesep 'enum_def.xls'];

enum_print(enum_def_full, 'Constant', fileID)

%% Unit Conversion Constants
fprintf(fileID, '\n%s\n', '%-----------------------------');
fprintf(fileID, '%s\n', '% Unit conversion constants');
fprintf(fileID, '%s\n\n', '%-----------------------------');

enum_print(enum_def_full, 'Unit', fileID)

%% Execution Period
fprintf(fileID, '\n%s\n', '%#########################################################################');
fprintf(fileID, '%s\n', '% Model execution period');
fprintf(fileID, '%s\n\n', '%#########################################################################');

enum_print(enum_def_full, 'Time', fileID)

%% Model ENUMs
fprintf(fileID, '\n%s\n', '%#########################################################################');
fprintf(fileID, '%s\n', '% Model ENUMs');
fprintf(fileID, '%s\n\n', '%#########################################################################');

enum_print(enum_def_full, 'Enum', fileID)

%% ddm
fprintf(fileID, '\n\n%s\n', '%VDDM_HEVFault_enum[8]');
fprintf(fileID, '%s\n', 'try');
fprintf(fileID, '\t%s\n', 'run(''ddm\\ddm_local_hdr.m'');');
fprintf(fileID, '%s\n', 'catch');
fprintf(fileID, '%s\n', 'end');


fclose(fileID);

disp(['The converted signals for ' enum_def ' is done.'])

haitec_export_info;
check_enum_coverage;

end

function enum_print(file, sheet, fileID)

[~,~,RAW] = xlsread(file, sheet);
[row, col] = size(RAW);

for i = 2:row
    if isnan(cell2mat(RAW(i, 1)))
        continue
    end
    if isnumeric(cell2mat(RAW(i,3)))
        fprintf(fileID, '%-35s\t%s\t%s\t%g\t%s\n', char(RAW(i,1)), '=', [char(RAW(i,2)) '('], cell2mat(RAW(i,3)), ');');
    else
        fprintf(fileID, '%-35s\t%s\t%s\t%s\t%s\n', char(RAW(i,1)), '=', [char(RAW(i,2)) '('], char(RAW(i,3)), ');');
    end
end

end


function check_enum_coverage()

enums_w = evalin('base', 'who(''*_enum'')');
enums_w = regexp(enums_w, '_', 'split');

if isempty(enums_w)
    error('No Dragon is loaded.')
end

for i = 1:length(enums_w)

    enum_w_i = enums_w{i};
    signal_name(i) = enum_w_i(2);

end

signal_name = unique(signal_name);

arch_folder = dragon_flying('arch');
fileID = fopen([arch_folder filesep 'hcu_enum_info.txt'],'r');
A = textscan(fileID, '%s%s', 'Delimiter', ' \n', 'MultipleDelimsAsOne',1);

B = [A{1}(:) A{2}(:)];

no_in_list = setdiff(signal_name, A{1}(:));

if ~isempty(no_in_list)
    warning off backtrace
    warning(['There is/are ' num2str(length(no_in_list)) ' signal(s) not assigned with enumerations.'])
    disp(no_in_list')
end

end

function haitec_export_info()
arch_folder = dragon_flying('arch');

[~,~,RAW] = xlsread([arch_folder filesep 'enum_def.xls'], 'Enum');
[row, col] = size(RAW);

for i = 2:row
    if isnan(cell2mat(RAW(i, 1)))
        continue
    end
    enum_array(i-1,:) = RAW(i,4:5);
end

fileID = fopen([arch_folder filesep 'hcu_enum_info.txt'],'w');

enum_list = unique(enum_array(:,1));
[row, ~] = size(enum_list);

for i = 1:row
    [tf, loc] = ismember(enum_list(i), enum_array(:,1));
    
    if any(tf)
        if isnan(cell2mat(enum_array(loc, 2)))
            warning('signals assignation missing.')
            continue
        end
        signal_list = regexp(enum_array(loc, 2), '\n', 'split');
        list_size = cell2mat(cellfun(@length,signal_list,'uni',false));
        if list_size==1
            fprintf(fileID, '%-50s\t%-20s\n', cell2mat(enum_array(loc, 2)), cell2mat(enum_array(loc, 1)));
        else
            for i = 1:list_size
                fprintf(fileID, '%-50s\t%-20s\n', cell2mat(signal_list{:}(i)), cell2mat(enum_array(loc, 1)));
            end
        end
    end
    
end

fclose(fileID);

disp(['The converted signals for hcu_enum_info.txt is done.'])
end