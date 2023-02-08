% =========== $Update Time : 22-May-2017 14:54:17 $  =========
disp('Loading $Id: acc_var.m 1597 2017-07-17 06:39:01Z bcluan $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('AACC_ACCVehSpd_mps', 	'mps', 	0, 	200, 	'single', 	'' );
a2l_par('MACC_ACCISOPosAcceleration_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('MACC_ACCISODeceleration_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_HoldModeLimitSpeed_kph', 	'kph', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_HoldModeLimitDecel_mps2', 	'mps2', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCMaxLatAccel_mps2', 	'mps2', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_LatAccelRollAvgInterval_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_LongAccelRollAvgInterval_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_TqCalcRollAvgInterval_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_TqCalcOverrideRollAvgInterval_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCDecelIncSteps_num', 	'num', 	0, 	500, 	'single', 	'' );
a2l_par('KACC_ACCDecelIncLongTimer_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCDecelIncMedTimer_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCDecelIncShortTimer_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCTransitionSlope_num', 	'num', 	-100, 	100, 	'single', 	'' );
a2l_par('AACC_ACCVehSpd_kph', 	'kph', 	0, 	200, 	'single', 	'' );
a2l_par('MACC_DistPIDKp_num', 	'num', 	0, 	200, 	'single', 	'' );
a2l_par('AACC_ACCDistVehSpd_kph', 	'kph', 	0, 	200, 	'single', 	'' );
a2l_par('MACC_DistPIDErrorG_num', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('MACC_ACCTorqueReq_Nm', 	'Nm', 	0, 	300, 	'single', 	'' );
a2l_par('KACC_MCLongAccelRollAvgInterval_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCDistCtrlTargetDecelThres_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCTargetDecelThres_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCTargetDecelOffThres_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('AACC_VehSpdError_kph', 	'kph', 	-10, 	200, 	'single', 	'' );
a2l_par('AACC_DistCtrlVehSpdError_kph', 	'kph', 	-10, 	200, 	'single', 	'' );
a2l_par('MACC_ACCLookUpDecel_mps2', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('MACC_ACCTBLookUpDecel_mps2', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('MACC_ACCDistTBLookUpDecel_mps2', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('MACC_ACCDistIntTBLookUpDecel_mps2', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('MACC_ACCFMLookUpDecel_mps2', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('MACC_ACCFMTBLookUpDecel_mps2', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('MACC_ACCDistLookUpDecel_mps2', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('MACC_ACCDistIntLookUpDecel_mps2', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('MACC_ACCLookUpDecelControl_mps2', 	'mps2', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_ACCTqFFParam_num', 	'num', 	0, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCTqErrorGParam_num', 	'num', 	0, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCTqKpGain_num', 	'num', 	0, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCTqKiGain_num', 	'num', 	0, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCTqKdGain_num', 	'num', 	0, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCTqControllerKdMap_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KACC_ACCTqKdFixedGain_num', 	'num', 	0, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCTqInitialIParam_num', 	'num', 	0, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCTqMinIParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCTqMaxIParam_num', 	'num', 	0, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCTqResetIParam_num', 	'num', 	0, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCGapFFParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCGapErrorGParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCGapKpParamTrans_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCGapKiParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCGapKdParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCGapInitialIParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCGapMinIParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCGapMaxIParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCGapResetIParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_DecelRampDownRollAvgInt_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_BTSDecelRampDownRollAvgInt_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_EngTqMinMargin_Nm', 	'Nm', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_EngTqMaxMargin_Nm', 	'Nm', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCTorqueIncSteps_num', 	'num', 	0, 	200, 	'single', 	'' );
a2l_par('KACC_ACCTorqueIncTimer_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCDecelStartMargin_kph', 	'kph', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCDecelReleaseMargin_kph', 	'kph', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCRefSpdRollAvgMargin_kph', 	'kph', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCRefSpdShortInt_s', 	's', 	0, 	20, 	'single', 	'' );
a2l_par('KACC_ACCRefSpdLongInt_s', 	's', 	0, 	20, 	'single', 	'' );
a2l_par('KACC_ACCRefSpdTimer_s', 	's', 	0, 	20, 	'single', 	'' );
a2l_par('KACC_ACCRelSpdThreshold_kph', 	'kph', 	-100, 	100, 	'single', 	'' );
a2l_par('KACC_ACCRelSpdDistThreshold_kph', 	'kph', 	-100, 	100, 	'single', 	'' );
a2l_par('KACC_ACCTGapMargin_s', 	's', 	0, 	20, 	'single', 	'' );
a2l_par('KACC_ACCDesDistMarg_m', 	'm', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCTqReleaseMargin_m', 	'm', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_OffsetToBumper_m', 	'm', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_StoppingDistSafety_m', 	'm', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCDefBrakDist_m', 	'm', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCTGapTransMargin_s', 	's', 	0, 	20, 	'single', 	'' );
a2l_par('KACC_ACCDistFFParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCDistErrorGParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCDistKpParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCDistKiParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCDistKdParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCDistInitialIParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCDistMinIParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCDistMaxIParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_ACCDistResetIParam_num', 	'num', 	-1000, 	1000, 	'single', 	'' );
a2l_par('KACC_DistControlEnableSpd_kph', 	'kph', 	0, 	200, 	'single', 	'' );
a2l_par('KACC_DistControlDisableSpd_kph', 	'kph', 	0, 	200, 	'single', 	'' );
a2l_par('KACC_ACCBrakeDisableSpd_kph', 	'kph', 	0, 	200, 	'single', 	'' );
a2l_par('KACC_BrakeDisableDist_m', 	'm', 	-10, 	100, 	'single', 	'' );
a2l_par('KACC_ConsideredSetTimeGap_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ReleaseTGapPerc_perc', 	'perc', 	0, 	1, 	'single', 	'' );
a2l_par('KACC_BrakeTGapPerc_perc', 	'perc', 	0, 	1, 	'single', 	'' );
a2l_par('KACC_ConsideredBrakeSetTimeGap_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_BackToTqMinDecel_mps2', 	'msp2', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_TransitoryRelSpd_kph', 	'kph', 	-200, 	200, 	'single', 	'' );
a2l_par('KACC_TransitorySetTGapApproach_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_TransitorySetTGapIntrusion_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_GapControlDesDistMarg_m', 	'm', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_GapControlTGapPerc_perc', 	'perc', 	0, 	1, 	'single', 	'' );
a2l_par('KACC_ConsideredDistControlSetTimeGap_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_TransitoryTGapDec_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_SteadyDistControlDesDist_m', 	'm', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_SteadyTGapPTCMargin_m', 	'm', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_SteadyDistControlPTCMargin_m', 	'm', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_TransDistControlPTCMargin_m', 	'm', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_TransitoryDesDistApproach_m', 	'm', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_TransitoryClearanceDec_m', 	'm', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_TransitoryDistIntrusion_m', 	'm', 	-10, 	10, 	'single', 	'' );
a2l_par('KACC_ACCRelSpdKpTrans_kph', 	'kph', 	-10, 	10, 	'single', 	'' );
a2l_par('AACC_LowSpeedDistError_m', 	'm', 	-20, 	200, 	'single', 	'' );
a2l_par('MACC_TargetSpeedMargin_mps', 	'mps', 	-20, 	100, 	'single', 	'' );
a2l_par('AACC_VehSpdPID_kph', 	'kph', 	0, 	200, 	'single', 	'' );
a2l_par('MACC_TGapRefSpdKp_num', 	'num', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCTorqueMaintainTimer_ms', 	'ms', 	0, 	2000, 	'single', 	'' );
a2l_par('KACC_ACCDecelMaintainTimer_ms', 	'ms', 	0, 	2000, 	'single', 	'' );
a2l_par('KACC_DefStandstillClearance_m', 	'm', 	0, 	300, 	'single', 	'' );
a2l_par('KACC_SteadyDistControlPerc_perc', 	'perc', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_TransDistControlPTCPerc_perc', 	'perc', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_SteadyDistControlPTCPerc_perc', 	'perc', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_BTSTargetBrakingSpd_kph', 	'mps', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_BTSTargetNoBrakingSpd_kph', 	'mps', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCStopDistance_m', 	'm', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCStopDistDecelFormula_m', 	'm', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCClearanceToWarn_m', 	'm', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_SlowTargetConsideredDecel_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_BrakeToStopConsideredDecel_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_BrakeToStopFreeRunTime_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_BrakeToStopDecel_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_BrakeRelMinSpd_kph', 	'kph', 	-10, 	10, 	'single', 	'' );
a2l_par('AACC_ACCVehSpdTqMap_kph', 	'kph', 	-10, 	200, 	'single', 	'' );
a2l_par('MACC_TorquePIDErrorG_num', 	'num', 	0, 	10, 	'single', 	'' );
a2l_par('MACC_TorquePIDKp_num', 	'num', 	0, 	200, 	'single', 	'' );
a2l_par('MACC_TorquePIDKd_num', 	'num', 	0, 	800, 	'single', 	'' );
a2l_par('AACC_DesiredDistMap_m', 	'm', 	0, 	100, 	'single', 	'' );
a2l_par('MACC_TorquePIDDistErrorG_num', 	'num', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCSpeedToWarn_kph', 	'kph', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCTimeGapToWarn_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCMinTimeGapToWarn_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_RawFMUpperLimit_mps', 	'mps', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_RawFMLowerLimit_mps', 	'mps', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_ACCMCHardBrakingThrs_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCMinSetTimeGap_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCShortSetTimeGap_s', 	's', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_TGapTBAddedDecel_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_DistCtrltNoIntrusionAddDecel_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_DistCtrlIntAddDecel_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_TimeGapIntrusionPerc_perc', 	'perc', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCCriticalClearance_m', 	'm', 	0, 	100, 	'single', 	'' );
a2l_par('KACC_BrakeToStopMCAddedDecel_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_TargetDecelMargin_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_ACCTqReleaseFixedMargin_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KACC_SteadyDistCtrlPTCFixedMarg_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KACC_TransDistCtrlPTCFixedMarg_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KACC_SteadyTGapPTBFixedMargin_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KACC_TransTGapPTBFixedMargin_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KACC_SteadyDistCtrlPTBFixedMarg_flg', 	'flg', 	0, 	1, 	'boolean', 	'' );
a2l_par('KACC_DecelDistCtrlIntToStopDefault_mps2', 	'mps2', 	0, 	10, 	'single', 	'' );
a2l_par('KACC_TransDistIncMargin_m', 	'm', 	0, 	10, 	'single', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon_array('VACC_AvgLongAccel_mps2', 	'mps2', 	0, 	100, 	'single', 	'',	1 );
a2l_mon_array('VACC_AvgLatAccel_mps2', 	'mps2', 	0, 	100, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCTorqueReqCalc_Nm', 	'Nm', 	0, 	500, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCOverride_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VACC_ACCDecelReqStep_mps2', 	'mps2', 	0, 	100, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCDecelReqRamp_mps2', 	'mps2', 	0, 	100, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCDecelReqStepPrev_mps2', 	'mps2', 	0, 	100, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCNegJerkAccel_mps2', 	'mps2', 	0, 	100, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCNegJerkAccel_stp', 	'step', 	0, 	1000, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCDecelReqRamp_mps2', 	'mps2', 	0, 	100, 	'single', 	'',	1 );
a2l_mon_array('VACC_SpdModeBrakeEnable_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VACC_ACCRawTorqueReq_Nm', 	'Nm', 	0, 	500, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCRawDecelReq_mps2', 	'mps2', 	0, 	100, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCTargetVehAssigned_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );

% Output Signals %
a2l_mon_array('VACC_ACCSystemState_enum', 	'enum', 	0, 	6, 	'uint8', 	'',	1 );
a2l_mon_array('VACC_ACCStateHMI_enum', 	'enum', 	0, 	3, 	'uint8', 	'',	1 );
a2l_mon_array('VACC_ACCTorqueReq_Nm', 	'Nm', 	0, 	500, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCDecelReq_mps2', 	'mps2', 	0, 	100, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCWarningReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VACC_ACCActing_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VACC_ACCTqReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VACC_ACCDecelReqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VACC_ACCRawTorqueReq_Nm', 	'Nm', 	0, 	500, 	'single', 	'',	1 );
a2l_mon_array('VACC_ACCOverride_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VACC_ACCHoldReq_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon_array('VACC_DesiredDistance_m', 	'm', 	0, 	300, 	'single', 	'',	1 );
a2l_mon_array('VACC_StandstillClearance_m', 	'm', 	0, 	300, 	'single', 	'',	1 );