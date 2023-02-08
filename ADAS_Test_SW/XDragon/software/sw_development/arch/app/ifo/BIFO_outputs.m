% =========== $Update Time : 26-Jun-2017 14:42:48 $  =========
function cellInfo = BIFO_outputs(varargin)
% BIFO_outputs returns a cell array containing bus object information

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
    'BIFO_outputs', ... 
    '', ... 
    sprintf(''), { ...
      {'VIFO_DriverSafetyStatusOk_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_VehicleStatusOk_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverOverrideReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_AggressiveDriverDetec_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_ActiveDriverDetec_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_ParkingSituation_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_BrakePedalPressed_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCTurnOnReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCTurnOffReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCCancelReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverOvertakeReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_FCWVehClearance_m', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_FCWTargetVehicleTtcX_ms', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_FCWTargetVehRelSpeedX_mps', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_AEBVehClearance_m', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_AEBTargetVehicleTtcX_ms', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCTargetVehicleTtcX_ms', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_AEBTargetVehRelSpeedX_mps', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_FCWTargetVehAssigned_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_AEBTargetVehAssigned_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCTargetVehAssigned_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_FCWMCVehId_num', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VIFO_AEBMCVehId_num', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCMCVehId_num', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCTargetVehRelSpeedX_mps', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCTGap_s', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCVehClearance_m', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_AEBMCLongAcc_mps2', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_FCWMCLongAcc_mps2', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCMCLongAcc_mps2', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCSetSpdDec_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCResSpdInc_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_ACCDist_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_AEBTGap_s', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_FCWTGap_s', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_VRUPedClearance_m', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_VRUTargetPedTtcX_ms', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_VRUTargetPedAssigned_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_VRUMCPedId_num', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VIFO_VRUTargetPedRelSpeedX_mps', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverTurnSignalOn_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_LaneNotAvail_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_Curvature4Act_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_LaneWidth4Act_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_Heading4Act_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_Curvature4Disable_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_TLCLTrigger_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_TLCRTrigger_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_LeftLaneCrossing_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_RightLaneCrossing_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_Curvature4DisableWarning_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_LFCSpdInRange_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_LKASpdInRange_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_InForwardGear_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_SelInForwardGear_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverStrSoft_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverStrSoftConfi_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverStrStrong_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverStrStrongConfi_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverStrFight_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverStrFightConfi_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverTurningSignal_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverShifting_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverTurningSignalSwL_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverTurningSignalSwR_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverHOD_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DriverHOD4Disabled_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_LatVehicleStatusOk_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_ResidualLaneFinish_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_DegradedFinish_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VIFO_EPSStateChgAllow_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
    } ... 
  } ...
}'; 

if ~suppressObject
    % Create bus objects in the MATLAB base workspace 
    Simulink.Bus.cellToObject(cellInfo) 
end
end