% =========== $Update Time : 07-Nov-2016 12:32:06 $  =========
disp('Loading $Id: pmm_var.m 1526 2016-11-07 08:20:13Z chimotsai $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KPMM_SysPowerModeOvrd_enum', 	'enum', 	0, 	255, 	'uint8', 	'' );
a2l_par('KPMM_SysPowerModeOvrd_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KPMM_ForcePowerDown_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KPMM_InitializeWaitTime_s', 	's', 	0, 	1000, 	'single', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon('VPMM_CANInactive_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VPMM_SysPowerMode_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VPMM_InitializeTime_s', 	's', 	0, 	1000, 	'single', 	'',	1 );

% Output Signals %
a2l_mon('VPMM_SysPowerModeOut_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VPMM_SysPowerDownCmd_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
