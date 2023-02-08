% =========== $Update Time : 04-Nov-2016 16:51:50 $  =========
disp('Loading $Id: ahlb_var.m 1526 2016-11-07 08:20:13Z chimotsai $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KAHLB_NoObjectTimeHighLimit_s', 	's', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KAHLB_NoObjectTimeLowLimit_s', 	's', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KAHLB_HighBeamTimeHighLimit_s', 	's', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KAHLB_HighBeamTimeLowLimit_s', 	's', 	-1000000, 	1000000, 	'single', 	'' );

%% Monitored Signals
% Module Signals %

% Output Signals %
a2l_mon('VAHLB_ForceLowBeam_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
