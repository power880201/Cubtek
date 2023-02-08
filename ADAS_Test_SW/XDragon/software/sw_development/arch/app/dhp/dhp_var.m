% =========== $Update Time : 04-Nov-2016 16:54:15 $  =========
disp('Loading $Id: dhp_var.m 1526 2016-11-07 08:20:13Z chimotsai $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KDHP_SystemFaultHOTimer_sec', 	'sec', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KDHP_SystemFaultRPTimer_sec', 	'sec', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KDHP_DisableOBDAnnoun_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );

%% Monitored Signals
% Module Signals %

% Output Signals %
a2l_mon('VDHP_SystemFaultRPTimer_sec', 	'sec', 	-100000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VDHP_SystemFaultHOTimer_sec', 	'sec', 	-100000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VDHP_DisableADASFun_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_DisableFCW_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_DisableAEB_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_DisableACC_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_DisableLKA_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_DisableLFC_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_DisableMAPFun_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_DisableDBS_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_ADASMILReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_ADASWarnMsgReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VDHP_ADASWarnBuzzerReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
