/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_TX_PORT */
/*                                                                                                                           */
/*   AUTHOR(S):                                                                                                              */
/*      U. Homann                                                                                                              */
/*      M. Eikermann                                                                                                              */
/*                                                                                                                           */
/*                                                                                                                           */
/*   RTICANMM Date: 13-Mar-2014 10:38:34                                                                                     */
/*   RTICANMM Version: 3.0.735671.4434490741                                                                                     */
/*                                                                                                                           */
/*  (c) Copyright 2015, dSPACE GmbH. All rights reserved.                                                                    */
/*      Brand names or product names are trademarks or registered trademarks of their respective companies or organizations. */
/*                                                                                                                           */
/* ***************************************************************************************************************************/

/* ADAS1.ADAS1_Checksum */ 
ssSetInputPortDataType(S, 0, SS_UINT8); 
ssSetInputPortWidth(S, 0, 1);
/* ADAS1.ADAS1_LifeCount */ 
ssSetInputPortDataType(S, 1, SS_UINT8); 
ssSetInputPortWidth(S, 1, 1);
/* ADAS1.ADAS_StrTqReq_A */ 
ssSetInputPortDataType(S, 2, SS_BOOLEAN); 
ssSetInputPortWidth(S, 2, 1);
/* ADAS1.ADAS_StrAngReq_A */ 
ssSetInputPortDataType(S, 3, SS_BOOLEAN); 
ssSetInputPortWidth(S, 3, 1);
/* ADAS1.ADAS_EPSMode */ 
ssSetInputPortDataType(S, 4, SS_UINT8); 
ssSetInputPortWidth(S, 4, 1);
/* ADAS1.ADAS_StrTqReqProt */ 
ssSetInputPortDataType(S, 5, SS_UINT8); 
ssSetInputPortWidth(S, 5, 1);
/* ADAS1.ADAS_StrTqReq */ 
ssSetInputPortDataType(S, 6, SS_DOUBLE); 
ssSetInputPortWidth(S, 6, 1);
/* ADAS1.ADAS_StrAngReqProt */ 
ssSetInputPortDataType(S, 7, SS_UINT16); 
ssSetInputPortWidth(S, 7, 1);
/* ADAS1.ADAS_StrAngReq */ 
ssSetInputPortDataType(S, 8, SS_DOUBLE); 
ssSetInputPortWidth(S, 8, 1);
/* ADAS2.ADAS2_Checksum */ 
ssSetInputPortDataType(S, 9, SS_UINT8); 
ssSetInputPortWidth(S, 9, 1);
/* ADAS2.ADAS2_LifeCount */ 
ssSetInputPortDataType(S, 10, SS_UINT8); 
ssSetInputPortWidth(S, 10, 1);
/* ADAS2.ADAS_VehHoldReq */ 
ssSetInputPortDataType(S, 11, SS_BOOLEAN); 
ssSetInputPortWidth(S, 11, 1);
/* ADAS2.ADAS_BrakePrefillReq_A */ 
ssSetInputPortDataType(S, 12, SS_BOOLEAN); 
ssSetInputPortWidth(S, 12, 1);
/* ADAS2.ADAS_BrakePrefillReq */ 
ssSetInputPortDataType(S, 13, SS_BOOLEAN); 
ssSetInputPortWidth(S, 13, 1);
/* ADAS2.ADAS_AEBReq_A */ 
ssSetInputPortDataType(S, 14, SS_BOOLEAN); 
ssSetInputPortWidth(S, 14, 1);
/* ADAS2.ADAS_AEBReq */ 
ssSetInputPortDataType(S, 15, SS_BOOLEAN); 
ssSetInputPortWidth(S, 15, 1);
/* ADAS2.ADAS_ForceIdle_A */ 
ssSetInputPortDataType(S, 16, SS_BOOLEAN); 
ssSetInputPortWidth(S, 16, 1);
/* ADAS2.ADAS_DecReq_Prot */ 
ssSetInputPortDataType(S, 17, SS_UINT8); 
ssSetInputPortWidth(S, 17, 1);
/* ADAS2.ADAS_DecReq */ 
ssSetInputPortDataType(S, 18, SS_DOUBLE); 
ssSetInputPortWidth(S, 18, 1);
/* ADAS2.ADAS_DecReq_A */ 
ssSetInputPortDataType(S, 19, SS_BOOLEAN); 
ssSetInputPortWidth(S, 19, 1);
/* ADAS2.ADAS_TqReq_A */ 
ssSetInputPortDataType(S, 20, SS_BOOLEAN); 
ssSetInputPortWidth(S, 20, 1);
/* ADAS2.ADAS_ForceIdle */ 
ssSetInputPortDataType(S, 21, SS_BOOLEAN); 
ssSetInputPortWidth(S, 21, 1);
/* ADAS2.ADAS_TqReqProt */ 
ssSetInputPortDataType(S, 22, SS_UINT16); 
ssSetInputPortWidth(S, 22, 1);
/* ADAS2.ADAS_TqReq */ 
ssSetInputPortDataType(S, 23, SS_DOUBLE); 
ssSetInputPortWidth(S, 23, 1);
/* ADAS3.ADAS3_Checksum */ 
ssSetInputPortDataType(S, 24, SS_UINT8); 
ssSetInputPortWidth(S, 24, 1);
/* ADAS3.ADAS3_LifeCount */ 
ssSetInputPortDataType(S, 25, SS_UINT8); 
ssSetInputPortWidth(S, 25, 1);
/* ADAS3.ForceLowBeam */ 
ssSetInputPortDataType(S, 26, SS_BOOLEAN); 
ssSetInputPortWidth(S, 26, 1);
/* ADAS3.LeftTurnLightReq */ 
ssSetInputPortDataType(S, 27, SS_BOOLEAN); 
ssSetInputPortWidth(S, 27, 1);
/* ADAS3.RightTurnLightReq */ 
ssSetInputPortDataType(S, 28, SS_BOOLEAN); 
ssSetInputPortWidth(S, 28, 1);
/* ADAS3.HazardWarningReq */ 
ssSetInputPortDataType(S, 29, SS_BOOLEAN); 
ssSetInputPortWidth(S, 29, 1);
/* ADAS3.ADAS_MIL */ 
ssSetInputPortDataType(S, 30, SS_BOOLEAN); 
ssSetInputPortWidth(S, 30, 1);
/* ADAS3.RampDownEnable */ 
ssSetInputPortDataType(S, 31, SS_BOOLEAN); 
ssSetInputPortWidth(S, 31, 1);
/* ADAS3.RampDownTime */ 
ssSetInputPortDataType(S, 32, SS_DOUBLE); 
ssSetInputPortWidth(S, 32, 1);
/* ADAS3.ADAS_ShftPosnReq_A */ 
ssSetInputPortDataType(S, 33, SS_BOOLEAN); 
ssSetInputPortWidth(S, 33, 1);
/* ADAS3.ADAS_ShftPosnReq */ 
ssSetInputPortDataType(S, 34, SS_UINT8); 
ssSetInputPortWidth(S, 34, 1);
/* ADAS3.ADAS_VehSpdLim_A */ 
ssSetInputPortDataType(S, 35, SS_BOOLEAN); 
ssSetInputPortWidth(S, 35, 1);
/* ADAS3.ADAS_GearPosnReq_A */ 
ssSetInputPortDataType(S, 36, SS_BOOLEAN); 
ssSetInputPortWidth(S, 36, 1);
/* ADAS3.ADAS_GearPosnReq */ 
ssSetInputPortDataType(S, 37, SS_UINT8); 
ssSetInputPortWidth(S, 37, 1);
/* ADAS3.ADAS_VehSpdLim */ 
ssSetInputPortDataType(S, 38, SS_UINT8); 
ssSetInputPortWidth(S, 38, 1);
/* ADAS4.ADASFaultWarningReq */ 
ssSetInputPortDataType(S, 39, SS_BOOLEAN); 
ssSetInputPortWidth(S, 39, 1);
/* ADAS4.HapticWarningReq */ 
ssSetInputPortDataType(S, 40, SS_BOOLEAN); 
ssSetInputPortWidth(S, 40, 1);
/* ADAS4.ADAS_APSEnable */ 
ssSetInputPortDataType(S, 41, SS_BOOLEAN); 
ssSetInputPortWidth(S, 41, 1);
/* ADAS4.ADAS_PilotMode */ 
ssSetInputPortDataType(S, 42, SS_UINT8); 
ssSetInputPortWidth(S, 42, 1);
/* ADAS4.ADAS_IGSAStatus */ 
ssSetInputPortDataType(S, 43, SS_UINT8); 
ssSetInputPortWidth(S, 43, 1);
/* ADAS4.ADAS_LFCMode */ 
ssSetInputPortDataType(S, 44, SS_UINT8); 
ssSetInputPortWidth(S, 44, 1);
/* ADAS4.ADAS_MAPPStatus */ 
ssSetInputPortDataType(S, 45, SS_UINT8); 
ssSetInputPortWidth(S, 45, 1);
/* ADAS4.ADAS_MAPAStatus */ 
ssSetInputPortDataType(S, 46, SS_UINT8); 
ssSetInputPortWidth(S, 46, 1);
/* ADAS4.ADAS_LCSStatus */ 
ssSetInputPortDataType(S, 47, SS_UINT8); 
ssSetInputPortWidth(S, 47, 1);
/* ADAS4.ADAS_LFCStatus */ 
ssSetInputPortDataType(S, 48, SS_UINT8); 
ssSetInputPortWidth(S, 48, 1);
/* ADAS4.ADAS_LKAStatus */ 
ssSetInputPortDataType(S, 49, SS_UINT8); 
ssSetInputPortWidth(S, 49, 1);
/* ADAS4.ADAS_ACCStatus */ 
ssSetInputPortDataType(S, 50, SS_UINT8); 
ssSetInputPortWidth(S, 50, 1);
/* ADAS4.ADAS_FCWStatus */ 
ssSetInputPortDataType(S, 51, SS_UINT8); 
ssSetInputPortWidth(S, 51, 1);
/* ADAS4.ADAS_AEBStatus */ 
ssSetInputPortDataType(S, 52, SS_UINT8); 
ssSetInputPortWidth(S, 52, 1);
/* ADAS4.MAPPHMIWarningReq */ 
ssSetInputPortDataType(S, 53, SS_UINT8); 
ssSetInputPortWidth(S, 53, 1);
/* ADAS4.MAPAHMIWarningReq */ 
ssSetInputPortDataType(S, 54, SS_UINT8); 
ssSetInputPortWidth(S, 54, 1);
/* ADAS4.LCSHMIWarningReq */ 
ssSetInputPortDataType(S, 55, SS_UINT8); 
ssSetInputPortWidth(S, 55, 1);
/* ADAS4.LFCHMIWarningReq */ 
ssSetInputPortDataType(S, 56, SS_UINT8); 
ssSetInputPortWidth(S, 56, 1);
/* ADAS4.LKAHMIWarningReq */ 
ssSetInputPortDataType(S, 57, SS_UINT8); 
ssSetInputPortWidth(S, 57, 1);
/* ADAS4.IGSAHMIWarningReq */ 
ssSetInputPortDataType(S, 58, SS_BOOLEAN); 
ssSetInputPortWidth(S, 58, 1);
/* ADAS4.AEBHMIWarningReq */ 
ssSetInputPortDataType(S, 59, SS_BOOLEAN); 
ssSetInputPortWidth(S, 59, 1);
/* ADAS4.ACCHMIWarningReq */ 
ssSetInputPortDataType(S, 60, SS_BOOLEAN); 
ssSetInputPortWidth(S, 60, 1);
/* ADAS4.FCWHMIWarningReq */ 
ssSetInputPortDataType(S, 61, SS_BOOLEAN); 
ssSetInputPortWidth(S, 61, 1);
/* ADAS5.ADAS_FaultMode */ 
ssSetInputPortDataType(S, 62, SS_UINT8); 
ssSetInputPortWidth(S, 62, 1);
/* ADAS5.ADAS_LaneModeR */ 
ssSetInputPortDataType(S, 63, SS_UINT8); 
ssSetInputPortWidth(S, 63, 1);
/* ADAS5.ADAS_LaneModeL */ 
ssSetInputPortDataType(S, 64, SS_UINT8); 
ssSetInputPortWidth(S, 64, 1);
/* ADAS5.SeleTimeGapLvl */ 
ssSetInputPortDataType(S, 65, SS_UINT8); 
ssSetInputPortWidth(S, 65, 1);
/* ADAS5.SetTimeGapLvl */ 
ssSetInputPortDataType(S, 66, SS_UINT8); 
ssSetInputPortWidth(S, 66, 1);
/* ADAS5.IGSASetSpeed */ 
ssSetInputPortDataType(S, 67, SS_UINT8); 
ssSetInputPortWidth(S, 67, 1);
/* ADAS5.ACCSetSpeed */ 
ssSetInputPortDataType(S, 68, SS_UINT8); 
ssSetInputPortWidth(S, 68, 1);
/* ADAS5.SetVehTimeGap */ 
ssSetInputPortDataType(S, 69, SS_DOUBLE); 
ssSetInputPortWidth(S, 69, 1);
/* ADAS5.LeadVehTimeGap */ 
ssSetInputPortDataType(S, 70, SS_DOUBLE); 
ssSetInputPortWidth(S, 70, 1);
/* ADAS5.TargetType */ 
ssSetInputPortDataType(S, 71, SS_UINT8); 
ssSetInputPortWidth(S, 71, 1);
