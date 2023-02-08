/*****************************************************************************************************************************/
/* RTICANMM_MAIN_ADAS_CAN_TX_PORT */
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

/* ADAS10.ADAS1_LifeCount_ADAS */ 
ssSetInputPortDataType(S, 0, SS_UINT8); 
ssSetInputPortWidth(S, 0, 1);
/* ADAS10.CrashOutputSts_ADAS */ 
ssSetInputPortDataType(S, 1, SS_UINT8); 
ssSetInputPortWidth(S, 1, 1);
/* ADAS10.Str_Angle_ADAS */ 
ssSetInputPortDataType(S, 2, SS_DOUBLE); 
ssSetInputPortWidth(S, 2, 1);
/* ADAS10.YawRate_ADAS */ 
ssSetInputPortDataType(S, 3, SS_DOUBLE); 
ssSetInputPortWidth(S, 3, 1);
/* ADAS10.Str_Angle_ADAS_V */ 
ssSetInputPortDataType(S, 4, SS_BOOLEAN); 
ssSetInputPortWidth(S, 4, 1);
/* ADAS10.Brk_Sta_ADAS_V */ 
ssSetInputPortDataType(S, 5, SS_BOOLEAN); 
ssSetInputPortWidth(S, 5, 1);
/* ADAS10.Brk_Sta_ADAS */ 
ssSetInputPortDataType(S, 6, SS_BOOLEAN); 
ssSetInputPortWidth(S, 6, 1);
/* ADAS10.YawRate_ADAS_V */ 
ssSetInputPortDataType(S, 7, SS_BOOLEAN); 
ssSetInputPortWidth(S, 7, 1);
/* ADAS10.VehSpeed_ADAS */ 
ssSetInputPortDataType(S, 8, SS_DOUBLE); 
ssSetInputPortWidth(S, 8, 1);
/* ADAS11.ADAS2_LifeCount_ADAS */ 
ssSetInputPortDataType(S, 9, SS_UINT8); 
ssSetInputPortWidth(S, 9, 1);
/* ADAS11.LDW_Enable_ADAS */ 
ssSetInputPortDataType(S, 10, SS_BOOLEAN); 
ssSetInputPortWidth(S, 10, 1);
/* ADAS11.CSW_FWipSw_Sta_ADAS */ 
ssSetInputPortDataType(S, 11, SS_UINT8); 
ssSetInputPortWidth(S, 11, 1);
/* ADAS11.FECU_HiBeamRly_Sta_ADAS */ 
ssSetInputPortDataType(S, 12, SS_UINT8); 
ssSetInputPortWidth(S, 12, 1);
/* ADAS11.FECU_LoBeamRly_Sta_ADAS */ 
ssSetInputPortDataType(S, 13, SS_UINT8); 
ssSetInputPortWidth(S, 13, 1);
/* ADAS11.CSW_TurnSw_Sta_ADAS */ 
ssSetInputPortDataType(S, 14, SS_UINT8); 
ssSetInputPortWidth(S, 14, 1);
/* ADAS11.CAN_GEAR_STA_NOW_ADAS_V */ 
ssSetInputPortDataType(S, 15, SS_BOOLEAN); 
ssSetInputPortWidth(S, 15, 1);
/* ADAS11.CAN_GEAR_STATE_NOW_ADAS */ 
ssSetInputPortDataType(S, 16, SS_UINT8); 
ssSetInputPortWidth(S, 16, 1);
