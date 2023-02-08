% =========== $Update Time : 27-Oct-2016 14:14:22 $  =========
function cellInfo = BAEB_outputs(varargin)
% BAEB_outputs returns a cell array containing bus object information

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
    'BAEB_outputs', ... 
    '', ... 
    sprintf(''), { ...
      {'VAEB_AEBSystemState_enum', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBStateHMI_enum', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBDecelReq_mps2', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBBrakePreFillReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_TorqueReleaseReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBWarningReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_WarningLightsReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBActing_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBDecelReqAppl_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBReqAppl_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBHoldReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_AEBBrakePreFillReqAppl_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VAEB_TorqueRelReqAppl_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
    } ... 
  } ...
}'; 

if ~suppressObject
    % Create bus objects in the MATLAB base workspace 
    Simulink.Bus.cellToObject(cellInfo) 
end
end
