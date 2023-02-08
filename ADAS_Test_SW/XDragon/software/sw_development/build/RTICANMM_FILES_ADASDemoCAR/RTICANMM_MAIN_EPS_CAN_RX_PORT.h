/*****************************************************************************************************************************/
/* RTICANMM_MAIN_EPS_CAN_RX_PORT */
/*                                                                                                                           */
/*   AUTHOR(S):                                                                                                              */
/*      U. Homann                                                                                                              */
/*      M. Eikermann                                                                                                              */
/*                                                                                                                           */
/*                                                                                                                           */
/*   RTICANMM Date: 06-Oct-2014 13:04:04                                                                                     */
/*   RTICANMM Version: 4.0.735878.5444907408                                                                                     */
/*                                                                                                                           */
/*  (c) Copyright 2017, dSPACE GmbH. All rights reserved.                                                                    */
/*      Brand names or product names are trademarks or registered trademarks of their respective companies or organizations. */
/*                                                                                                                           */
/* ***************************************************************************************************************************/

/* EPS1.RollingCounter_EPS1 */ 
ssSetOutputPortDataType(S, 0, SS_UINT8); 
ssSetOutputPortWidth(S, 0, 1); 
/* EPS1.EPS_CurrMod */ 
ssSetOutputPortDataType(S, 1, SS_UINT8); 
ssSetOutputPortWidth(S, 1, 1); 
/* EPS1.EPS_ConsumedCurrValue */ 
ssSetOutputPortDataType(S, 2, SS_DOUBLE); 
ssSetOutputPortWidth(S, 2, 1); 
/* EPS1.EPS_DrvInputTrqValue */ 
ssSetOutputPortDataType(S, 3, SS_DOUBLE); 
ssSetOutputPortWidth(S, 3, 1); 
/* EPS1.EPS_AvailSts */ 
ssSetOutputPortDataType(S, 4, SS_UINT8); 
ssSetOutputPortWidth(S, 4, 1); 
/* EPS1.EPS_InterferDetdValid */ 
ssSetOutputPortDataType(S, 5, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 5, 1); 
/* EPS1.EPS_InterferDetd */ 
ssSetOutputPortDataType(S, 6, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 6, 1); 
/* EPS1.EPS_TrqSnsrSts */ 
ssSetOutputPortDataType(S, 7, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 7, 1); 
/* EPS1.EPS_FailSts */ 
ssSetOutputPortDataType(S, 8, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 8, 1); 
/* EPS1.CheckSum_EPS1 */ 
ssSetOutputPortDataType(S, 9, SS_UINT8); 
ssSetOutputPortWidth(S, 9, 1); 
/* EPS1 RX_STATUS */ 
ssSetOutputPortDataType(S, 10, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 10, 1); 
/* EPS1 time */ 
ssSetOutputPortDataType(S, 11, SS_DOUBLE); 
ssSetOutputPortWidth(S, 11, 1); 
/* EPS1 deltatime */ 
ssSetOutputPortDataType(S, 12, SS_DOUBLE); 
ssSetOutputPortWidth(S, 12, 1); 
/* EPS10 RAW DATA */ 
ssSetOutputPortDataType(S, 13, SS_UINT8); 
ssSetOutputPortWidth(S, 13, 1); 
/* EPS11 RAW DATA */ 
ssSetOutputPortDataType(S, 14, SS_UINT8); 
ssSetOutputPortWidth(S, 14, 1); 
/* EPS12 RAW DATA */ 
ssSetOutputPortDataType(S, 15, SS_UINT8); 
ssSetOutputPortWidth(S, 15, 1); 
/* EPS13 RAW DATA */ 
ssSetOutputPortDataType(S, 16, SS_UINT8); 
ssSetOutputPortWidth(S, 16, 1); 
/* EPS14 RAW DATA */ 
ssSetOutputPortDataType(S, 17, SS_UINT8); 
ssSetOutputPortWidth(S, 17, 1); 
/* EPS15 RAW DATA */ 
ssSetOutputPortDataType(S, 18, SS_UINT8); 
ssSetOutputPortWidth(S, 18, 1); 
/* EPS16 RAW DATA */ 
ssSetOutputPortDataType(S, 19, SS_UINT8); 
ssSetOutputPortWidth(S, 19, 1); 
/* EPS17 RAW DATA */ 
ssSetOutputPortDataType(S, 20, SS_UINT8); 
ssSetOutputPortWidth(S, 20, 1); 
/* EPS2.RollingCounter_EPS2 */ 
ssSetOutputPortDataType(S, 21, SS_UINT8); 
ssSetOutputPortWidth(S, 21, 1); 
/* EPS2.EPS_LKATrqOvlDlvdSts */ 
ssSetOutputPortDataType(S, 22, SS_UINT8); 
ssSetOutputPortWidth(S, 22, 1); 
/* EPS2.EPS_HandsOffDetnModEnable */ 
ssSetOutputPortDataType(S, 23, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 23, 1); 
/* EPS2.EPS_LKATorqOvrlDlvdValid */ 
ssSetOutputPortDataType(S, 24, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 24, 1); 
/* EPS2.EPS_LKATorqOvrlDlvd */ 
ssSetOutputPortDataType(S, 25, SS_DOUBLE); 
ssSetOutputPortWidth(S, 25, 1); 
/* EPS2.EPS_HandsOffDetnStsValid */ 
ssSetOutputPortDataType(S, 26, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 26, 1); 
/* EPS2.EPS_HandsOffDetnSts */ 
ssSetOutputPortDataType(S, 27, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 27, 1); 
/* EPS2.CheckSum_EPS2 */ 
ssSetOutputPortDataType(S, 28, SS_UINT8); 
ssSetOutputPortWidth(S, 28, 1); 
/* EPS2 RX_STATUS */ 
ssSetOutputPortDataType(S, 29, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 29, 1); 
/* EPS2 time */ 
ssSetOutputPortDataType(S, 30, SS_DOUBLE); 
ssSetOutputPortWidth(S, 30, 1); 
/* EPS2 deltatime */ 
ssSetOutputPortDataType(S, 31, SS_DOUBLE); 
ssSetOutputPortWidth(S, 31, 1); 
/* EPS20 RAW DATA */ 
ssSetOutputPortDataType(S, 32, SS_UINT8); 
ssSetOutputPortWidth(S, 32, 1); 
/* EPS21 RAW DATA */ 
ssSetOutputPortDataType(S, 33, SS_UINT8); 
ssSetOutputPortWidth(S, 33, 1); 
/* EPS22 RAW DATA */ 
ssSetOutputPortDataType(S, 34, SS_UINT8); 
ssSetOutputPortWidth(S, 34, 1); 
/* EPS23 RAW DATA */ 
ssSetOutputPortDataType(S, 35, SS_UINT8); 
ssSetOutputPortWidth(S, 35, 1); 
/* EPS24 RAW DATA */ 
ssSetOutputPortDataType(S, 36, SS_UINT8); 
ssSetOutputPortWidth(S, 36, 1); 
/* EPS25 RAW DATA */ 
ssSetOutputPortDataType(S, 37, SS_UINT8); 
ssSetOutputPortWidth(S, 37, 1); 
/* EPS26 RAW DATA */ 
ssSetOutputPortDataType(S, 38, SS_UINT8); 
ssSetOutputPortWidth(S, 38, 1); 
/* EPS27 RAW DATA */ 
ssSetOutputPortDataType(S, 39, SS_UINT8); 
ssSetOutputPortWidth(S, 39, 1); 
/* SAS2.SAS_CheckSum */ 
ssSetOutputPortDataType(S, 40, SS_UINT8); 
ssSetOutputPortWidth(S, 40, 1); 
/* SAS2.SAS_MsgCount */ 
ssSetOutputPortDataType(S, 41, SS_UINT8); 
ssSetOutputPortWidth(S, 41, 1); 
/* SAS2.SAS_OK */ 
ssSetOutputPortDataType(S, 42, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 42, 1); 
/* SAS2.SAS_CAL */ 
ssSetOutputPortDataType(S, 43, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 43, 1); 
/* SAS2.SAS_Trim */ 
ssSetOutputPortDataType(S, 44, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 44, 1); 
/* SAS2.SAS_Speed_Valid */ 
ssSetOutputPortDataType(S, 45, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 45, 1); 
/* SAS2.SAS_Stat_SF1 */ 
ssSetOutputPortDataType(S, 46, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 46, 1); 
/* SAS2.SAS_Stat_SF2 */ 
ssSetOutputPortDataType(S, 47, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 47, 1); 
/* SAS2.SAS_Stat_SF3 */ 
ssSetOutputPortDataType(S, 48, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 48, 1); 
/* SAS2.SAS_Stat_SF4 */ 
ssSetOutputPortDataType(S, 49, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 49, 1); 
/* SAS2.SAS_Speed */ 
ssSetOutputPortDataType(S, 50, SS_UINT16); 
ssSetOutputPortWidth(S, 50, 1); 
/* SAS2.SAS_Angle */ 
ssSetOutputPortDataType(S, 51, SS_DOUBLE); 
ssSetOutputPortWidth(S, 51, 1); 
/* SAS2 RX_STATUS */ 
ssSetOutputPortDataType(S, 52, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 52, 1); 
/* SAS2 time */ 
ssSetOutputPortDataType(S, 53, SS_DOUBLE); 
ssSetOutputPortWidth(S, 53, 1); 
/* SAS2 deltatime */ 
ssSetOutputPortDataType(S, 54, SS_DOUBLE); 
ssSetOutputPortWidth(S, 54, 1); 
/* SAS20 RAW DATA */ 
ssSetOutputPortDataType(S, 55, SS_UINT8); 
ssSetOutputPortWidth(S, 55, 1); 
/* SAS21 RAW DATA */ 
ssSetOutputPortDataType(S, 56, SS_UINT8); 
ssSetOutputPortWidth(S, 56, 1); 
/* SAS22 RAW DATA */ 
ssSetOutputPortDataType(S, 57, SS_UINT8); 
ssSetOutputPortWidth(S, 57, 1); 
/* SAS23 RAW DATA */ 
ssSetOutputPortDataType(S, 58, SS_UINT8); 
ssSetOutputPortWidth(S, 58, 1); 
/* SAS24 RAW DATA */ 
ssSetOutputPortDataType(S, 59, SS_UINT8); 
ssSetOutputPortWidth(S, 59, 1); 
/* SAS25 RAW DATA */ 
ssSetOutputPortDataType(S, 60, SS_UINT8); 
ssSetOutputPortWidth(S, 60, 1); 
/* SAS26 RAW DATA */ 
ssSetOutputPortDataType(S, 61, SS_UINT8); 
ssSetOutputPortWidth(S, 61, 1); 
/* SAS27 RAW DATA */ 
ssSetOutputPortDataType(S, 62, SS_UINT8); 
ssSetOutputPortWidth(S, 62, 1); 
