% =========== $Update Time : 22-May-2017 14:54:17 $  =========
disp('Loading $Id: acc_cal.m 1597 2017-07-17 06:39:01Z bcluan $')

a2l_cal('AACC_ACCVehSpd_mps', 	[0,5,20,25]);
a2l_cal('MACC_ACCISOPosAcceleration_mps2', 	[4,4,2,2]);
a2l_cal('MACC_ACCISODeceleration_mps2', 	[5,5,3.5,3.5]);
a2l_cal('KACC_HoldModeLimitSpeed_kph', 	3.1);
a2l_cal('KACC_HoldModeLimitDecel_mps2', 	0.1);
a2l_cal('KACC_ACCMaxLatAccel_mps2', 	1.5);
a2l_cal('KACC_LatAccelRollAvgInterval_s', 	2);
a2l_cal('KACC_LongAccelRollAvgInterval_s', 	2);
a2l_cal('KACC_TqCalcRollAvgInterval_s', 	0.35);
a2l_cal('KACC_TqCalcOverrideRollAvgInterval_s', 	0.1);
a2l_cal('KACC_ACCDecelIncSteps_num', 	10);
a2l_cal('KACC_ACCDecelIncLongTimer_s', 	2);
a2l_cal('KACC_ACCDecelIncMedTimer_s', 	1);
a2l_cal('KACC_ACCDecelIncShortTimer_s', 	0.6);
a2l_cal('KACC_ACCTransitionSlope_num', 	-3.5);
a2l_cal('AACC_ACCVehSpd_kph', 	[0,30,40,50,60,70,80,90,100]);
a2l_cal('MACC_DistPIDKp_num', 	[0.4,0.4,0.4,0.65,0.65,0.65,0.65,0.5,0.5,0.5,0.5,0.5]);
a2l_cal('AACC_ACCDistVehSpd_kph', 	[0,5,10,15,20,25,30,35,40,45,50,55]);
a2l_cal('MACC_DistPIDErrorG_num', 	[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1]);
a2l_cal('MACC_ACCTorqueReq_Nm', 	[0,20,30,50,70,90,125,135,115]);
a2l_cal('KACC_MCLongAccelRollAvgInterval_s', 	0.5);
a2l_cal('KACC_ACCDistCtrlTargetDecelThres_mps2', 	0.25);
a2l_cal('KACC_ACCTargetDecelThres_mps2', 	0.3);
a2l_cal('KACC_ACCTargetDecelOffThres_mps2', 	0.1);
a2l_cal('AACC_VehSpdError_kph', 	[0,1.5,5,10,20,30,40,50,60,70,80]);
a2l_cal('AACC_DistCtrlVehSpdError_kph', 	[0,0.1,1.5,5,10,20,30,40,50,60,70,80]);
a2l_cal('MACC_ACCLookUpDecel_mps2', 	[0,0,0.4,0.7,0.9,1,1.1,1.2,1.3,1.4,1.5]);
a2l_cal('MACC_ACCTBLookUpDecel_mps2', 	[0,0.06,0.2,0.3,0.5,0.7,0.9,1,1.1,1.2,1.3]);
a2l_cal('MACC_ACCDistTBLookUpDecel_mps2', 	[0.2,0.3,0.4,0.5,0.7,0.8,0.9,1,1.1,1.2,1.2]);
a2l_cal('MACC_ACCDistIntTBLookUpDecel_mps2', 	[0,0.4,0.6,0.7,0.8,0.85,0.95,1.1,1.2,1.3,1.4,1.4]);
a2l_cal('MACC_ACCFMLookUpDecel_mps2', 	[0,0.6,1,1.3,1.7,2.1,2.5,3,3.5,4,4.5]);
a2l_cal('MACC_ACCFMTBLookUpDecel_mps2', 	[0,0.4,0.8,1.2,1.7,2.1,2.5,3,3.5,4,4.5]);
a2l_cal('MACC_ACCDistLookUpDecel_mps2', 	[0,0,0.5,1.1,1.5,2.3,2.5,3,3.5,4,4.5]);
a2l_cal('MACC_ACCDistIntLookUpDecel_mps2', 	[0.6,0.6,0.7,1.1,1.5,2.3,2.5,3,3.5,4,4.5]);
a2l_cal('MACC_ACCLookUpDecelControl_mps2', 	[0.5,0.5,0.5,1,1.3,1.9,2.5,3,3.5,4,4]);
a2l_cal('KACC_ACCTqFFParam_num', 	0);
a2l_cal('KACC_ACCTqErrorGParam_num', 	1);
a2l_cal('KACC_ACCTqKpGain_num', 	35);
a2l_cal('KACC_ACCTqKiGain_num', 	0.025);
a2l_cal('KACC_ACCTqKdGain_num', 	110);
a2l_cal('KACC_ACCTqControllerKdMap_flg', 	1);
a2l_cal('KACC_ACCTqKdFixedGain_num', 	110);
a2l_cal('KACC_ACCTqInitialIParam_num', 	0);
a2l_cal('KACC_ACCTqMinIParam_num', 	-100);
a2l_cal('KACC_ACCTqMaxIParam_num', 	100);
a2l_cal('KACC_ACCTqResetIParam_num', 	0);
a2l_cal('KACC_ACCGapFFParam_num', 	0);
a2l_cal('KACC_ACCGapErrorGParam_num', 	-1);
a2l_cal('KACC_ACCGapKpParamTrans_num', 	1);
a2l_cal('KACC_ACCGapKiParam_num', 	0);
a2l_cal('KACC_ACCGapKdParam_num', 	0);
a2l_cal('KACC_ACCGapInitialIParam_num', 	0);
a2l_cal('KACC_ACCGapMinIParam_num', 	-100);
a2l_cal('KACC_ACCGapMaxIParam_num', 	100);
a2l_cal('KACC_ACCGapResetIParam_num', 	0);
a2l_cal('KACC_DecelRampDownRollAvgInt_s', 	0.2);
a2l_cal('KACC_BTSDecelRampDownRollAvgInt_s', 	2);
a2l_cal('KACC_EngTqMinMargin_Nm', 	10);
a2l_cal('KACC_EngTqMaxMargin_Nm', 	17);
a2l_cal('KACC_ACCTorqueIncSteps_num', 	10);
a2l_cal('KACC_ACCTorqueIncTimer_s', 	0.5);
a2l_cal('KACC_ACCDecelStartMargin_kph', 	5);
a2l_cal('KACC_ACCDecelReleaseMargin_kph', 	0);
a2l_cal('KACC_ACCRefSpdRollAvgMargin_kph', 	1.5);
a2l_cal('KACC_ACCRefSpdShortInt_s', 	0.5);
a2l_cal('KACC_ACCRefSpdLongInt_s', 	1);
a2l_cal('KACC_ACCRefSpdTimer_s', 	1);
a2l_cal('KACC_ACCRelSpdThreshold_kph', 	-2);
a2l_cal('KACC_ACCRelSpdDistThreshold_kph', 	-2);
a2l_cal('KACC_ACCTGapMargin_s', 	0.1);
a2l_cal('KACC_ACCDesDistMarg_m', 	3);
a2l_cal('KACC_ACCTqReleaseMargin_m', 	5);
a2l_cal('KACC_OffsetToBumper_m', 	3);
a2l_cal('KACC_StoppingDistSafety_m', 	5);
a2l_cal('KACC_ACCDefBrakDist_m', 	0);
a2l_cal('KACC_ACCTGapTransMargin_s', 	0.1);
a2l_cal('KACC_ACCDistFFParam_num', 	0);
a2l_cal('KACC_ACCDistErrorGParam_num', 	-1);
a2l_cal('KACC_ACCDistKpParam_num', 	0.8);
a2l_cal('KACC_ACCDistKiParam_num', 	0);
a2l_cal('KACC_ACCDistKdParam_num', 	0);
a2l_cal('KACC_ACCDistInitialIParam_num', 	0);
a2l_cal('KACC_ACCDistMinIParam_num', 	-100);
a2l_cal('KACC_ACCDistMaxIParam_num', 	100);
a2l_cal('KACC_ACCDistResetIParam_num', 	0);
a2l_cal('KACC_DistControlEnableSpd_kph', 	49);
a2l_cal('KACC_DistControlDisableSpd_kph', 	45);
a2l_cal('KACC_ACCBrakeDisableSpd_kph', 	0.1);
a2l_cal('KACC_BrakeDisableDist_m', 	-1);
a2l_cal('KACC_ConsideredSetTimeGap_s', 	2.8);
a2l_cal('KACC_ReleaseTGapPerc_perc', 	0.18);
a2l_cal('KACC_BrakeTGapPerc_perc', 	0.08);
a2l_cal('KACC_ConsideredBrakeSetTimeGap_s', 	2.8);
a2l_cal('KACC_BackToTqMinDecel_mps2', 	0.1);
a2l_cal('KACC_TransitoryRelSpd_kph', 	-5);
a2l_cal('KACC_TransitorySetTGapApproach_s', 	0.1);
a2l_cal('KACC_TransitorySetTGapIntrusion_s', 	0.3);
a2l_cal('KACC_GapControlDesDistMarg_m', 	5);
a2l_cal('KACC_GapControlTGapPerc_perc', 	0.08);
a2l_cal('KACC_ConsideredDistControlSetTimeGap_s', 	2.8);
a2l_cal('KACC_TransitoryTGapDec_s', 	0.2);
a2l_cal('KACC_SteadyDistControlDesDist_m', 	5);
a2l_cal('KACC_SteadyTGapPTCMargin_m', 	5);
a2l_cal('KACC_SteadyDistControlPTCMargin_m', 	5);
a2l_cal('KACC_TransDistControlPTCMargin_m', 	3);
a2l_cal('KACC_TransitoryDesDistApproach_m', 	0.5);
a2l_cal('KACC_TransitoryClearanceDec_m', 	2);
a2l_cal('KACC_TransitoryDistIntrusion_m', 	2.5);
a2l_cal('KACC_ACCRelSpdKpTrans_kph', 	1);
a2l_cal('AACC_LowSpeedDistError_m', 	[0,2,5,10,15,20,25,30,35,40,45,50,60,70,80,90,100,110,120,130,140]);
a2l_cal('MACC_TargetSpeedMargin_mps', 	[0.25,0.25,0.25,0.3,0.4,0.5,0.7,0.9,1.5,2,2.3,2.6,3.3,3.7,4,4.4,4.8,5.3,5.8,6.5,7.3]);
a2l_cal('AACC_VehSpdPID_kph', 	[0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150]);
a2l_cal('MACC_TGapRefSpdKp_num', 	[2,2,4,5,5,7,10,17,20,24,30,35,38,38,38,38]);
a2l_cal('KACC_ACCTorqueMaintainTimer_ms', 	500);
a2l_cal('KACC_ACCDecelMaintainTimer_ms', 	500);
a2l_cal('KACC_DefStandstillClearance_m', 	200);
a2l_cal('KACC_SteadyDistControlPerc_perc', 	1);
a2l_cal('KACC_TransDistControlPTCPerc_perc', 	1);
a2l_cal('KACC_SteadyDistControlPTCPerc_perc', 	1);
a2l_cal('KACC_BTSTargetBrakingSpd_kph', 	10);
a2l_cal('KACC_BTSTargetNoBrakingSpd_kph', 	3);
a2l_cal('KACC_ACCStopDistance_m', 	3.5);
a2l_cal('KACC_ACCStopDistDecelFormula_m', 	3.5);
a2l_cal('KACC_ACCClearanceToWarn_m', 	3);
a2l_cal('KACC_SlowTargetConsideredDecel_mps2', 	2);
a2l_cal('KACC_BrakeToStopConsideredDecel_mps2', 	0.8);
a2l_cal('KACC_BrakeToStopFreeRunTime_s', 	0);
a2l_cal('KACC_BrakeToStopDecel_mps2', 	2);
a2l_cal('KACC_BrakeRelMinSpd_kph', 	-0.1);
a2l_cal('AACC_ACCVehSpdTqMap_kph', 	[0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150]);
a2l_cal('MACC_TorquePIDErrorG_num', 	[0.1,0.1,0.1,0.1,0.22,0.26,0.31,0.33,0.37,0.40,0.44,0.47,0.51,0.53,0.56,0.57]);
a2l_cal('MACC_TorquePIDKp_num', 	[35,35,35,35,35,55,70,70,80,80,80,85,85,90,95,95]);
a2l_cal('MACC_TorquePIDKd_num', 	[110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110]);
a2l_cal('AACC_DesiredDistMap_m', 	[0,5,8,10,15,20,25,30,35,40]);
a2l_cal('MACC_TorquePIDDistErrorG_num', 	[0.08,0.08,0.08,0.08,0.08,0.1,0.12,0.15,0.15,0.15]);
a2l_cal('KACC_ACCSpeedToWarn_kph', 	4);
a2l_cal('KACC_ACCTimeGapToWarn_s', 	0.8);
a2l_cal('KACC_ACCMinTimeGapToWarn_s', 	0.1);
a2l_cal('KACC_RawFMUpperLimit_mps', 	50);
a2l_cal('KACC_RawFMLowerLimit_mps', 	0);
a2l_cal('KACC_ACCMCHardBrakingThrs_mps2', 	1.4);
a2l_cal('KACC_ACCMinSetTimeGap_s', 	1.3);
a2l_cal('KACC_ACCShortSetTimeGap_s', 	1.6);
a2l_cal('KACC_TGapTBAddedDecel_mps2', 	0.1);
a2l_cal('KACC_DistCtrltNoIntrusionAddDecel_mps2', 	0.2);
a2l_cal('KACC_DistCtrlIntAddDecel_mps2', 	0.2);
a2l_cal('KACC_TimeGapIntrusionPerc_perc', 	0.2);
a2l_cal('KACC_ACCCriticalClearance_m', 	5.5);
a2l_cal('KACC_BrakeToStopMCAddedDecel_mps2', 	0.1);
a2l_cal('KACC_TargetDecelMargin_mps2', 	0.1);
a2l_cal('KACC_ACCTqReleaseFixedMargin_flg', 	1);
a2l_cal('KACC_SteadyDistCtrlPTCFixedMarg_flg', 	1);
a2l_cal('KACC_TransDistCtrlPTCFixedMarg_flg', 	1);
a2l_cal('KACC_SteadyTGapPTBFixedMargin_flg', 	1);
a2l_cal('KACC_TransTGapPTBFixedMargin_flg', 	1);
a2l_cal('KACC_SteadyDistCtrlPTBFixedMarg_flg', 	1);
a2l_cal('KACC_DecelDistCtrlIntToStopDefault_mps2', 	1);
a2l_cal('KACC_TransDistIncMargin_m', 	2);