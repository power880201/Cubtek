% =========== $Update Time : 20-Mar-2017 16:36:52 $  =========
disp('Loading $Id: dip_var.m 1573 2017-03-31 02:28:25Z bcluan $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KDIP_ADASOnSoundReqLatch_s', 	's', 	0, 	1000000, 	'single', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon('VDIP_LFCOnSoundReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDIP_LFCOffSoundReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDIP_LeftLaneLampModeLFC_enum', 	'enum', 	0, 	4, 	'uint8', 	'',	1 );
a2l_mon('VDIP_RightLaneLampModeLFC_enum', 	'enum', 	0, 	4, 	'uint8', 	'',	1 );
a2l_mon('VDIP_LeftLaneLampModeLKA_enum', 	'enum', 	0, 	4, 	'uint8', 	'',	1 );
a2l_mon('VDIP_RightLaneLampModeLKA_enum', 	'enum', 	0, 	4, 	'uint8', 	'',	1 );

% Output Signals %
a2l_mon('VDIP_LeftLaneLampMode_enum', 	'enum', 	0, 	4, 	'uint8', 	'',	1 );
a2l_mon('VDIP_RightLaneLampMode_enum', 	'enum', 	0, 	4, 	'uint8', 	'',	1 );
a2l_mon('VDIP_LFCHMIStatus_enum', 	'enum', 	0, 	3, 	'uint8', 	'',	1 );
a2l_mon('VDIP_LKAHMIStatus_enum', 	'enum', 	0, 	2, 	'uint8', 	'',	1 );
a2l_mon('VDIP_LFCWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDIP_ADASFunOnSoundReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDIP_ADASFunOffSoundReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDIP_NumberOfTargets_num', 	'num', 	0, 	255, 	'uint8', 	'',	1 );
