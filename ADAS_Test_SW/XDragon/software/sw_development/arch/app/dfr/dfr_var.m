% =========== $Update Time : 04-Nov-2016 16:52:36 $  =========
disp('Loading $Id: dfr_var.m 1526 2016-11-07 08:20:13Z chimotsai $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
%% Monitored Signals
% Module Signals %

% Output Signals %
a2l_mon('VDFR_SysPowerDownCmd_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_StrAngReq_deg', 	'deg', 	-720, 	720, 	'single', 	'',	1 );
a2l_mon('VDFR_StrAngAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_StrTqReq_Nm', 	'Nm', 	-10, 	10, 	'single', 	'',	1 );
a2l_mon('VDFR_StrTqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_LFCTransGain_rat', 	'rat', 	0.8, 	1.2, 	'single', 	'',	1 );
a2l_mon('VDFR_LFCTransGainAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ADASLFCStatus_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_ADASLKAStatus_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_EPSModeReq_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_PTTqReq_Nm', 	'Nm', 	-100, 	718.8, 	'single', 	'',	1 );
a2l_mon('VDFR_PTTqReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ForceIdle_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ForceIdleAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_DecReq_mps2', 	'mps2', 	0, 	25.4, 	'single', 	'',	1 );
a2l_mon('VDFR_DecReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_AEBReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_AEBReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_BrakePrefillReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_BrakePrefillReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_VehHoldReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_BrakeHapticReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ADASACCStatus_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_VirtualGearRatio_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_VehSpdLim_kph', 	'kph', 	0, 	254, 	'single', 	'',	1 );
a2l_mon('VDFR_VehSpdLimAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_GearPosnReq_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_GearPosnReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ShiftPosnReq_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_ShiftPosnReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ForceLowBeam_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ADASMILReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_HazardWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_FCWWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ACCWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_AEBWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_IGSAWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_FaultWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ACCSetSpeed_kph', 	'kph', 	0, 	254, 	'single', 	'',	1 );
a2l_mon('VDFR_ADASFaultMode_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_ACCSetTimeGap_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_ACCSetTimeGapTmp_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_LeftLaneLampMode_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_RightLaneLampMode_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_LFCHMIStatus_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_LKAHMIStatus_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VDFR_LFCWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ADASFunOnSoundReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_ADASFunOffSoundReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDFR_NumberOfTargets_num', 	'num', 	0, 	255, 	'uint8', 	'',	1 );
