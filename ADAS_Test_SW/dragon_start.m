function dragon_start(proj_name, command)
%
% ENTRY FOR ALL DRAGON PROJECTS
%
% Usage: dragon_start  [Dragon Name]   [Command]
%
%    Name:      the name of the dragon project.
%    Command:   command to control the project load
%            'path'   -  set project MATLAB path only
%            'bus'    -  load bus objects          ( include path )
%            'data'   -  load data dictionary      ( include bus  )
%            'app'    -  load HCU application      ( include data )
%            'mil'    -  load MiL test environment ( include app  )
%            'clean'  -  delete temp files, do not load anything
%
% Examples:
%		dragon_start
%		dragon_start   RedDragon
%		dragon_start   blue
%		dragon_start   blue  clean
%		dragon_start   red   path
%		dragon_start   red   mil

% 2019-05-15 William modify that when read GPDragon and select Cal_GPK, app of GPM will be loaded.    

% === $Id: dragon_start.m 2 2019-09-19 09:28:50Z JuneXmas $
disp('$Id: dragon_start.m 2 2019-09-19 09:28:50Z JuneXmas $');

%% global variables and default options
global flag_load_path;		flag_load_path = 1;
global flag_load_bus;		flag_load_bus = 1;
global flag_load_cal;		flag_load_cal = 1;


%%
if nargin>2
    error('too many arguments');
end

if nargin==1
    command = 'undef';
elseif nargin==0
    command = 'undef';
end

this_path = which(mfilename);
if iscell(this_path)
    error('more than one dragon found. stop.')
else
    this_path = fileparts(this_path);
    addpath(this_path);
end

if ~exist('proj_name', 'var')
    find_dragons = dir([this_path filesep '*Dragon']);
    if isempty(find_dragons)                        % no dragon found
        error('no dragon found. stop.')
    elseif length(find_dragons)==1                  % one dragon found
        proj_name = find_dragons.name;
    else                                            % more than one dragon found
        dragon_list = {find_dragons.name};
        q = listdlg('ListString', dragon_list, ...
            'Name', 'Select A Dragon', ...
            'ListSize', [200 100], ...
            'SelectionMode', 'single' ...
            );
        if isempty(q)
            disp('No dragon selected.');
            return;
        end
        proj_name = dragon_list{q};
    end
end

if exist([this_path filesep proj_name], 'dir')
    dragon_path = [this_path filesep proj_name];
else
    find_the_dragon = dir([this_path filesep '*' proj_name '*Dragon']);
    if isempty(find_the_dragon)
        error('dragon not found: %s, stop.', proj_name);
    elseif length(find_the_dragon)>1
        error('too many dragons found, stop.');
    else
        dragon_path = [this_path filesep find_the_dragon.name];
        proj_name = find_the_dragon.name;
    end
end

switch proj_name
    case 'LFCDragon'
        MatlabVersion=version;
        MatlabVers=MatlabVersion(length(MatlabVersion)-5:length(MatlabVersion)-1);
        if min(MatlabVers=='2015b')==1
            warning('Matlab version is not correct, please try to re-open the model using 2007b');
            return;
        end
    case 'VCUDragon'
        MatlabVersion=version;
        MatlabVers=MatlabVersion(length(MatlabVersion)-5:length(MatlabVersion)-1);
        if min(MatlabVers=='2015b')==1
            warning('Matlab version is not correct, please try to re-open the model using 2007b');
            return;
        end
end

disp(dragon_path)

%% command to configurations
switch lower(command)
    case 'path'					% load path only
        flag_load_bus = 0;
        flag_load_cal = 0;
        post_load = 'none';
    case 'bus'
        flag_load_cal = 0;
        post_load = 'none';
    case {'dd', 'datadict', 'data'}
        post_load = 'none';
    case 'app'
        post_load = 'app';
    case 'mil'
        post_load = 'mil';
    case 'clean'
        doclean(dragon_path);
        return;
    case 'undef'
        % do nothing
    otherwise
        error('unknown command: %s', command);
        
end

%% load common tools
addpath([this_path '\Common\tools\unit_test']);
addpath([this_path '\Common\tools\data_dict']);
addpath([this_path '\Common\tools\scripts']);
addpath([this_path '\Common\tools\can_lib']);


%% to make sure only one dragon is loaded
arch_path_old = dragon_flying('arch');
arch_path_new = [dragon_path '\software\sw_development\arch'];

if isempty(arch_path_old)
    arch_path = arch_path_new;
elseif strcmp(arch_path_old, arch_path_new)
    arch_path = arch_path_old;
else
    error('dragon aleady exist: %s, stop.', arch_path_old);
end

addpath(arch_path);
cd(arch_path);

%% add simulink library path
find_util_all = dir([arch_path filesep 'util*']);
if isempty(find_util_all)
    addpath([this_path '\Common\tools\simulink_lib']);
end

%% hal selection
find_hals_all = dir([arch_path filesep 'hal*']);
m=1;
for i=1:length(find_hals_all)
    if find_hals_all(i).isdir
        find_hals(m)=find_hals_all(i);
        m=m+1;
    end
end

if isempty(find_hals)                        % no hal found
    error('no hal found. stop.')
elseif length(find_hals)==1                  % one hal found
    hal_name = find_hals.name;
else                                         % more than one hal found
    hal_list = {find_hals.name};
    halnum = listdlg('ListString', hal_list, ...
        'Name', 'Select A Hal', ...
        'ListSize', [300 100], ...
        'SelectionMode', 'single', ...
        'CancelString', 'Cancel_Select 1st hal' ...
        );
    if isempty(halnum)
        hal_name = hal_list{1};
    else
        hal_name = hal_list{halnum};
    end
    fprintf('The selected hal is: %s\n',hal_name);
end


%% calibration file selection
% if proj_name=='GPDragon'
find_cals_all = dir([arch_path '\Cals' filesep 'Cal*']);
if ~isempty(find_cals_all)
    cal_list = {find_cals_all.name};
    calfilenum = listdlg('ListString', cal_list, ...
        'Name', 'Select A Model', ...
        'ListSize', [300 100], ...
        'SelectionMode', 'single', ...
        'CancelString', 'Cancel_Default' ...
        );
    if isempty(calfilenum)
        cal_name = '0';
        fprintf('No calibration file is selected\n');
    else
        cal_name = cal_list{calfilenum};
        fprintf('The selected calibration file is: %s\n',cal_name);
    end
end
% end

%% load everything
% load constants and enumerations
if flag_load_cal
    try
        evalin('base', 'hcu_local_hdr');
    catch e
        warning(e.identifier, e.message);
    end
end

cd([arch_path filesep hal_name])
load_hal_var_cal_buses
cd(arch_path)

% in arch_path	(inp, outp, util)
load_var_cal_buses

% in app_path	(app/*)
cd([arch_path filesep 'app'])
load_var_cal_buses
cd(arch_path)

% Load calibration files
if ~isempty(find_cals_all)
    if cal_name~='0'
        cd([arch_path filesep 'Cals' filesep cal_name])
        cal_path=[arch_path filesep 'Cals' filesep cal_name];
        addpath(cal_path);
        if flag_load_cal
            evalin('base', 'CalibrationData');
        end
        cd(arch_path)
    end
end

% Load temp override values
if 2 == exist('temp_ovrd_values', 'file')
    if flag_load_cal
        evalin('base', 'temp_ovrd_values');
    end
end

%% post load confirm
if exist('post_load', 'var')
    switch proj_name
        %         case 'LFCDragon'
        %             switch post_load
        %                 case 'app'
        %                     q = 1;
        %                 case 'mil'
        %                     q = 3;
        %                 case 'none'
        %                     return;
        %             end
        case 'VCUDragon'
            switch post_load
                case 'app'
                    q = 1;
                case 'none'
                    return;
            end
            %         case 'ADASDragon'
            %             switch post_load
            %                 case 'app'
            %                     q = 1;
            %                 case 'none'
            %                     return;
            %             end
        case 'HTDragon'
            switch post_load
                case 'app'
                    q = 1;
                case 'none'
                    return;
            end
            %         case 'SBDragon'
            %             switch post_load
            %                 case 'app'
            %                     q = 1;
            %                 case 'none'
            %                     return;
            %             end
        case 'GPU1Dragon'
            switch post_load
                case 'app'
                    q = 1;
                case 'none'
                    return;
            end
            %         case 'ELESYSDragon'
            %             switch post_load
            %                 case 'app'
            %                     q = 1;
            %                 case 'none'
            %                     return;
            %             end
        case 'CUBDragon'
            switch post_load
                case 'app'
                    q = 1;
                case 'none'
                    return;
            end
        case 'LCHDragon'
            switch post_load
                case 'app'
                    q = 1;
                case 'none'
                    return;
            end
            %         case 'MANDODragon'
            %             switch post_load
            %                 case 'app'
            %                     q = 1;
            %                 case 'none'
            %                     return;
            %             end
            %         case 'WinterDragon'
            %             switch post_load
            %                 case 'app'
            %                     q = 1;
            %                 case 'none'
            %                     return;
            %             end
            %         case 'CCtoACCDragon'
            %             switch post_load
            %                 case 'app'
            %                     q = 1;
            %                 case 'none'
            %                     return;
            %             end
        case 'GPDragon'
            switch post_load
                case 'app'
                    q = 1;
                case 'none'
                    return;
            end
        case 'MBUDragon'
            switch post_load
                case 'app'
                    q = 1;
                case 'none'
                    return;
            end
    end
else
    switch proj_name
        %         case 'LFCDragon'
        %             q = listdlg('PromptString','Select a target:',...
        %                 'Name', ['Start ' proj_name ],...
        %                 'ListSize', [200 100],...
        %                 'SelectionMode','single',...
        %                 'ListString', ...
        %                 { ...
        %                 'LFC s/w',...
        %                 'Model in Loop Test',...
        %                 'MiL Test with Bicycle',...
        %                 'MiL Test with CarSim',...
        %                 });
        case 'XDragon'
            q = listdlg('PromptString','Select a target:',...
                'Name', ['Start ' proj_name ],...
                'ListSize', [200 100],...
                'SelectionMode','single',...
                'ListString', ...
                { ...
                'X s/w',...
                });
            %         case 'ADASDragon'
            %             q = listdlg('PromptString','Select a target:',...
            %                 'Name', ['Start ' proj_name ],...
            %                 'ListSize', [200 100],...
            %                 'SelectionMode','single',...
            %                 'ListString', ...
            %                 { ...
            %                 'ADAS s/w',...
            %                 });
        case 'HTDragon'
            q = listdlg('PromptString','Select a target:',...
                'Name', ['Start ' proj_name ],...
                'ListSize', [200 100],...
                'SelectionMode','single',...
                'ListString', ...
                { ...
                'main s/w',...
                'dSPACE s/w',...
                'ADAS+EPS s/w',...
                'DemoCAR s/w',...
                'MIL w/ Carsim',...
                });
            %         case 'SBDragon'
            %             q = listdlg('PromptString','Select a target:',...
            %                 'Name', ['Start ' proj_name ],...
            %                 'ListSize', [200 100],...
            %                 'SelectionMode','single',...
            %                 'ListString', ...
            %                 { ...
            %                 'dSPACE s/w',...
            %                 });
        case 'GPU1Dragon'
            q = listdlg('PromptString','Select a target:',...
                'Name', ['Start ' proj_name ],...
                'ListSize', [200 100],...
                'SelectionMode','single',...
                'ListString', ...
                { ...
                'main s/w',...
                'Model in Loop Test',...
                });
            %         case 'ELESYSDragon'
            %             q = listdlg('PromptString','Select a target:',...
            %                 'Name', ['Start ' proj_name ],...
            %                 'ListSize', [200 100],...
            %                 'SelectionMode','single',...
            %                 'ListString', ...
            %                 { ...
            %                 'main s/w',...
            %                 'Model in Loop Test',...
            %                 });
        case 'CUBDragon'
            q = listdlg('PromptString','Select a target:',...
                'Name', ['Start ' proj_name ],...
                'ListSize', [200 100],...
                'SelectionMode','single',...
                'ListString', ...
                { ...
                'main s/w',...
                });
        case 'LCHDragon'
            q = listdlg('PromptString','Select a target:',...
                'Name', ['Start ' proj_name ],...
                'ListSize', [200 100],...
                'SelectionMode','single',...
                'ListString', ...
                { ...
                'main s/w',...
                });
            %         case 'MANDODragon'
            %             q = listdlg('PromptString','Select a target:',...
            %                 'Name', ['Start ' proj_name ],...
            %                 'ListSize', [200 100],...
            %                 'SelectionMode','single',...
            %                 'ListString', ...
            %                 { ...
            %                 'main s/w',...
            %                 });
            %         case 'WinterDragon'
            %             q = listdlg('PromptString','Select a target:',...
            %                 'Name', ['Start ' proj_name ],...
            %                 'ListSize', [200 100],...
            %                 'SelectionMode','single',...
            %                 'ListString', ...
            %                 { ...
            %                 'main s/w',...
            %                 });
            %         case 'CCtoACCDragon'
            %             q = listdlg('PromptString','Select a target:',...
            %                 'Name', ['Start ' proj_name ],...
            %                 'ListSize', [200 100],...
            %                 'SelectionMode','single',...
            %                 'ListString', ...
            %                 { ...
            %                 'main s/w',...
            %                 'Model in Loop Test',...
            %                 });
        case 'GPDragon'
            q = listdlg('PromptString','Select a target:',...
                'Name', ['Start ' proj_name ],...
                'ListSize', [200 100],...
                'SelectionMode','single',...
                'ListString', ...
                { ...
                'main s/w',...
                'MIL w/ Carsim',...
                'HIL w/ Carsim & Opal-RT',...
                });
        case 'MBUDragon'
            q = listdlg('PromptString','Select a target:',...
                'Name', ['Start ' proj_name ],...
                'ListSize', [200 100],...
                'SelectionMode','single',...
                'ListString', ...
                { ...
                'main s/w',...
                'MIL w/ Carsim',...
                'HIL w/ Carsim & Opal-RT',...
                });
    end
    if isempty(q)
        return;
    end
    
end

switch proj_name
    case 'LFCDragon'
        switch q
            case 1		% app
                open_system('hcu_main');
            case 2		% mil
                mil_path = dragon_flying('mil');
                cd(mil_path);
                start_mil
            case 3      % mil with bicycle model
                milbicycle_path = dragon_flying('mil_bicycle');
                cd(milbicycle_path);
                start_mil
            case 4      % mil with carsim model
                milcarsim_path = dragon_flying('mil_carsim');
                cd(milcarsim_path);
                start_mil
            case 5
                % error
            otherwise
                % do nothing
        end
    case 'VCUDragon'
        switch q
            case 1		% app
                open_system('hcu_main');
            case 2
                % error
            otherwise
                % do nothing
        end
        %     case 'ADASDragon'
        %         switch q
        %             case 1		% app
        %                 open_system('hcu_main');
        %             case 2
        %                 % error
        %             otherwise
        %                 % do nothing
        %         end
    case 'HTDragon'
        switch q
            case 1		% app
                open_system('hcu_main');
            case 2
                open_system('hcu_main_dspace');
            case 3
                open_system('hcu_main_ADASwEPS');
            case 4
                open_system('hcu_main_ADASDemoCAR');
            case 5		% mil
                mil_path = dragon_flying('mil');
                cd(mil_path);
                open_system('hcu_main_mil');
            otherwise
                % do nothing
        end
        %     case 'SBDragon'
        %         switch q
        %             case 1		% app
        %                 open_system('hcu_main_dspace');
        %             case 2
        %                 % error
        %             otherwise
        %                 % do nothing
        %         end
    case 'GPU1Dragon'
        switch q
            case 1 % app
                if strcmp(hal_name,'hal_dSPACE')
                    open_system('hcu_main_dspace');
                elseif strcmp(hal_name,'hal_H500')
                    open_system('hcu_main');
                end
            case 2
                % error
            otherwise
                % do nothing
        end
        
        %     case 'ELESYSDragon'
        %         switch q
        %             case 1 % app
        %                 if strcmp(hal_name,'hal_dSPACE')
        %                     open_system('hcu_main_dspace');
        %                 elseif strcmp(hal_name,'hal_H500')
        %                     open_system('hcu_main');
        %                 end
        %             case 2
        %                 % error
        %             otherwise
        %                 % do nothing
        %         end
    case 'CUBDragon'
        switch q
            case 1 % app
                if strcmp(hal_name,'hal_dSPACE')
                    open_system('hcu_main_dspace');
                elseif strcmp(hal_name,'hal_H500')
                    open_system('hcu_main');
                end
            case 2
                % error
            otherwise
                % do nothing
        end
    case 'LCHDragon'
        switch q
            case 1 % app
                if strcmp(hal_name,'hal_dSPACE')
                    open_system('hcu_main_dspace');
                elseif strcmp(hal_name,'hal_H500')
                    open_system('hcu_main');
                end
            case 2
                % error
            otherwise
                % do nothing
        end
        %     case 'MANDODragon'
        %         switch q
        %             case 1 % app
        %                 if strcmp(hal_name,'hal_dSPACE')
        %                     open_system('hcu_main_dspace');
        %                 elseif strcmp(hal_name,'hal_H500')
        %                     open_system('hcu_main');
        %                 end
        %             case 2
        %                 % error
        %             otherwise
        %                 % do nothing
        %         end
        %     case 'WinterDragon'
        %         switch q
        %             case 1 % app
        %                 if strcmp(hal_name,'hal_dSPACE')
        %                     open_system('hcu_main_dspace');
        %                 elseif strcmp(hal_name,'hal_H500')
        %                     open_system('hcu_main');
        %                 end
        %             case 2
        %                 % error
        %             otherwise
        %                 % do nothing
        %         end
        %     case 'CCtoACCDragon'
        %         switch q
        %             case 1 % app
        %                 if strcmp(hal_name,'hal_dSPACE')
        %                     open_system('hcu_main_dspace');
        %                 elseif strcmp(hal_name,'hal_H500')
        %                     open_system('hcu_main');
        %                 end
        %             case 2
        %                 % error
        %             otherwise
        %                 % do nothing
        %         end
    case 'GPDragon'
        switch q
            case 1      % app
                if calfilenum == 1              %if GPK was selected
                    open_system('hcu_main_GPM');                % change from open_system('hcu_main_GPK');
                elseif calfilenum == 2          %if GPM was selected
                    open_system('hcu_main_GPM');
                elseif calfilenum == 3          %if GPS was selected
                    open_system('hcu_main_GPS');
                end
            case 2		% mil
                mil_path = dragon_flying('mil');
                simu_path=dragon_flying('simu');
                cd(mil_path);
                fid=fopen('start_mil.m','w');
                fprintf(fid,'function start_mil\n');
                fprintf(fid,'simu_path=''%s'';\n',simu_path);
                fprintf(fid,'dict_path=''%s'';\n',[this_path filesep 'Common\tools\data_dict']);
                if isempty(find_util_all)
                    fprintf(fid,'comm_path=''%s'';\n',[this_path filesep '\Common\tools\simulink_lib']);
                else
                    fprintf(fid,'comm_path=''%s'';\n',[arch_path filesep 'util']);
                end
                fprintf(fid,'addpath(simu_path);\n');
                fprintf(fid,'addpath(dict_path);\n');
                fprintf(fid,'addpath(comm_path);\n');
                fprintf(fid,'evalin(''base'', [''run(''''simu_var.m'''')'']);\n');
                fprintf(fid,'evalin(''base'', [''run(''''simu_cal.m'''')'']);\n');
                fclose(fid);
                if calfilenum == 1              %if GPK was selected
                    open_system('hcu_main_mil_GPK');
                elseif calfilenum == 2          %if GPM was selected
                    open_system('hcu_main_mil_GPM');
                end
            case 3		% hil
                MatlabVersion=str2num(cell2mat(regexpi(version,'(?<=\(R)[0-9]+','match')));
                if (MatlabVersion<2015)
                    warning('For excuting simulation <Matlab verson must be 2015 or higher>')
                else
                    hil_path = dragon_flying('hil');
                    simu_path=dragon_flying('simu');
                    cd(hil_path);
                    fid=fopen('start_hil.m','w');
                    fprintf(fid,'function start_hil\n');
                    fprintf(fid,'simu_path=''%s'';\n',simu_path);
                    fprintf(fid,'dict_path=''%s'';\n',[this_path filesep 'Common\tools\data_dict']);
                    if isempty(find_util_all)
                        fprintf(fid,'comm_path=''%s'';\n',[this_path filesep '\Common\tools\simulink_lib']);
                    else
                        fprintf(fid,'comm_path=''%s'';\n',[arch_path filesep 'util']);
                    end
                    fprintf(fid,'addpath(simu_path);\n');
                    fprintf(fid,'addpath(dict_path);\n');
                    fprintf(fid,'addpath(comm_path);\n');
                    fprintf(fid,'evalin(''base'', [''run(''''simu_var.m'''')'']);\n');
                    fprintf(fid,'evalin(''base'', [''run(''''simu_cal.m'''')'']);\n');
                    fclose(fid);
                    if calfilenum == 1              %if GPK was selected
                        open_system('ADAS_HIL_GPKDragon');
                    elseif calfilenum == 2          %if GPM was selected
                        open_system('ADAS_HIL_GPMDragon');
                    elseif calfilenum == 3          %if GPS was selected
                        open_system('ADAS_HIL_GPSDragon');
                    end
                end
            otherwise
                % do nothing
        end
    case 'MBUDragon'
        switch q
            case 1		% app
                open_system('hcu_main');
            case 2		% mil
                mil_path = dragon_flying('mil');
                simu_path=dragon_flying('simu');
                cd(mil_path);
                fid=fopen('start_mil.m','w');
                fprintf(fid,'function start_mil\n');
                fprintf(fid,'simu_path=''%s'';\n',simu_path);
                fprintf(fid,'dict_path=''%s'';\n',[this_path filesep 'Common\tools\data_dict']);
                if isempty(find_util_all)
                    fprintf(fid,'comm_path=''%s'';\n',[this_path filesep '\Common\tools\simulink_lib']);
                else
                    fprintf(fid,'comm_path=''%s'';\n',[arch_path filesep 'util']);
                end
                fprintf(fid,'addpath(simu_path);\n');
                fprintf(fid,'addpath(dict_path);\n');
                fprintf(fid,'addpath(comm_path);\n');
                fprintf(fid,'evalin(''base'', [''run(''''simu_var.m'''')'']);\n');
                fprintf(fid,'evalin(''base'', [''run(''''simu_cal.m'''')'']);\n');
                fclose(fid);
                open_system('hcu_main_mil_MBU');
            case 3		% hil
                MatlabVersion=str2num(cell2mat(regexpi(version,'(?<=\(R)[0-9]+','match')));
                if (MatlabVersion<2015)
                    warning('For excuting simulation <Matlab verson must be 2015 or higher>')
                else
                    hil_path = dragon_flying('hil');
                    simu_path=dragon_flying('simu');
                    cd(hil_path);
                    fid=fopen('start_hil.m','w');
                    fprintf(fid,'function start_hil\n');
                    fprintf(fid,'simu_path=''%s'';\n',simu_path);
                    fprintf(fid,'dict_path=''%s'';\n',[this_path filesep 'Common\tools\data_dict']);
                    if isempty(find_util_all)
                        fprintf(fid,'comm_path=''%s'';\n',[this_path filesep '\Common\tools\simulink_lib']);
                    else
                        fprintf(fid,'comm_path=''%s'';\n',[arch_path filesep 'util']);
                    end
                    fprintf(fid,'addpath(simu_path);\n');
                    fprintf(fid,'addpath(dict_path);\n');
                    fprintf(fid,'addpath(comm_path);\n');
                    fprintf(fid,'evalin(''base'', [''run(''''simu_var.m'''')'']);\n');
                    fprintf(fid,'evalin(''base'', [''run(''''simu_cal.m'''')'']);\n');
                    fclose(fid);
                    open_system('ADAS_HIL_MBUDragon');
                end
            otherwise
                % do nothing
        end
end



%% END of main


%% run xxx_var.m, xxx_cal.m and BXXX_outputs.m
function load_var_cal_buses
global flag_load_path;
global flag_load_bus;
global flag_load_cal;

names = dir;
for i=1:length(names)
    
    if names(i).isdir == 0							;	continue;	end
    if ~isempty(strfind(names(i).name, '.'))		;	continue;	end
    if ~isempty(strfind(names(i).name, 'Test'))     ;	continue;	end
    if ~isempty(strfind(names(i).name, 'test'))     ;	continue;	end
    if ~isempty(strfind(names(i).name, 'MINT'))     ;	continue;	end
    if ~isempty(strfind(names(i).name, 'slprj'))    ;	continue;	end
    if ~isempty(strfind(names(i).name, 'sfprj'))    ;	continue;	end
    if ~isempty(strfind(names(i).name, '_grt_rtw')) ;	continue;	end
    if ~isempty(strfind(names(i).name, '_ert_rtw')) ;	continue;	end
    if ~isempty(strfind(names(i).name, '_dev'))		;	continue;	end
    if ~isempty(findstr(names(i).name, 'hal'))		;	continue;	end
    
    % % Set path % %
    if flag_load_path
        pathname = [pwd filesep names(i).name];
        addpath(pathname);
    end
    
    % % Run Calibration % %
    if flag_load_cal
        var_name = [names(i).name '_var'];
        if 2 == exist(var_name, 'file')
            evalin('base', ['run ' var_name]);
        end
        
        cal_name = [names(i).name '_cal'];
        if 2 == exist(cal_name, 'file')
            evalin('base', ['run ' cal_name]);
        end
        
        def_name = [names(i).name '_def'];
        if 2 == exist(def_name, 'file')
            evalin('base', ['run ' def_name]);
        end
    end
    
    % % Run Bus defination % %
    if flag_load_bus
        bus_name = ['B' upper(names(i).name) '_outputs'];
        if 1 == evalin('base', ['exist(''' bus_name ''' , ''var'')'])
            evalin('base', ['clear ' bus_name]);
        end
        if 2 == exist(bus_name, 'file')
            evalin('base', ['run ' bus_name]);
        end
    end
end

%% run xxx_var.m, xxx_cal.m and BXXX_outputs.m of HAL MODULE
function load_hal_var_cal_buses
global flag_load_path;
global flag_load_bus;
global flag_load_cal;


% % Set path % %
if flag_load_path
    pathname = [pwd];
    addpath(pathname);
end

% % Run Calibration % %
if flag_load_cal
    var_name = 'hal_var';
    if 2 == exist(var_name, 'file')
        evalin('base', ['run ' var_name]);
    end
    
    cal_name = 'hal_cal';
    if 2 == exist(cal_name, 'file')
        evalin('base', ['run ' cal_name]);
    end
    
    seldef_name = 'hal_def';
    if 2 == exist(seldef_name, 'file')
        evalin('base', ['run ' seldef_name]);
    end
end

% % Run Bus defination % %
if flag_load_bus
    bus_name = 'BHAL_outputs';
    if 1 == evalin('base', ['exist(''' bus_name ''' , ''var'')'])
        evalin('base', ['clear ' bus_name]);
    end
    if 2 == exist(bus_name, 'file')
        evalin('base', ['run ' bus_name]);
    end
end




%% for clean/search files
function doclean(dirname)
deletefile(searchfile(dirname, 'slprj*', 1));
deletefile(searchfile(dirname, 'sfprj*', 1));
deletefile(searchfile(dirname, '*_grt_rtw', 1));
deletefile(searchfile(dirname, '*_ert_rtw', 1));
deletefile(searchfile(dirname, '*_accel_rtw', 1));
deletefile(searchfile(dirname, '*.asv', 1));
deletefile(searchfile(dirname, '*#*_results.xls', 1));
deletefile(searchfile(dirname, '*test*_sfun.mexw32', 1));
deletefile(searchfile(dirname, '*test*_acc.mexw32', 1));
deletefile(searchfile(dirname, '*ut*_sfun.mexw32', 1));
deletefile(searchfile(dirname, '*_sfun.lib', 1));


%% Delete File
function deletefile(files)
rs = recycle('on');
for i=1:length(files)
    if exist(files(i).fullpath) %#ok<EXIST>
        fprintf(' - delete %s\n', files(i).fullpath);
        if files(i).isdir
            try
                rmdir(files(i).fullpath, 's');
            catch e
                warning(e.identifier, e.message);
            end
        else
            try
                delete(files(i).fullpath);
            catch e
                warning(e.identifier, e.message);
            end
        end
    end
end
recycle(rs);

%% Search File
function list = searchfile(varargin)
% SEARCHFILE search for files and/or directories under a given folder
% Syntax
%       list = searchfile('dir', 'filter', 'recflag')
%
%                   'dir'(Optional) -
%                   The source directory where to search. If not specified,
%                   current working directory will be used
%
%                   'filter'(Optional) -
%                   File filter('*.txt', 'ABC*.*' etc)
%
%                   'recflag'(Optional) -
%                   1 = Recurse into subdirectory, otherwise look only in
%                   the specified/current directory
%
%           Eg: list = searchfile('C:\Temp', '*.txt', 1);
%               list = searchfile('*.txt', 1);
%               list = searchfile(1);
%
%       Return value : Structure with following fields
%               'name'      - Name of the file/directory
%               'path'      - Path to the file/directory
%               'fullpath'  - Full path of the file/directory including its
%                             name
%               'isdir'     - Flag indicates whether a directory or file
%                             1 = Directory, 0 = File
%

% Author : Rahul P N
% Date   : 26/06/2009


% Initialize the structure for file/dir info
list = struct('name', [], 'path', [], 'fullpath', [], 'isdir', []);
lstcnt = 0;

strCurrDir = cd;

strSrcPath = '';
strFilter = '';
nRecFlag = '';

strErrMsg1 = 'Invalid argument passed';
strErrMsg2 = 'Invalid number of arguments passed';

switch nargin
    case 0
        strSrcPath = strCurrDir;
    case 1
        if(isdir(varargin{1}))
            strSrcPath = varargin{1};
        elseif(ischar(varargin{1}))
            strFilter = varargin{1};
        elseif(isnumeric(varargin{1}) && varargin{1} == 1)
            nRecFlag = ' /S';
        else
            error(strErrMsg1);
        end
    case 2
        if(isdir(varargin{1}))
            strSrcPath = varargin{1};
            if(ischar(varargin{2}))
                strFilter = varargin{2};
            elseif(isnumeric(varargin{2}) && varargin{2} == 1)
                nRecFlag = ' /S';
            else
                error(strErrMsg1);
            end
        elseif(ischar(varargin{1}))
            strSrcPath = strCurrDir;
            strFilter = varargin{1};
            if(isnumeric(varargin{2}) && varargin{2} == 1)
                nRecFlag = ' /S';
            else
                error(strErrMsg1);
            end
        else
            error(strErrMsg1);
        end
    case 3
        if(isdir(varargin{1}))
            strSrcPath = varargin{1};
            if(ischar(varargin{2}))
                strFilter = varargin{2};
                if(isnumeric(varargin{3}))
                    if(varargin{3} == 1)
                        nRecFlag = ' /S';
                    end
                else
                    error(strErrMsg1);
                end
            else
                error(strErrMsg1);
            end
        else
            error(strErrMsg1);
        end
    otherwise
        error(strErrMsg2);
end

% Make the dir command for DOS
strDirCmd = ['dir ', strFilter, nRecFlag, ' /B'];

% Get the directory/file listing
cd(strSrcPath);
[status, result] = dos(strDirCmd);
cd(strCurrDir);

% If not file found, display message returned by DOS
if(status == 1)
    %	disp(result);
else
    
    % Parse the file list string returned by DOS
    strList = regexp(result, '(.*)\n', 'tokens', 'dotexceptnewline');
    
    % Populate the file/dir list
    for iCount = 1 : size(strList, 2)
        strFullPath = strList{iCount}{1};
        lastSlashIdx = find(strFullPath == '\', 1, 'last');
        if(~isempty(lastSlashIdx))
            strPath = strFullPath(1 : lastSlashIdx-1);
            strName = strFullPath(lastSlashIdx+1:end);
        else
            strPath = strSrcPath;
            strName = strFullPath;
            strFullPath = [strPath, '\', strName];
        end
        if(isdir(strFullPath))
            lstcnt = lstcnt + 1;
            list(lstcnt).fullpath = strFullPath;
            list(lstcnt).name = strName;
            list(lstcnt).path = strPath;
            list(lstcnt).isdir = 1;
        else
            lstcnt = lstcnt + 1;
            list(lstcnt).fullpath = strFullPath;
            list(lstcnt).name = strName;
            list(lstcnt).path = strPath;
            list(lstcnt).isdir = 0;
        end
    end
end

%If list empty, return empty matrix
if(lstcnt == 0)
    list = [];
end
