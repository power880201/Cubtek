% =========== $Update Time : 27-Oct-2016 14:14:22 $  =========
disp('Loading $Id: aeb_var.m 1546 2017-01-17 05:58:39Z YuWei $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KAEB_WarnLightsDecel_mps2', 	'mps2', 	0, 	15, 	'single', 	'' );
a2l_par('KAEB_WarnLightSpeedThresh_kph', 	'kph', 	0, 	180, 	'single', 	'' );
a2l_par('KAEB_HoldModeLimitSpeed_kph', 	'kph', 	0, 	100, 	'single', 	'' );
a2l_par('KAEB_AEBAutoBrakeDecelReq_mps2', 	'mps2', 	0, 	100, 	'single', 	'' );

%% Monitored Signals
% Module Signals %

% Output Signals %
a2l_mon_array('VAEB_AEBSystemState_enum', 	'enum', 	0, 	5, 	'uint8', 	'',	1 );
a2l_mon_array('VAEB_AEBStateHMI_enum', 	'enum', 	0, 	2, 	'uint8', 	'',	1 );
a2l_mon_array('VAEB_AEBDecelReq_mps2', 	'mps2', 	0, 	15, 	'single', 	'',	1 );
a2l_mon_array('VAEB_AEBBrakePreFillReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_TorqueReleaseReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_AEBWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_WarningLightsReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_AEBActing_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_AEBReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_AEBDecelReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_AEBReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_AEBHoldReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_AEBBrakePreFillReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VAEB_TorqueRelReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
