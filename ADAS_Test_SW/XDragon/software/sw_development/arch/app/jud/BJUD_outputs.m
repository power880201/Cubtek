% =========== $Update Time : 26-Jun-2017 14:16:30 $  =========
function cellInfo = BJUD_outputs(varargin)
% BJUD_outputs returns a cell array containing bus object information

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
    'BJUD_outputs', ... 
    '', ... 
    sprintf(''), { ...
      {'VJUD_FCWEnableReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_FCWOperational_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_FCWSpeedInRange_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_FCWActionReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_FCWReturnOperational_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_FCWDeactivationReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_FCWDBSAllowed_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_AEBEnableReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_AEBOperational_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_AEBSpeedInRange_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_AEBActionReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_AEBReturnOperational_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_AEBAutoBraking_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_AEBDeactivationReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCEnableReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCActiveReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCDeactivationReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCStandstillReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCRefollowReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCOverrideReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCSetSpeed_kph', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCSetTimeGap_s', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCHMISelTimeGap_s', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VJUD_ACCSetSpeedSel_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCCheckNormal_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCCheckNormalFailure_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCEnabledReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCActionReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCDegradedReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCSoftenReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCTempFailureReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCNoADASFailure_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCOffRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_DegradedToAutoStr_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LFCTempFailureRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_SoftenTimeThr_s', 	1, 'single', -1, 'real', 'Sample'}; ...
      {'VJUD_LKACheckNormal_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKACheckNormalFailure_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKAEnabledReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKAOperationalReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKALeftActionReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKARightActionReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKATempFailureReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKANoADASFailure_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKAOffRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKAStandbyRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKALeftOperationalRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKARightOperationalRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LKATempFailureRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCACheckNormal_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCAEnabledReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCAOperationalReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCALeftActionReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCARightActionReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCATempFailureReq_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCANoADASFailure_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCAOffRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCAStandbyRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCALeftOperationalRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCARightOperationalRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VJUD_LCATempFailureRecover_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
    } ... 
  } ...
}'; 

if ~suppressObject
    % Create bus objects in the MATLAB base workspace 
    Simulink.Bus.cellToObject(cellInfo) 
end
end
