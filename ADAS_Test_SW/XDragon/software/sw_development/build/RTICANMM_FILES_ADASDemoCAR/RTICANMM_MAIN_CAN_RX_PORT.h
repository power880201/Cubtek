/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_RX_PORT */
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
/* EPS2.RollingCounter_EPS2 */ 
ssSetOutputPortDataType(S, 10, SS_UINT8); 
ssSetOutputPortWidth(S, 10, 1); 
/* EPS2.EPS_LKATrqOvlDlvdSts */ 
ssSetOutputPortDataType(S, 11, SS_UINT8); 
ssSetOutputPortWidth(S, 11, 1); 
/* EPS2.EPS_HandsOffDetnModEnable */ 
ssSetOutputPortDataType(S, 12, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 12, 1); 
/* EPS2.EPS_LKATorqOvrlDlvdValid */ 
ssSetOutputPortDataType(S, 13, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 13, 1); 
/* EPS2.EPS_LKATorqOvrlDlvd */ 
ssSetOutputPortDataType(S, 14, SS_DOUBLE); 
ssSetOutputPortWidth(S, 14, 1); 
/* EPS2.EPS_HandsOffDetnStsValid */ 
ssSetOutputPortDataType(S, 15, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 15, 1); 
/* EPS2.EPS_HandsOffDetnSts */ 
ssSetOutputPortDataType(S, 16, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 16, 1); 
/* EPS2.CheckSum_EPS2 */ 
ssSetOutputPortDataType(S, 17, SS_UINT8); 
ssSetOutputPortWidth(S, 17, 1); 
/* SAS2.SAS_CheckSum */ 
ssSetOutputPortDataType(S, 18, SS_UINT8); 
ssSetOutputPortWidth(S, 18, 1); 
/* SAS2.SAS_MsgCount */ 
ssSetOutputPortDataType(S, 19, SS_UINT8); 
ssSetOutputPortWidth(S, 19, 1); 
/* SAS2.SAS_OK */ 
ssSetOutputPortDataType(S, 20, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 20, 1); 
/* SAS2.SAS_CAL */ 
ssSetOutputPortDataType(S, 21, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 21, 1); 
/* SAS2.SAS_Trim */ 
ssSetOutputPortDataType(S, 22, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 22, 1); 
/* SAS2.SAS_Speed_Valid */ 
ssSetOutputPortDataType(S, 23, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 23, 1); 
/* SAS2.SAS_Stat_SF1 */ 
ssSetOutputPortDataType(S, 24, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 24, 1); 
/* SAS2.SAS_Stat_SF2 */ 
ssSetOutputPortDataType(S, 25, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 25, 1); 
/* SAS2.SAS_Stat_SF3 */ 
ssSetOutputPortDataType(S, 26, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 26, 1); 
/* SAS2.SAS_Stat_SF4 */ 
ssSetOutputPortDataType(S, 27, SS_BOOLEAN); 
ssSetOutputPortWidth(S, 27, 1); 
/* SAS2.SAS_Speed */ 
ssSetOutputPortDataType(S, 28, SS_UINT16); 
ssSetOutputPortWidth(S, 28, 1); 
/* SAS2.SAS_Angle */ 
ssSetOutputPortDataType(S, 29, SS_DOUBLE); 
ssSetOutputPortWidth(S, 29, 1); 
