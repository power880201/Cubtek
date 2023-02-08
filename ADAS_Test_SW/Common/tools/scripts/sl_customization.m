function sl_customization(cm)
%% --- register custom checks
cm.addModelAdvisorCheckFcn(@defineModelAdvisorChecks);

%% --- defineModelAdvisorChecks function
function defineModelAdvisorChecks
mdladvRoot = ModelAdvisor.Root;
% Check Constant block usage
rec = ModelAdvisor.Check('Check Constant block usage');
rec.SupportLibrary = true;
rec.Title = 'Check Constant block usage';
rec.TitleTips = ['HT_Blk_004 Fail if Constant block value is a number; Pass if' ...
    ' Constant block value is a letter.'];
rec.setCallbackFcn(@ConstantBlcokCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Gain block usage
% rec = ModelAdvisor.Check('Check Gain block usage');
% rec.Title = 'Check Gain block usage';
% rec.TitleTips = ['HT_Blk_004 Fail if Gain block value is a number; Pass if' ...
%     ' Gain block value is a letter.'];
% rec.setCallbackFcn(@GainCheck,'None','StyleOne')
% mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% % Check Model Information block exist
% rec = ModelAdvisor.Check('Check Model Info block exist');
% rec.Title = 'Check Model Info block usage';
% rec.TitleTips = ['Fail if there is no Model Info block exist on top layer; Pass if' ...
%     ' there is Model Info block exist on top layer'];
% rec.setCallbackFcn(@ModelInfoCheck,'None','StyleOne')
% mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check inport block data type
rec = ModelAdvisor.Check('Check inport data type');
rec.SupportLibrary = true;
rec.Title = 'Check Inport block usage';
rec.TitleTips = ['HT_I/O_001 Fail if inport block does not use bus object as data type; Pass if' ...
    ' inport block use bus object as data type.'];
rec.setCallbackFcn(@InportCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check outport block data type
rec = ModelAdvisor.Check('Check outport data type');
rec.SupportLibrary = true;
rec.Title = 'Check Outport block usage';
rec.TitleTips = ['HT_I/O_001 Fail if outport block does not use bus object as data type; Pass if' ...
    ' outport block use bus object as data type.'];
rec.setCallbackFcn(@OutportCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Saturation block annotation
rec = ModelAdvisor.Check('Check Saturation block annotation');
rec.SupportLibrary = true;
rec.Title = 'Check Saturation block usage';
rec.TitleTips = ['HT_Blk_002 Fail if Saturation block does not show annotation about upper and lower limitation; Pass if' ...
    ' Saturation block shows limitation annotation.'];
rec.setCallbackFcn(@SaturationCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Switch block annotation
rec = ModelAdvisor.Check('Check Switch block annotation');
rec.SupportLibrary = true;
rec.Title = 'Check Switch block usage';
rec.TitleTips = ['HT_Blk_002 Fail if Switch block does not show annotation about criteria; Pass if' ...
    ' Switch block shows criteria annotation.'];
rec.setCallbackFcn(@SwitchCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check UnitDelay block annotation
rec = ModelAdvisor.Check('Check UnitDelay block annotation');
rec.SupportLibrary = true;
rec.Title = 'Check UnitDelay block usage';
rec.TitleTips = ['HT_Blk_002 Fail if UnitDelay block does not show annotation about  Initial Condition; Pass if' ...
    ' UnitDelay block shows  Initial Condition annotation.'];
rec.setCallbackFcn(@UnitDelayCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Lookup block annotation
rec = ModelAdvisor.Check('Check Lookup block annotation');
rec.SupportLibrary = true;
rec.Title = 'Check Lookup block usage';
rec.TitleTips = ['HT_Blk_002 Fail if Lookup block does not show annotation about  input and table values; Pass if' ...
    ' Lookup block shows input and table values annotation.'];
rec.setCallbackFcn(@LookupCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Lookup2D block annotation
rec = ModelAdvisor.Check('Check Lookup2D block annotation');
rec.SupportLibrary = true;
rec.Title = 'Check Lookup2D block usage';
rec.TitleTips = ['HT_Blk_002 Fail if Lookup2D block does not show annotation about  input and table values; Pass if' ...
    ' Lookup2D block shows input and table values annotation.'];
rec.setCallbackFcn(@Lookup2DCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Lookup_n-D block annotation
rec = ModelAdvisor.Check('Check Lookup_n-D block annotation');
rec.SupportLibrary = true;
rec.Title = 'Check Lookup_n-D block usage';
rec.TitleTips = ['HT_Blk_002 Fail if Lookup_n-D block does not show annotation about  input and table values; Pass if' ...
    ' Lookup_n-D block shows input and table values annotation.'];
rec.setCallbackFcn(@Lookup_nDCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check block size
rec = ModelAdvisor.Check('Check block size');
rec.SupportLibrary = true;
rec.Title = 'Check block size';
rec.TitleTips = ['HT_Blk_001 Fail if block size is too small to display; Pass if' ...
    ' block size is suitable.'];
rec.setCallbackFcn(@BlockSizeCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Compare To Constant block size
% rec = ModelAdvisor.Check('Check Compare To Constant block size');
% rec.Title = 'Check Compare To Constant block size';
% rec.TitleTips = ['HT_Blk_001 Fail if Compare To Constant block size is not suitable; Pass if' ...
%     ' Compare To Constant block size is suitable.'];
% rec.setCallbackFcn(@CompareToConstantSizeCheck,'None','StyleOne')
% mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check All block name annotation
rec = ModelAdvisor.Check('Check All block name annotation');
rec.SupportLibrary = true;
rec.Title = 'Check All block name annotation';
rec.TitleTips = ['HT_Blk_003 Fail if any blocks show block name; Pass if' ...
    ' all blocks hide block name except subsystem.'];
rec.setCallbackFcn(@BlockNameCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check MATLAB Version
rec = ModelAdvisor.Check('Check Model building Version');
rec.SupportLibrary = true;
rec.Title = 'Check Model building Version';
rec.TitleTips = ['HT_Envir_001 Fail if model building version is not MATLAB 2015b (R 8.6); Pass if' ...
    ' model building version is MATLAB 2015b (R 8.6).'];
rec.setCallbackFcn(@ModelVersionCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Logical Operator Inport Datatype
rec = ModelAdvisor.Check('Check Logical Operator Inport Datatype');
rec.SupportLibrary = false;
rec.Title = '^Check Logical Operator Inport Datatype';
rec.TitleTips = ['HT_Blk_005 Fail if any Logical Operator block inport datatype is not correct; Pass if' ...
    ' all of Logical Operator block inport datatype is boolean.' 10 'The ^ symbol means model must be compiled before running this check.'];
rec.setCallbackFcn(@LogicalOperatorCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Product Inport Datatype
rec = ModelAdvisor.Check('Check Product Inport Datatype');
rec.SupportLibrary = false;
rec.Title = '^Check Product Inport Datatype';
rec.TitleTips = ['HT_Blk_005 Fail if any Product block'...
    ' inport datatype is not correct; Pass if all of Product block'...
    ' inport datatype is only single.' 10 'The ^ symbol means model must be compiled before running this check.'];
rec.setCallbackFcn(@ProductCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check RelationalOperator Inport Datatype
rec = ModelAdvisor.Check('Check RelationalOperator Inport Datatype');
rec.SupportLibrary = false;
rec.Title = '^Check RelationalOperator Inport Datatype';
rec.TitleTips = ['HT_Blk_005 Fail if any RelationalOperator block'...
    ' inport datatype is not correct; Pass if all of RelationalOperator'...
    ' block inport datatype is followed HAITEC Modeling Guideline.' 10 'The ^ symbol means model must be compiled before running this check.'];
rec.setCallbackFcn(@RelationalOperatorCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check any first word is 'V' signal properties
rec = ModelAdvisor.Check('Check Signal Line Properties');
rec.SupportLibrary = true;
rec.Title = 'Check Signal Line Properties';
rec.TitleTips = ['HT_Sig_001 Fail if any signal lines with first word ''V'''...
    ' is not signal object; Pass if' ...
    ' all of signal lines with first word ''V'' is signal object.'];
rec.setCallbackFcn(@SignalLineCheck,'None','StyleOne')
% -- set fix operation
myAction = ModelAdvisor.Action;
myAction.setCallbackFcn(@SignalLineCheckActionCallback);
myAction.Name='Activate Signal Obj';
myAction.Description=['Click the button to activate signal object'...
    ' in V prefix signal'];
rec.setAction(myAction);
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check setting of Trigger Subsystem on top layer
rec = ModelAdvisor.Check('Check setting of Trigger Subsystem');
rec.SupportLibrary = true;
rec.Title = 'Check Trigger Subsystem usage';
rec.TitleTips = ['HT_Blk_006 Fail if Trigger Subsystem does not set RTW system'...
    ' code as function or set function/file name as subsystem name; Pass if' ...
    ' All setting of Trigger Subsystem is correct.'];
rec.setCallbackFcn(@TriggerSubsystemCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Goto From Block Tag
rec = ModelAdvisor.Check('Check Goto From Block Tag');
rec.SupportLibrary = true;
rec.Title = 'Check Goto From Block Tag';
rec.TitleTips = ['HT_Blk_008 Fail if tag of Goto/From block is different with'...
    ' the name of the signal connected; Pass if' ...
    ' tag of Goto/From block is the same as the signal connected.'];
rec.setCallbackFcn(@GotoFromTagCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check data type for Constant block
rec = ModelAdvisor.Check('Check Constant block data type');
rec.SupportLibrary = true;
rec.Title = 'Check Constant block data type';
rec.TitleTips = ['HT_Blk_004 Fail if output data type set'...
    ' in Constant block''s dialog is set wrong data'...
    ' type; Pass if output data type is Inherit.'];
rec.setCallbackFcn(@ConstDataTypeCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Library Link Display
rec = ModelAdvisor.Check('Check Library Link Display');
rec.SupportLibrary = true;
rec.Title = 'Check Library Link Display';
rec.TitleTips = ['HT_Envir_002 Fail if model''s Library Link Display'...
    ' isn''t selected to ''All''; Pass if Library Link Display is'...
    ' selected to ''All''.'];
rec.setCallbackFcn(@LibraryLinkDisplayCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check no forbidden block
rec = ModelAdvisor.Check('Check no forbidden block');
rec.SupportLibrary = true;
rec.Title = 'Check no forbidden block';
rec.TitleTips = ['HT_Blk_010 Fail if there is any forbidden block'...
    ' (for example, Scope, Divide...etc.); Pass if the model without'...
    ' blocks on the list.'];
rec.setCallbackFcn(@NoForbiddenCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check no repeat naming
rec = ModelAdvisor.Check('Check no repeat naming');
rec.SupportLibrary = true;
rec.Title = 'Check no repeat naming';
rec.TitleTips = ['HT_Sig_002 Fail if there is any repeated naming on signals;'...
    'Pass if name of all signals is correct.'];
rec.setCallbackFcn(@NoRepeatNamingCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Reset Output When Disabled
rec = ModelAdvisor.Check('Check Reset Output When Disabled');
rec.SupportLibrary = true;
rec.Title = 'Check Reset Output When Disabled';
rec.TitleTips = ['HT_I/O_003 Fail if there is any Outport block in Enabled/Action'...
    ' Subsystem set held output when disabled; Pass if all Outport blocks in'...
    ' Enabled/Action are set reset output when disabled.'];
rec.setCallbackFcn(@ResetOutputWhenDisabledCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Sum block setting
rec = ModelAdvisor.Check('Check Sum block setting');
rec.SupportLibrary = true;
rec.Title = 'Check Sum block setting';
rec.TitleTips = ['HT_blk_007 Fail if Sum block isn''t set ''Saturate'...
    ' interger on overflow'' on; Pass if setting of Sum block is correct.'];
rec.setCallbackFcn(@SumCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Stateflow data definition
rec = ModelAdvisor.Check('Check Stateflow data definition');
rec.SupportLibrary = true;
rec.Title = 'Check Stateflow data definition';
rec.TitleTips = ['HT_blk_009 Fail if data who scope is local or output'...
    ' in Stateflow isn''t defined data type, or data whose name with'...
    ' first word ''V'' isn''t signal object; Pass if all data definition'...
    ' in Stateflow is correct.'];
rec.setCallbackFcn(@StateflowDataDefinitionCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Port and Signal Name Coincidence
rec = ModelAdvisor.Check('Check Port and Signal Name Coincidence');
rec.SupportLibrary = true;
rec.Title = 'Port and Signal Name Coincidence';
rec.TitleTips = ['HT_I/O_002 Fail if name of Inport/Outport block'...
    ' is different with the name of the signal connected; Pass if'...
    ' all Inport/Outport blocks name is correct.'];
rec.setCallbackFcn(@PortSignalNameCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check If Block Usage
rec = ModelAdvisor.Check('Check If Block Usage');
rec.SupportLibrary = false;
rec.Title = '^Check If Block Usage';
rec.TitleTips = ['HT_Blk_011 Fail if input port data type of If block'...
    ' is not boolean or expression in block dialog within ''='', ''<'' or'...
    ' ''>''; Pass if all If blocks usage is correct.' 10 'The ^ symbol means model must be compiled before running this check.'];
rec.setCallbackFcn(@IfBlockUsageCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Switch Case Block Import Data Type
rec = ModelAdvisor.Check('Check Switch Case Block Import Data Type');
rec.SupportLibrary = false;
rec.Title = '^Check Switch Case Block Import Data Type';
rec.TitleTips = ['HT_Blk_012 Fail if input port data type of Switch Case'...
    'block is not uint8; Pass if all Switch Case blocks input port'...
    'data type is uint8.' 10 'The ^ symbol means model must be compiled before running this check.'];
rec.setCallbackFcn(@SwitchCaseImportDataTypeCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');
% Check Enabled Subsystem Enable Port Data Type
rec = ModelAdvisor.Check('Check Enabled Subsystem Enable Port Data Type');
rec.SupportLibrary = false;
rec.Title = '^Check Enabled Subsystem Enable Port Data Type';
rec.TitleTips = ['HT_Blk_013 Fail if enable port data type of Enabled'...
    'Subsystem is not boolean; Pass if all Enabled Subsystem enable port'...
    ' data type is boolean.' 10 'The ^ symbol means model must be compiled before running this check.'];
rec.setCallbackFcn(@EnblSubsEnblPortDataTypeCheck,'None','StyleOne')
mdladvRoot.publish(rec, 'HAITEC Modeling Guideline');

%% --- defineHAITEModelingChecks function
function result = ConstantBlcokCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_constant_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','Constant');
blk_with_num=find_system(all_constant_blk,'RegExp','On','Value','\d');
blk_fault1=find_system(blk_with_num,'RegExp','On','Value','^[0-9]');
blk_fault2=[];
for i=1:length(blk_with_num)
    blk_with_DT=find_system(blk_with_num(i),'RegExp','On','Value','(');
    blk_wo_calname=find_system(blk_with_num(i),'RegExp','On','Name','Constant');
    if ~isempty(blk_with_DT)&&isempty(blk_wo_calname)
        blk_fault2=[blk_fault2;blk_with_num(i)];
    end
end
blk_FAULT=[blk_fault1;blk_fault2];
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for constant blocks that'...
    ' use numeric values.']);
if ~isempty(blk_FAULT)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Constant blocks have numeric values:']);
    ft.setListObj(blk_FAULT);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Parameterize the Constant block.' 10 '(HT_Blk_004)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. No constant blocks'...
        ' with numeric values were found.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

% function result = GainCheck(system)
% mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
% result = {};
% all_gain_blk=find_system(system,'LookUnderMasks','all',...
%     'FollowLinks','on','BlockType','Gain');
% blk_with_value=find_system(all_gain_blk,'RegExp','On','Gain','^[0-9]');
% ft = ModelAdvisor.FormatTemplate('ListTemplate');
% ft.setInformation(['This check looks for Gain blocks that'...
%     ' use numeric values.']);
% if ~isempty(blk_with_value)
%     ft.setSubResultStatusText(['Check has failed. The following '...
%         'Gain blocks have numeric values:']);
%     ft.setListObj(blk_with_value);
%     ft.setSubResultStatus('warn');
%     ft.setRecAction(['Parameterize the Gain block.' 10 '(HT_Blk_004)']);
%     mdladvObj.setCheckResultStatus(false);
% else
%     ft.setSubResultStatusText(['Check has passed. No Gain blocks'...
%         ' with numeric values were found.']);
%     ft.setSubResultStatus('pass');
%     mdladvObj.setCheckResultStatus(true);
% end
% ft.setSubBar(0);
% result{end+1} = ft;

% function result = ModelInfoCheck(system)
% mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
% result = {};
% model=strcat(system,'/',upper(strtok(system,'_')));
% all_constant_blk=find_system(model,'SearchDepth',1,...
%     'FollowLinks','on','Name','Model Info');
% ft = ModelAdvisor.FormatTemplate('ListTemplate');
% ft.setInformation(['This check looks for Model Info Block that'...
%     ' on top layer of model.']);
% if ~isempty(all_constant_blk)
%     ft.setSubResultStatusText(['Check has passed. Please manual check model info'...
%         ' block includes correct creator, model version and lasted revised by info.']);
%     ft.setListObj(all_constant_blk);
%     ft.setSubResultStatus('pass');
%     mdladvObj.setCheckResultStatus(true);
% else
%     ft.setSubResultStatusText('There is no Model Info block on top layer.');
%     ft.setSubResultStatus('warn');
%     ft.setRecAction('Please place model info block on top layer.');
%     mdladvObj.setCheckResultStatus(false);
% end
% ft.setSubBar(0);
% result{end+1} = ft;

function result = InportCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
blk_without_obj={};
ssfind=find_system(system,'SearchDepth',1,'BlockType','SubSystem');
r = listdlg('ListString', ssfind, ...
    'Name', 'Select main model(InportCheck)', ...
    'ListSize', [300 200], ...
    'SelectionMode', 'multiple' ...
    );
ft = ModelAdvisor.FormatTemplate('ListTemplate');
if isempty(r)
    ft.setSubResultStatusText(['Canceled.']);
    ft.setSubResultStatus('warn');
    mdladvObj.setCheckResultStatus(false);
else
    k=0;
    for ii=1:numel(r)
        if (length(strfind(ssfind{r(ii)},'_'))<2)
            model=ssfind{r(ii)};
            all_inport_blk=find_system(model,'LookUnderMasks','all','SearchDepth',1,...
                'FollowLinks','on','BlockType','Inport');
            blk=find_system(all_inport_blk,'RegExp','On','OutDataTypeStr','double||single||int||boolean||fixdt||Enum||Inherit');
            for i=1:length(blk)
                if isempty(regexp(blk{i},'task', 'once')) && isempty(regexp(blk{i},'TASK', 'once'))
                    k=k+1;
                    blk_without_obj{k}=blk(i);
                else
                    continue
                end
            end
        end
    end
    ft.setInformation(['This check looks for inport blocks that'...
        ' use bus object as data type.']);
    if ~isempty(blk_without_obj)
        ft.setSubResultStatusText(['Check has failed. The following '...
            'inport blocks does not use bus object as data type:']);
        ft.setListObj(blk_without_obj);
        ft.setSubResultStatus('warn');
        ft.setRecAction(['Please let input port use bus object as data type.' 10 '(HT_I/O_001)']);
        mdladvObj.setCheckResultStatus(false);
    elseif ~(length(strfind(ssfind{r},'_'))<2)
        ft.setSubResultStatusText(['Uncorrect Subsystem.']);
        ft.setSubResultStatus('warn');
    else
        ft.setSubResultStatusText(['Check has passed. All Inport blocks'...
            ' use bus object as data type.']);
        ft.setSubResultStatus('pass');
        mdladvObj.setCheckResultStatus(true);
    end
end
ft.setSubBar(0);
result{end+1} = ft;

function result = OutportCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
blk_without_obj = {};
ssfind=find_system(system,'SearchDepth',1,'BlockType','SubSystem');
r = listdlg('ListString', ssfind, ...
    'Name', 'Select main model(OutportCheck)', ...
    'ListSize', [300 200], ...
    'SelectionMode', 'multiple' ...
    );
ft = ModelAdvisor.FormatTemplate('ListTemplate');
if isempty(r)
    ft.setSubResultStatusText(['Canceled.']);
    ft.setSubResultStatus('warn');
    mdladvObj.setCheckResultStatus(false);
else
        blk_without_obj=[];
    for ii=1:numel(r)
    if length(strfind(ssfind{r(ii)},'_'))<2
        model=ssfind{r(ii)};
        all_outport_blk=find_system(model,'LookUnderMasks','all','SearchDepth',1,...
            'FollowLinks','on','BlockType','Outport');
        blk_without_obj_temp=find_system(all_outport_blk,'RegExp','On',...
            'OutDataTypeStr','double||single||int||boolean||fixdt||Enum||Inherit');
        blk_without_obj=[blk_without_obj;blk_without_obj_temp];
    end
    end
    ft = ModelAdvisor.FormatTemplate('ListTemplate');
    ft.setInformation(['This check looks for outport blocks that'...
        ' use bus object as data type.']);
    if ~isempty(blk_without_obj)
        ft.setSubResultStatusText(['Check has failed. The following '...
            'outport blocks does not use bus object as data type:']);
        ft.setListObj(blk_without_obj);
        ft.setSubResultStatus('warn');
        ft.setRecAction(['Please let output port use bus object as data type.' 10 '(HT_I/O_001)']);
        mdladvObj.setCheckResultStatus(false);
    else
        ft.setSubResultStatusText(['Check has passed. All outport blocks'...
            ' use bus object as data type.']);
        ft.setSubResultStatus('pass');
        mdladvObj.setCheckResultStatus(true);
    end
end
ft.setSubBar(0);
result{end+1} = ft;

function result = SaturationCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_saturation_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','Saturate');
blk_without_annotation=[];
flag=1;
for i=1:length(all_saturation_blk)
    handle=getSimulinkBlockHandle(all_saturation_blk(i));
    model_attributes =  get(handle);
    model_attributes_setting=model_attributes.AttributesFormatString;
    check_str_1=strfind(model_attributes_setting,'UpperLimit');
    check_str_2=strfind(model_attributes_setting,'LowerLimit');
    if isempty(check_str_1)||isempty(check_str_2)
        blk_without_annotation{flag}=all_saturation_blk(i);
        flag=flag+1;
    else
        continue
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for Saturation blocks that'...
    ' use Annotation to show upper and lower limitation.']);
if ~isempty(blk_without_annotation)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Saturation blocks does not show annotation about upper and lower limitation:']);
    ft.setListObj(blk_without_annotation);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please let Saturation blocks show annotation about upper and lower limitation.' 10 '(HT_Blk_002)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All Saturation blocks'...
        ' show annotation about upper and lower limitation.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = SwitchCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_switch_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','Switch');
blk_without_annotation=[];
flag=1;
for i=1:length(all_switch_blk)
    handle=getSimulinkBlockHandle(all_switch_blk(i));
    model_attributes =  get(handle);
    model_attributes_setting=model_attributes.AttributesFormatString;
    check_str_1=strfind(model_attributes_setting,'Criteria');
    if isempty(check_str_1)
        blk_without_annotation{flag}=all_switch_blk{i};
        flag=flag+1;
    else
        continue
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for Switch blocks that'...
    ' use Annotation to show Criteria.']);
if ~isempty(blk_without_annotation)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Switch blocks does not show annotation about Criteria:']);
    ft.setListObj(blk_without_annotation);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please let Switch blocks show annotation about Criteria.' 10 '(HT_Blk_002)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All Switch blocks'...
        ' show annotation about Criteria.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = UnitDelayCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_unitdelay_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','UnitDelay');
blk_without_annotation=[];
flag=1;
for i=1:length(all_unitdelay_blk)
    handle=getSimulinkBlockHandle(all_unitdelay_blk(i));
    model_attributes =  get(handle);
    model_attributes_setting=model_attributes.AttributesFormatString;
    check_str_1=strfind(model_attributes_setting,'InitialCondition');
    check_str_2=strfind(model_attributes_setting,'X0');
    if isempty(check_str_1) && isempty(check_str_2)
        blk_without_annotation{flag}=all_unitdelay_blk(i);
        flag=flag+1;
    else
        continue
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for UnitDelay blocks that'...
    ' use Annotation to show Initial Condition.']);
if ~isempty(blk_without_annotation)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'UnitDelay blocks does not show annotation about Initial Condition:']);
    ft.setListObj(blk_without_annotation);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please let UnitDelay blocks show annotation about Initial Condition.' 10 '(HT_Blk_002)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All UnitDelay blocks'...
        ' show annotation about Initial Condition.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = LookupCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_lookup_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','Lookup');
blk_without_annotation=[];
flag=1;
for i=1:length(all_lookup_blk)
    handle=getSimulinkBlockHandle(all_lookup_blk(i));
    model_attributes =  get(handle);
    model_attributes_setting=model_attributes.AttributesFormatString;
    check_str_1=strfind(model_attributes_setting,'InputValues');
    check_str_2=strfind(model_attributes_setting,'Table');
    if isempty(check_str_1) || isempty(check_str_2)
        blk_without_annotation{flag}=all_lookup_blk(i);
        flag=flag+1;
    else
        continue
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for Lookup blocks that'...
    ' use Annotation to show input and table values.']);
if ~isempty(blk_without_annotation)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Lookup blocks does not show annotation about input and table values:']);
    ft.setListObj(blk_without_annotation);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please let Lookup blocks show annotation about input and table values.' 10 '(HT_Blk_002)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All Lookup blocks'...
        ' show annotation about input and table values.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = Lookup2DCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_lookup2D_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','Lookup2D');
blk_without_annotation=[];
flag=1;
for i=1:length(all_lookup2D_blk)
    handle=getSimulinkBlockHandle(all_lookup2D_blk(i));
    model_attributes =  get(handle);
    model_attributes_setting=model_attributes.AttributesFormatString;
    check_str_1=strfind(model_attributes_setting,'RowIndex');
    check_str_2=strfind(model_attributes_setting,'ColumnIndex');
    %     check_str_3=strfind(model_attributes_setting,'Table');
    if isempty(check_str_1) || isempty(check_str_2)
        blk_without_annotation{flag}=all_lookup2D_blk(i);
        flag=flag+1;
    else
        continue
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for Lookup2D blocks that'...
    ' use Annotation to show input and table values.']);
if ~isempty(blk_without_annotation)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Lookup2D blocks does not show annotation about input and table values:']);
    ft.setListObj(blk_without_annotation);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please let Lookup2D blocks show annotation about input and table values.' 10 '(HT_Blk_002)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All Lookup2D blocks'...
        ' show annotation about input and table values.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = Lookup_nDCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_looknD_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','Lookup_n-D');
blk_without_annotation=[];
flag=1;
for i=1:length(all_looknD_blk)
    handle=getSimulinkBlockHandle(all_looknD_blk(i));
    model_attributes =  get(handle);
    model_attributes_setting=model_attributes.AttributesFormatString;
    check_str_1=strfind(model_attributes_setting,'BreakpointsForDimension1');
    check_str_2=strfind(model_attributes_setting,'BreakpointsForDimension2');
    check_str_3=strfind(model_attributes_setting,'Table');
    dim=str2double(get_param(all_looknD_blk{i},'NumberOfTableDimensions'));
    if (isempty(check_str_1) || isempty(check_str_2) || isempty(check_str_3)) && dim==2
        blk_without_annotation{flag}=all_looknD_blk(i);
        flag=flag+1;
    elseif (isempty(check_str_1) || isempty(check_str_3)) && dim==1
        blk_without_annotation{flag}=all_looknD_blk(i);
        flag=flag+1;
    else
        continue
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for Lookup_nD blocks that'...
    ' use Annotation to show input and table values.']);
if ~isempty(blk_without_annotation)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Lookup_nD blocks does not show annotation about input and table values:']);
    ft.setListObj(blk_without_annotation);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please let Lookup_nD blocks show annotation about input and table values.' 10 '(HT_Blk_002)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All Lookup_nD blocks'...
        ' show annotation about input and table values.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = BlockSizeCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_constant_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','Constant');
all_goto_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','Goto');
all_from_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','From');
all_dtc_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','DataTypeConversion');
all_testin_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','MaskType','Test Input');
all_testout_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','MaskType','Test Output');
all_dsm_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','DataStoreMemory');
all_dsw_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','DataStoreWrite');
all_dsr_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','DataStoreRead');
all_sub_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','SubSystem');
all_sum_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','Sum');
all_prdc_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','Product');
all_relop_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','RelationalOperator');
all_logop_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','FindAll','on','BlockType','Logic');
all_chosen_blk=[all_constant_blk;all_goto_blk;all_from_blk;all_dtc_blk;
    all_testin_blk;all_testout_blk;all_sub_blk;all_sum_blk;all_prdc_blk;
    all_relop_blk;all_logop_blk;all_dsm_blk;all_dsw_blk;all_dsr_blk];
blk_with_incorrectSize=[];
flag=1;
for i=1:length(all_chosen_blk)
    % width check with value
    model_attributes=get(all_chosen_blk(i));
    if isfield(model_attributes,'Value')
        up_cnt=sum(isstrprop(model_attributes.Value,'upper'));
        lw_cnt=sum(isstrprop(model_attributes.Value,'lower'));
        pu_cnt=sum(isstrprop(model_attributes.Value,'punct'));
        dg_cnt=sum(isstrprop(model_attributes.Value,'digit'));
        blk_width=model_attributes.Position(3)-model_attributes.Position(1);
        if blk_width<(up_cnt*6.5)+(lw_cnt*5)+(pu_cnt*5)+(dg_cnt*5)
            blk_with_incorrectSize{flag}=all_chosen_blk(i);
            flag=flag+1;
        end
    end
    % width check with tag
    model_attributes=get(all_chosen_blk(i));
    if isfield(model_attributes,'GotoTag')
        up_cnt=sum(isstrprop(model_attributes.GotoTag,'upper'));
        lw_cnt=sum(isstrprop(model_attributes.GotoTag,'lower'));
        pu_cnt=sum(isstrprop(model_attributes.GotoTag,'punct'));
        dg_cnt=sum(isstrprop(model_attributes.GotoTag,'digit'));
        blk_width=model_attributes.Position(3)-model_attributes.Position(1);
        if blk_width<(up_cnt*9)+(lw_cnt*6)+(pu_cnt*6)+(dg_cnt*6)
            blk_with_incorrectSize{flag}=all_chosen_blk(i);
            flag=flag+1;
        end
    end
    % width check with data type
    model_attributes=get(all_chosen_blk(i));
    if strcmp(model_attributes.BlockType,'DataTypeConversion')
        if regexp(model_attributes.OutDataTypeStr,['double||single||int8'...
                '||uint8||int16||uint16||int32||uint32||boolean'])
            width_lmt=length(model_attributes.OutDataTypeStr)*5;
        else
            width_lmt=40;
        end
        blk_width=model_attributes.Position(3)-model_attributes.Position(1);
        if blk_width<width_lmt
            blk_with_incorrectSize{flag}=all_chosen_blk(i);
            flag=flag+1;
        end
    end
    % width check with varname
    model_attributes=get(all_chosen_blk(i));
    if isfield(model_attributes,'varname')
        up_cnt=sum(isstrprop(model_attributes.varname,'upper'));
        lw_cnt=sum(isstrprop(model_attributes.varname,'lower'));
        pu_cnt=sum(isstrprop(model_attributes.varname,'punct'));
        dg_cnt=sum(isstrprop(model_attributes.varname,'digit'));
        blk_width=model_attributes.Position(3)-model_attributes.Position(1);
        if blk_width<max(50,(up_cnt*6.5)+(lw_cnt*5)+(pu_cnt*5)+(dg_cnt*5))
            blk_with_incorrectSize{flag}=all_chosen_blk(i);
            flag=flag+1;
        end
    end
    % width check with portname (subsystem)
    model_attributes=get(all_chosen_blk(i));
    if strcmp(model_attributes.BlockType,'SubSystem')&&...
            isempty(model_attributes.ErrorFcn)&&...
            isempty(model_attributes.MaskType)
        inhandle=find_system(all_chosen_blk(i),'LookUnderMasks','none',...
            'FollowLinks','on','searchdepth',1,'BlockType','Inport');
        outhandle=find_system(all_chosen_blk(i),'LookUnderMasks','none',...
            'FollowLinks','on','searchdepth',1,'BlockType','Outport');
        if ~isempty(get(inhandle,'Name'))
            inname=cellstr(get(inhandle,'Name'));
            in_chr_cnt=[];
            in_end=size(inname);
            for j=1:in_end(1)
                in_chr_cnt(j)=length(inname{j});
            end
            [~,inidx]=max(in_chr_cnt);
            abc=inname{inidx};
        else
            abc=[];
        end
        if ~isempty(get(outhandle,'Name'))
            outname=cellstr(get(outhandle,'Name'));
            out_chr_cnt=[];
            out_end=size(outname);
            for k=1:out_end(1)
                out_chr_cnt(k)=length(outname{k});
            end
            [~,outidx]=max(out_chr_cnt);
            def=outname{outidx};
        else
            def=[];
        end
        total_str=[abc def];
        up_cnt=sum(isstrprop(total_str,'upper'));
        lw_cnt=sum(isstrprop(total_str,'lower'));
        pu_cnt=sum(isstrprop(total_str,'punct'));
        dg_cnt=sum(isstrprop(total_str,'digit'));
        blk_width=model_attributes.Position(3)-model_attributes.Position(1);
        if blk_width<(up_cnt*5.5)+(lw_cnt*4.5)+(pu_cnt*4.5)+(dg_cnt*5.5)
            blk_with_incorrectSize{flag}=all_chosen_blk(i);
            flag=flag+1;
        end
    end
    % width check with portname (stateflow)
    model_attributes=get(all_chosen_blk(i));
    if strcmp(model_attributes.BlockType,'SubSystem')&&...
            isfield(model_attributes,'ErrorFcn')&&...
            ~isempty(regexp(model_attributes.ErrorFcn,'Stateflow','once'))
        sf_blk_obj=get_param(all_chosen_blk(i),'Object');
        chart_info=sf_blk_obj.find('-isa','Stateflow.Chart');
        data_info=chart_info.find('-isa','Stateflow.Data');
        in_name={};
        xx=1;
        out_name={};
        yy=1;
        for j=1:length(data_info)
            if strcmp(data_info(j).Scope,'Input')
                in_name{xx}=data_info(j).Name;
                xx=xx+1;
            end
            if strcmp(data_info(j).Scope,'Output')
                out_name{yy}=data_info(j).Name;
                yy=yy+1;
            end
        end
        in_long=[];
        out_long=[];
        for k=1:length(in_name)
            in_long(k)=length(in_name{k});
        end
        for l=1:length(out_name)
            out_long(l)=length(out_name{l});
        end
        [~,in_lct]=max(in_long);
        [~,out_lct]=max(out_long);
        total_str=[in_name{in_lct} out_name{out_lct}];
        up_cnt=sum(isstrprop(total_str,'upper'));
        lw_cnt=sum(isstrprop(total_str,'lower'));
        pu_cnt=sum(isstrprop(total_str,'punct'));
        dg_cnt=sum(isstrprop(total_str,'digit'));
        blk_width=model_attributes.Position(3)-model_attributes.Position(1);
        if blk_width<(up_cnt*5.5)+(lw_cnt*4.5)+(pu_cnt*4.5)+(dg_cnt*5.5)
            blk_with_incorrectSize{flag}=all_chosen_blk(i);
            flag=flag+1;
        end
    end
    % width check with datastorename
    model_attributes=get(all_chosen_blk(i));
    if isfield(model_attributes,'DataStoreName')&&...
            ~isempty(model_attributes.DataStoreName)
        up_cnt=sum(isstrprop(model_attributes.DataStoreName,'upper'));
        lw_cnt=sum(isstrprop(model_attributes.DataStoreName,'lower'));
        pu_cnt=sum(isstrprop(model_attributes.DataStoreName,'punct'));
        dg_cnt=sum(isstrprop(model_attributes.DataStoreName,'digit'));
        blk_width=model_attributes.Position(3)-model_attributes.Position(1);
        if blk_width<(up_cnt*7)+(lw_cnt*5)+(pu_cnt*5)+(dg_cnt*5)
            blk_with_incorrectSize{flag}=all_chosen_blk(i);
            flag=flag+1;
        end
    end
end
% height check with port
for i=1:length(all_chosen_blk)
    model_attributes=get(all_chosen_blk(i));
    maxportnum=max(model_attributes.Ports(1),model_attributes.Ports(2));
    blk_height=model_attributes.Position(4)-model_attributes.Position(2);
    if blk_height<max(maxportnum*9,16)
        blk_with_incorrectSize{flag}=all_chosen_blk(i);
        flag=flag+1;
    end
end
if ~isempty(blk_with_incorrectSize)
    blk_with_incorrectSize=unique([blk_with_incorrectSize{1,:}]);
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for block size that'...
    ' is not suitable for looking.']);
if ~isempty(blk_with_incorrectSize)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'block size is not suitable:']);
    ft.setListObj(blk_with_incorrectSize);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please correct block size.' 10 '(HT_Blk_001)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All Constant, Gain blocks'...
        ' is suitable.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

% function result = CompareToConstantSizeCheck(system)
% mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
% result = {};
% all_Com2Const_blk=find_system(system,'LookUnderMasks','none',...
%     'FollowLinks','on','RegExp','On','Name','Compare To Constant');
% blk_with_incorrectSize=[];
% flag=1;
% for i=1:length(all_Com2Const_blk)
%     handle=getSimulinkBlockHandle(all_Com2Const_blk(i));
%     model_attributes =  get(handle);
%     block_value=size( get_param(all_Com2Const_blk{i},'const'));
%     block_position=model_attributes.Position;
%     if block_position(3)-block_position(1)<15+(block_value(2)-3)*5
%         blk_with_incorrectSize{flag}=all_Com2Const_blk(i);
%         flag=flag+1;
%     else
%         continue
%     end
% end
% ft = ModelAdvisor.FormatTemplate('ListTemplate');
% ft.setInformation(['This check looks for Compare To Constant block size that'...
%     ' is not suitable for looking.']);
% if ~isempty(blk_with_incorrectSize)
%     ft.setSubResultStatusText(['Check has failed. The following '...
%         'Compare To Constant block size is not suitable:']);
%     ft.setListObj(blk_with_incorrectSize);
%     ft.setSubResultStatus('warn');
%     ft.setRecAction(['Please correct Compare To Constant block size.' 10 '(HT_Blk_001)']);
%     mdladvObj.setCheckResultStatus(false);
% else
%     ft.setSubResultStatusText(['Check has passed. All Compare To Constant blocks'...
%         ' is suitable.']);
%     ft.setSubResultStatus('pass');
%     mdladvObj.setCheckResultStatus(true);
% end
% ft.setSubBar(0);
% result{end+1} = ft;

function result = BlockNameCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
% model=strcat(system,'/',upper(strtok(system,'_')));
all_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','RegExp','On','ShowName','on');
flag=1;
blk_with_BlockName=[];
for i=1:length(all_blk)
    blktype_check_1=get_param(all_blk{i},'BlockType');
    %     blktype_check_2=get_param(all_blk{i},'Name');
    if strcmp(blktype_check_1,'SubSystem')||strcmp(blktype_check_1,'Inport')||strcmp(blktype_check_1,'Outport')||strcmp(blktype_check_1,'TriggerPort')...
            ||strcmp(blktype_check_1,'EnablePort')
        continue
    else
        blk_with_BlockName{flag}=all_blk{i};
        flag=flag+1;
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for all blocks that'...
    ' are showing block name.']);
if ~isempty(blk_with_BlockName)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'block are showing block name:']);
    ft.setListObj(blk_with_BlockName);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please hide block name.' 10 '(HT_Blk_003)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('Check has passed. All  blocks name is hidden.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = ModelVersionCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
if ~isempty(strfind(system,'_ut'))
    name_lib=strsplit(system,'_ut');
    model=strjoin(name_lib(1));
    %     model=strcat((strtok(system,'_')));
    load_system(model);
    model_version=get_param(model,'VersionLoaded');
    model_version_ut=get_param(system,'VersionLoaded');
else
    model_version=get_param(system,'VersionLoaded');
    model_version_ut=8.6;
    model=system;
end
model_version_str=num2str(model_version);
model_version_ut_str=num2str(model_version_ut);
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation('This model is building by MATLAB 2015b.');
if model_version~=8.6 || model_version_ut~=8.6
    ft.setSubResultStatusText(['Check has failed. One of following model version is not correct: '...
        ' The ' model ' model is created by MATLAB R ' model_version_str ...
        '. The UT model is created by MATLAB R ' model_version_ut_str]);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please convert model verison to MATLAB 2015b.' 10 '(HT_Envir_001)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('This model is building by MATLAB 2015b.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = LogicalOperatorCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
cmd=sprintf('%s([],[],[],''compile'')',system);
evalin('base', cmd);
all_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','RegExp','On','BlockType','Logic');
flag=1;
blk_with_notBoolean=[];
for i=1:length(all_blk)
    blk_CompiledPortDataTypes=get_param(all_blk{i},'CompiledPortDataTypes');
    blk_InputDataType=blk_CompiledPortDataTypes.Inport;
    %     blk_OutputDataType=blk_CompiledPortDataTypes.Outport;
    for j=1:length(blk_InputDataType)
        if ~strcmp(blk_InputDataType{j},'boolean')
            blk_with_notBoolean{flag}=all_blk{i};
            flag=flag+1;
            break
        else
            continue
        end
    end
end
cmd=sprintf('%s([],[],[],''term'')',system);
evalin('base', cmd);
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for all blocks that'...
    ' Logical Operator block inport datatype is not correct.' 10 'The ^ symbol means model must be compiled before running this check.']);
if ~isempty(blk_with_notBoolean)
    ft.setSubResultStatusText(['Check has failed. The following '...
        ' Logical Operator block inport datatype is not boolean:']);
    ft.setListObj(blk_with_notBoolean);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please correct inport datatype of Logical Operator block.' 10 '(HT_Blk_005)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All  Logical Operator'...
        ' block inport datatype is correct.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = ProductCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
cmd=sprintf('%s([],[],[],''compile'')',system);
evalin('base', cmd);
all_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','RegExp','On','BlockType','Product');
flag=1;
blk_with_Boolean=[];
for i=1:length(all_blk)
    blk_CompiledPortDataTypes=get_param(all_blk{i},'CompiledPortDataTypes');
    blk_InputDataType=blk_CompiledPortDataTypes.Inport;
    %     blk_OutputDataType=blk_CompiledPortDataTypes.Outport;
    for j=1:length(blk_InputDataType)
        if ~strcmp(blk_InputDataType{j},'single')
            blk_with_Boolean{flag}=all_blk{i};
            flag=flag+1;
            break
        else
            continue
        end
    end
end
cmd=sprintf('%s([],[],[],''term'')',system);
evalin('base', cmd);
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for all blocks that'...
    ' Product block inport datatype is not correct.' 10 'The ^ symbol means model must be compiled before running this check.']);
if ~isempty(blk_with_Boolean)
    ft.setSubResultStatusText(['Check has failed. The following Product'...
        ' block inport datatype is boolean']);
    ft.setListObj(blk_with_Boolean);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please correct inport datatype.' 10 '(HT_Blk_005)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('Check has passed.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = RelationalOperatorCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
cmd=sprintf('%s([],[],[],''compile'')',system);
evalin('base', cmd);
all_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','RegExp','On','BlockType','RelationalOperator');
flag=1;
blk_wrong_indatatype=[];
for i=1:length(all_blk)
    blk_CompiledPortDataTypes=get_param(all_blk{i},'CompiledPortDataTypes');
    blk_Operator=get_param(all_blk{i},'Operator');
    blk_InputDataType=blk_CompiledPortDataTypes.Inport;
    %     blk_OutputDataType=blk_CompiledPortDataTypes.Outport;
    if any(strcmp(blk_InputDataType,'boolean')) ||...
            (any(strcmp(blk_InputDataType,'single')) && strcmp(blk_Operator,'==')) ||...
            (any(strcmp(blk_InputDataType,'single')) && strcmp(blk_Operator,'~=')) ||...
            ~all(strcmp(blk_InputDataType,blk_InputDataType{1}))
        blk_wrong_indatatype{flag}=all_blk{i};
        flag=flag+1;
    end
end
cmd=sprintf('%s([],[],[],''term'')',system);
evalin('base', cmd);
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for all blocks that'...
    ' Relational Operator block inport datatype is not correct.' 10 'The ^ symbol means model must be compiled before running this check.']);
if ~isempty(blk_wrong_indatatype)
    ft.setSubResultStatusText(['Check has failed. The following'...
        ' Relational Operator block inport datatype is boolean or'...
        ' single when Operator is ''==''/''~='' or not the same:']);
    ft.setListObj(blk_wrong_indatatype);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please correct inport datatype or check'...
        ' Operator setting.' 10 '(HT_Blk_005)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('Check has passed.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = SignalLineCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
first_sub=find_system(system,'FindAll','off','FollowLinks','on',...
    'Searchdepth',1,'BlockType','SubSystem');
blk_lines=find_system(first_sub,'FindAll','on','FollowLinks','on','type','line');
flag=1;
line_without_singal_obj=[];
for i = 1:length(blk_lines)
    line_Name=get_param(blk_lines(i),'Name');
    line_Name_match=regexp(line_Name,'V');
    if ~isempty(line_Name_match) && line_Name_match(1)==1
        SrcPortHandle=get_param(blk_lines(i),'SrcPortHandle');
        SrcPort_Name= get_param(SrcPortHandle,'MustResolveToSignalObject');
        if strcmp(SrcPort_Name,'off')
            %             line_location_blk=get_param(blk_lines(i),'Parent');
            LineName_without_singal_obj{flag}=line_Name;
            line_without_singal_obj{flag}=blk_lines(i);
            flag=flag+1;
        end
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for all signal lines with first word ''V'' '...
    ' is not signal object.']);
if ~isempty(line_without_singal_obj)
    ft.setSubResultStatusText(['Check has failed. The following '...
        ' signal lines is not Simulink signal object:']);
    ft = ModelAdvisor.FormatTemplate('TableTemplate');
    ft.setColTitles({'Location','Signal Name'})
    for i=1:numel(line_without_singal_obj)
        ft.addRow({line_without_singal_obj{i},LineName_without_singal_obj{i}});
    end
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please correct signal properties.' 10 '(HT_Sig_001)']);
    mdladvObj.setCheckResultStatus(false);
    mdladvObj.setActionEnable(true);
else
    ft.setSubResultStatusText(['Check has passed. All signal lines with'...
        ' first word ''V'' is signal object.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = SignalLineCheckActionCallback(taskobj)
mdladvObj = taskobj.MAObj;
% result = {};
system = getfullname(mdladvObj.System);
blk_lines=find_system(system,'FindAll','on','FollowLinks','on','type','line');
flag=1;
line_without_singal_obj=[];
% Construct a questdlg with three options
choice = questdlg('What do you want to do for signal with prefix ''V'' is not signal object?', ...
    'Action Menu', ...
    'Set signal to signal object','Change signal name to prefix ''N''','No Action','No Action');
switch choice
    case 'Set signal to signal object'
        choice='NA';
        for i = 1:length(blk_lines)
            line_Name=get_param(blk_lines(i),'Name');
            line_Name_match=regexp(line_Name,'V');
            SrcPortHandle=get_param(blk_lines(i),'SrcPortHandle');
            SrcPort_Name= get_param(SrcPortHandle,'MustResolveToSignalObject');
            if ~isempty(line_Name_match) && line_Name_match(1)==1 ...
                    && strcmp(SrcPort_Name,'off')
                if ~strcmp(choice,'Fix all signal')
                    qstring=['Do do you want to set [' line_Name ' ] to signal object?'];
                    choice = questdlg(qstring,'Action Menu', ...
                        'Fix this signal','Fix all signal','No Action','No Action');
                    switch choice
                        case 'Fix this signal'
                            LineName_without_singal_obj{flag}=line_Name;
                            line_without_singal_obj{flag}=blk_lines(i);
                            set(blk_lines(i),'MustResolveToSignalObject', 1);
                            flag=flag+1;
                        case 'Fix all signal'
                            LineName_without_singal_obj{flag}=line_Name;
                            line_without_singal_obj{flag}=blk_lines(i);
                            set(blk_lines(i),'MustResolveToSignalObject', 1);
                            flag=flag+1;
                        case 'No Action'
                            continue
                    end
                else
                    LineName_without_singal_obj{flag}=line_Name;
                    line_without_singal_obj{flag}=blk_lines(i);
                    set(blk_lines(i),'MustResolveToSignalObject', 1);
                    flag=flag+1;
                end
            end
        end
        ft = ModelAdvisor.FormatTemplate('TableTemplate');
        ft.setSubResultStatusText('The following signal is actived signal object.');
        ft.setColTitles({'Location','Signal Name'})
        for i=1:numel(line_without_singal_obj)
            ft.addRow({line_without_singal_obj{i},LineName_without_singal_obj{i}});
        end
    case 'Change signal name to prefix ''N'''
        original_name=[];
        new_name=[];
        choice='NA';
        for i = 1:length(blk_lines)
            line_Name=get_param(blk_lines(i),'Name');
            line_Name_match=regexp(line_Name,'V');
            SrcPortHandle=get_param(blk_lines(i),'SrcPortHandle');
            SrcPort_Name= get_param(SrcPortHandle,'MustResolveToSignalObject');
            if ~isempty(line_Name_match) && line_Name_match(1)==1 ...
                    && strcmp(SrcPort_Name,'off')
                if ~strcmp(choice,'Fix all signal')
                    qstring=['Do do you want to change [' line_Name ' ] prefix to ''N''?'];
                    choice = questdlg(qstring,'Action Menu', ...
                        'Fix this signal','Fix all signal','No Action','No Action');
                    switch choice
                        case 'Fix this signal'
                            line_without_singal_obj{flag}=blk_lines(i);
                            original_name{flag}=get_param(blk_lines(i),'Name');
                            tmp_name=original_name{flag};
                            tmp_name(1)='N';
                            set(blk_lines(i),'Name',tmp_name);
                            new_name{flag}=get_param(blk_lines(i),'Name');
                            flag=flag+1;
                        case 'Fix all signal'
                            line_without_singal_obj{flag}=blk_lines(i);
                            original_name{flag}=get_param(blk_lines(i),'Name');
                            tmp_name=original_name{flag};
                            tmp_name(1)='N';
                            set(blk_lines(i),'Name',tmp_name);
                            new_name{flag}=get_param(blk_lines(i),'Name');
                            flag=flag+1;
                        case 'No Action'
                            continue
                    end
                else
                    line_without_singal_obj{flag}=blk_lines(i);
                    original_name{flag}=get_param(blk_lines(i),'Name');
                    tmp_name=original_name{flag};
                    tmp_name(1)='N';
                    set(blk_lines(i),'Name',tmp_name);
                    new_name{flag}=get_param(blk_lines(i),'Name');
                    flag=flag+1;
                end
            end
        end
        ft = ModelAdvisor.FormatTemplate('TableTemplate');
        ft.setColTitles({'Location','Original Signal Name','New Signal Name'})
        for i=1:numel(line_without_singal_obj)
            ft.addRow({line_without_singal_obj{i},original_name{i},new_name{i}});
        end
    case 'No Action'
        ft = ModelAdvisor.FormatTemplate('ListTemplate');
        ft.setSubResultStatusText('Do nothing for signal prefix ''V''');
end
ft.setSubBar(0);
result = ft;
mdladvObj.setActionEnable(false);

function result = TriggerSubsystemCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
tmp_tri_subsys=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','TriggerPort');
tmp_subsys=get_param(tmp_tri_subsys,'Parent');
fail_tri_subsys={};
flag=1;
if ~isempty(tmp_subsys)
    for i=1:length(tmp_subsys)
        tmp_str_idx=strfind(tmp_subsys{i},'/');
        if length(tmp_str_idx)>1
            tmp_str=tmp_subsys{i}(tmp_str_idx(1)+1:tmp_str_idx(2)-1);
        else
            tmp_str=tmp_subsys{i}(tmp_str_idx(1)+1:end);
        end
        if isempty(strfind(tmp_str,'_'))
            blk_w_TriSys=find_system(tmp_subsys{i},'RTWSystemCode','Nonreusable function',...
                'RTWFcnNameOpts','Use subsystem name','RTWFileNameOpts','Use subsystem name');
            if isempty(blk_w_TriSys)
                fail_tri_subsys{flag}=tmp_subsys{i};
                flag=flag+1;
            end
        else
            topname=strtok(tmp_str,'_');
            blk_w_TriSys=find_system(tmp_subsys{i},'RTWSystemCode','Nonreusable function',...
                'RTWFcnNameOpts','Use subsystem name','RTWFileNameOpts','User specified');
            TriSys_filename=get_param(tmp_subsys{i},'RTWFileName');
            filename_des=topname;
            blkname=get_param(tmp_subsys{i},'Name');
            trigname_temp=find_system(tmp_subsys{i},'LookUnderMasks','none',...
                'FollowLinks','on','BlockType','TriggerPort');
            trigname=strsplit(strjoin(trigname_temp),'trig_');
            if isempty(blk_w_TriSys)||~strcmp(TriSys_filename,filename_des)...
                    ||~strcmp(trigname{end},blkname)
                fail_tri_subsys{flag}=tmp_subsys{i};
                flag=flag+1;
            end
        end
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation('This check checks setting of Trigger Subsystem.');
if ~isempty(fail_tri_subsys)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Trigger Subsystem has improper setting:']);
    ft.setListObj(fail_tri_subsys);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Check setting of code generation of Trigger Subsystem.' 10 '(HT_Blk_006)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All of setting of'...
        ' Trigger Subsystem is correct.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = GotoFromTagCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_goto_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','Goto');
all_goto_tag=get_param(all_goto_blk,'GotoTag');
all_goto_handle=get_param(all_goto_blk,'PortHandles');
cmp_goname_idx=[];
for i=1:length(all_goto_blk)
    goto_inport=all_goto_handle{i,1}.Inport;
    goto_name=get_param(goto_inport,'Name');
    if isempty(goto_name)
        goto_line=get_param(goto_inport,'Line');
        goto_src=get_param(goto_line,'SrcPortHandle');
        goto_name=get_param(goto_src,'PropagatedSignals');
        goto_show=get(goto_line,'signalPropagation');
    else
        goto_show='on';
    end
    if strcmp(all_goto_tag(i),goto_name)&&strcmp(goto_show,'on')
        cmp_goname_idx=[cmp_goname_idx;0];
    elseif strcmp(all_goto_tag(i),goto_name(2:end-1))&&strcmp(goto_show,'on')
        cmp_goname_idx=[cmp_goname_idx;0];
    else
        cmp_goname_idx=[cmp_goname_idx;1];
    end
end
diff_goname_idx=find(cmp_goname_idx);
all_from_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','From');
all_from_tag=get_param(all_from_blk,'GotoTag');
all_from_handle=get_param(all_from_blk,'PortHandles');
cmp_frname_idx=[];
for i=1:length(all_from_blk)
    from_outport=all_from_handle{i,1}.Outport;
    from_name=get_param(from_outport,'Name');
    if isempty(from_name)
        from_name=get_param(from_outport,'PropagatedSignals');
        from_line=get_param(from_outport,'Line');
        from_show=get(from_line,'signalPropagation');
    else
        from_show='on';
    end
    if strcmp(all_from_tag(i),from_name)&&strcmp(from_show,'on')
        cmp_frname_idx=[cmp_frname_idx;0];
    elseif strcmp(all_from_tag(i),from_name(2:end-1))&&strcmp(from_show,'on')
        cmp_frname_idx=[cmp_frname_idx;0];
    else
        cmp_frname_idx=[cmp_frname_idx;1];
    end
end
diff_frname_idx=find(cmp_frname_idx);
gotofromlist=[all_goto_blk(diff_goname_idx);all_from_blk(diff_frname_idx)];
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for Goto/From blocks with'...
    '  wrong tag.']);
if ~isempty(diff_goname_idx) || ~isempty(diff_frname_idx)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Goto/From blocks should be checked:']);
    ft.setListObj(gotofromlist);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Check the name of the GotoTag, signal and propogated signals.' 10 '(HT_Blk_008)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All Goto/From blocks'...
        ' are correct.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = ConstDataTypeCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_Cnst_blk=find_system(system,'FollowLinks','on','BlockType','Constant');
Cnst_without_inherit=find_system(all_Cnst_blk,'RegExp','On','OutDataTypeStr',...
    'back propagation||double||single||int||boolean||fixdt||Enum||Bus');
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check searches if'...
    ' Output data type isn''t correct.']);
if ~isempty(Cnst_without_inherit)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Constant blocks are set in wrong data type:']);
    ft.setListObj(Cnst_without_inherit);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please set Inherit: Inherit from ''Constant value'''...
        ' for output data type.' 10 '(HT_Blk_004)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All Constant blocks are'...
        ' with correct output data type.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = LibraryLinkDisplayCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
display_type=get_param(system,'LibraryLinkDisplay');
model=strsplit(system,'_ut');
load_system(model(1))
display_type_mdl=get_param(model(1),'LibraryLinkDisplay');
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check checks if'...
    ' LibraryLinkDisplay is not selected to All.']);
if ~strcmp(display_type,'all')||~strcmp(display_type_mdl,'all')
    ft.setSubResultStatusText('Check has failed.');
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please select ''All'' in ''Display/Library Links'''...
        ' for model and ut model.' 10 '(HT_Envir_002)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('Check has passed.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = NoForbiddenCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_prdc_blk=find_system(system,'LookUnderMasks','none','FollowLinks','on',...
    'BlockType','Product');
all_dvd_blk=find_system(all_prdc_blk,'Regexp','on','Inputs','/');
all_scope_blk=find_system(system,'LookUnderMasks','all','FollowLinks','on',...
    'BlockType','Scope');
all_tofile_blk=find_system(system,'LookUnderMasks','all','FollowLinks','on',...
    'BlockType','ToFile');
all_towrkspc_blk=find_system(system,'LookUnderMasks','all','FollowLinks','on',...
    'BlockType','ToWorkspace');
all_dsply_blk=find_system(system,'LookUnderMasks','all','FollowLinks','on',...
    'BlockType','Display');
all_gain_blk=find_system(system,'LookUnderMasks','none','FollowLinks','on',...
    'BlockType','Gain');
all_ctc_blk=find_system(system,'LookUnderMasks','none','FollowLinks','on',...
    'MaskType','Compare To Constant');
frbddnlist=[all_scope_blk;all_tofile_blk;all_towrkspc_blk;all_dsply_blk;
    all_dvd_blk;all_gain_blk;all_ctc_blk];
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation('This check looks for if any forbidden block is used.');
if ~isempty(frbddnlist)
    ft.setSubResultStatusText('Check has failed. Check the following blocks:');
    ft.setListObj(frbddnlist);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please remove above blocks, for the Divide block,'...
        ' replace it to Security Divide from gdi_simulink_lib.' 10 '(HT_Blk_010)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('Check has passed.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = NoRepeatNamingCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_lines=find_system(system,'FindAll','on','FollowLinks','on','type','line');
rpt_name_idx=[];
for i=1:length(all_lines)
    line_name=get_param(all_lines(i),'Name');
    srcname=get_param(all_lines(i),'SrcPortHandle');
    prop_name=get_param(srcname,'PropagatedSignals');
    if ~isempty(line_name)&&~isempty(prop_name)
        rpt_name_idx=[rpt_name_idx;i];
    end
end
rptnamelist=all_lines(rpt_name_idx);
rpt_line_name=get_param(rptnamelist,'Name');
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for if'...
    ' there is any line with propgation name is named again.']);
if ~isempty(rptnamelist)
    ft = ModelAdvisor.FormatTemplate('TableTemplate');
    setSubResultStatusText(ft, 'Check has failed. Check the following signals:');
    ft.setInformation(['This check looks for if'...
        ' there is any line with propgation name is named again.']);
    ft.setColTitles({'Location','Signal Name'})
    if length(rpt_name_idx)~=1
        for i=1:length(rpt_name_idx)
            ft.addRow({rptnamelist(i),rpt_line_name(i)});
        end
    else
        ft.addRow({rptnamelist,rpt_line_name});
    end
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please delete name for propageted signals.' 10 '(HT_Sig_002)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. There is no repeat naming'...
        'on signal.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = ResetOutputWhenDisabledCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_enbl_blk=find_system(system,'LookUnderMasks','none','FollowLinks','on',...
    'BlockType','EnablePort');
all_enbl_sub=get_param(all_enbl_blk,'Parent');
enbl_sub_out=find_system(all_enbl_sub,'SearchDepth',1,'BlockType','Outport');
enbl_out_state=get_param(enbl_sub_out,'OutputWhenDisabled');
enbl_index=find(strcmp(enbl_out_state,'held'));
all_act_blk=find_system(system,'LookUnderMasks','none','FollowLinks','on',...
    'BlockType','ActionPort');
all_act_sub=get_param(all_act_blk,'Parent');
act_sub_out=find_system(all_act_sub,'SearchDepth',1,'BlockType','Outport');
act_out_state=get_param(act_sub_out,'OutputWhenDisabled');
act_index=find(strcmp(act_out_state,'held'));
problemlist=[enbl_sub_out(enbl_index);act_sub_out(act_index)];
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check searches output port in Enabled/Action Subsystem'...
    '  isn''t set reset output when disabled.']);
if ~isempty(problemlist)
    ft.setSubResultStatusText(['Check has failed. Check the following Outport'...
        ' blocks setting:']);
    ft.setListObj(problemlist);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please set reset output when disabled for above Outport'...
        ' blocks, however, for some unusual cases, it is possible to ignore'...
        ' this check.' 10 '(HT_I/O_003)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. all Outport blocks in'...
        ' Enabled/Action Subsystem are set reset output when disabled.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = StateflowDataDefinitionCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_sf_blk=find_system(system,'FollowLinks','on','Findall','on',...
    'SFBlockType','Chart');
sf_blk_obj=get_param(all_sf_blk,'Object');
datatype_error_list=[];
resolved_error_list=[];
for i=1:length(sf_blk_obj)
    if length(sf_blk_obj)==1
        chart_info=sf_blk_obj.find('-isa','Stateflow.Chart');
    else
        chart_info=sf_blk_obj{i}.find('-isa','Stateflow.Chart');
    end
    data_info=chart_info.find('-isa','Stateflow.Data');
    for j=1:length(data_info)
        data_path=data_info(j).Path;
        data_name=data_info(j).Name;
        flg1=(strcmp(data_info(j).Scope,'Output')||...
            strcmp(data_info(j).Scope,'Local'))&&...
            sum(strcmpi(data_info(j).DataType,{'Inherit: Same as Simulink','double'}))&&...
            ~data_info(j).Props.ResolveToSignalObject;
        vname=regexp(data_name,'V');
        flg2=(~isempty(vname)&&vname(1)==1&&~data_info(j).Props.ResolveToSignalObject&&~strcmp(data_info(j).Scope,'Input'))||...
            (~isempty(vname)&&vname(1)~=1&&data_info(j).Props.ResolveToSignalObject);
        if flg1
            datatype_error_list=[datatype_error_list;cellstr(data_path),...
                cellstr(data_name)];
        end
        if flg2
            resolved_error_list=[resolved_error_list;cellstr(data_path),...
                cellstr(data_name)];
        end
    end
end
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check finds out Stateflow blocks, and checks'...
    ' data properties.']);
if ~isempty(datatype_error_list)||~isempty(resolved_error_list)
    ft.setSubResultStatusText(['Check has failed. Please check the'...
        ' following data properties:']);
    ft = ModelAdvisor.FormatTemplate('TableTemplate');
    ft.setColTitles({'Location','Data Name'})
    if ~isempty(datatype_error_list)
        ft.addRow({'local or output without data type definition',''});
        for i=1:length(datatype_error_list)
            ft.addRow({datatype_error_list(i,1),datatype_error_list(i,2)});
        end
    end
    if ~isempty(resolved_error_list)
        ft.addRow({'Should be checked Resolved to Signal Object or Name',''});
        for i=1:length(resolved_error_list)
            ft.addRow({resolved_error_list(i,1),resolved_error_list(i,2)});
        end
    end
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please follow HAITEC Modeling Guideline to correct'...
        ' data properties in Stateflow.' 10 '(HT_blk_009)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. There is no problem about'...
        'data properties in Stateflow.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = SumCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_sum_blk=find_system(system,'LookUnderMasks','none','FollowLinks','on',...
    'RegExp','on','BlockType','Sum');
sum_SOIOf_off=find_system(all_sum_blk,'SaturateOnIntegerOverflow','off');
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check searches Sum/Add/Subtract block isn''t'...
    ' set ''Saturate on integer overflow'' on.']);
if ~isempty(sum_SOIOf_off)
    ft.setSubResultStatusText(['Check has failed. Check the following Sum'...
        ' blocks didn''t be checked ''Saturate on integer overflow'':']);
    ft.setListObj(sum_SOIOf_off);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please check ''Saturate on integer overflow'''...
        ' in Sum block dialog.' 10 '(HT_blk_007)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('Check has passed.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = PortSignalNameCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
all_in_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','Inport');
all_in_tag=get_param(all_in_blk,'Name');
all_in_handle=get_param(all_in_blk,'PortHandles');
cmp_inname_idx=[];
for i=1:length(all_in_blk)
    in_outport=all_in_handle{i,1}.Outport;
    in_name=get_param(in_outport,'Name');
    in_line=get_param(in_outport,'Line');
    if in_line==-1
        cmp_inname_idx=[cmp_inname_idx;i];
        continue
    end
    in_src=get_param(in_line,'SrcPortHandle');
    in_prop_name=get_param(in_src,'PropagatedSignals');
    if ~strcmp(all_in_tag(i),in_name)&&~strcmp(all_in_tag(i),in_prop_name)
        cmp_inname_idx=[cmp_inname_idx;i];
    end
end
all_out_blk=find_system(system,'LookUnderMasks','none',...
    'FollowLinks','on','BlockType','Outport');
all_out_tag=get_param(all_out_blk,'Name');
all_out_handle=get_param(all_out_blk,'PortHandles');
cmp_outname_idx=[];
for i=1:length(all_out_blk)
    out_inport=all_out_handle{i,1}.Inport;
    out_name=get_param(out_inport,'Name');
    out_line=get_param(out_inport,'Line');
    if out_line==-1
        cmp_outname_idx=[cmp_outname_idx;i];
        continue;
    end
    out_src=get_param(out_line,'SrcPortHandle');
    out_prop_name=get_param(out_src,'PropagatedSignals');
    if ~strcmp(all_out_tag(i),out_name)&&~strcmp(all_out_tag(i),out_prop_name)
        cmp_outname_idx=[cmp_outname_idx;i];
    end
end
problemlist=[all_in_blk(cmp_inname_idx);all_out_blk(cmp_outname_idx)];
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for Inport/Outport blocks connected'...
    ' to wrong signal.']);
if ~isempty(problemlist)
    ft.setSubResultStatusText(['Check has failed. The following '...
        'Inport/Outport blocks should be checked:']);
    ft.setListObj(problemlist);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Check the Inport/Outport name, signal and propogated'...
        ' signals.' 10 '(HT_I/O_002)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText(['Check has passed. All Inport/Outport blocks'...
        ' are correct.']);
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = IfBlockUsageCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
cmd=sprintf('%s([],[],[],''compile'')',system);
evalin('base', cmd);
all_if_blk=find_system(system,'LookUnderMasks','none','FollowLinks','on',...
    'RegExp','on','BlockType','If');
flaga=1;
flagb=1;
blk_wrong_indatatype=[];
blk_wrong_express=[];
for i=1:length(all_if_blk)
    blk_CompiledPortDataTypes=get_param(all_if_blk{i},'CompiledPortDataTypes');
    if_express=get_param(all_if_blk{i},'IfExpression');
    elseif_express=get_param(all_if_blk{i},'ElseIfExpressions');
    blk_InputDataType=blk_CompiledPortDataTypes.Inport;
    if ~strcmp(blk_InputDataType,'boolean')
        blk_wrong_indatatype{flaga}=all_if_blk{i};
        flaga=flaga+1;
    end
    a=cell2mat(regexp(if_express,{'=','<','>'},'once'));
    b=cell2mat(regexp(elseif_express,{'=','<','>'},'once'));
    if ~isempty(a)||~isempty(b)
        blk_wrong_express{flagb}=all_if_blk{i};
        flagb=flagb+1;
    end
end
cmd=sprintf('%s([],[],[],''term'')',system);
evalin('base', cmd);
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for If block and check its usage.' 10 'The ^ symbol means model must be compiled before running this check.']);
if ~isempty(blk_wrong_indatatype)||~isempty(blk_wrong_express)
    ft.setSubResultStatusText(['Check has failed. Check the following If'...
        ' blocks connected wrong data type or'...
        ' with wrong expression:']);
    if ~isempty(blk_wrong_indatatype)
        a = 'wrong inport data type';
    else
        a = [];
    end
    if ~isempty(blk_wrong_express)
        b = 'wrong expression';
    else
        b = [];
    end
    ft.setListObj([a;blk_wrong_indatatype';b;blk_wrong_express']);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please check inport data type and expression'...
        ' for If block.' 10 '(HT_Blk_011)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('Check has passed.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = SwitchCaseImportDataTypeCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
cmd=sprintf('%s([],[],[],''compile'')',system);
evalin('base', cmd);
all_swcs_blk=find_system(system,'LookUnderMasks','none','FollowLinks','on',...
    'RegExp','on','BlockType','SwitchCase');
flag=1;
blk_wrong_indatatype=[];
for i=1:length(all_swcs_blk)
    blk_CompiledPortDataTypes=get_param(all_swcs_blk{i},'CompiledPortDataTypes');
    blk_InputDataType=blk_CompiledPortDataTypes.Inport;
    if ~strcmp(blk_InputDataType,'uint8')
        blk_wrong_indatatype{flag}=all_swcs_blk{i};
        flag=flag+1;
    end
end
cmd=sprintf('%s([],[],[],''term'')',system);
evalin('base', cmd);
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for Switch Case block connected'...
    ' to signal with wrong data type.' 10 'The ^ symbol means model must be compiled before running this check.']);
if ~isempty(blk_wrong_indatatype)
    ft.setSubResultStatusText(['Check has failed. Check the following Switch'...
        ' Case blocks input port connected wrong data type:']);
    ft.setListObj(blk_wrong_indatatype);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please check input port data type of Switch Case block.' 10 '(HT_Blk_012)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('Check has passed.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;

function result = EnblSubsEnblPortDataTypeCheck(system)
mdladvObj = Simulink.ModelAdvisor.getModelAdvisor(system);
result = {};
cmd=sprintf('%s([],[],[],''compile'')',system);
evalin('base', cmd);
all_enbl_blk=find_system(system,'LookUnderMasks','none','FollowLinks','on',...
    'RegExp','on','BlockType','EnablePort');
enbl_blk_sub=get_param(all_enbl_blk,'Parent');
flag=1;
blk_wrong_indatatype=[];
for i=1:length(enbl_blk_sub)
    blk_CompiledPortDataTypes=get_param(enbl_blk_sub{i},'CompiledPortDataTypes');
    blk_EnblDataType=blk_CompiledPortDataTypes.Enable;
    if ~strcmp(blk_EnblDataType,'boolean')
        blk_wrong_indatatype{flag}=enbl_blk_sub{i};
        flag=flag+1;
    end
end
cmd=sprintf('%s([],[],[],''term'')',system);
evalin('base', cmd);
ft = ModelAdvisor.FormatTemplate('ListTemplate');
ft.setInformation(['This check looks for Enabled Subsystem with wrong'...
    ' enable port data type.' 10 'The ^ symbol means model must be compiled before running this check.']);
if ~isempty(blk_wrong_indatatype)
    ft.setSubResultStatusText(['Check has failed. Check the following Enabled'...
        ' Subsystem enable port connected to wrong data type:']);
    ft.setListObj(blk_wrong_indatatype);
    ft.setSubResultStatus('warn');
    ft.setRecAction(['Please check enable port data type of Enabled Subsystem.' 10 '(HT_Blk_013)']);
    mdladvObj.setCheckResultStatus(false);
else
    ft.setSubResultStatusText('Check has passed.');
    ft.setSubResultStatus('pass');
    mdladvObj.setCheckResultStatus(true);
end
ft.setSubBar(0);
result{end+1} = ft;