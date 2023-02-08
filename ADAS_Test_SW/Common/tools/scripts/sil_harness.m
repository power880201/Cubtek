function sil_harness(sys)
% SIL_HARNESS
% 
% to generate some part of unit test harness which can relive labour.
%
% Syntax:
% 		sil_harness  [gcb]
% 
% Bug report:
%		Wenchuan.Xia@ricardo.com

% $Id: sil_harness.m 2 2019-09-19 09:28:50Z JuneXmas $

if nargin==0
	model = gcb;
else
	model = sys;
	load_system(sys);
end

load_system('simulink');
load_system('siltestlib');

% open a new model for write
new = ['untitled_' datestr(now, 30)];
new_system(new); 
open_system(new); 
set_param(new, 'SolverName', 'FixedStepDiscrete');
set_param(new, 'LibraryLinkDisplay', 'all');
set_param(new, 'FixedStep', 'C_TASK_5MS_S');
set_param(new, 'InheritedTsInSrcMsg', 'none');


% model position
pos = get_param(model, 'Position');
Xm = pos(1); Ym = pos(2);
Wm = pos(3)-Xm; 
Hm = pos(4)-Ym;

% control drawing
X0 = 10; 
Y0 = 100;

w = 240;	v = 100;	r = 40;
h = 26;					d = 4;	D = 100;


%% INPUT
X = X0; 
Y = Y0; 

inpblk = find_system(model, 'SearchDepth', 1, 'BlockType', 'Inport');

% draw loop { bus assignment blocks, test input blocks }
for i=1:length(inpblk)
	blkid = get_param(inpblk{i}, 'object');
	next = get(blkid, 'PortConnectivity');
	selid = next.DstBlock;
	
	if strcmp('BusSelector', get(selid, 'BlockType'))
		expr = '\<[a-zA-Z_0-9]+\>';
		signals_str = get(selid, 'OutputSignals');
		signals = regexp(signals_str, expr, 'match');

		Wb = w;
		Hb = 40 + (h+d)*(1+length(signals));
		Xb = X+w+r+v+r;
		Yb = Y-h;
		assign = add_block('simulink/Signal Routing/Bus Assignment', ...
							[new '/BUS: ' get(blkid, 'Name')], ...
							'ShowName', 'off', ...
							'AssignedSignals', signals_str, 'Position', [Xb, Yb, Xb+Wb, Yb+Hb]); %#ok<NASGU>

		for j=1:length(signals)
			disp(signals{j});
			test_inp = add_test_input(new, signals{j}, [X Y X+w Y+h]);
			test_cnv = add_test_conv(new, signals{j}, [X+w+r Y X+w+r+v Y+h]);
			connect_block(new, test_inp, test_cnv);
			Y = Y+h+d;
		end
		
		Y = Y+D;

	else
		disp(get(blkid, 'Name'))

        test_inp = add_test_input(new, get_param(inpblk{i}, 'Name'), [X Y X+w Y+h] );
		test_cnv = add_test_conv(new, get_param(inpblk{i}, 'Name'), [X+w+r Y X+w+r+v Y+h] );
		connect_block(new, test_inp, test_cnv);
		Y = Y+h+d;
	end


end

%% MODEL
X = X0+w+r+v+r+w+r;
Y = Y0;
new_name = [new '/' get_param(model, 'Name')];
add_block(model, new_name, 'Position', [X, Y, X+Wm, Y+Hm]);


%% OUTPUT
X = X0+w+r+v+r+w+r+Wm+r;
Y = Y0;

outpblk = find_system(model, 'SearchDepth', 1, 'BlockType', 'Outport');

% draw loop { bus assignment blocks, test input blocks }
for i=1:length(outpblk)
	blkid = get_param(outpblk{i}, 'object');
	next = get(blkid, 'PortConnectivity');
	selid = next.SrcBlock;
	if strcmp('BusCreator', get(selid, 'BlockType'))
		signals = get(selid, 'InputSignalNames');
		for j = 1:length(signals)
			signal_str = regexprep(signals{j}, '[<>]', '');
			disp(signal_str)
			
			test_cnv = add_double_conv(new, signal_str, [X Y X+v Y+h] );
			test_out = add_test_output(new, signal_str, [X+v+r Y X+v+r+w Y+h] );
			connect_block(new, test_cnv, test_out);
			Y = Y+h+d;
			
		end
	else
		disp(get(blkid, 'Name'))
        
		test_cnv = add_double_conv(new, get_param(outpblk{i}, 'Name'), [X Y X+v Y+h] );
		test_out = add_test_output(new, get_param(outpblk{i}, 'Name'), [X+v+r Y X+v+r+w Y+h] );
		connect_block(new, test_cnv, test_out);
		Y = Y+h+d;

	end

end

%%
function dts = get_dts(var_name)	% get data type string
if isempty(var_name)
	dts = 'double';
	return;
end

langis = fliplr(var_name);
if strmatch('glf', langis)
	dts = 'boolean';
elseif strmatch('mune', langis)
	dts = 'uint8';
elseif strmatch('fb', langis)
	dts = 'uint16';
else
	dts = 'single';
end



function block = add_test_input(model, name, pos)
src = 'siltestlib/Test Input';
dst = [model '/IN: ' name];
block = add_block(src, dst, 'varname', name, 'Position', pos, 'ShowName', 'off'); 

function block = add_test_conv(model, name, pos)
src = 'simulink/Signal Attributes/Data Type Conversion';
dst = [model '/CNV: ' name];
odts = get_dts(name);
block = add_block(src, dst, 'OutDataTypeStr', odts, 'Position', pos, 'ShowName', 'off'); 

function block = add_double_conv(model, name, pos)
src = 'simulink/Signal Attributes/Data Type Conversion';
dst = [model '/CNV: ' name];
block = add_block(src, dst, 'OutDataTypeStr', 'double', 'Position', pos, 'ShowName', 'off'); 

function block = add_test_output(model, name, pos)
src = 'siltestlib/Test Output';
dst = [model '/OUT: ' name];
block = add_block(src, dst, 'varname', name, 'Position', pos, 'ShowName', 'off'); 

	
function connect_block(model, b1, b2)

ph1 = get(b1, 'PortHandles');
ph2 = get(b2, 'PortHandles');

n1 = get(b1, 'Name');
n2 = get(b2, 'Name');

out = ph1.Outport;
in = ph2.Inport;

for i=1:min(length(in), length(out))
	add_line(model, [n1 '/' num2str(i)], [n2 '/' num2str(i)]);
end
		
	
%%
% 
% get(paramValue)
% Warning: AnalyticLinearization option is not enabled 
%                                               Path: 'tqs_ut'
%                                               Name: 'tqs_ut'
%                                                Tag: ''
%                                        Description: ''
%                                               Type: 'block_diagram'
%                                             Parent: ''
%                                             Handle: 3.0015
%                                    HiliteAncestors: 'none'
%                                    RequirementInfo: ''
%                       DefaultGraphPaperOrientation: 'landscape'
%                      DefaultGraphPaperPositionMode: 'auto'
%                              DefaultGraphPaperType: 'A4'
%                             DefaultGraphPaperUnits: 'centimeters'
%                      DefaultGraphTiledPaperMargins: [1.2700 1.2700 1.2700 1.2700]
%                         DefaultGraphTiledPageScale: 1
%                     DefaultGraphShowPageBoundaries: 'off'
%                 DefaultGraphModelBrowserVisibility: 'off'
%                      DefaultGraphModelBrowserWidth: 200
%                            DefaultGraphScreenColor: 'white'
%                            DefaultBlockOrientation: 'right'
%                        DefaultBlockForegroundColor: 'black'
%                        DefaultBlockBackgroundColor: 'white'
%                             DefaultBlockDropShadow: 'off'
%                          DefaultBlockNamePlacement: 'normal'
%                               DefaultBlockFontName: 'Helvetica'
%                               DefaultBlockFontSize: 10
%                             DefaultBlockFontWeight: 'normal'
%                              DefaultBlockFontAngle: 'normal'
%                               DefaultBlockShowName: 'on'
%                          DefaultBlockBlockRotation: 0
%                            DefaultBlockBlockMirror: 'off'
%               DefaultAnnotationHorizontalAlignment: 'center'
%                 DefaultAnnotationVerticalAlignment: 'middle'
%                   DefaultAnnotationForegroundColor: 'black'
%                   DefaultAnnotationBackgroundColor: 'white'
%                        DefaultAnnotationDropShadow: 'off'
%                          DefaultAnnotationFontName: 'Helvetica'
%                          DefaultAnnotationFontSize: 10
%                        DefaultAnnotationFontWeight: 'normal'
%                         DefaultAnnotationFontAngle: 'normal'
%     DefaultAnnotationUseDisplayTextAsClickCallback: 'off'
%                                DefaultLineFontName: 'Helvetica'
%                                DefaultLineFontSize: 9
%                              DefaultLineFontWeight: 'normal'
%                               DefaultLineFontAngle: 'normal'
%                                           Location: [24 94 1163 485]
%                                               Open: 'on'
%                                    ScrollbarOffset: [0 0]
%                             ModelBrowserVisibility: 'off'
%                                  ModelBrowserWidth: 200
%                                        ScreenColor: 'white'
%                                       CurrentBlock: 'Wrap'
%                                  CurrentOutputPort: []
%                                             Blocks: {32x1 cell}
%                                              Lines: [36x1 struct]
%                                     DeleteChildFcn: ''
%                                          PaperSize: [29.7000 21.0000]
%                                  TiledPaperMargins: [1.2700 1.2700 1.2700 1.2700]
%                                     TiledPageScale: 1
%                                 ShowPageBoundaries: 'off'
%                                         ZoomFactor: '100'
%                                         ReportName: 'simulink-default.rpt'
%                             SavedCharacterEncoding: 'windows-1252'
%                                            Version: 7.4000
%                                      MdlSubVersion: 0
%                                           Metadata: []
%                                         PreLoadFcn: ''
%                                        PostLoadFcn: ''
%                                   BlockDiagramType: 'model'
%                                        LibraryType: 'None'
%                             SaveDefaultBlockParams: 'on'
%                                              Dirty: 'off'
%                                               Lock: 'off'
%                                          FixPtInfo: []
%                                   DataTypeOverride: 'UseLocalSettings'
%                              MinMaxOverflowLogging: 'UseLocalSettings'
%                          MinMaxOverflowArchiveMode: 'Overwrite'
%                          MinMaxOverflowArchiveData: []
%                                    ForwardingTable: []
%                              ForwardingTableString: ''
%                               MaxMDLFileLineLength: 120
%                                         PreSaveFcn: ''
%                                        PostSaveFcn: ''
%                                           CloseFcn: ''
%                                            InitFcn: ''
%                                           StartFcn: ''
%                                            StopFcn: ''
%                                      ModelDataFile: ''
%                                           FileName: [1x72 char]
%                                              Shown: 'on'
%                                            Created: 'Tue Sep 28 15:14:07 2010'
%                                            Creator: 'JG18'
%                                      UpdateHistory: 'UpdateHistoryNever'
%                                   ModifiedByFormat: '%<Auto>'
%                                         ModifiedBy: 'WX'
%                                     LastModifiedBy: 'wx'
%                                 ModifiedDateFormat: '%<Auto>'
%                                       ModifiedDate: 'Wed Mar 14 11:44:21 2012'
%                                   LastModifiedDate: 'Sun Mar 04 13:09:14 2012'
%                               RTWModifiedTimeStamp: 252767351
%                                    ModifiedComment: ''
%                                    ModifiedHistory: ''
%                                 ModelVersionFormat: '1.%<AutoIncrement:95>'
%                                       ModelVersion: '1.95'
%                               ConfigurationManager: 'None'
%                                   SampleTimeColors: 'off'
%                              SampleTimeAnnotations: 'off'
%                                 LibraryLinkDisplay: 'all'
%               FollowLinksWhenOpeningFromGotoBlocks: 'off'
%                                          WideLines: 'off'
%                                 ShowLineDimensions: 'off'
%                          ShowLineDimensionsOnError: 'on'
%                                  ShowPortDataTypes: 'off'
%                           ShowPortDataTypesOnError: 'on'
%                                   ShowLoopsOnError: 'on'
%                           IgnoreBidirectionalLines: 'off'
%                                   ShowStorageClass: 'off'
%                                 ShowTestPointIcons: 'on'
%                          ShowSignalResolutionIcons: 'on'
%                                    ShowViewerIcons: 'on'
%                                        SortedOrder: 'off'
%                               ExecutionContextIcon: 'off'
%                       ShowLinearizationAnnotations: 'on'
%                                           ShowGrid: 'off'
%                                        GridSpacing: 20
%                                   BlockNameDataTip: 'off'
%                             BlockParametersDataTip: 'off'
%                      BlockDescriptionStringDataTip: 'off'
%                                            ToolBar: 'on'
%                                          StatusBar: 'on'
%                            BrowserShowLibraryLinks: 'on'
%                              BrowserLookUnderMasks: 'off'
%                                     SimulationMode: 'normal'
%                                   LinearizationMsg: 'none'
%                           ForceConsistencyChecking: 'off'
%                                 ForceModelCoverage: 'off'
%                           ForceArrayBoundsChecking: 'off'
%                                            Profile: 'off'
%                                       RTWBuildArgs: ''
%                                     RTWGenSettings: []
%                               ParamWorkspaceSource: 'MATLABWorkspace'
%                              AccelSystemTargetFile: 'accel.tlc'
%                              AccelTemplateMakefile: 'accel_default_tmf'
%                                   AccelMakeCommand: 'make_rtw'
%                                  AccelVerboseBuild: 'on'
%                                   TryForcingSFcnDF: 'off'
%                                          ReqHilite: 'off'
%                                     RecordCoverage: 'off'
%                                            CovPath: '/'
%                                        CovSaveName: 'covdata'
%                                        CovCompData: ''
%                                  CovMetricSettings: 'dw'
%                                     CovHTMLOptions: ''
%                                CovNameIncrementing: 'off'
%                                   CovHtmlReporting: 'on'
%                          CovForceBlockReductionOff: 'on'
%                    covSaveCumulativeToWorkspaceVar: 'on'
%                        CovSaveSingleToWorkspaceVar: 'on'
%                               CovCumulativeVarName: 'covCumulativeData'
%                                CovCumulativeReport: 'off'
%                                   CovReportOnPause: 'on'
%                                  CovModelRefEnable: 'Off'
%                                CovModelRefExcluded: ''
%                               CovExternalEMLEnable: 'off'
%                                   ExtModeBatchMode: 'off'
%                              ExtModeEnableFloating: 'on'
%                      ExtModeSkipChecksumValidation: 'off'
%     ExtModeOpenProtocolUploadingEqualLengthVectors: 'off'
%                              ExtModeChangesPending: 'off'
%                                    ExtModeTrigType: 'manual'
%                                    ExtModeTrigMode: 'normal'
%                                    ExtModeTrigPort: '1'
%                                 ExtModeTrigElement: 'any'
%                                ExtModeTrigDuration: 1000
%                        ExtModeTrigDurationFloating: 'auto'
%                                 ExtModeTrigHoldOff: 0
%                                   ExtModeTrigDelay: 0
%                               ExtModeTrigDirection: 'rising'
%                                   ExtModeTrigLevel: 0
%                                ExtModeUploadStatus: 'inactive'
%                               ExtModeParamVectName: ''
%                                 ExtModeArchiveMode: 'off'
%                             ExtModeArchiveFileName: ''
%                              ExtModeArchiveDirName: ''
%                             ExtModeLastArchiveFile: ''
%                              ExtModeAutoIncOneShot: 'off'
%                               ExtModeIncDirWhenArm: 'off'
%                              ExtModeAddSuffixToVar: 'off'
%                            ExtModeWriteAllDataToWs: 'off'
%                              ExtModeArmWhenConnect: 'on'
%                     ExtModeSkipDownloadWhenConnect: 'off'
%                                      ExtModeLogAll: 'on'
%                             ExtModeLogCtrlPanelDlg: -1
%                                   ExtModeConnected: 'off'
%                         ExtModeParamChangesPending: 'off'
%                       ExtModeNumTargetStepsPending: 0
%                       ExtModeAutoUpdateStatusClock: 'on'
%                      HiliteFcnCallInpInsideContext: 'off'
%                                        TunableVars: ''
%                            TunableVarsStorageClass: ''
%                           TunableVarsTypeQualifier: ''
%                                        BufferReuse: 'on'
%                            RTWSystemCodeInlineAuto: 'off'
%                              AnalyticLinearization: 'off'
%                                   UseAnalysisPorts: 'off'
%                           SignalBasedLinearization: 'off'
%           CompileForInfoOnSignalBasedLinearization: 'off'
%                                      InjectionData: []
%                         DisplayCallgraphDominators: 'off'
%                                     DisplayCECTree: 'off'
%                                 DisplaySortedLists: 'off'
%                             DisplayErrorDirections: 'off'
%                            DisplayInvisibleSources: 'off'
%                                     DisplayBlockIO: 'off'
%                     DisplayVectorAndFunctionCounts: 'off'
%                             DisplayBdSearchResults: 'off'
%                      DisplayVectPropagationResults: 'off'
%                                DisplayCompileStats: 'off'
%                                   SimulationStatus: 'stopped'
%                                     SimulationTime: 0
%                                           Jacobian: []
%                                         SolverName: 'FixedStepDiscrete'
%                                         SolverMode: 'Auto'
%                                          StartTime: '0.0'
%                                           StopTime: '10'
%                                           MaxOrder: 5
%                                  MaxConsecutiveZCs: '1000'
%                                        ZcThreshold: 'auto'
%                           ConsecutiveZCsStepRelTol: '10*128*eps'
%                                 ExtrapolationOrder: 4
%                             NumberNewtonIterations: 1
%                                            MaxStep: 'auto'
%                                            MinStep: 'auto'
%                              MaxConsecutiveMinStep: '1'
%                                     MaxNumMinSteps: '-1'
%                                        InitialStep: 'auto'
%                                          FixedStep: 'C_TASK_10MS_S'
%                                             RelTol: '1e-3'
%                                             AbsTol: 'auto'
%                                       OutputOption: 'RefineOutputTimes'
%                                        OutputTimes: '[]'
%                                             Refine: '1'
%                                  LoadExternalInput: 'off'
%                                      ExternalInput: '[t, u]'
%                                   LoadInitialState: 'off'
%                                       InitialState: 'xInitial'
%                                           SaveTime: 'off'
%                                       TimeSaveName: 'tout'
%                                          SaveState: 'off'
%                                      StateSaveName: 'xout'
%                                         SaveOutput: 'off'
%                                     OutputSaveName: 'yout'
%                                     SaveFinalState: 'off'
%                                     FinalStateName: 'xFinal'
%                                         SaveFormat: 'Array'
%                                         Decimation: '1'
%                                    LimitDataPoints: 'off'
%                                      MaxDataPoints: '1000'
%                                  SignalLoggingName: 'logsout'
%                                ConsistencyChecking: 'warning'
%                                ArrayBoundsChecking: 'none'
%                                   AlgebraicLoopMsg: 'error'
%                         ArtificialAlgebraicLoopMsg: 'warning'
%                          BlockPriorityViolationMsg: 'warning'
%                                       StrictBusMsg: 'Warning'
%                                     MinStepSizeMsg: 'warning'
%                               MaxConsecutiveZCsMsg: 'error'
%                                InheritedTsInSrcMsg: 'none'
%                       DiscreteInheritContinuousMsg: 'warning'
%                              MultiTaskRateTransMsg: 'error'
%                             SingleTaskRateTransMsg: 'none'
%                          CheckForMatrixSingularity: 'warning'
%                                 IntegerOverflowMsg: 'warning'
%                                Int32ToFloatConvMsg: 'warning'
%                               ParameterDowncastMsg: 'error'
%                               ParameterOverflowMsg: 'error'
%                              ParameterUnderflowMsg: 'warning'
%                          ParameterPrecisionLossMsg: 'warning'
%                          UnderSpecifiedDataTypeMsg: 'none'
%                         UnnecessaryDatatypeConvMsg: 'warning'
%                          VectorMatrixConversionMsg: 'warning'
%                              InvalidFcnCallConnMsg: 'error'
%                             SignalLabelMismatchMsg: 'none'
%                                UnconnectedInputMsg: 'warning'
%                               UnconnectedOutputMsg: 'warning'
%                                 UnconnectedLineMsg: 'warning'
%                          SfunCompatibilityCheckMsg: 'none'
%                                RTWInlineParameters: 'off'
%                                  BlockReductionOpt: 'on'
%                                    BooleanDataType: 'on'
%                         ConditionallyExecuteInputs: 'on'
%                            CheckSSInitialOutputMsg: 'off'
%             CheckExecutionContextPreStartOutputMsg: 'off'
%              CheckExecutionContextRuntimeOutputMsg: 'off'
%                            SignalResolutionControl: 'UseLocalSettings'
%                             OptimizeBlockIOStorage: 'on'
%                                   ZeroCrossControl: 'UseLocalSettings'
%                                 ZeroCrossAlgorithm: 'Nonadaptive'
%                               ShapePreserveControl: 'DisableAll'
%                                   AssertionControl: 'UseLocalSettings'
%                                  ProdHWWordLengths: '8,16,32,32'
%                                RTWSystemTargetFile: 'grt.tlc'
%                                RTWTemplateMakefile: 'grt_default_tmf'
%                                     RTWMakeCommand: 'make_rtw'
%                                RTWGenerateCodeOnly: 'off'
%                                            ExtMode: 'off'
%                                     ExtModeMexFile: 'ext_comm'
%                                     ExtModeMexArgs: ''
%                                  ExtModeIntrfLevel: 'Level1'
%                                   RTWRetainRTWFile: 'off'
%                                    RTWBuildDirRoot: ''
%                                       TargetFcnLib: 'ansi_tfl_table_tmw.mat'
%                                        TLCProfiler: 'off'
%                                           TLCDebug: 'off'
%                                        TLCCoverage: 'off'
%                                       TLCAssertion: 'off'
%                                         RTWOptions: [1x1918 char]
%              UnderspecifiedInitializationDetection: 'Classic'
%                  MergeDetectMultiDrivingBlocksExec: 'none'
%                                ModelReferenceIOMsg: 'none'
%                        UpdateModelReferenceTargets: 'IfOutOfDateOrStructuralChange'
%                     ModelReferenceSimTargetVerbose: 'off'
%               ModelReferenceVersionMismatchMessage: 'none'
%                    ModelReferenceIOMismatchMessage: 'none'
%                    ModelReferenceCSMismatchMessage: 'none'
%                   ModelReferenceDataLoggingMessage: 'warning'
%                    ModelReferenceSymbolNameMessage: 'warning'
%                     ShowModelReferenceBlockVersion: 'off'
%                          ShowModelReferenceBlockIO: 'off'
%                   CheckModelReferenceTargetMessage: 'error'
%                  ModelReferenceNumInstancesAllowed: 'Multi'
%                           ModelReferenceTargetType: 'NONE'
%                        ModelReferenceSimTargetType: 'None'
%                  ModelrefPassRootInputsByReference: 'on'
%                      ModelrefMinAlgLoopOccurrences: 'off'
%                             ParameterArgumentNames: ''
%                                  ModelDependencies: ''
%                                 UnknownTsInhSupMsg: 'warning'
%                                     ModelWorkspace: [1x1 Simulink.ModelWorkspace]
