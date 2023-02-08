% =========== $Update Time : 20-Mar-2017 16:36:52 $  =========
function cellInfo = BDIP_outputs(varargin)
% BDIP_outputs returns a cell array containing bus object information

% Optional Input: 'false' will suppress a call to Simulink.Bus.cellToObject
%                 when the m-file is executed.
% The order of bus element attributes is as follows:
%   ElementName, Dimensions, DataType, SampleTime, Complexity, SamplingMode

suppressObject = false;
if nargin == 1 && islogical(varargin{1}) && varargin{1} == false
    suppressObject = true;
elseif nargin > 1
    error('Invalid input argument(s) encountered');
end

cellInfo = { ... 
  { ... 
    'BDIP_outputs', ... 
    '', ... 
    sprintf(''), { ...
      {'VDIP_LeftLaneLampMode_enum', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VDIP_RightLaneLampMode_enum', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VDIP_LFCHMIStatus_enum', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VDIP_LKAHMIStatus_enum', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VDIP_LFCWarningReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VDIP_ADASFunOnSoundReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VDIP_ADASFunOffSoundReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VDIP_NumberOfTargets_num', 	1, 'uint8', -1, 'real', 'Sample'}; ...
    } ... 
  } ...
}'; 

if ~suppressObject
    % Create bus objects in the MATLAB base workspace 
    Simulink.Bus.cellToObject(cellInfo) 
end
end