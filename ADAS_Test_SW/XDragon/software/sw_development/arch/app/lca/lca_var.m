% =========== $Update Time : 04-Nov-2016 17:01:42 $  =========
disp('Loading $Id: lca_var.m 1526 2016-11-07 08:20:13Z chimotsai $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('ALCA_VehSpd_X_kph', 	'kph', 	30, 	150, 	'single', 	'' );
a2l_par('MLCA_ChangeRate_Y_rat', 	'kph', 	0, 	5, 	'single', 	'' );

%% Monitored Signals
% Module Signals %

% Output Signals %
a2l_mon('VLCA_LCAState_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VLCA_LCAActing_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VLCA_TPOffset_m', 	'm', 	-10000, 	10000, 	'single', 	'',	1 );
