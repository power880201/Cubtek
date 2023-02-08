function a2l_par( VariableName, Units, Min, Max, DataType, Description )
% A2L_PAR
%	To create ASAP2.Parameter variables.
%	$Id: a2l_par.m 2 2019-09-19 09:28:50Z JuneXmas $

created = 0;

try                                     %Error handling without RTW
    val = Simulink.Parameter;              
	created = 1;
catch                                   %#ok<CTCH>
    v = num2str(Min);
    s = [DataType, '([', v, '])'];
    x = eval(s);
    assignin('base', VariableName, x);
end

if created
	val.DataType = DataType;
	val.Min = double(Min);
	val.Max = double(Max);
	val.DocUnits = Units;
	val.Description = Description;
	val.RTWInfo.StorageClass = 'exportedGlobal';
	% val.Value = DefValue;

	assignin('base', VariableName, val);
end

% ASAP2.Parameter (handle)
%           Value: []
%         RTWInfo: [1x1 Simulink.ParamRTWInfo]
%     Description: ''
%        DataType: 'auto'
%             Min: -Inf
%             Max: Inf
%        DocUnits: ''
%      Complexity: 'real'
%      Dimensions: [0 0]

end

