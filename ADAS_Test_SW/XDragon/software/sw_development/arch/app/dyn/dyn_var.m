% =========== $Update Time : 04-Nov-2016 16:59:36 $  =========
disp('Loading $Id: dyn_var.m 1526 2016-11-07 08:20:13Z chimotsai $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KVSE_WheelSpdAdjust_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KVSE_WheelWeightSlope_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KVSE_WheelWeightOffset_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KVSE_AccelWeightSlope_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KVSE_AccelWeightOffset_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KVSE_StartModeInWheelSpd_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KVSE_StartModeInDelaySpd_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KVSE_StartModeOutWheelSpd_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KVSE_TurnModeInYawRate_degps', 	'degps', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KVSE_TurnModeOutYawRate_degps', 	'degps', 	-1000000, 	1000000, 	'single', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon('VVSE_SpdEstState_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VVSE_DelaySpd_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_RRwheelSpd_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_LRwheelSpd_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_RFwheelSpd_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_LFwheelSpd_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_LongAccel_G', 	'G', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_YawRate_degps', 	'degps', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_RRwheelSlip_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_LRwheelSlip_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_RFwheelSlip_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_LFwheelSlip_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_RRwheelPercent_pct', 	'pct', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_LRwheelPercent_pct', 	'pct', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_RFwheelPercent_pct', 	'pct', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_LFwheelPercent_pct', 	'pct', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_AccelPercent_pct', 	'pct', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_VehSpdStart_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_VehSpdNormal_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VVSE_VehSpdTurn_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'',	1 );

% Output Signals %
a2l_mon('VVSE_VehSpdEst_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'',	1 );
