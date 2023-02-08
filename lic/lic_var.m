% =========== $Update Time : 05-Dec-2022 18:13:33 $  =========
disp('Loading $Id: lic_var.m 151 2022-12-05 10:14:04Z Matt $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KLIC_C0CrossingThr_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_CalDefaultTLC_s', 	'sec', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_CalTLCMax_s', 	'sec', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_CalTLCMin_s', 	'sec', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_DefaultLaneWidth_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_LaneWidHoldOnTime_s', 	's', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_LaneWidRampInRisRt_mps', 	'mps', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_LaneWidRampInFalRt_mps', 	'mps', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_LaneWidRampOutRisRt_mps', 	'mps', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_LaneWidRampOutFalRt_mps', 	'mps', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_LaneWidRampFinErrThres_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_LaneWidRampFinTimeThres_s', 	's', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_C2Max4Act_rat', 	'rat', 	0, 	250, 	'single', 	'' );
a2l_par('KLIC_Lane4ActThr_s', 	's', 	0, 	5, 	'single', 	'' );
a2l_par('KLIC_C2Max4Disable_rat', 	'rat', 	0, 	250, 	'single', 	'' );
a2l_par('KLIC_C2Max4DisableThr_s', 	's', 	0, 	5, 	'single', 	'' );
a2l_par('KLIC_C1Max4Act_rad', 	'rad', 	0, 	5, 	'single', 	'' );
a2l_par('KLIC_LaneWidthUpThr_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_LaneWidthLowThr_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('ALIC_TLCThrVehSpd_X_kph', 	'kph', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('ALIC_TLCThrHeading_Y_deg', 	'deg', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('MLIC_TLCThr4LKA_s', 	's', 	-1000000, 	1000000, 	'single', 	'' );
a2l_par('KLIC_TLCTriggerThrHysis_s', 	'm', 	-1000000, 	1000000, 	'single', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon('VLIC_LaneWidth_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_mon('VLIC_RLCenterLineC0_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_mon('VLIC_RCenterLineC0_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_mon('VLIC_LCenterLineC0_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_mon('VLIC_EstCenterLineC0_m', 	'm', 	-1000000, 	1000000, 	'single', 	'' );
a2l_mon('VLIC_LaneC1LUpdate_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'' );
a2l_mon('VLIC_LaneC1RUpdate_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'' );

% Output Signals %
a2l_mon('VLIC_LeftLaneAvail_flg', 	'flg', 	0, 	1, 	'boolean', 	'Left lane is available or not' );
a2l_mon('VLIC_RightLaneAvail_flg', 	'flg', 	0, 	1, 	'boolean', 	'Right lane is available or not' );
a2l_mon('VLIC_CenterLineC0_m', 	'm', 	-1000000, 	1000000, 	'single', 	'Bias from center line' );
a2l_mon('VLIC_CenterLineC1_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'Slope of center line' );
a2l_mon('VLIC_CenterLineC2_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'Curvature of center line' );
a2l_mon('VLIC_CenterLineC3_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'Change rate of curvature of ceter line' );
a2l_mon('VLIC_LaneC0L_m', 	'm', 	-1000000, 	1000000, 	'single', 	'Bias from left lane' );
a2l_mon('VLIC_LaneC1L_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'Slope of left lane' );
a2l_mon('VLIC_LaneC2L_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'Curvature of left lane' );
a2l_mon('VLIC_LaneC3L_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'Change rate of curvature of left lane' );
a2l_mon('VLIC_LaneC0R_m', 	'm', 	-1000000, 	1000000, 	'single', 	'Bias from right lane' );
a2l_mon('VLIC_LaneC1R_rad', 	'rad', 	-1000000, 	1000000, 	'single', 	'Slope of  right lane' );
a2l_mon('VLIC_LaneC2R_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'Curvature of right lane' );
a2l_mon('VLIC_LaneC3R_rat', 	'rat', 	-1000000, 	1000000, 	'single', 	'Change rate of curvature of right lane' );
a2l_mon('VLIC_TLCL_s', 	's', 	-1000000, 	1000000, 	'single', 	'Time to lane crossing of left lane' );
a2l_mon('VLIC_TLCR_s', 	's', 	-1000000, 	1000000, 	'single', 	'Time to lane crossing of right lane' );
a2l_mon('VLIC_ResidualLaneL_s', 	's', 	-1000000, 	1000000, 	'single', 	'Estimataed view range divide by longitudinal velocity' );
a2l_mon('VLIC_ResidualLaneR_s', 	's', 	-1000000, 	1000000, 	'single', 	'Estimataed view range divide by longitudinal velocity' );
a2l_mon('VLIC_LaneNotAvail_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_Curvature4Act_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_LaneWidth4Act_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_Heading4Act_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_Curvature4Disable_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_TLCLTrigger_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_TLCRTrigger_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_LeftLaneCrossing_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_RightLaneCrossing_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_Curvature4DisableWarning_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_ResidualLaneExhaust_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_mon('VLIC_DegradedFinish_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
