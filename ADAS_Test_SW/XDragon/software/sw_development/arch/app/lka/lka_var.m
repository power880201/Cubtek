% =========== $Update Time : 11-Jan-2017 11:23:35 $  =========
disp('Loading $Id: lka_var.m 1545 2017-01-16 03:43:29Z bcluan $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('ALKA_VehSpd_X_mps', 	'mps', 	0, 	150, 	'single', 	'' );
a2l_par('ALKA_LookAheadDist_Y_m', 	'm', 	0, 	10, 	'single', 	'' );
a2l_par('MLKA_ControlGain_rat', 	'rat', 	0, 	20, 	'single', 	'' );
a2l_par('KLKA_IGainUpperLimit_rad', 	'rad', 	0, 	10, 	'single', 	'' );
a2l_par('KLKA_IGainLowerLimit_rad', 	'rad', 	-10, 	0, 	'single', 	'' );
a2l_par('ALKA_ErrorY_m', 	'm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MLKA_LookAheadDistGain_rat', 	'rat', 	0, 	100, 	'single', 	'' );
a2l_par('KLKA_BaseYawRateEnable_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KLKA_YawRateDefaultRange_radps', 	'radps', 	-10000, 	10000, 	'single', 	'' );
a2l_par('ALKA_VehSpd_X_kph', 	'kph', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MLKA_KusCoeff_rat', 	'rat', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KLKA_DistGainIncRate_ratps', 	'ratps', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KLKA_DistGainDecRate_ratps', 	'ratps', 	-10000, 	10000, 	'single', 	'' );
a2l_par('ALKA_CenterC0_m', 	'm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MLKA_C0ErrorDist_m', 	'm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KLKA_TargetPointShift_m', 	'm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KLKA_BaseTqReqMax_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KLKA_BaseTqReqMin_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('ALKA_VehSpd_X_kph', 	'kph', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MLKA_KgainRatio_rat', 	'rat', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KLKA_LKATqReqMax_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KLKA_LKATqReqMin_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('ALKA_LatSpd_X_mps', 	'kph', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MLKA_LookAheadDist_Y_m', 	'm', 	0, 	10000, 	'single', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon('VLKA_BaseTqReq_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLKA_ErrorTheta_rad', 	'rad', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLKA_ErrorThetaLimited_rad', 	'rad', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLKA_BaseTqReqLimited_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLKA_LKAStrTqReqRaw_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLKA_LatSpd_kph', 	'kph', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLKA_LKAStrAngReq_deg', 	'deg', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLKA_BaseTqReqRAW_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLKA_BaseTqReq_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLKA_LKAStrAngReqRAW_deg', 	'deg', 	-10000, 	10000, 	'single', 	'',	1 );

% Output Signals %
a2l_mon('VLKA_LKAState_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VLKA_LKAActing_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VLKA_LKAStrTqReq_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
