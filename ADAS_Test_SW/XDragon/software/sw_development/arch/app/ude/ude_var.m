% =========== $Update Time : 11-May-2016 09:39:16 $  =========
disp('Loading $Id: ude_var.m 1597 2017-07-17 06:39:01Z bcluan $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KUDE_UDEHoldReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon_array('VUDE_TRACKFLAGS_enum', 	'num', 	0, 	255, 	'uint8', 	'',	30 );

% Output Signals %
a2l_mon_array('VUDE_TSTAMPH_ms', 	'ms', 	0, 	4294967295, 	'uint32', 	'',	1 );
a2l_mon_array('VUDE_TSTAMPL_ms', 	'ms', 	0, 	4294967295, 	'uint32', 	'',	1 );
a2l_mon_array('VUDE_NOFTRACKS_num', 	'num', 	0, 	65535, 	'uint16', 	'',	1 );
a2l_mon_array('VUDE_OVERLOAD_flg', 	'flg', 	0, 	65535, 	'uint16', 	'',	1 );
a2l_mon_array('VUDE_TRACKSID_enum', 	'enum', 	0, 	4294967295, 	'uint32', 	'',	30 );
a2l_mon_array('VUDE_TRACKSX_m', 	'm', 	-1000000, 	1000000, 	'single', 	'',	30 );
a2l_mon_array('VUDE_TRACKSY_m', 	'm', 	-1000000, 	1000000, 	'single', 	'',	30 );
a2l_mon_array('VUDE_TRACKSATT_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'',	30 );
a2l_mon_array('VUDE_TRACKSVEL_mps', 	'mps', 	-1000000, 	1000000, 	'single', 	'',	30 );
a2l_mon_array('VUDE_TRACKSCOVX_m2', 	'm2', 	-1000000, 	1000000, 	'single', 	'',	30 );
a2l_mon_array('VUDE_TRACKSCOVY_m2', 	'm2', 	-1000000, 	1000000, 	'single', 	'',	30 );
a2l_mon_array('VUDE_TRACKSEXSPROB_num', 	'num', 	-1000000, 	1000000, 	'single', 	'',	30 );
a2l_mon_array('VUDE_TRACKSWIDTH_m', 	'm', 	-1000000, 	1000000, 	'single', 	'',	30 );
a2l_mon_array('VUDE_TRACKSOBST_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	30 );
a2l_mon_array('VUDE_TRACKSACCEL_mps2', 	'mps2', 	-1000000, 	1000000, 	'single', 	'',	30 );
a2l_mon_array('VUDE_TRACKSVRADAR_enum', 	'enum', 	0, 	65535, 	'uint16', 	'',	30 );
a2l_mon_array('VUDE_TRACKSOBSTIDMOBILEYE_num', 	'enum', 	0, 	255, 	'uint8', 	'',	30 );
a2l_mon_array('VUDE_TRACKSOBSIDRADAR_num', 	'num', 	0, 	255, 	'uint8', 	'',	30 );
a2l_mon_array('VUDE_TrackIsCipv_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	30 );
a2l_mon_array('VUDE_CamObstacleValid_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	30 );
a2l_mon_array('VUDE_RadObjectValid_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	30 );
a2l_mon_array('VUDE_TRACKSRADEXISTPROB_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	30 );
a2l_mon_array('VUDE_TRACKSRADOBSTPROB_num', 	'num', 	0, 	255, 	'uint8', 	'',	30 );
a2l_mon_array('VUDE_TRACKSRADDYNSTAT_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	30 );
a2l_mon_array('VUDE_TRACKSMEDYNSTAT_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	30 );
