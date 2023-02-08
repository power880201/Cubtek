function a2l_mon( VariableName, Units, Min, Max, DataType, Description, Size )
% A2L_MON
%	To create ASAP2.Signal variables.
%	$Id: a2l_mon.m 2 2019-09-19 09:28:50Z JuneXmas $

created = 0;
try %#ok<TRYNC>
    val = Simulink.Signal;
	created = 1;
end

if nargin == 6
	if created
	val.Min = double(Min);
	val.Max = double(Max);
	val.DataType = DataType;
	val.DocUnits = Units;
	val.Dimensions = 1;
	val.Description = Description;
	val.RTWInfo.StorageClass = 'exportedGlobal';
    val.Complexity = 'real';
    val.SamplingMode = 'Sample based';
	assignin('base', VariableName, val);
	end
elseif nargin == 7
	if created
	val.Min = double(Min);
	val.Max = double(Max);
	val.DataType = DataType;
	val.DocUnits = Units;
	val.Dimensions = Size;
	val.Description = Description;
	val.RTWInfo.StorageClass = 'exportedGlobal';
    val.Complexity = 'real';
    val.SamplingMode = 'Sample based';
	assignin('base', VariableName, val);
	end
end

% ASAP2.Signal (handle)
%            RTWInfo: [1x1 Simulink.SignalRTWInfo]
%        Description: ''
%           DataType: 'auto'
%                Min: -Inf
%                Max: Inf
%           DocUnits: ''
%         Dimensions: -1
%     DimensionsMode: 'auto'
%         Complexity: 'auto'
%         SampleTime: -1
%       SamplingMode: 'auto'
%       InitialValue: ''


end

