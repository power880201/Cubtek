% =========== $Update Time : 27-Oct-2016 14:16:21 $  =========
disp('Loading $Id: fcw_var.m 1546 2017-01-17 05:58:39Z YuWei $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('AFCW_FCWTargetVehTtcX_X_ms', 	'ms', 	0, 	6000, 	'single', 	'' );
a2l_par('AFCW_FCWTargetVehRelSpeed_Y_kph', 	'kph', 	0, 	200, 	'single', 	'' );
a2l_par('MFCW_DecelFromMap_mps2', 	'mps2', 	0, 	11, 	'single', 	'' );
a2l_par('KFCW_MaxDBSDeceleration_mps2', 	'mps2', 	0, 	11, 	'single', 	'' );
a2l_par('KFCW_MinDBSDeceleration_mps2', 	'mps2', 	0, 	11, 	'single', 	'' );
a2l_par('KFCW_WarnLightsDecel_mps2', 	'mps2', 	0, 	11, 	'single', 	'' );
a2l_par('KFCW_WarnLightSpeedThresh_kph', 	'kph', 	0, 	200, 	'single', 	'' );
a2l_par('KFCW_BrakePreFillTimer_ms', 	'ms', 	0, 	10000, 	'single', 	'' );
a2l_par('KFCW_HapticOnTimer_ms', 	'ms', 	0, 	10000, 	'single', 	'' );
a2l_par('KFCW_HoldModeLimitSpeed_kph', 	'kph', 	0, 	100, 	'single', 	'' );
a2l_par('KFCW_HapticOnDecelVal_mps2', 	'mps2', 	0, 	100, 	'single', 	'' );
a2l_par('KFCW_BrakSystDelay_sec', 	'sec', 	0, 	2, 	'single', 	'' );
a2l_par('KFCW_DefaultDBSDecel_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon_array('VFCW_FCWTargetVehRelSpeed_kph', 	'kph', 	-200, 	200, 	'single', 	'',	1 );

% Output Signals %
a2l_mon_array('VFCW_FCWSystemState_enum', 	'enum', 	0, 	7, 	'uint8', 	'',	1 );
a2l_mon_array('VFCW_FCWStateHMI_enum', 	'enum', 	0, 	2, 	'uint8', 	'',	1 );
a2l_mon_array('VFCW_FCWActing_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VFCW_FCWWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VFCW_FCWBrakePreFillReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VFCW_FCWDecelReq_mps2', 	'mps2', 	0, 	11, 	'single', 	'',	1 );
a2l_mon_array('VFCW_WarningLightsReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VFCW_FCWDecelReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VFCW_FCWBrakePreFillReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VFCW_FCWHapticReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VFCW_FCWHoldReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
