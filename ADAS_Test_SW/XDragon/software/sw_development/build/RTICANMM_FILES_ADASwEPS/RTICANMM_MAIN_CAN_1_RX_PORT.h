/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_RX_PORT */
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

/* ABS1.BoosterVac */ 
ssSetOutputPortDataType(S, 0, SS_DOUBLE); 
ssSetOutputPortWidth(S, 0, 1); 
/* ABS1.GRADE */ 
ssSetOutputPortDataType(S, 1, SS_DOUBLE); 
ssSetOutputPortWidth(S, 1, 1); 
/* ABS1.BoosterVac_Sta */ 
ssSetOutputPortDataType(S, 2, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 2, 1); 
/* ABS1.BoosterVac_V */ 
ssSetOutputPortDataType(S, 3, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 3, 1); 
/* ABS1.GRADE_V */ 
ssSetOutputPortDataType(S, 4, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 4, 1); 
/* ABS1.TCSReqVal_V */ 
ssSetOutputPortDataType(S, 5, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 5, 1); 
/* ABS1.TCSReqStrat */ 
ssSetOutputPortDataType(S, 6, SS_UINT8); 
ssSetOutputPortWidth(S, 6, 1); 
/* ABS1.TCSRollCnt */ 
ssSetOutputPortDataType(S, 7, SS_UINT8); 
ssSetOutputPortWidth(S, 7, 1); 
/* ABS1.TCSReqProt */ 
ssSetOutputPortDataType(S, 8, SS_UINT16); 
ssSetOutputPortWidth(S, 8, 1); 
/* ABS1.TCSReqVal */ 
ssSetOutputPortDataType(S, 9, SS_DOUBLE); 
ssSetOutputPortWidth(S, 9, 1); 
/* ABS1 RX_STATUS */ 
ssSetOutputPortDataType(S, 10, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 10, 1); 
/* ABS1 time */ 
ssSetOutputPortDataType(S, 11, SS_DOUBLE); 
ssSetOutputPortWidth(S, 11, 1); 
/* ABS1 deltatime */ 
ssSetOutputPortDataType(S, 12, SS_DOUBLE); 
ssSetOutputPortWidth(S, 12, 1); 
/* ABS10 RAW DATA */ 
ssSetOutputPortDataType(S, 13, SS_UINT8); 
ssSetOutputPortWidth(S, 13, 1); 
/* ABS11 RAW DATA */ 
ssSetOutputPortDataType(S, 14, SS_UINT8); 
ssSetOutputPortWidth(S, 14, 1); 
/* ABS12 RAW DATA */ 
ssSetOutputPortDataType(S, 15, SS_UINT8); 
ssSetOutputPortWidth(S, 15, 1); 
/* ABS13 RAW DATA */ 
ssSetOutputPortDataType(S, 16, SS_UINT8); 
ssSetOutputPortWidth(S, 16, 1); 
/* ABS14 RAW DATA */ 
ssSetOutputPortDataType(S, 17, SS_UINT8); 
ssSetOutputPortWidth(S, 17, 1); 
/* ABS15 RAW DATA */ 
ssSetOutputPortDataType(S, 18, SS_UINT8); 
ssSetOutputPortWidth(S, 18, 1); 
/* ABS16 RAW DATA */ 
ssSetOutputPortDataType(S, 19, SS_UINT8); 
ssSetOutputPortWidth(S, 19, 1); 
/* ABS17 RAW DATA */ 
ssSetOutputPortDataType(S, 20, SS_UINT8); 
ssSetOutputPortWidth(S, 20, 1); 
/* ABS2.VehSpeed_Checksum */ 
ssSetOutputPortDataType(S, 21, SS_UINT8); 
ssSetOutputPortWidth(S, 21, 1); 
/* ABS2.VehSpeed_LifeCount */ 
ssSetOutputPortDataType(S, 22, SS_UINT8); 
ssSetOutputPortWidth(S, 22, 1); 
/* ABS2.HSA_Failed */ 
ssSetOutputPortDataType(S, 23, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 23, 1); 
/* ABS2.HSA_Active */ 
ssSetOutputPortDataType(S, 24, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 24, 1); 
/* ABS2.BrkSw_Sta */ 
ssSetOutputPortDataType(S, 25, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 25, 1); 
/* ABS2.BrkSw_V */ 
ssSetOutputPortDataType(S, 26, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 26, 1); 
/* ABS2.EBD_Failed */ 
ssSetOutputPortDataType(S, 27, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 27, 1); 
/* ABS2.TCS_Enabled */ 
ssSetOutputPortDataType(S, 28, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 28, 1); 
/* ABS2.TCS_Failed */ 
ssSetOutputPortDataType(S, 29, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 29, 1); 
/* ABS2.ESC_Failed */ 
ssSetOutputPortDataType(S, 30, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 30, 1); 
/* ABS2.ABS_Failed */ 
ssSetOutputPortDataType(S, 31, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 31, 1); 
/* ABS2.TCS_Active */ 
ssSetOutputPortDataType(S, 32, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 32, 1); 
/* ABS2.ESC_Active */ 
ssSetOutputPortDataType(S, 33, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 33, 1); 
/* ABS2.ABS_Active */ 
ssSetOutputPortDataType(S, 34, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 34, 1); 
/* ABS2.VehSpeed */ 
ssSetOutputPortDataType(S, 35, SS_DOUBLE); 
ssSetOutputPortWidth(S, 35, 1); 
/* ABS2 RX_STATUS */ 
ssSetOutputPortDataType(S, 36, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 36, 1); 
/* ABS2 time */ 
ssSetOutputPortDataType(S, 37, SS_DOUBLE); 
ssSetOutputPortWidth(S, 37, 1); 
/* ABS2 deltatime */ 
ssSetOutputPortDataType(S, 38, SS_DOUBLE); 
ssSetOutputPortWidth(S, 38, 1); 
/* ABS20 RAW DATA */ 
ssSetOutputPortDataType(S, 39, SS_UINT8); 
ssSetOutputPortWidth(S, 39, 1); 
/* ABS21 RAW DATA */ 
ssSetOutputPortDataType(S, 40, SS_UINT8); 
ssSetOutputPortWidth(S, 40, 1); 
/* ABS22 RAW DATA */ 
ssSetOutputPortDataType(S, 41, SS_UINT8); 
ssSetOutputPortWidth(S, 41, 1); 
/* ABS23 RAW DATA */ 
ssSetOutputPortDataType(S, 42, SS_UINT8); 
ssSetOutputPortWidth(S, 42, 1); 
/* ABS24 RAW DATA */ 
ssSetOutputPortDataType(S, 43, SS_UINT8); 
ssSetOutputPortWidth(S, 43, 1); 
/* ABS25 RAW DATA */ 
ssSetOutputPortDataType(S, 44, SS_UINT8); 
ssSetOutputPortWidth(S, 44, 1); 
/* ABS26 RAW DATA */ 
ssSetOutputPortDataType(S, 45, SS_UINT8); 
ssSetOutputPortWidth(S, 45, 1); 
/* ABS27 RAW DATA */ 
ssSetOutputPortDataType(S, 46, SS_UINT8); 
ssSetOutputPortWidth(S, 46, 1); 
/* ABS3.LF_RawWhlSpeed_V */ 
ssSetOutputPortDataType(S, 47, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 47, 1); 
/* ABS3.LF_RawWhlSpeed */ 
ssSetOutputPortDataType(S, 48, SS_DOUBLE); 
ssSetOutputPortWidth(S, 48, 1); 
/* ABS3.RF_RawWhlSpeed_V */ 
ssSetOutputPortDataType(S, 49, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 49, 1); 
/* ABS3.RF_RawWhlSpeed */ 
ssSetOutputPortDataType(S, 50, SS_DOUBLE); 
ssSetOutputPortWidth(S, 50, 1); 
/* ABS3.LR_RawWhlSpeed_V */ 
ssSetOutputPortDataType(S, 51, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 51, 1); 
/* ABS3.LR_RawWhlSpeed */ 
ssSetOutputPortDataType(S, 52, SS_DOUBLE); 
ssSetOutputPortWidth(S, 52, 1); 
/* ABS3.RR_RawWhlSpeed_V */ 
ssSetOutputPortDataType(S, 53, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 53, 1); 
/* ABS3.RR_RawWhlSpeed */ 
ssSetOutputPortDataType(S, 54, SS_DOUBLE); 
ssSetOutputPortWidth(S, 54, 1); 
/* ABS3 RX_STATUS */ 
ssSetOutputPortDataType(S, 55, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 55, 1); 
/* ABS3 time */ 
ssSetOutputPortDataType(S, 56, SS_DOUBLE); 
ssSetOutputPortWidth(S, 56, 1); 
/* ABS3 deltatime */ 
ssSetOutputPortDataType(S, 57, SS_DOUBLE); 
ssSetOutputPortWidth(S, 57, 1); 
/* ABS30 RAW DATA */ 
ssSetOutputPortDataType(S, 58, SS_UINT8); 
ssSetOutputPortWidth(S, 58, 1); 
/* ABS31 RAW DATA */ 
ssSetOutputPortDataType(S, 59, SS_UINT8); 
ssSetOutputPortWidth(S, 59, 1); 
/* ABS32 RAW DATA */ 
ssSetOutputPortDataType(S, 60, SS_UINT8); 
ssSetOutputPortWidth(S, 60, 1); 
/* ABS33 RAW DATA */ 
ssSetOutputPortDataType(S, 61, SS_UINT8); 
ssSetOutputPortWidth(S, 61, 1); 
/* ABS34 RAW DATA */ 
ssSetOutputPortDataType(S, 62, SS_UINT8); 
ssSetOutputPortWidth(S, 62, 1); 
/* ABS35 RAW DATA */ 
ssSetOutputPortDataType(S, 63, SS_UINT8); 
ssSetOutputPortWidth(S, 63, 1); 
/* ABS36 RAW DATA */ 
ssSetOutputPortDataType(S, 64, SS_UINT8); 
ssSetOutputPortWidth(S, 64, 1); 
/* ABS37 RAW DATA */ 
ssSetOutputPortDataType(S, 65, SS_UINT8); 
ssSetOutputPortWidth(S, 65, 1); 
/* ABS4.LongAccel */ 
ssSetOutputPortDataType(S, 66, SS_DOUBLE); 
ssSetOutputPortWidth(S, 66, 1); 
/* ABS4.YawRate */ 
ssSetOutputPortDataType(S, 67, SS_DOUBLE); 
ssSetOutputPortWidth(S, 67, 1); 
/* ABS4.LatAccel */ 
ssSetOutputPortDataType(S, 68, SS_DOUBLE); 
ssSetOutputPortWidth(S, 68, 1); 
/* ABS4.MCPressure */ 
ssSetOutputPortDataType(S, 69, SS_DOUBLE); 
ssSetOutputPortWidth(S, 69, 1); 
/* ABS4.MCPressure_V */ 
ssSetOutputPortDataType(S, 70, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 70, 1); 
/* ABS4.LongAccel_V */ 
ssSetOutputPortDataType(S, 71, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 71, 1); 
/* ABS4.LatAccel_V */ 
ssSetOutputPortDataType(S, 72, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 72, 1); 
/* ABS4.YawRate_V */ 
ssSetOutputPortDataType(S, 73, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 73, 1); 
/* ABS4 RX_STATUS */ 
ssSetOutputPortDataType(S, 74, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 74, 1); 
/* ABS4 time */ 
ssSetOutputPortDataType(S, 75, SS_DOUBLE); 
ssSetOutputPortWidth(S, 75, 1); 
/* ABS4 deltatime */ 
ssSetOutputPortDataType(S, 76, SS_DOUBLE); 
ssSetOutputPortWidth(S, 76, 1); 
/* ABS40 RAW DATA */ 
ssSetOutputPortDataType(S, 77, SS_UINT8); 
ssSetOutputPortWidth(S, 77, 1); 
/* ABS41 RAW DATA */ 
ssSetOutputPortDataType(S, 78, SS_UINT8); 
ssSetOutputPortWidth(S, 78, 1); 
/* ABS42 RAW DATA */ 
ssSetOutputPortDataType(S, 79, SS_UINT8); 
ssSetOutputPortWidth(S, 79, 1); 
/* ABS43 RAW DATA */ 
ssSetOutputPortDataType(S, 80, SS_UINT8); 
ssSetOutputPortWidth(S, 80, 1); 
/* ABS44 RAW DATA */ 
ssSetOutputPortDataType(S, 81, SS_UINT8); 
ssSetOutputPortWidth(S, 81, 1); 
/* ABS45 RAW DATA */ 
ssSetOutputPortDataType(S, 82, SS_UINT8); 
ssSetOutputPortWidth(S, 82, 1); 
/* ABS46 RAW DATA */ 
ssSetOutputPortDataType(S, 83, SS_UINT8); 
ssSetOutputPortWidth(S, 83, 1); 
/* ABS47 RAW DATA */ 
ssSetOutputPortDataType(S, 84, SS_UINT8); 
ssSetOutputPortWidth(S, 84, 1); 
/* AC1.Sta_Out_Temp */ 
ssSetOutputPortDataType(S, 85, SS_INT16); 
ssSetOutputPortWidth(S, 85, 1); 
/* AC1 RX_STATUS */ 
ssSetOutputPortDataType(S, 86, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 86, 1); 
/* AC1 time */ 
ssSetOutputPortDataType(S, 87, SS_DOUBLE); 
ssSetOutputPortWidth(S, 87, 1); 
/* AC1 deltatime */ 
ssSetOutputPortDataType(S, 88, SS_DOUBLE); 
ssSetOutputPortWidth(S, 88, 1); 
/* AC10 RAW DATA */ 
ssSetOutputPortDataType(S, 89, SS_UINT8); 
ssSetOutputPortWidth(S, 89, 1); 
/* AC11 RAW DATA */ 
ssSetOutputPortDataType(S, 90, SS_UINT8); 
ssSetOutputPortWidth(S, 90, 1); 
/* AC12 RAW DATA */ 
ssSetOutputPortDataType(S, 91, SS_UINT8); 
ssSetOutputPortWidth(S, 91, 1); 
/* AC13 RAW DATA */ 
ssSetOutputPortDataType(S, 92, SS_UINT8); 
ssSetOutputPortWidth(S, 92, 1); 
/* AC14 RAW DATA */ 
ssSetOutputPortDataType(S, 93, SS_UINT8); 
ssSetOutputPortWidth(S, 93, 1); 
/* AC15 RAW DATA */ 
ssSetOutputPortDataType(S, 94, SS_UINT8); 
ssSetOutputPortWidth(S, 94, 1); 
/* AC16 RAW DATA */ 
ssSetOutputPortDataType(S, 95, SS_UINT8); 
ssSetOutputPortWidth(S, 95, 1); 
/* AC17 RAW DATA */ 
ssSetOutputPortDataType(S, 96, SS_UINT8); 
ssSetOutputPortWidth(S, 96, 1); 
/* ADAS1.ADAS1_Checksum */ 
ssSetOutputPortDataType(S, 97, SS_UINT8); 
ssSetOutputPortWidth(S, 97, 1); 
/* ADAS1.ADAS1_LifeCount */ 
ssSetOutputPortDataType(S, 98, SS_UINT8); 
ssSetOutputPortWidth(S, 98, 1); 
/* ADAS1.ADAS_TqRatio */ 
ssSetOutputPortDataType(S, 99, SS_UINT8); 
ssSetOutputPortWidth(S, 99, 1); 
/* ADAS1.ADAS_StrTqReq_A */ 
ssSetOutputPortDataType(S, 100, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 100, 1); 
/* ADAS1.ADAS_StrAngReq_A */ 
ssSetOutputPortDataType(S, 101, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 101, 1); 
/* ADAS1.ADAS_LFCTranGain_A */ 
ssSetOutputPortDataType(S, 102, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 102, 1); 
/* ADAS1.ADAS_EPSMode */ 
ssSetOutputPortDataType(S, 103, SS_UINT8); 
ssSetOutputPortWidth(S, 103, 1); 
/* ADAS1.ADAS_LKAStatus */ 
ssSetOutputPortDataType(S, 104, SS_UINT8); 
ssSetOutputPortWidth(S, 104, 1); 
/* ADAS1.ADAS_LFCStatus */ 
ssSetOutputPortDataType(S, 105, SS_UINT8); 
ssSetOutputPortWidth(S, 105, 1); 
/* ADAS1.ADAS_StrTqReq */ 
ssSetOutputPortDataType(S, 106, SS_DOUBLE); 
ssSetOutputPortWidth(S, 106, 1); 
/* ADAS1.ADAS_LFCTransGain */ 
ssSetOutputPortDataType(S, 107, SS_DOUBLE); 
ssSetOutputPortWidth(S, 107, 1); 
/* ADAS1.ADAS_StrAngReq */ 
ssSetOutputPortDataType(S, 108, SS_DOUBLE); 
ssSetOutputPortWidth(S, 108, 1); 
/* BCM1.BCM_Hazard_Sta */ 
ssSetOutputPortDataType(S, 109, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 109, 1); 
/* BCM1.BCM_LRDrSw_Sta */ 
ssSetOutputPortDataType(S, 110, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 110, 1); 
/* BCM1.BCM_RRDrSw_Sta */ 
ssSetOutputPortDataType(S, 111, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 111, 1); 
/* BCM1.BCM_TGateSw_Sta */ 
ssSetOutputPortDataType(S, 112, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 112, 1); 
/* BCM1.BCM_RTurnLp_Sta */ 
ssSetOutputPortDataType(S, 113, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 113, 1); 
/* BCM1.BCM_LTurnLp_Sta */ 
ssSetOutputPortDataType(S, 114, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 114, 1); 
/* BCM1.BCM_AllDrSw_Sta */ 
ssSetOutputPortDataType(S, 115, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 115, 1); 
/* BCM1.BCM_PDrSw_Sta */ 
ssSetOutputPortDataType(S, 116, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 116, 1); 
/* BCM1.BCM_DDrSw_Sta */ 
ssSetOutputPortDataType(S, 117, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 117, 1); 
/* BCM1.BCM_Key_Sta */ 
ssSetOutputPortDataType(S, 118, SS_UINT8); 
ssSetOutputPortWidth(S, 118, 1); 
/* BCM1 RX_STATUS */ 
ssSetOutputPortDataType(S, 119, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 119, 1); 
/* BCM1 time */ 
ssSetOutputPortDataType(S, 120, SS_DOUBLE); 
ssSetOutputPortWidth(S, 120, 1); 
/* BCM1 deltatime */ 
ssSetOutputPortDataType(S, 121, SS_DOUBLE); 
ssSetOutputPortWidth(S, 121, 1); 
/* BCM10 RAW DATA */ 
ssSetOutputPortDataType(S, 122, SS_UINT8); 
ssSetOutputPortWidth(S, 122, 1); 
/* BCM11 RAW DATA */ 
ssSetOutputPortDataType(S, 123, SS_UINT8); 
ssSetOutputPortWidth(S, 123, 1); 
/* BCM12 RAW DATA */ 
ssSetOutputPortDataType(S, 124, SS_UINT8); 
ssSetOutputPortWidth(S, 124, 1); 
/* BCM13 RAW DATA */ 
ssSetOutputPortDataType(S, 125, SS_UINT8); 
ssSetOutputPortWidth(S, 125, 1); 
/* BCM14 RAW DATA */ 
ssSetOutputPortDataType(S, 126, SS_UINT8); 
ssSetOutputPortWidth(S, 126, 1); 
/* BCM15 RAW DATA */ 
ssSetOutputPortDataType(S, 127, SS_UINT8); 
ssSetOutputPortWidth(S, 127, 1); 
/* BCM16 RAW DATA */ 
ssSetOutputPortDataType(S, 128, SS_UINT8); 
ssSetOutputPortWidth(S, 128, 1); 
/* BCM17 RAW DATA */ 
ssSetOutputPortDataType(S, 129, SS_UINT8); 
ssSetOutputPortWidth(S, 129, 1); 
/* BCM2.BCM_SRS_Crash_Info */ 
ssSetOutputPortDataType(S, 130, SS_UINT8); 
ssSetOutputPortWidth(S, 130, 1); 
/* BCM2 RX_STATUS */ 
ssSetOutputPortDataType(S, 131, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 131, 1); 
/* BCM2 time */ 
ssSetOutputPortDataType(S, 132, SS_DOUBLE); 
ssSetOutputPortWidth(S, 132, 1); 
/* BCM2 deltatime */ 
ssSetOutputPortDataType(S, 133, SS_DOUBLE); 
ssSetOutputPortWidth(S, 133, 1); 
/* BCM20 RAW DATA */ 
ssSetOutputPortDataType(S, 134, SS_UINT8); 
ssSetOutputPortWidth(S, 134, 1); 
/* BCM21 RAW DATA */ 
ssSetOutputPortDataType(S, 135, SS_UINT8); 
ssSetOutputPortWidth(S, 135, 1); 
/* BCM22 RAW DATA */ 
ssSetOutputPortDataType(S, 136, SS_UINT8); 
ssSetOutputPortWidth(S, 136, 1); 
/* BCM23 RAW DATA */ 
ssSetOutputPortDataType(S, 137, SS_UINT8); 
ssSetOutputPortWidth(S, 137, 1); 
/* BCM24 RAW DATA */ 
ssSetOutputPortDataType(S, 138, SS_UINT8); 
ssSetOutputPortWidth(S, 138, 1); 
/* BCM25 RAW DATA */ 
ssSetOutputPortDataType(S, 139, SS_UINT8); 
ssSetOutputPortWidth(S, 139, 1); 
/* BCM26 RAW DATA */ 
ssSetOutputPortDataType(S, 140, SS_UINT8); 
ssSetOutputPortWidth(S, 140, 1); 
/* BCM27 RAW DATA */ 
ssSetOutputPortDataType(S, 141, SS_UINT8); 
ssSetOutputPortWidth(S, 141, 1); 
/* CSW1.CSW_RFogLpSw_Sta */ 
ssSetOutputPortDataType(S, 142, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 142, 1); 
/* CSW1.CSW_FWipSw_Sta */ 
ssSetOutputPortDataType(S, 143, SS_UINT8); 
ssSetOutputPortWidth(S, 143, 1); 
/* CSW1.CSW_DimSw_Sta */ 
ssSetOutputPortDataType(S, 144, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 144, 1); 
/* ECM1.CAN_TQFR */ 
ssSetOutputPortDataType(S, 145, SS_DOUBLE); 
ssSetOutputPortWidth(S, 145, 1); 
/* ECM1.CAN_TQI */ 
ssSetOutputPortDataType(S, 146, SS_DOUBLE); 
ssSetOutputPortWidth(S, 146, 1); 
/* ECM1.CAN_N */ 
ssSetOutputPortDataType(S, 147, SS_DOUBLE); 
ssSetOutputPortWidth(S, 147, 1); 
/* ECM1.CAN_TQI_ACOR */ 
ssSetOutputPortDataType(S, 148, SS_DOUBLE); 
ssSetOutputPortWidth(S, 148, 1); 
/* ECM1.LV_CAN_N_ERR */ 
ssSetOutputPortDataType(S, 149, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 149, 1); 
/* ECM1.LV_CAN_SUB_TQI */ 
ssSetOutputPortDataType(S, 150, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 150, 1); 
/* ECM1 RX_STATUS */ 
ssSetOutputPortDataType(S, 151, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 151, 1); 
/* ECM1 time */ 
ssSetOutputPortDataType(S, 152, SS_DOUBLE); 
ssSetOutputPortWidth(S, 152, 1); 
/* ECM1 deltatime */ 
ssSetOutputPortDataType(S, 153, SS_DOUBLE); 
ssSetOutputPortWidth(S, 153, 1); 
/* ECM10 RAW DATA */ 
ssSetOutputPortDataType(S, 154, SS_UINT8); 
ssSetOutputPortWidth(S, 154, 1); 
/* ECM11 RAW DATA */ 
ssSetOutputPortDataType(S, 155, SS_UINT8); 
ssSetOutputPortWidth(S, 155, 1); 
/* ECM12 RAW DATA */ 
ssSetOutputPortDataType(S, 156, SS_UINT8); 
ssSetOutputPortWidth(S, 156, 1); 
/* ECM13 RAW DATA */ 
ssSetOutputPortDataType(S, 157, SS_UINT8); 
ssSetOutputPortWidth(S, 157, 1); 
/* ECM14 RAW DATA */ 
ssSetOutputPortDataType(S, 158, SS_UINT8); 
ssSetOutputPortWidth(S, 158, 1); 
/* ECM15 RAW DATA */ 
ssSetOutputPortDataType(S, 159, SS_UINT8); 
ssSetOutputPortWidth(S, 159, 1); 
/* ECM16 RAW DATA */ 
ssSetOutputPortDataType(S, 160, SS_UINT8); 
ssSetOutputPortWidth(S, 160, 1); 
/* ECM17 RAW DATA */ 
ssSetOutputPortDataType(S, 161, SS_UINT8); 
ssSetOutputPortWidth(S, 161, 1); 
/* ECM2.Eng_Hood_SW */ 
ssSetOutputPortDataType(S, 162, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 162, 1); 
/* ECM2.CAN_OBD_STAT_WU */ 
ssSetOutputPortDataType(S, 163, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 163, 1); 
/* ECM2.CAN_OBD_STAT_DR */ 
ssSetOutputPortDataType(S, 164, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 164, 1); 
/* ECM2 RX_STATUS */ 
ssSetOutputPortDataType(S, 165, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 165, 1); 
/* ECM2 time */ 
ssSetOutputPortDataType(S, 166, SS_DOUBLE); 
ssSetOutputPortWidth(S, 166, 1); 
/* ECM2 deltatime */ 
ssSetOutputPortDataType(S, 167, SS_DOUBLE); 
ssSetOutputPortWidth(S, 167, 1); 
/* ECM20 RAW DATA */ 
ssSetOutputPortDataType(S, 168, SS_UINT8); 
ssSetOutputPortWidth(S, 168, 1); 
/* ECM21 RAW DATA */ 
ssSetOutputPortDataType(S, 169, SS_UINT8); 
ssSetOutputPortWidth(S, 169, 1); 
/* ECM22 RAW DATA */ 
ssSetOutputPortDataType(S, 170, SS_UINT8); 
ssSetOutputPortWidth(S, 170, 1); 
/* ECM23 RAW DATA */ 
ssSetOutputPortDataType(S, 171, SS_UINT8); 
ssSetOutputPortWidth(S, 171, 1); 
/* ECM24 RAW DATA */ 
ssSetOutputPortDataType(S, 172, SS_UINT8); 
ssSetOutputPortWidth(S, 172, 1); 
/* ECM25 RAW DATA */ 
ssSetOutputPortDataType(S, 173, SS_UINT8); 
ssSetOutputPortWidth(S, 173, 1); 
/* ECM26 RAW DATA */ 
ssSetOutputPortDataType(S, 174, SS_UINT8); 
ssSetOutputPortWidth(S, 174, 1); 
/* ECM27 RAW DATA */ 
ssSetOutputPortDataType(S, 175, SS_UINT8); 
ssSetOutputPortWidth(S, 175, 1); 
/* ECM3.CAN_PV_AV */ 
ssSetOutputPortDataType(S, 176, SS_DOUBLE); 
ssSetOutputPortWidth(S, 176, 1); 
/* ECM3.CAN_PV_EFC */ 
ssSetOutputPortDataType(S, 177, SS_DOUBLE); 
ssSetOutputPortWidth(S, 177, 1); 
/* ECM3.LV_CAN_ERRPAS */ 
ssSetOutputPortDataType(S, 178, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 178, 1); 
/* ECM3.LV_CAN_ERRPVS */ 
ssSetOutputPortDataType(S, 179, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 179, 1); 
/* ECM3 RX_STATUS */ 
ssSetOutputPortDataType(S, 180, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 180, 1); 
/* ECM3 time */ 
ssSetOutputPortDataType(S, 181, SS_DOUBLE); 
ssSetOutputPortWidth(S, 181, 1); 
/* ECM3 deltatime */ 
ssSetOutputPortDataType(S, 182, SS_DOUBLE); 
ssSetOutputPortWidth(S, 182, 1); 
/* ECM30 RAW DATA */ 
ssSetOutputPortDataType(S, 183, SS_UINT8); 
ssSetOutputPortWidth(S, 183, 1); 
/* ECM31 RAW DATA */ 
ssSetOutputPortDataType(S, 184, SS_UINT8); 
ssSetOutputPortWidth(S, 184, 1); 
/* ECM32 RAW DATA */ 
ssSetOutputPortDataType(S, 185, SS_UINT8); 
ssSetOutputPortWidth(S, 185, 1); 
/* ECM33 RAW DATA */ 
ssSetOutputPortDataType(S, 186, SS_UINT8); 
ssSetOutputPortWidth(S, 186, 1); 
/* ECM34 RAW DATA */ 
ssSetOutputPortDataType(S, 187, SS_UINT8); 
ssSetOutputPortWidth(S, 187, 1); 
/* ECM35 RAW DATA */ 
ssSetOutputPortDataType(S, 188, SS_UINT8); 
ssSetOutputPortWidth(S, 188, 1); 
/* ECM36 RAW DATA */ 
ssSetOutputPortDataType(S, 189, SS_UINT8); 
ssSetOutputPortWidth(S, 189, 1); 
/* ECM37 RAW DATA */ 
ssSetOutputPortDataType(S, 190, SS_UINT8); 
ssSetOutputPortWidth(S, 190, 1); 
/* ECM9.EngTqMin */ 
ssSetOutputPortDataType(S, 191, SS_DOUBLE); 
ssSetOutputPortWidth(S, 191, 1); 
/* ECM9.EngTqMax */ 
ssSetOutputPortDataType(S, 192, SS_DOUBLE); 
ssSetOutputPortWidth(S, 192, 1); 
/* ECM9.EMSOpState */ 
ssSetOutputPortDataType(S, 193, SS_UINT8); 
ssSetOutputPortWidth(S, 193, 1); 
/* ECM9.EMSHybridOpState */ 
ssSetOutputPortDataType(S, 194, SS_UINT8); 
ssSetOutputPortWidth(S, 194, 1); 
/* ECM9.ECM9RollCnt */ 
ssSetOutputPortDataType(S, 195, SS_UINT8); 
ssSetOutputPortWidth(S, 195, 1); 
/* ECM9 RX_STATUS */ 
ssSetOutputPortDataType(S, 196, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 196, 1); 
/* ECM9 time */ 
ssSetOutputPortDataType(S, 197, SS_DOUBLE); 
ssSetOutputPortWidth(S, 197, 1); 
/* ECM9 deltatime */ 
ssSetOutputPortDataType(S, 198, SS_DOUBLE); 
ssSetOutputPortWidth(S, 198, 1); 
/* ECM90 RAW DATA */ 
ssSetOutputPortDataType(S, 199, SS_UINT8); 
ssSetOutputPortWidth(S, 199, 1); 
/* ECM91 RAW DATA */ 
ssSetOutputPortDataType(S, 200, SS_UINT8); 
ssSetOutputPortWidth(S, 200, 1); 
/* ECM92 RAW DATA */ 
ssSetOutputPortDataType(S, 201, SS_UINT8); 
ssSetOutputPortWidth(S, 201, 1); 
/* ECM93 RAW DATA */ 
ssSetOutputPortDataType(S, 202, SS_UINT8); 
ssSetOutputPortWidth(S, 202, 1); 
/* ECM94 RAW DATA */ 
ssSetOutputPortDataType(S, 203, SS_UINT8); 
ssSetOutputPortWidth(S, 203, 1); 
/* ECM95 RAW DATA */ 
ssSetOutputPortDataType(S, 204, SS_UINT8); 
ssSetOutputPortWidth(S, 204, 1); 
/* ECM96 RAW DATA */ 
ssSetOutputPortDataType(S, 205, SS_UINT8); 
ssSetOutputPortWidth(S, 205, 1); 
/* ECM97 RAW DATA */ 
ssSetOutputPortDataType(S, 206, SS_UINT8); 
ssSetOutputPortWidth(S, 206, 1); 
/* EPAS2.SAS_CheckSum2 */ 
ssSetOutputPortDataType(S, 207, SS_UINT8); 
ssSetOutputPortWidth(S, 207, 1); 
/* EPAS2.SAS_MsgCount2 */ 
ssSetOutputPortDataType(S, 208, SS_UINT8); 
ssSetOutputPortWidth(S, 208, 1); 
/* EPAS2.R_SAS_Angle */ 
ssSetOutputPortDataType(S, 209, SS_DOUBLE); 
ssSetOutputPortWidth(S, 209, 1); 
/* EPAS2.Steering_Torque */ 
ssSetOutputPortDataType(S, 210, SS_DOUBLE); 
ssSetOutputPortWidth(S, 210, 1); 
/* EPAS2.Steering_Torque_V */ 
ssSetOutputPortDataType(S, 211, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 211, 1); 
/* EPAS2.RSP_OK */ 
ssSetOutputPortDataType(S, 212, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 212, 1); 
/* EPAS2.EpasFailed */ 
ssSetOutputPortDataType(S, 213, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 213, 1); 
/* EPAS2.Elect_PWR_Consumpt */ 
ssSetOutputPortDataType(S, 214, SS_DOUBLE); 
ssSetOutputPortWidth(S, 214, 1); 
/* EPAS2 RX_STATUS */ 
ssSetOutputPortDataType(S, 215, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 215, 1); 
/* EPAS2 time */ 
ssSetOutputPortDataType(S, 216, SS_DOUBLE); 
ssSetOutputPortWidth(S, 216, 1); 
/* EPAS2 deltatime */ 
ssSetOutputPortDataType(S, 217, SS_DOUBLE); 
ssSetOutputPortWidth(S, 217, 1); 
/* EPAS20 RAW DATA */ 
ssSetOutputPortDataType(S, 218, SS_UINT8); 
ssSetOutputPortWidth(S, 218, 1); 
/* EPAS21 RAW DATA */ 
ssSetOutputPortDataType(S, 219, SS_UINT8); 
ssSetOutputPortWidth(S, 219, 1); 
/* EPAS22 RAW DATA */ 
ssSetOutputPortDataType(S, 220, SS_UINT8); 
ssSetOutputPortWidth(S, 220, 1); 
/* EPAS23 RAW DATA */ 
ssSetOutputPortDataType(S, 221, SS_UINT8); 
ssSetOutputPortWidth(S, 221, 1); 
/* EPAS24 RAW DATA */ 
ssSetOutputPortDataType(S, 222, SS_UINT8); 
ssSetOutputPortWidth(S, 222, 1); 
/* EPAS25 RAW DATA */ 
ssSetOutputPortDataType(S, 223, SS_UINT8); 
ssSetOutputPortWidth(S, 223, 1); 
/* EPAS26 RAW DATA */ 
ssSetOutputPortDataType(S, 224, SS_UINT8); 
ssSetOutputPortWidth(S, 224, 1); 
/* EPAS27 RAW DATA */ 
ssSetOutputPortDataType(S, 225, SS_UINT8); 
ssSetOutputPortWidth(S, 225, 1); 
/* EPAS3.EPAS3_Checksum */ 
ssSetOutputPortDataType(S, 226, SS_UINT8); 
ssSetOutputPortWidth(S, 226, 1); 
/* EPAS3.EPAS3_LifeCount */ 
ssSetOutputPortDataType(S, 227, SS_UINT8); 
ssSetOutputPortWidth(S, 227, 1); 
/* EPAS3.CurStrTqReq_A */ 
ssSetOutputPortDataType(S, 228, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 228, 1); 
/* EPAS3.CurStrAngReq_A */ 
ssSetOutputPortDataType(S, 229, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 229, 1); 
/* EPAS3.EPSLFCStatus */ 
ssSetOutputPortDataType(S, 230, SS_UINT8); 
ssSetOutputPortWidth(S, 230, 1); 
/* EPAS3.EPSBattVolt */ 
ssSetOutputPortDataType(S, 231, SS_DOUBLE); 
ssSetOutputPortWidth(S, 231, 1); 
/* EPAS3.CurStrTqReq */ 
ssSetOutputPortDataType(S, 232, SS_DOUBLE); 
ssSetOutputPortWidth(S, 232, 1); 
/* EPAS3.EPSADASAbReason */ 
ssSetOutputPortDataType(S, 233, SS_UINT8); 
ssSetOutputPortWidth(S, 233, 1); 
/* EPAS3.EPSLKAStatus */ 
ssSetOutputPortDataType(S, 234, SS_UINT8); 
ssSetOutputPortWidth(S, 234, 1); 
/* EPAS3.CurStrAngReq */ 
ssSetOutputPortDataType(S, 235, SS_DOUBLE); 
ssSetOutputPortWidth(S, 235, 1); 
/* EPAS3 RX_STATUS */ 
ssSetOutputPortDataType(S, 236, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 236, 1); 
/* EPAS3 time */ 
ssSetOutputPortDataType(S, 237, SS_DOUBLE); 
ssSetOutputPortWidth(S, 237, 1); 
/* EPAS3 deltatime */ 
ssSetOutputPortDataType(S, 238, SS_DOUBLE); 
ssSetOutputPortWidth(S, 238, 1); 
/* EPAS30 RAW DATA */ 
ssSetOutputPortDataType(S, 239, SS_UINT8); 
ssSetOutputPortWidth(S, 239, 1); 
/* EPAS31 RAW DATA */ 
ssSetOutputPortDataType(S, 240, SS_UINT8); 
ssSetOutputPortWidth(S, 240, 1); 
/* EPAS32 RAW DATA */ 
ssSetOutputPortDataType(S, 241, SS_UINT8); 
ssSetOutputPortWidth(S, 241, 1); 
/* EPAS33 RAW DATA */ 
ssSetOutputPortDataType(S, 242, SS_UINT8); 
ssSetOutputPortWidth(S, 242, 1); 
/* EPAS34 RAW DATA */ 
ssSetOutputPortDataType(S, 243, SS_UINT8); 
ssSetOutputPortWidth(S, 243, 1); 
/* EPAS35 RAW DATA */ 
ssSetOutputPortDataType(S, 244, SS_UINT8); 
ssSetOutputPortWidth(S, 244, 1); 
/* EPAS36 RAW DATA */ 
ssSetOutputPortDataType(S, 245, SS_UINT8); 
ssSetOutputPortWidth(S, 245, 1); 
/* EPAS37 RAW DATA */ 
ssSetOutputPortDataType(S, 246, SS_UINT8); 
ssSetOutputPortWidth(S, 246, 1); 
/* EPB1.PB_BrakeBinStat */ 
ssSetOutputPortDataType(S, 247, SS_UINT8); 
ssSetOutputPortWidth(S, 247, 1); 
/* EPB1 RX_STATUS */ 
ssSetOutputPortDataType(S, 248, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 248, 1); 
/* EPB1 time */ 
ssSetOutputPortDataType(S, 249, SS_DOUBLE); 
ssSetOutputPortWidth(S, 249, 1); 
/* EPB1 deltatime */ 
ssSetOutputPortDataType(S, 250, SS_DOUBLE); 
ssSetOutputPortWidth(S, 250, 1); 
/* EPB10 RAW DATA */ 
ssSetOutputPortDataType(S, 251, SS_UINT8); 
ssSetOutputPortWidth(S, 251, 1); 
/* EPB11 RAW DATA */ 
ssSetOutputPortDataType(S, 252, SS_UINT8); 
ssSetOutputPortWidth(S, 252, 1); 
/* EPB12 RAW DATA */ 
ssSetOutputPortDataType(S, 253, SS_UINT8); 
ssSetOutputPortWidth(S, 253, 1); 
/* EPB13 RAW DATA */ 
ssSetOutputPortDataType(S, 254, SS_UINT8); 
ssSetOutputPortWidth(S, 254, 1); 
/* EPB14 RAW DATA */ 
ssSetOutputPortDataType(S, 255, SS_UINT8); 
ssSetOutputPortWidth(S, 255, 1); 
/* EPB15 RAW DATA */ 
ssSetOutputPortDataType(S, 256, SS_UINT8); 
ssSetOutputPortWidth(S, 256, 1); 
/* EPB16 RAW DATA */ 
ssSetOutputPortDataType(S, 257, SS_UINT8); 
ssSetOutputPortWidth(S, 257, 1); 
/* EPB17 RAW DATA */ 
ssSetOutputPortDataType(S, 258, SS_UINT8); 
ssSetOutputPortWidth(S, 258, 1); 
/* ESMCU1.ECO_SW_STA */ 
ssSetOutputPortDataType(S, 259, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 259, 1); 
/* FECU1.FECU_HiBeamRly_Sta */ 
ssSetOutputPortDataType(S, 260, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 260, 1); 
/* FECU1.FECU_LoBeamRly_Sta */ 
ssSetOutputPortDataType(S, 261, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 261, 1); 
/* HCU3.HybridLimpHome */ 
ssSetOutputPortDataType(S, 262, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 262, 1); 
/* HCU3.HCU3RollCnt */ 
ssSetOutputPortDataType(S, 263, SS_UINT8); 
ssSetOutputPortWidth(S, 263, 1); 
/* HCU3.FuelCutReq */ 
ssSetOutputPortDataType(S, 264, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 264, 1); 
/* HCU3.EngCrankType */ 
ssSetOutputPortDataType(S, 265, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 265, 1); 
/* HCU3.EngTqIndPermMax_P */ 
ssSetOutputPortDataType(S, 266, SS_UINT8); 
ssSetOutputPortWidth(S, 266, 1); 
/* HCU3.EngTqIndPermMax */ 
ssSetOutputPortDataType(S, 267, SS_DOUBLE); 
ssSetOutputPortWidth(S, 267, 1); 
/* HCU3.EngTqBrkReq_P */ 
ssSetOutputPortDataType(S, 268, SS_UINT16); 
ssSetOutputPortWidth(S, 268, 1); 
/* HCU3.EngTqBrkReq */ 
ssSetOutputPortDataType(S, 269, SS_DOUBLE); 
ssSetOutputPortWidth(S, 269, 1); 
/* HCU3.EIdleAvail */ 
ssSetOutputPortDataType(S, 270, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 270, 1); 
/* HCU3.EIdleActive */ 
ssSetOutputPortDataType(S, 271, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 271, 1); 
/* HCU3.EngStpReq */ 
ssSetOutputPortDataType(S, 272, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 272, 1); 
/* HCU3.EngStpActive */ 
ssSetOutputPortDataType(S, 273, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 273, 1); 
/* HCU3.FuelPumpReq */ 
ssSetOutputPortDataType(S, 274, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 274, 1); 
/* HCU3.StarterCrankReq */ 
ssSetOutputPortDataType(S, 275, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 275, 1); 
/* HCU3.EngStrtActive */ 
ssSetOutputPortDataType(S, 276, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 276, 1); 
/* HCU3.ACDisableReq */ 
ssSetOutputPortDataType(S, 277, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 277, 1); 
/* HCU3 RX_STATUS */ 
ssSetOutputPortDataType(S, 278, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 278, 1); 
/* HCU3 time */ 
ssSetOutputPortDataType(S, 279, SS_DOUBLE); 
ssSetOutputPortWidth(S, 279, 1); 
/* HCU3 deltatime */ 
ssSetOutputPortDataType(S, 280, SS_DOUBLE); 
ssSetOutputPortWidth(S, 280, 1); 
/* HCU30 RAW DATA */ 
ssSetOutputPortDataType(S, 281, SS_UINT8); 
ssSetOutputPortWidth(S, 281, 1); 
/* HCU31 RAW DATA */ 
ssSetOutputPortDataType(S, 282, SS_UINT8); 
ssSetOutputPortWidth(S, 282, 1); 
/* HCU32 RAW DATA */ 
ssSetOutputPortDataType(S, 283, SS_UINT8); 
ssSetOutputPortWidth(S, 283, 1); 
/* HCU33 RAW DATA */ 
ssSetOutputPortDataType(S, 284, SS_UINT8); 
ssSetOutputPortWidth(S, 284, 1); 
/* HCU34 RAW DATA */ 
ssSetOutputPortDataType(S, 285, SS_UINT8); 
ssSetOutputPortWidth(S, 285, 1); 
/* HCU35 RAW DATA */ 
ssSetOutputPortDataType(S, 286, SS_UINT8); 
ssSetOutputPortWidth(S, 286, 1); 
/* HCU36 RAW DATA */ 
ssSetOutputPortDataType(S, 287, SS_UINT8); 
ssSetOutputPortWidth(S, 287, 1); 
/* HCU37 RAW DATA */ 
ssSetOutputPortDataType(S, 288, SS_UINT8); 
ssSetOutputPortWidth(S, 288, 1); 
/* HCU4.STATE_TQI_ETCU_T */ 
ssSetOutputPortDataType(S, 289, SS_UINT8); 
ssSetOutputPortWidth(S, 289, 1); 
/* HCU4.Start_Stop_STA */ 
ssSetOutputPortDataType(S, 290, SS_UINT8); 
ssSetOutputPortWidth(S, 290, 1); 
/* HCU4.Start_Stop_STA_Ind */ 
ssSetOutputPortDataType(S, 291, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 291, 1); 
/* HCU4.HEVTransMapReq */ 
ssSetOutputPortDataType(S, 292, SS_UINT8); 
ssSetOutputPortWidth(S, 292, 1); 
/* HCU4.MILReq */ 
ssSetOutputPortDataType(S, 293, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 293, 1); 
/* HCU4.CAN_TQI_ETCU_GS_T */ 
ssSetOutputPortDataType(S, 294, SS_DOUBLE); 
ssSetOutputPortWidth(S, 294, 1); 
/* HCU4.ISS_Idol_stop_flag */ 
ssSetOutputPortDataType(S, 295, SS_UINT8); 
ssSetOutputPortWidth(S, 295, 1); 
/* HCU4.EngIdleSpdSetpt */ 
ssSetOutputPortDataType(S, 296, SS_UINT16); 
ssSetOutputPortWidth(S, 296, 1); 
/* HCU4.BSGActTq4EMS_P */ 
ssSetOutputPortDataType(S, 297, SS_UINT16); 
ssSetOutputPortWidth(S, 297, 1); 
/* HCU4.BSGActTq4EMS */ 
ssSetOutputPortDataType(S, 298, SS_DOUBLE); 
ssSetOutputPortWidth(S, 298, 1); 
/* HCU4 RX_STATUS */ 
ssSetOutputPortDataType(S, 299, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 299, 1); 
/* HCU4 time */ 
ssSetOutputPortDataType(S, 300, SS_DOUBLE); 
ssSetOutputPortWidth(S, 300, 1); 
/* HCU4 deltatime */ 
ssSetOutputPortDataType(S, 301, SS_DOUBLE); 
ssSetOutputPortWidth(S, 301, 1); 
/* HCU40 RAW DATA */ 
ssSetOutputPortDataType(S, 302, SS_UINT8); 
ssSetOutputPortWidth(S, 302, 1); 
/* HCU41 RAW DATA */ 
ssSetOutputPortDataType(S, 303, SS_UINT8); 
ssSetOutputPortWidth(S, 303, 1); 
/* HCU42 RAW DATA */ 
ssSetOutputPortDataType(S, 304, SS_UINT8); 
ssSetOutputPortWidth(S, 304, 1); 
/* HCU43 RAW DATA */ 
ssSetOutputPortDataType(S, 305, SS_UINT8); 
ssSetOutputPortWidth(S, 305, 1); 
/* HCU44 RAW DATA */ 
ssSetOutputPortDataType(S, 306, SS_UINT8); 
ssSetOutputPortWidth(S, 306, 1); 
/* HCU45 RAW DATA */ 
ssSetOutputPortDataType(S, 307, SS_UINT8); 
ssSetOutputPortWidth(S, 307, 1); 
/* HCU46 RAW DATA */ 
ssSetOutputPortDataType(S, 308, SS_UINT8); 
ssSetOutputPortWidth(S, 308, 1); 
/* HCU47 RAW DATA */ 
ssSetOutputPortDataType(S, 309, SS_UINT8); 
ssSetOutputPortWidth(S, 309, 1); 
/* HMI1.IGSASwitchMode */ 
ssSetOutputPortDataType(S, 310, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 310, 1); 
/* HMI1.IGSASet_SpdDec */ 
ssSetOutputPortDataType(S, 311, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 311, 1); 
/* HMI1.IGSARes_SpdInc */ 
ssSetOutputPortDataType(S, 312, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 312, 1); 
/* HMI1.IGSAOn */ 
ssSetOutputPortDataType(S, 313, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 313, 1); 
/* HMI1.LFC_PilotCancel */ 
ssSetOutputPortDataType(S, 314, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 314, 1); 
/* HMI1.LFC_PilotOn */ 
ssSetOutputPortDataType(S, 315, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 315, 1); 
/* HMI1.FCWWarningMode */ 
ssSetOutputPortDataType(S, 316, SS_UINT8); 
ssSetOutputPortWidth(S, 316, 1); 
/* HMI1.LCSEnable */ 
ssSetOutputPortDataType(S, 317, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 317, 1); 
/* HMI1.LKAEnable */ 
ssSetOutputPortDataType(S, 318, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 318, 1); 
/* HMI1.MAPAEnable */ 
ssSetOutputPortDataType(S, 319, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 319, 1); 
/* HMI1.CSCEnable */ 
ssSetOutputPortDataType(S, 320, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 320, 1); 
/* HMI1.FCWEnable */ 
ssSetOutputPortDataType(S, 321, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 321, 1); 
/* HMI1.AEBEnable */ 
ssSetOutputPortDataType(S, 322, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 322, 1); 
/* HMI1.DefMaxACCSetSpeed */ 
ssSetOutputPortDataType(S, 323, SS_UINT8); 
ssSetOutputPortWidth(S, 323, 1); 
/* HMI1.ACCSpeedDec */ 
ssSetOutputPortDataType(S, 324, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 324, 1); 
/* HMI1.ACCSpeedInc */ 
ssSetOutputPortDataType(S, 325, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 325, 1); 
/* HMI1.ACCSet_SpdDec */ 
ssSetOutputPortDataType(S, 326, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 326, 1); 
/* HMI1.ACCRes_SpdInc */ 
ssSetOutputPortDataType(S, 327, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 327, 1); 
/* HMI1.ACCCancel */ 
ssSetOutputPortDataType(S, 328, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 328, 1); 
/* HMI1.ACCOn */ 
ssSetOutputPortDataType(S, 329, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 329, 1); 
/* HMI1.ACCTimeGapDec */ 
ssSetOutputPortDataType(S, 330, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 330, 1); 
/* HMI1.ACCTimeGapInc */ 
ssSetOutputPortDataType(S, 331, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 331, 1); 
/* HMI1 RX_STATUS */ 
ssSetOutputPortDataType(S, 332, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 332, 1); 
/* HMI1 time */ 
ssSetOutputPortDataType(S, 333, SS_DOUBLE); 
ssSetOutputPortWidth(S, 333, 1); 
/* HMI1 deltatime */ 
ssSetOutputPortDataType(S, 334, SS_DOUBLE); 
ssSetOutputPortWidth(S, 334, 1); 
/* HMI10 RAW DATA */ 
ssSetOutputPortDataType(S, 335, SS_UINT8); 
ssSetOutputPortWidth(S, 335, 1); 
/* HMI11 RAW DATA */ 
ssSetOutputPortDataType(S, 336, SS_UINT8); 
ssSetOutputPortWidth(S, 336, 1); 
/* HMI12 RAW DATA */ 
ssSetOutputPortDataType(S, 337, SS_UINT8); 
ssSetOutputPortWidth(S, 337, 1); 
/* HMI13 RAW DATA */ 
ssSetOutputPortDataType(S, 338, SS_UINT8); 
ssSetOutputPortWidth(S, 338, 1); 
/* HMI14 RAW DATA */ 
ssSetOutputPortDataType(S, 339, SS_UINT8); 
ssSetOutputPortWidth(S, 339, 1); 
/* HMI15 RAW DATA */ 
ssSetOutputPortDataType(S, 340, SS_UINT8); 
ssSetOutputPortWidth(S, 340, 1); 
/* HMI16 RAW DATA */ 
ssSetOutputPortDataType(S, 341, SS_UINT8); 
ssSetOutputPortWidth(S, 341, 1); 
/* HMI17 RAW DATA */ 
ssSetOutputPortDataType(S, 342, SS_UINT8); 
ssSetOutputPortWidth(S, 342, 1); 
/* HMI2.MSAOn_VCU */ 
ssSetOutputPortDataType(S, 343, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 343, 1); 
/* HMI2.LFCOn_VCU */ 
ssSetOutputPortDataType(S, 344, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 344, 1); 
/* HMI2.ACCTimeGapDec_VCU */ 
ssSetOutputPortDataType(S, 345, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 345, 1); 
/* HMI2.ACCTimeGapInc_VCU */ 
ssSetOutputPortDataType(S, 346, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 346, 1); 
/* HMI2.ACCRes_SpdInc_VCU */ 
ssSetOutputPortDataType(S, 347, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 347, 1); 
/* HMI2.ACCSet_SpdDec_VCU */ 
ssSetOutputPortDataType(S, 348, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 348, 1); 
/* HMI2.ACCOn_VCU */ 
ssSetOutputPortDataType(S, 349, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 349, 1); 
/* HMI2 RX_STATUS */ 
ssSetOutputPortDataType(S, 350, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 350, 1); 
/* HMI2 time */ 
ssSetOutputPortDataType(S, 351, SS_DOUBLE); 
ssSetOutputPortWidth(S, 351, 1); 
/* HMI2 deltatime */ 
ssSetOutputPortDataType(S, 352, SS_DOUBLE); 
ssSetOutputPortWidth(S, 352, 1); 
/* HMI20 RAW DATA */ 
ssSetOutputPortDataType(S, 353, SS_UINT8); 
ssSetOutputPortWidth(S, 353, 1); 
/* HMI21 RAW DATA */ 
ssSetOutputPortDataType(S, 354, SS_UINT8); 
ssSetOutputPortWidth(S, 354, 1); 
/* HMI22 RAW DATA */ 
ssSetOutputPortDataType(S, 355, SS_UINT8); 
ssSetOutputPortWidth(S, 355, 1); 
/* HMI23 RAW DATA */ 
ssSetOutputPortDataType(S, 356, SS_UINT8); 
ssSetOutputPortWidth(S, 356, 1); 
/* HMI24 RAW DATA */ 
ssSetOutputPortDataType(S, 357, SS_UINT8); 
ssSetOutputPortWidth(S, 357, 1); 
/* HMI25 RAW DATA */ 
ssSetOutputPortDataType(S, 358, SS_UINT8); 
ssSetOutputPortWidth(S, 358, 1); 
/* HMI26 RAW DATA */ 
ssSetOutputPortDataType(S, 359, SS_UINT8); 
ssSetOutputPortWidth(S, 359, 1); 
/* HMI27 RAW DATA */ 
ssSetOutputPortDataType(S, 360, SS_UINT8); 
ssSetOutputPortWidth(S, 360, 1); 
/* Meter1.ODOMETER */ 
ssSetOutputPortDataType(S, 361, SS_UINT32); 
ssSetOutputPortWidth(S, 361, 1); 
/* Meter1.SeatBelt */ 
ssSetOutputPortDataType(S, 362, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 362, 1); 
/* Meter1.LowBrakeFluid_Sta */ 
ssSetOutputPortDataType(S, 363, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 363, 1); 
/* Meter1.ParkBrake */ 
ssSetOutputPortDataType(S, 364, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 364, 1); 
/* Meter1 RX_STATUS */ 
ssSetOutputPortDataType(S, 365, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 365, 1); 
/* Meter1 time */ 
ssSetOutputPortDataType(S, 366, SS_DOUBLE); 
ssSetOutputPortWidth(S, 366, 1); 
/* Meter1 deltatime */ 
ssSetOutputPortDataType(S, 367, SS_DOUBLE); 
ssSetOutputPortWidth(S, 367, 1); 
/* Meter10 RAW DATA */ 
ssSetOutputPortDataType(S, 368, SS_UINT8); 
ssSetOutputPortWidth(S, 368, 1); 
/* Meter11 RAW DATA */ 
ssSetOutputPortDataType(S, 369, SS_UINT8); 
ssSetOutputPortWidth(S, 369, 1); 
/* Meter12 RAW DATA */ 
ssSetOutputPortDataType(S, 370, SS_UINT8); 
ssSetOutputPortWidth(S, 370, 1); 
/* Meter13 RAW DATA */ 
ssSetOutputPortDataType(S, 371, SS_UINT8); 
ssSetOutputPortWidth(S, 371, 1); 
/* Meter14 RAW DATA */ 
ssSetOutputPortDataType(S, 372, SS_UINT8); 
ssSetOutputPortWidth(S, 372, 1); 
/* Meter15 RAW DATA */ 
ssSetOutputPortDataType(S, 373, SS_UINT8); 
ssSetOutputPortWidth(S, 373, 1); 
/* Meter16 RAW DATA */ 
ssSetOutputPortDataType(S, 374, SS_UINT8); 
ssSetOutputPortWidth(S, 374, 1); 
/* Meter17 RAW DATA */ 
ssSetOutputPortDataType(S, 375, SS_UINT8); 
ssSetOutputPortWidth(S, 375, 1); 
/* Meter3.Meter_Ind_VehSpeed */ 
ssSetOutputPortDataType(S, 376, SS_DOUBLE); 
ssSetOutputPortWidth(S, 376, 1); 
/* Meter3 RX_STATUS */ 
ssSetOutputPortDataType(S, 377, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 377, 1); 
/* Meter3 time */ 
ssSetOutputPortDataType(S, 378, SS_DOUBLE); 
ssSetOutputPortWidth(S, 378, 1); 
/* Meter3 deltatime */ 
ssSetOutputPortDataType(S, 379, SS_DOUBLE); 
ssSetOutputPortWidth(S, 379, 1); 
/* Meter30 RAW DATA */ 
ssSetOutputPortDataType(S, 380, SS_UINT8); 
ssSetOutputPortWidth(S, 380, 1); 
/* Meter31 RAW DATA */ 
ssSetOutputPortDataType(S, 381, SS_UINT8); 
ssSetOutputPortWidth(S, 381, 1); 
/* Meter32 RAW DATA */ 
ssSetOutputPortDataType(S, 382, SS_UINT8); 
ssSetOutputPortWidth(S, 382, 1); 
/* Meter33 RAW DATA */ 
ssSetOutputPortDataType(S, 383, SS_UINT8); 
ssSetOutputPortWidth(S, 383, 1); 
/* Meter34 RAW DATA */ 
ssSetOutputPortDataType(S, 384, SS_UINT8); 
ssSetOutputPortWidth(S, 384, 1); 
/* Meter35 RAW DATA */ 
ssSetOutputPortDataType(S, 385, SS_UINT8); 
ssSetOutputPortWidth(S, 385, 1); 
/* Meter36 RAW DATA */ 
ssSetOutputPortDataType(S, 386, SS_UINT8); 
ssSetOutputPortWidth(S, 386, 1); 
/* Meter37 RAW DATA */ 
ssSetOutputPortDataType(S, 387, SS_UINT8); 
ssSetOutputPortWidth(S, 387, 1); 
/* SAS1.SAS_CheckSum */ 
ssSetOutputPortDataType(S, 388, SS_UINT8); 
ssSetOutputPortWidth(S, 388, 1); 
/* SAS1.SAS_MsgCount */ 
ssSetOutputPortDataType(S, 389, SS_UINT8); 
ssSetOutputPortWidth(S, 389, 1); 
/* SAS1.SAS_OK */ 
ssSetOutputPortDataType(S, 390, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 390, 1); 
/* SAS1.SAS_CAL */ 
ssSetOutputPortDataType(S, 391, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 391, 1); 
/* SAS1.SAS_Angle */ 
ssSetOutputPortDataType(S, 392, SS_DOUBLE); 
ssSetOutputPortWidth(S, 392, 1); 
/* SAS1 RX_STATUS */ 
ssSetOutputPortDataType(S, 393, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 393, 1); 
/* SAS1 time */ 
ssSetOutputPortDataType(S, 394, SS_DOUBLE); 
ssSetOutputPortWidth(S, 394, 1); 
/* SAS1 deltatime */ 
ssSetOutputPortDataType(S, 395, SS_DOUBLE); 
ssSetOutputPortWidth(S, 395, 1); 
/* SAS10 RAW DATA */ 
ssSetOutputPortDataType(S, 396, SS_UINT8); 
ssSetOutputPortWidth(S, 396, 1); 
/* SAS11 RAW DATA */ 
ssSetOutputPortDataType(S, 397, SS_UINT8); 
ssSetOutputPortWidth(S, 397, 1); 
/* SAS12 RAW DATA */ 
ssSetOutputPortDataType(S, 398, SS_UINT8); 
ssSetOutputPortWidth(S, 398, 1); 
/* SAS13 RAW DATA */ 
ssSetOutputPortDataType(S, 399, SS_UINT8); 
ssSetOutputPortWidth(S, 399, 1); 
/* SAS14 RAW DATA */ 
ssSetOutputPortDataType(S, 400, SS_UINT8); 
ssSetOutputPortWidth(S, 400, 1); 
/* SAS15 RAW DATA */ 
ssSetOutputPortDataType(S, 401, SS_UINT8); 
ssSetOutputPortWidth(S, 401, 1); 
/* SAS16 RAW DATA */ 
ssSetOutputPortDataType(S, 402, SS_UINT8); 
ssSetOutputPortWidth(S, 402, 1); 
/* SAS17 RAW DATA */ 
ssSetOutputPortDataType(S, 403, SS_UINT8); 
ssSetOutputPortWidth(S, 403, 1); 
/* TCM1.CAN_N_TM */ 
ssSetOutputPortDataType(S, 404, SS_UINT16); 
ssSetOutputPortWidth(S, 404, 1); 
/* TCM1.LV_CAN_N_TM_ERR */ 
ssSetOutputPortDataType(S, 405, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 405, 1); 
/* TCM1.CAN_GEAR_STATE_NOW */ 
ssSetOutputPortDataType(S, 406, SS_UINT8); 
ssSetOutputPortWidth(S, 406, 1); 
/* TCM1.CAN_GEAR_STA_NOW_V */ 
ssSetOutputPortDataType(S, 407, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 407, 1); 
/* TCM1.CAN_TQI_ETCU_GS */ 
ssSetOutputPortDataType(S, 408, SS_DOUBLE); 
ssSetOutputPortWidth(S, 408, 1); 
/* TCM1.STATE_CAN_TQI_ETCU */ 
ssSetOutputPortDataType(S, 409, SS_UINT8); 
ssSetOutputPortWidth(S, 409, 1); 
/* TCM1.CAN_ETCU_OBD */ 
ssSetOutputPortDataType(S, 410, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 410, 1); 
/* TCM1.CAN_WTR */ 
ssSetOutputPortDataType(S, 411, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 411, 1); 
/* TCM1.CAN_PWR */ 
ssSetOutputPortDataType(S, 412, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 412, 1); 
/* TCM1.CAN_GEAR_SEL_ETCU */ 
ssSetOutputPortDataType(S, 413, SS_UINT8); 
ssSetOutputPortWidth(S, 413, 1); 
/* TCM1.CAN_ETCU_STATE */ 
ssSetOutputPortDataType(S, 414, SS_UINT8); 
ssSetOutputPortWidth(S, 414, 1); 
/* TCM1.CAN_SWI_CC_ETCU */ 
ssSetOutputPortDataType(S, 415, SS_UINT8); 
ssSetOutputPortWidth(S, 415, 1); 
/* TCM1 RX_STATUS */ 
ssSetOutputPortDataType(S, 416, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 416, 1); 
/* TCM1 time */ 
ssSetOutputPortDataType(S, 417, SS_DOUBLE); 
ssSetOutputPortWidth(S, 417, 1); 
/* TCM1 deltatime */ 
ssSetOutputPortDataType(S, 418, SS_DOUBLE); 
ssSetOutputPortWidth(S, 418, 1); 
/* TCM10 RAW DATA */ 
ssSetOutputPortDataType(S, 419, SS_UINT8); 
ssSetOutputPortWidth(S, 419, 1); 
/* TCM11 RAW DATA */ 
ssSetOutputPortDataType(S, 420, SS_UINT8); 
ssSetOutputPortWidth(S, 420, 1); 
/* TCM12 RAW DATA */ 
ssSetOutputPortDataType(S, 421, SS_UINT8); 
ssSetOutputPortWidth(S, 421, 1); 
/* TCM13 RAW DATA */ 
ssSetOutputPortDataType(S, 422, SS_UINT8); 
ssSetOutputPortWidth(S, 422, 1); 
/* TCM14 RAW DATA */ 
ssSetOutputPortDataType(S, 423, SS_UINT8); 
ssSetOutputPortWidth(S, 423, 1); 
/* TCM15 RAW DATA */ 
ssSetOutputPortDataType(S, 424, SS_UINT8); 
ssSetOutputPortWidth(S, 424, 1); 
/* TCM16 RAW DATA */ 
ssSetOutputPortDataType(S, 425, SS_UINT8); 
ssSetOutputPortWidth(S, 425, 1); 
/* TCM17 RAW DATA */ 
ssSetOutputPortDataType(S, 426, SS_UINT8); 
ssSetOutputPortWidth(S, 426, 1); 
/* TCM2.DR_MODE_IND */ 
ssSetOutputPortDataType(S, 427, SS_UINT8); 
ssSetOutputPortWidth(S, 427, 1); 
/* TCM2 RX_STATUS */ 
ssSetOutputPortDataType(S, 428, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 428, 1); 
/* TCM2 time */ 
ssSetOutputPortDataType(S, 429, SS_DOUBLE); 
ssSetOutputPortWidth(S, 429, 1); 
/* TCM2 deltatime */ 
ssSetOutputPortDataType(S, 430, SS_DOUBLE); 
ssSetOutputPortWidth(S, 430, 1); 
/* TCM20 RAW DATA */ 
ssSetOutputPortDataType(S, 431, SS_UINT8); 
ssSetOutputPortWidth(S, 431, 1); 
/* TCM21 RAW DATA */ 
ssSetOutputPortDataType(S, 432, SS_UINT8); 
ssSetOutputPortWidth(S, 432, 1); 
/* TCM22 RAW DATA */ 
ssSetOutputPortDataType(S, 433, SS_UINT8); 
ssSetOutputPortWidth(S, 433, 1); 
/* TCM23 RAW DATA */ 
ssSetOutputPortDataType(S, 434, SS_UINT8); 
ssSetOutputPortWidth(S, 434, 1); 
/* TCM24 RAW DATA */ 
ssSetOutputPortDataType(S, 435, SS_UINT8); 
ssSetOutputPortWidth(S, 435, 1); 
/* TCM25 RAW DATA */ 
ssSetOutputPortDataType(S, 436, SS_UINT8); 
ssSetOutputPortWidth(S, 436, 1); 
/* TCM26 RAW DATA */ 
ssSetOutputPortDataType(S, 437, SS_UINT8); 
ssSetOutputPortWidth(S, 437, 1); 
/* TCM27 RAW DATA */ 
ssSetOutputPortDataType(S, 438, SS_UINT8); 
ssSetOutputPortWidth(S, 438, 1); 
/* VCU1.VCU1_Checksum */ 
ssSetOutputPortDataType(S, 439, SS_UINT8); 
ssSetOutputPortWidth(S, 439, 1); 
/* VCU1.VCU1_LifeCount */ 
ssSetOutputPortDataType(S, 440, SS_UINT8); 
ssSetOutputPortWidth(S, 440, 1); 
/* VCU1.VCUBattVolt */ 
ssSetOutputPortDataType(S, 441, SS_DOUBLE); 
ssSetOutputPortWidth(S, 441, 1); 
/* VCU1.CurVehDec */ 
ssSetOutputPortDataType(S, 442, SS_DOUBLE); 
ssSetOutputPortWidth(S, 442, 1); 
/* VCU1.CurBrakeDecReq */ 
ssSetOutputPortDataType(S, 443, SS_DOUBLE); 
ssSetOutputPortWidth(S, 443, 1); 
/* VCU1.CurBrakeDecReq_A */ 
ssSetOutputPortDataType(S, 444, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 444, 1); 
/* VCU1.DecContMan */ 
ssSetOutputPortDataType(S, 445, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 445, 1); 
/* VCU1.ESCBrkSta */ 
ssSetOutputPortDataType(S, 446, SS_UINT8); 
ssSetOutputPortWidth(S, 446, 1); 
/* VCU1.VCUFault */ 
ssSetOutputPortDataType(S, 447, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 447, 1); 
/* VCU1.ESCExtBrkAvail */ 
ssSetOutputPortDataType(S, 448, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 448, 1); 
/* VCU1.DriverBrakeSw_V */ 
ssSetOutputPortDataType(S, 449, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 449, 1); 
/* VCU1.DriverBrakeSw */ 
ssSetOutputPortDataType(S, 450, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 450, 1); 
/* VCU1.ECMTqSrc */ 
ssSetOutputPortDataType(S, 451, SS_UINT8); 
ssSetOutputPortWidth(S, 451, 1); 
/* VCU1.ExtTqAvail */ 
ssSetOutputPortDataType(S, 452, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 452, 1); 
/* VCU1.ADASTqReq_A */ 
ssSetOutputPortDataType(S, 453, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 453, 1); 
/* VCU1.ADASTqReq */ 
ssSetOutputPortDataType(S, 454, SS_DOUBLE); 
ssSetOutputPortWidth(S, 454, 1); 
/* VCU1 RX_STATUS */ 
ssSetOutputPortDataType(S, 455, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 455, 1); 
/* VCU1 time */ 
ssSetOutputPortDataType(S, 456, SS_DOUBLE); 
ssSetOutputPortWidth(S, 456, 1); 
/* VCU1 deltatime */ 
ssSetOutputPortDataType(S, 457, SS_DOUBLE); 
ssSetOutputPortWidth(S, 457, 1); 
/* VCU10 RAW DATA */ 
ssSetOutputPortDataType(S, 458, SS_UINT8); 
ssSetOutputPortWidth(S, 458, 1); 
/* VCU11 RAW DATA */ 
ssSetOutputPortDataType(S, 459, SS_UINT8); 
ssSetOutputPortWidth(S, 459, 1); 
/* VCU12 RAW DATA */ 
ssSetOutputPortDataType(S, 460, SS_UINT8); 
ssSetOutputPortWidth(S, 460, 1); 
/* VCU13 RAW DATA */ 
ssSetOutputPortDataType(S, 461, SS_UINT8); 
ssSetOutputPortWidth(S, 461, 1); 
/* VCU14 RAW DATA */ 
ssSetOutputPortDataType(S, 462, SS_UINT8); 
ssSetOutputPortWidth(S, 462, 1); 
/* VCU15 RAW DATA */ 
ssSetOutputPortDataType(S, 463, SS_UINT8); 
ssSetOutputPortWidth(S, 463, 1); 
/* VCU16 RAW DATA */ 
ssSetOutputPortDataType(S, 464, SS_UINT8); 
ssSetOutputPortWidth(S, 464, 1); 
/* VCU17 RAW DATA */ 
ssSetOutputPortDataType(S, 465, SS_UINT8); 
ssSetOutputPortWidth(S, 465, 1); 
/* VCU2.VCU2_Checksum */ 
ssSetOutputPortDataType(S, 466, SS_UINT8); 
ssSetOutputPortWidth(S, 466, 1); 
/* VCU2.VCU2_LifeCount */ 
ssSetOutputPortDataType(S, 467, SS_UINT8); 
ssSetOutputPortWidth(S, 467, 1); 
/* VCU2.MSAStatus */ 
ssSetOutputPortDataType(S, 468, SS_UINT8); 
ssSetOutputPortWidth(S, 468, 1); 
/* VCU2.AvgBrakDiscTemp */ 
ssSetOutputPortDataType(S, 469, SS_INT16); 
ssSetOutputPortWidth(S, 469, 1); 
/* VCU2.CAN_ENG_STA */ 
ssSetOutputPortDataType(S, 470, SS_UINT8); 
ssSetOutputPortWidth(S, 470, 1); 
/* VCU2.MIL_ON_OFF_Request */ 
ssSetOutputPortDataType(S, 471, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 471, 1); 
/* VCU2.ADAS_GearPosnReq_ALLOW */ 
ssSetOutputPortDataType(S, 472, SS_UINT8); 
ssSetOutputPortWidth(S, 472, 1); 
/* VCU2.PedalTqReq */ 
ssSetOutputPortDataType(S, 473, SS_DOUBLE); 
ssSetOutputPortWidth(S, 473, 1); 
/* VCU2.VCU_AccelPedalPosn_V */ 
ssSetOutputPortDataType(S, 474, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 474, 1); 
/* VCU2.VCU_AccelPedalPosn */ 
ssSetOutputPortDataType(S, 475, SS_DOUBLE); 
ssSetOutputPortWidth(S, 475, 1); 
/* VCU2 RX_STATUS */ 
ssSetOutputPortDataType(S, 476, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 476, 1); 
/* VCU2 time */ 
ssSetOutputPortDataType(S, 477, SS_DOUBLE); 
ssSetOutputPortWidth(S, 477, 1); 
/* VCU2 deltatime */ 
ssSetOutputPortDataType(S, 478, SS_DOUBLE); 
ssSetOutputPortWidth(S, 478, 1); 
/* VCU20 RAW DATA */ 
ssSetOutputPortDataType(S, 479, SS_UINT8); 
ssSetOutputPortWidth(S, 479, 1); 
/* VCU21 RAW DATA */ 
ssSetOutputPortDataType(S, 480, SS_UINT8); 
ssSetOutputPortWidth(S, 480, 1); 
/* VCU22 RAW DATA */ 
ssSetOutputPortDataType(S, 481, SS_UINT8); 
ssSetOutputPortWidth(S, 481, 1); 
/* VCU23 RAW DATA */ 
ssSetOutputPortDataType(S, 482, SS_UINT8); 
ssSetOutputPortWidth(S, 482, 1); 
/* VCU24 RAW DATA */ 
ssSetOutputPortDataType(S, 483, SS_UINT8); 
ssSetOutputPortWidth(S, 483, 1); 
/* VCU25 RAW DATA */ 
ssSetOutputPortDataType(S, 484, SS_UINT8); 
ssSetOutputPortWidth(S, 484, 1); 
/* VCU26 RAW DATA */ 
ssSetOutputPortDataType(S, 485, SS_UINT8); 
ssSetOutputPortWidth(S, 485, 1); 
/* VCU27 RAW DATA */ 
ssSetOutputPortDataType(S, 486, SS_UINT8); 
ssSetOutputPortWidth(S, 486, 1); 
