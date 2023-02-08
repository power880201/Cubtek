/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_TX_PORT */
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

/* ABS2_C.BrkSw_Sta */ 
ssSetInputPortDataType(S, 0, SS_BOOLEAN); 
ssSetInputPortWidth(S, 0, 1);
/* ABS2_C.BrkSw_V */ 
ssSetInputPortDataType(S, 1, SS_BOOLEAN); 
ssSetInputPortWidth(S, 1, 1);
/* ABS2_C.VehSpeed */ 
ssSetInputPortDataType(S, 2, SS_DOUBLE); 
ssSetInputPortWidth(S, 2, 1);
/* ABS4_C.YawRate */ 
ssSetInputPortDataType(S, 3, SS_DOUBLE); 
ssSetInputPortWidth(S, 3, 1);
/* ABS4_C.SteerAng */ 
ssSetInputPortDataType(S, 4, SS_DOUBLE); 
ssSetInputPortWidth(S, 4, 1);
/* ABS4_C.SteerAng_Sensor_V */ 
ssSetInputPortDataType(S, 5, SS_BOOLEAN); 
ssSetInputPortWidth(S, 5, 1);
/* ABS4_C.YawRate_V */ 
ssSetInputPortDataType(S, 6, SS_BOOLEAN); 
ssSetInputPortWidth(S, 6, 1);
/* ABS4_C.SteerAng_V */ 
ssSetInputPortDataType(S, 7, SS_BOOLEAN); 
ssSetInputPortWidth(S, 7, 1);
/* SAS1.SAS_CheckSum */ 
ssSetInputPortDataType(S, 8, SS_UINT8); 
ssSetInputPortWidth(S, 8, 1);
/* SAS1.SAS_MsgCount */ 
ssSetInputPortDataType(S, 9, SS_UINT8); 
ssSetInputPortWidth(S, 9, 1);
/* SAS1.SAS_OK */ 
ssSetInputPortDataType(S, 10, SS_BOOLEAN); 
ssSetInputPortWidth(S, 10, 1);
/* SAS1.SAS_CAL */ 
ssSetInputPortDataType(S, 11, SS_BOOLEAN); 
ssSetInputPortWidth(S, 11, 1);
/* SAS1.SAS_Angle */ 
ssSetInputPortDataType(S, 12, SS_DOUBLE); 
ssSetInputPortWidth(S, 12, 1);
/* SpeedInformation.radarDeviceSpeedDirection */ 
ssSetInputPortDataType(S, 13, SS_UINT8); 
ssSetInputPortWidth(S, 13, 1);
/* SpeedInformation.radarDeviceSpeed */ 
ssSetInputPortDataType(S, 14, SS_DOUBLE); 
ssSetInputPortWidth(S, 14, 1);
/* YawRateInformation.radarDeviceYawRate */ 
ssSetInputPortDataType(S, 15, SS_DOUBLE); 
ssSetInputPortWidth(S, 15, 1);
