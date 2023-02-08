function run_modeladvisor(varargin)
%run_modeladvisor		Run ut model advisor test.
%
%This script is developed for building model in order to simplify the input
%arguments for model advisor script.
%
%Examples:
%	run_modeladvisor fun_ut
%
% $Id: run_modeladvisor.m 2 2019-09-19 09:28:50Z JuneXmas $
%
%% input argu check
if nargin<1
    disp('** Error: Choose correct ut model.');
    help(mfilename)
    return
elseif nargin==1
    Model_Rule='HAITEC&MAAB_QuickCheck.mat';
elseif nargin==2
    if strcmp(varargin{2},'custom')
        [file_name,~] = uigetfile({'*.mat;', 'Model Advisor Rule File (*.mat)'; '*.*', 'All Files (*.*)'}, 'Select Rule File');
        if file_name==0
            disp('You don''t select model advisor checking rules.')
            disp('Stop checking.')
            cd(crrntfldr)
            return
        else
            Model_Rule = file_name;
        end
    else
        disp('** Wrong input');
        return
    end
elseif nargin>2
    disp('** Too many arguments');
    help(mfilename)
    return
end
SysList=varargin{1};

disp('Check model...')
% try
%     load_system(SysList)
%     set_param(SysList,'SimulationCommand','update')
% catch
%     disp(['** Error: Cannot update ' SysList ...
%         ', model advisor has been aborted'...
%         ', please check model diagnostic first.'])
%     return
% end

crrntfldr = pwd;
path=crrntfldr;
cd(path)

sl_refresh_customizations; % add HAITEC Modeling Guideline script



disp('Run model advisor checking....')
model=SysList;
path=fileparts(which(model));
cd(path);
app = Advisor.Manager.createApplication();
% fileName = 'HAITEC_ModelingStandard.mat';
setAnalysisRoot(app,'Root',model);
loadConfiguration(app,Model_Rule);
% Run Model Advisor analysis
run(app);
% Generate report
Report_name=[upper(strtok(model,'_')) '_ModelingGuideReport'];
generateReport(app,'Location',path,'Name',Report_name);
% Open the report in web browser
Open_Report=[path '\' Report_name '\report_' model '.html'];
web(Open_Report);