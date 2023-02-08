function block_annotation(sys)

open_system(sys);
set_param(sys, 'Lock', 'off');

h = find_system(sys, 'regexp','on', 'type', 'Block');
bt = get_param(h, 'BlockType');

set_attrib(h, bt, 'UnitDelay', '<initial=%<x0>>\n<tsample=%<sampleTime>>');
set_attrib(h, bt, 'DiscreteIntegrator', '<initial=%<initialcondition>>\n<tsample=%<sampleTime>>\n<limits=%<UpperSaturationLimit>/%<LowerSaturationLimit>(%<LimitOutput>)>');

set_attrib(h, bt, 'Lookup', '<input=%<InputValues>>\n<output=%<Table>>');
set_attrib(h, bt, 'Lookup2D', '<row=%<RowIndex>>\n<column=%<ColumnIndex>>\n<table=%<Table>>');
set_attrib(h, bt, 'Saturate', '<limits=%<LowerLimit>\%<UpperLimit>>');

set_attrib(h, bt, 'Switch', '<criteria=%<criteria>>\n<threshold=%<threshold>>');
set_attrib(h, bt, 'Merge', '<initial=%<initialoutput>');

set_attrib(h, bt, 'Constant', '');
set_attrib(h, bt, 'Product', '');
set_attrib(h, bt, 'Sum', '');
set_attrib(h, bt, 'Add', '');
set_attrib(h, bt, 'RelationalOperator', '');
set_attrib(h, bt, 'Logic', '');
set_attrib(h, bt, 'Terminator', '');
set_attrib(h, bt, 'Ground', '');
set_attrib(h, bt, 'Gain', '');
set_attrib(h, bt, 'DataTypeConversion', '');
set_attrib(h, bt, 'Abs', '');
set_attrib(h, bt, 'MinMax', '');

% set_param(sys, 'Lock', 'on');

function set_attrib(h, bt, bt_str, note)
idx = strmatch(bt_str, bt, 'exact');
fprintf('Processing %s blocks.', bt_str);

for i = 1:length(idx)
	hh = h{idx(i)};
	if ~isempty(note)
		set_param(hh, 'AttributesFormatString', note);
	end
	set_param(hh, 'ShowName', 'off');
	fprintf('.');
end

fprintf('\n');

%% Reference from RT/4222
%% MODELLING GUIDELINES FOR SIMULINK AND STATEFLOW
%% rp_0008: Block attribute strings

% Unit Delay
% <initial=%<x0>>\n<tsample=%<sampleTime>>
% Discrete-Time Integrator
% <initial=%<initialcondition>>\n<tsample=%<sampleTime>>\n
% <limits=%<UpperSaturationLimit>/%<LowerSaturationLimit>(%<LimitOutput>)>
% Discrete Zero-Pole
% <tsample=%<sampleTime>>\n<gain=%<gain>>
% Discrete Transfer Fcn
% <tsample=%<sampleTime>>
% Look-Up Table
% <input=%<inputvalues>>\n<output=%<outputvalues>>
% Look-Up Table (2-D)
% <row=%<x>>\n<column=%<y>>\n<table=%<t>>
% Saturation
% <limits=%<upperlimit>\%<lowerlimit>>
% Quantizer
% <interval=%<quantizationinterval>>
% Backlash
% <initial=%<initialoutput>, width=%<backlashwidth>>
% Dead Zone
% <zone=%<lowervalue>/%<uppervalue>>
% Relay
% <low=(%<offswitchvalue>,%<offoutputvalue>)>\n
% <high=(%<onswitchvalue>,%<onoutputvalue>)>
% Switch
% <threshold=%<threshold>>
% Merge
% <initial=%<initialoutput>
% 
