/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_TX_PORT */
/*                                                                                                                           */
/*   AUTHOR(S):                                                                                                              */
/*      U. Homann                                                                                                              */
/*      M. Eikermann                                                                                                              */
/*                                                                                                                           */
/*                                                                                                                           */
/*   RTICANMM Date: 06-Oct-2014 13:04:04                                                                                     */
/*   RTICANMM Version: 4.0.735878.5444907408                                                                                     */
/*                                                                                                                           */
/*  (c) Copyright 2016, dSPACE GmbH. All rights reserved.                                                                    */
/*      Brand names or product names are trademarks or registered trademarks of their respective companies or organizations. */
/*                                                                                                                           */
/* ***************************************************************************************************************************/

/* Message kickout */
  ssSetInputPortDataType(S, 0, SS_BOOLEAN);
  ssSetInputPortWidth(S, 0, 2);
/* ADAS1.ADAS1_Checksum */ 
ssSetInputPortDataType(S, 1, SS_UINT8); 
ssSetInputPortWidth(S, 1, 1);
/* ADAS1.ADAS1_LifeCount */ 
ssSetInputPortDataType(S, 2, SS_UINT8); 
ssSetInputPortWidth(S, 2, 1);
/* ADAS1.ADAS_TqRatio */ 
ssSetInputPortDataType(S, 3, SS_UINT8); 
ssSetInputPortWidth(S, 3, 1);
/* ADAS1.ADAS_StrTqReq_A */ 
ssSetInputPortDataType(S, 4, SS_BOOLEAN); 
ssSetInputPortWidth(S, 4, 1);
/* ADAS1.ADAS_StrAngReq_A */ 
ssSetInputPortDataType(S, 5, SS_BOOLEAN); 
ssSetInputPortWidth(S, 5, 1);
/* ADAS1.ADAS_LFCTranGain_A */ 
ssSetInputPortDataType(S, 6, SS_BOOLEAN); 
ssSetInputPortWidth(S, 6, 1);
/* ADAS1.ADAS_EPSMode */ 
ssSetInputPortDataType(S, 7, SS_UINT8); 
ssSetInputPortWidth(S, 7, 1);
/* ADAS1.ADAS_LKAStatus */ 
ssSetInputPortDataType(S, 8, SS_UINT8); 
ssSetInputPortWidth(S, 8, 1);
/* ADAS1.ADAS_LFCStatus */ 
ssSetInputPortDataType(S, 9, SS_UINT8); 
ssSetInputPortWidth(S, 9, 1);
/* ADAS1.ADAS_StrTqReq */ 
ssSetInputPortDataType(S, 10, SS_DOUBLE); 
ssSetInputPortWidth(S, 10, 1);
/* ADAS1.ADAS_LFCTransGain */ 
ssSetInputPortDataType(S, 11, SS_DOUBLE); 
ssSetInputPortWidth(S, 11, 1);
/* ADAS1.ADAS_StrAngReq */ 
ssSetInputPortDataType(S, 12, SS_DOUBLE); 
ssSetInputPortWidth(S, 12, 1);
/* ADAS2.ADAS2_Checksum */ 
ssSetInputPortDataType(S, 13, SS_UINT8); 
ssSetInputPortWidth(S, 13, 1);
/* ADAS2.ADAS2_LifeCount */ 
ssSetInputPortDataType(S, 14, SS_UINT8); 
ssSetInputPortWidth(S, 14, 1);
/* ADAS2.ADAS_VirtualGear */ 
ssSetInputPortDataType(S, 15, SS_UINT8); 
ssSetInputPortWidth(S, 15, 1);
/* ADAS2.ADAS_ACCStatus */ 
ssSetInputPortDataType(S, 16, SS_UINT8); 
ssSetInputPortWidth(S, 16, 1);
/* ADAS2.ADAS_BHapticReq */ 
ssSetInputPortDataType(S, 17, SS_BOOLEAN); 
ssSetInputPortWidth(S, 17, 1);
/* ADAS2.ADAS_VehHoldReq */ 
ssSetInputPortDataType(S, 18, SS_BOOLEAN); 
ssSetInputPortWidth(S, 18, 1);
/* ADAS2.ADAS_BPrefillReq_A */ 
ssSetInputPortDataType(S, 19, SS_BOOLEAN); 
ssSetInputPortWidth(S, 19, 1);
/* ADAS2.ADAS_BPrefillReq */ 
ssSetInputPortDataType(S, 20, SS_BOOLEAN); 
ssSetInputPortWidth(S, 20, 1);
/* ADAS2.ADAS_AEBReq_A */ 
ssSetInputPortDataType(S, 21, SS_BOOLEAN); 
ssSetInputPortWidth(S, 21, 1);
/* ADAS2.ADAS_AEBReq */ 
ssSetInputPortDataType(S, 22, SS_BOOLEAN); 
ssSetInputPortWidth(S, 22, 1);
/* ADAS2.ADAS_DecReq */ 
ssSetInputPortDataType(S, 23, SS_DOUBLE); 
ssSetInputPortWidth(S, 23, 1);
/* ADAS2.ADAS_ForceIdle_A */ 
ssSetInputPortDataType(S, 24, SS_BOOLEAN); 
ssSetInputPortWidth(S, 24, 1);
/* ADAS2.ADAS_DecReq_A */ 
ssSetInputPortDataType(S, 25, SS_BOOLEAN); 
ssSetInputPortWidth(S, 25, 1);
/* ADAS2.ADAS_PTTqReq_A */ 
ssSetInputPortDataType(S, 26, SS_BOOLEAN); 
ssSetInputPortWidth(S, 26, 1);
/* ADAS2.ADAS_ForceIdle */ 
ssSetInputPortDataType(S, 27, SS_BOOLEAN); 
ssSetInputPortWidth(S, 27, 1);
/* ADAS2.ADAS_PTTqReq */ 
ssSetInputPortDataType(S, 28, SS_DOUBLE); 
ssSetInputPortWidth(S, 28, 1);
/* ADAS3.ADAS3_Checksum */ 
ssSetInputPortDataType(S, 29, SS_UINT8); 
ssSetInputPortWidth(S, 29, 1);
/* ADAS3.ADAS3_LifeCount */ 
ssSetInputPortDataType(S, 30, SS_UINT8); 
ssSetInputPortWidth(S, 30, 1);
/* ADAS3.ADAS_ShftPosnReq_A */ 
ssSetInputPortDataType(S, 31, SS_BOOLEAN); 
ssSetInputPortWidth(S, 31, 1);
/* ADAS3.ADAS_ShftPosnReq */ 
ssSetInputPortDataType(S, 32, SS_UINT8); 
ssSetInputPortWidth(S, 32, 1);
/* ADAS3.ADAS_VehSpdLim_A */ 
ssSetInputPortDataType(S, 33, SS_BOOLEAN); 
ssSetInputPortWidth(S, 33, 1);
/* ADAS3.ADAS_GearPosnReq_A */ 
ssSetInputPortDataType(S, 34, SS_BOOLEAN); 
ssSetInputPortWidth(S, 34, 1);
/* ADAS3.ADAS_GearPosnReq */ 
ssSetInputPortDataType(S, 35, SS_UINT8); 
ssSetInputPortWidth(S, 35, 1);
/* ADAS3.ADAS_VehSpdLim */ 
ssSetInputPortDataType(S, 36, SS_UINT8); 
ssSetInputPortWidth(S, 36, 1);
/* ADAS4.ADAS_MIL */ 
ssSetInputPortDataType(S, 37, SS_BOOLEAN); 
ssSetInputPortWidth(S, 37, 1);
/* ADAS4.ADASFaultWarnReq */ 
ssSetInputPortDataType(S, 38, SS_BOOLEAN); 
ssSetInputPortWidth(S, 38, 1);
/* ADAS4.ForceLowBeam */ 
ssSetInputPortDataType(S, 39, SS_BOOLEAN); 
ssSetInputPortWidth(S, 39, 1);
/* ADAS4.OffSoundReq */ 
ssSetInputPortDataType(S, 40, SS_BOOLEAN); 
ssSetInputPortWidth(S, 40, 1);
/* ADAS4.OnSoundReq */ 
ssSetInputPortDataType(S, 41, SS_BOOLEAN); 
ssSetInputPortWidth(S, 41, 1);
/* ADAS4.LeftTurnLightReq */ 
ssSetInputPortDataType(S, 42, SS_BOOLEAN); 
ssSetInputPortWidth(S, 42, 1);
/* ADAS4.RightTurnLightReq */ 
ssSetInputPortDataType(S, 43, SS_BOOLEAN); 
ssSetInputPortWidth(S, 43, 1);
/* ADAS4.HazardWarningReq */ 
ssSetInputPortDataType(S, 44, SS_BOOLEAN); 
ssSetInputPortWidth(S, 44, 1);
/* ADAS4.HapticWarningReq */ 
ssSetInputPortDataType(S, 45, SS_BOOLEAN); 
ssSetInputPortWidth(S, 45, 1);
/* ADAS4.APSEnable */ 
ssSetInputPortDataType(S, 46, SS_BOOLEAN); 
ssSetInputPortWidth(S, 46, 1);
/* ADAS4.PilotMode */ 
ssSetInputPortDataType(S, 47, SS_UINT8); 
ssSetInputPortWidth(S, 47, 1);
/* ADAS4.IGSAStatus */ 
ssSetInputPortDataType(S, 48, SS_UINT8); 
ssSetInputPortWidth(S, 48, 1);
/* ADAS4.LFCMode */ 
ssSetInputPortDataType(S, 49, SS_UINT8); 
ssSetInputPortWidth(S, 49, 1);
/* ADAS4.MAPPStatus */ 
ssSetInputPortDataType(S, 50, SS_UINT8); 
ssSetInputPortWidth(S, 50, 1);
/* ADAS4.MAPAStatus */ 
ssSetInputPortDataType(S, 51, SS_UINT8); 
ssSetInputPortWidth(S, 51, 1);
/* ADAS4.LCSStatus */ 
ssSetInputPortDataType(S, 52, SS_UINT8); 
ssSetInputPortWidth(S, 52, 1);
/* ADAS4.LFCStatus */ 
ssSetInputPortDataType(S, 53, SS_UINT8); 
ssSetInputPortWidth(S, 53, 1);
/* ADAS4.LKAStatus */ 
ssSetInputPortDataType(S, 54, SS_UINT8); 
ssSetInputPortWidth(S, 54, 1);
/* ADAS4.ACCStatus */ 
ssSetInputPortDataType(S, 55, SS_UINT8); 
ssSetInputPortWidth(S, 55, 1);
/* ADAS4.FCWStatus */ 
ssSetInputPortDataType(S, 56, SS_UINT8); 
ssSetInputPortWidth(S, 56, 1);
/* ADAS4.AEBStatus */ 
ssSetInputPortDataType(S, 57, SS_UINT8); 
ssSetInputPortWidth(S, 57, 1);
/* ADAS4.MAPPHMIWarningReq */ 
ssSetInputPortDataType(S, 58, SS_UINT8); 
ssSetInputPortWidth(S, 58, 1);
/* ADAS4.MAPAHMIWarningReq */ 
ssSetInputPortDataType(S, 59, SS_UINT8); 
ssSetInputPortWidth(S, 59, 1);
/* ADAS4.LCSHMIWarningReq */ 
ssSetInputPortDataType(S, 60, SS_UINT8); 
ssSetInputPortWidth(S, 60, 1);
/* ADAS4.LFCHMIWarningReq */ 
ssSetInputPortDataType(S, 61, SS_BOOLEAN); 
ssSetInputPortWidth(S, 61, 1);
/* ADAS4.LKAHMIWarningReq */ 
ssSetInputPortDataType(S, 62, SS_BOOLEAN); 
ssSetInputPortWidth(S, 62, 1);
/* ADAS4.IGSAHMIWarningReq */ 
ssSetInputPortDataType(S, 63, SS_BOOLEAN); 
ssSetInputPortWidth(S, 63, 1);
/* ADAS4.AEBHMIWarningReq */ 
ssSetInputPortDataType(S, 64, SS_BOOLEAN); 
ssSetInputPortWidth(S, 64, 1);
/* ADAS4.ACCHMIWarningReq */ 
ssSetInputPortDataType(S, 65, SS_BOOLEAN); 
ssSetInputPortWidth(S, 65, 1);
/* ADAS4.FCWHMIWarningReq */ 
ssSetInputPortDataType(S, 66, SS_BOOLEAN); 
ssSetInputPortWidth(S, 66, 1);
/* ADAS5.ADAS_FaultMode */ 
ssSetInputPortDataType(S, 67, SS_UINT8); 
ssSetInputPortWidth(S, 67, 1);
/* ADAS5.NumOfTarget */ 
ssSetInputPortDataType(S, 68, SS_UINT8); 
ssSetInputPortWidth(S, 68, 1);
/* ADAS5.ADAS_LaneModeR */ 
ssSetInputPortDataType(S, 69, SS_UINT8); 
ssSetInputPortWidth(S, 69, 1);
/* ADAS5.ADAS_LaneModeL */ 
ssSetInputPortDataType(S, 70, SS_UINT8); 
ssSetInputPortWidth(S, 70, 1);
/* ADAS5.SeleTimeGapLvl */ 
ssSetInputPortDataType(S, 71, SS_UINT8); 
ssSetInputPortWidth(S, 71, 1);
/* ADAS5.SetTimeGapLvl */ 
ssSetInputPortDataType(S, 72, SS_UINT8); 
ssSetInputPortWidth(S, 72, 1);
/* ADAS5.IGSASetSpeed */ 
ssSetInputPortDataType(S, 73, SS_UINT8); 
ssSetInputPortWidth(S, 73, 1);
/* ADAS5.ACCSetSpeed */ 
ssSetInputPortDataType(S, 74, SS_UINT8); 
ssSetInputPortWidth(S, 74, 1);
/* ADAS5.SetVehTimeGap */ 
ssSetInputPortDataType(S, 75, SS_DOUBLE); 
ssSetInputPortWidth(S, 75, 1);
/* ADAS5.LeadVehTimeGap */ 
ssSetInputPortDataType(S, 76, SS_DOUBLE); 
ssSetInputPortWidth(S, 76, 1);
/* ADAS5.TargetType */ 
ssSetInputPortDataType(S, 77, SS_UINT8); 
ssSetInputPortWidth(S, 77, 1);
/* EPAS2.SAS_CheckSum2 */ 
ssSetInputPortDataType(S, 78, SS_UINT8); 
ssSetInputPortWidth(S, 78, 1);
/* EPAS2.SAS_MsgCount2 */ 
ssSetInputPortDataType(S, 79, SS_UINT8); 
ssSetInputPortWidth(S, 79, 1);
/* EPAS2.R_SAS_Angle */ 
ssSetInputPortDataType(S, 80, SS_DOUBLE); 
ssSetInputPortWidth(S, 80, 1);
/* EPAS2.Steering_Torque */ 
ssSetInputPortDataType(S, 81, SS_DOUBLE); 
ssSetInputPortWidth(S, 81, 1);
/* EPAS2.Steering_Torque_V */ 
ssSetInputPortDataType(S, 82, SS_BOOLEAN); 
ssSetInputPortWidth(S, 82, 1);
/* EPAS2.RSP_OK */ 
ssSetInputPortDataType(S, 83, SS_BOOLEAN); 
ssSetInputPortWidth(S, 83, 1);
/* EPAS2.EpasFailed */ 
ssSetInputPortDataType(S, 84, SS_BOOLEAN); 
ssSetInputPortWidth(S, 84, 1);
/* EPAS2.Elect_PWR_Consumpt */ 
ssSetInputPortDataType(S, 85, SS_DOUBLE); 
ssSetInputPortWidth(S, 85, 1);
/* EPAS3.EPAS3_Checksum */ 
ssSetInputPortDataType(S, 86, SS_UINT8); 
ssSetInputPortWidth(S, 86, 1);
/* EPAS3.EPAS3_LifeCount */ 
ssSetInputPortDataType(S, 87, SS_UINT8); 
ssSetInputPortWidth(S, 87, 1);
/* EPAS3.CurStrTqReq_A */ 
ssSetInputPortDataType(S, 88, SS_BOOLEAN); 
ssSetInputPortWidth(S, 88, 1);
/* EPAS3.CurStrAngReq_A */ 
ssSetInputPortDataType(S, 89, SS_BOOLEAN); 
ssSetInputPortWidth(S, 89, 1);
/* EPAS3.EPSLFCStatus */ 
ssSetInputPortDataType(S, 90, SS_UINT8); 
ssSetInputPortWidth(S, 90, 1);
/* EPAS3.EPSBattVolt */ 
ssSetInputPortDataType(S, 91, SS_DOUBLE); 
ssSetInputPortWidth(S, 91, 1);
/* EPAS3.CurStrTqReq */ 
ssSetInputPortDataType(S, 92, SS_DOUBLE); 
ssSetInputPortWidth(S, 92, 1);
/* EPAS3.EPSADASAbReason */ 
ssSetInputPortDataType(S, 93, SS_UINT8); 
ssSetInputPortWidth(S, 93, 1);
/* EPAS3.EPSLKAStatus */ 
ssSetInputPortDataType(S, 94, SS_UINT8); 
ssSetInputPortWidth(S, 94, 1);
/* EPAS3.CurStrAngReq */ 
ssSetInputPortDataType(S, 95, SS_DOUBLE); 
ssSetInputPortWidth(S, 95, 1);
/* SAS1.SAS_CheckSum */ 
ssSetInputPortDataType(S, 96, SS_UINT8); 
ssSetInputPortWidth(S, 96, 1);
/* SAS1.SAS_MsgCount */ 
ssSetInputPortDataType(S, 97, SS_UINT8); 
ssSetInputPortWidth(S, 97, 1);
/* SAS1.SAS_OK */ 
ssSetInputPortDataType(S, 98, SS_BOOLEAN); 
ssSetInputPortWidth(S, 98, 1);
/* SAS1.SAS_CAL */ 
ssSetInputPortDataType(S, 99, SS_BOOLEAN); 
ssSetInputPortWidth(S, 99, 1);
/* SAS1.SAS_Angle */ 
ssSetInputPortDataType(S, 100, SS_DOUBLE); 
ssSetInputPortWidth(S, 100, 1);
