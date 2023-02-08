function cellInfo = BINP_outputs(varargin) 
% BINP_OUTPUTS returns a cell array containing bus object information 
% 
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
    'BINP_outputs', ... 
    '', ... 
    sprintf(''), { ... 
      {'VINP_AppTime_ms', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_CANBusOff_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_AccessoryActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_CrankActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_ImpactDetected_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BrkPedalPosn_deg', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_BrkPedalPosnValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BrkPedalPosnShortHighFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_BrkPedalPosnShortLowFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_BrkVacuum_kPa', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_BrkVacuumValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BrkVacuumShortHighFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_BrkVacuumShortLowFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_TiltAngle_deg', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_TiltAngleValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_TiltAngleShortHighFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_TiltAngleShortLowFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_IgnitionVoltage_V', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_IgnitionVoltageValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_IgnitionVoltageHighFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_IgnitionVoltageLowFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_ECUCANValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_AccelPedalPosnValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_AutoStopInhibitEng_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_AuxBattCurrent_A', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_AuxBattCurrentValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_AuxBattCurrentShortHighFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_AuxBattCurrentShortLowFlt_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_BrkLightSwitchActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BrkLightSwitchValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngCoolantTemp_C', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngCoolantTempValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngHybridOpState_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_EngIdle_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngIdleControlActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngSpd_erpm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngSpdValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngStartComplete_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngStopped_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqBasicInd_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqBasicIndValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqFriction_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqIndAct_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqIndActValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqMax_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqMaxValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqMin_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqMinValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqStandard_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_FuelConsumedInst_mlps', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_FuelConsumedInstValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_FuelCutActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HEVFaultMode_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_IgnitionActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_AccelPedalPosnMon_pct', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_AccelPedalPosn_pct', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngSpdMon_erpm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqAllowedMinMon_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_EngTqAllowedMinMonValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_TCUCANValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_AutoStopAllowedTrans_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_GearActual_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_GearShiftActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_GearShiftMode_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_GearShiftPosn_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_GearTarget_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_GearTorqueLimitReq_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_GearTorqueLimitReqValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_TransEOPFault_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_TransShaftInSpd_rpm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_TransShaftInSpdValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_TrqConvCltchStatus_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_GearBoxFault_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_NeutralControlActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_ABSCANValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_ABSActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_ABSFault_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_VehSpd_kph', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_VehSpdValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_WhlSpdFL_rpm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_WhlSpdFLValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_WhlSpdFR_rpm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_WhlSpdFRValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BCMCANValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_IPKCANValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_ACCompressorOnReq_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_ACEvapTemp_C', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_ACOn_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_AmbientTemp_C', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_AmbientTempValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_ACEconActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BonnetOpen_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_CrankSecurityKeyValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_AutoStopAllowedAC_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_ACDefrostActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BSGSpeed_erpm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_BSGSpeed_rpm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_BSGSpeedValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTemp_C', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTempValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTqAct_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTqActValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTqAvailGen_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTqAvailGenValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTqAvailMot_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTqAvailMotValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTqCmdMCU_Nm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_BSGTqCmdMCUValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCAuxCurrent_A', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCAuxCurrentValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCAuxVoltage_V', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCAuxVoltageValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCEnabled_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCHVCurrent_A', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCHVCurrentValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCMode_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCTemp_C', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_DCDCTempValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattCellMaxTemp_C', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattCellMaxTempValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattContactorClosed_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattCurrent_A', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattCurrentValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattCapacity_J', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattPrechargingActive_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattPwrAvailCharge_kW', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattPwrAvailChargeValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattPwrAvailDischarge_kW', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattPwrAvailDischargeValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattSOC_pct', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattSOCValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattSOCMax_pct', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattSOCMaxValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattSOCMin_pct', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattSOCMinValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltage_V', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltageValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltageCellMax_V', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltageCellMaxValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltageCellMin_V', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltageCellMinValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltageMax_V', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltageMaxValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltageMin_V', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVBattVoltageMinValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVLinkVoltage_V', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_HVLinkVoltageValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_MCUDefaultModeGeneration_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_MCUDefaultModeGenerationAck_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_MCUEnabled_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_MCUTemp_C', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_MCUTempValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_PwrBoxFanSpeed_rpm', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_PwrBoxFanSpeedValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_PwrBoxInletAirTemp_C', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_PwrBoxInletAirTempValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVILClosed_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_HVILClosedValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_MCUHeartbeat_count', 1, 'double', -1, 'real', 'Sample'}; ...
      {'VINP_MCUHeartbeatValid_flg', 1, 'boolean', -1, 'real', 'Sample'}; ...
      {'VINP_SOHExploreStatus_enum', 1, 'uint8', -1, 'real', 'Sample'}; ...
    } ...
  } ...
}'; 

if ~suppressObject 
    % Create bus objects in the MATLAB base workspace 
    Simulink.Bus.cellToObject(cellInfo) 
end 
