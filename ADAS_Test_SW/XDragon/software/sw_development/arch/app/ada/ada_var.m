% =========== $Update Time : 04-Nov-2016 16:48:34 $  =========
disp('Loading $Id: ada_var.m 1526 2016-11-07 08:20:13Z chimotsai $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
%% Monitored Signals
% Module Signals %

% Output Signals %
a2l_mon('VADA_ADASBrakePreFillReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VADA_ADASDecelReq_mps2', 	'mps2', 	0, 	15, 	'single', 	'',	1 );
a2l_mon('VADA_ADASWarningLightsReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VADA_ADASBrkPreFillReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VADA_ADASDecelReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VADA_ADASHoldReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
