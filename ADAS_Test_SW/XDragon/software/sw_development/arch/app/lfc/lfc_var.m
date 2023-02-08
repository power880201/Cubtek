% =========== $Update Time : 01-Jun-2017 09:43:45 $  =========
disp('Loading $Id: lfc_var.m 1588 2017-06-08 08:15:09Z bcluan $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KLFC_Wheel2SteerRatio_rat', 	'rat', 	0, 	20, 	'single', 	'' );
a2l_par('ALFC_VehSpd_X_mps', 	'mps', 	0, 	150, 	'single', 	'' );
a2l_par('ALFC_LookAheadDist_Y_m', 	'm', 	0, 	10, 	'single', 	'' );
a2l_par('MLFC_ControlGain_rat', 	'rat', 	0, 	20, 	'single', 	'' );
a2l_par('KLFC_IGainUpperLimit_rad', 	'rad', 	0, 	10, 	'single', 	'' );
a2l_par('KLFC_IGainLowerLimit_rad', 	'rad', 	-10, 	0, 	'single', 	'' );
a2l_par('ALFC_ErrorY_m', 	'm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MLFC_LookAheadDistGain_rat', 	'rat', 	0, 	100, 	'single', 	'' );
a2l_par('KLFC_StrCenterOffset_deg', 	'deg', 	-10000, 	10000, 	'single', 	'' );
a2l_par('ALFC_VehSpd_X_kph', 	'kph', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MLFC_KusCoeff_rat', 	'rat', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KLFC_DIncRate_m', 	'm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KLFC_DDecRate_m', 	'm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('ALFC_CenterC0_m', 	'm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MLFC_C0ErrorDist_m', 	'm', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MLFC_KgainRatio_rat', 	'rat', 	-10000, 	10000, 	'single', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon('VLFC_PredY_m', 	'm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLFC_CenterLineY_m', 	'm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLFC_LookAheadDist_m', 	'm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLFC_DegradedTimeLocal_s', 	's', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLFC_SoftenTimeLocal_s', 	's', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLFC_RampTimeLocal_s', 	's', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLFC_ErrorY_m', 	'm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VLFC_ErrorTheta_rad', 	'rad', 	-10000, 	10000, 	'single', 	'',	1 );

% Output Signals %
a2l_mon('VLFC_LFCState_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VLFC_LFCActing_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VLFC_LFCStrAngReq_deg', 	'deg', 	-180, 	180, 	'single', 	'',	1 );
