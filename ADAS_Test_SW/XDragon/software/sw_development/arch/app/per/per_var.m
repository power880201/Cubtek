% =========== $Update Time : 26-Jun-2017 09:09:01 $  =========
disp('Loading $Id: per_var.m 1597 2017-07-17 06:39:01Z bcluan $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KPER_TLCDefaultValue_s', 	'sec', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_C0CrossingThr_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_CalDefaultTLC_s', 	'sec', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_CalTLCMax_s', 	'sec', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_CalTLCMin_s', 	'sec', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_UseCalTLC_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KPER_DefaultLaneWidth_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_LaneWidHoldOnTime_s', 	's', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_LaneWidRampInRisRt_mps', 	'mps', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_LaneWidRampInFalRt_mps', 	'mps', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_LaneWidRampOutRisRt_mps', 	'mps', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_LaneWidRampOutFalRt_mps', 	'mps', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_LaneWidRampFinErrThres_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KPER_LaneWidRampFinTimeThres_s', 	's', 	-1000000, 	1000000, 	'single', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon('VPER_LaneWidth_m', 	'm', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_CalTLCL_s', 	's', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_CalTLCR_s', 	's', 	-1000000, 	1000000, 	'single', 	'',	1 );

% Output Signals %
a2l_mon('VPER_CameraStatus_enum', 	'enum', 	0, 	2, 	'uint8', 	'',	1 );
a2l_mon('VPER_RadarStatus_enum', 	'enum', 	0, 	1, 	'uint8', 	'',	1 );
a2l_mon('VPER_NumberOfTargets_enum', 	'enum', 	0, 	30, 	'uint8', 	'',	1 );
a2l_mon('VPER_TargXPosVect30_m', 	'm', 	0, 	1000, 	'single', 	'',	30 );
a2l_mon('VPER_TargYPosVect30_m', 	'm', 	-100, 	100, 	'single', 	'',	30 );
a2l_mon('VPER_TargTypeVect30_enum', 	'enum', 	0, 	7, 	'uint8', 	'',	30 );
a2l_mon('VPER_TargAbsSpeedVect30_mps', 	'mps', 	-100, 	100, 	'single', 	'',	30 );
a2l_mon('VPER_TargWidthVect30_m', 	'm', 	0, 	5, 	'single', 	'',	30 );
a2l_mon('VPER_TargIdVect30_num', 	'num', 	0, 	255, 	'uint8', 	'',	30 );
a2l_mon('VPER_TargAttitudeVect30_rad', 	'rad', 	0, 	10, 	'single', 	'',	30 );
a2l_mon('VPER_TargExistProbVect30_num', 	'num', 	0, 	1, 	'single', 	'',	30 );
a2l_mon('VPER_FusionStatus_enum', 	'enum', 	0, 	1, 	'uint8', 	'',	1 );
a2l_mon('VPER_TargAccelVect30_mps2', 	'mps2', 	-30, 	30, 	'single', 	'',	30 );
a2l_mon('VPER_RadObjValidVect30_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	30 );
a2l_mon('VPER_RadDynPropertyVect30_enum', 	'num', 	0, 	255, 	'uint8', 	'',	30 );
a2l_mon('VPER_CamObsValidVect30_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	30 );
a2l_mon('VPER_CamObsStatusVect30_enum', 	'num', 	0, 	255, 	'uint8', 	'',	30 );
a2l_mon('VPER_LeftLaneAvail_flg', 	'fig', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VPER_RightLaneAvail_flg', 	'fig', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VPER_CenterLineC0_m', 	'm', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_CenterLineC1_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_CenterLineC2_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_CenterLineC3_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_LaneC0L_m', 	'm', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_LaneC1L_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_LaneC2L_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_LaneC3L_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_LaneC0R_m', 	'm', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_LaneC1R_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_LaneC2R_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_LaneC3R_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_TLCL_s', 	's', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_TLCR_s', 	's', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_C1LBias_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_C1RBias_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_ResidualLaneL_s', 	's', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VPER_ResidualLaneR_s', 	's', 	-1000000, 	1000000, 	'single', 	'',	1 );
