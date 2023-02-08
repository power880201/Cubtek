/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_TX_PORT */
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

/* ABS1.RollingCounter_ABS1 */ 
ssSetInputPortDataType(S, 0, SS_UINT8); 
ssSetInputPortWidth(S, 0, 1);
/* ABS1.FRWheelSpd */ 
ssSetInputPortDataType(S, 1, SS_DOUBLE); 
ssSetInputPortWidth(S, 1, 1);
/* ABS1.FRWheelSpdValid */ 
ssSetInputPortDataType(S, 2, SS_BOOLEAN); 
ssSetInputPortWidth(S, 2, 1);
/* ABS1.FRWheelSpdFuckTRWValid */ 
ssSetInputPortDataType(S, 3, SS_BOOLEAN); 
ssSetInputPortWidth(S, 3, 1);
/* ABS1.FLWheelSpd */ 
ssSetInputPortDataType(S, 4, SS_DOUBLE); 
ssSetInputPortWidth(S, 4, 1);
/* ABS1.FLWheelSpdValid */ 
ssSetInputPortDataType(S, 5, SS_BOOLEAN); 
ssSetInputPortWidth(S, 5, 1);
/* ABS1.FLWheelSpdFuckTRWValid */ 
ssSetInputPortDataType(S, 6, SS_BOOLEAN); 
ssSetInputPortWidth(S, 6, 1);
/* ABS1.CheckSum_ABS1 */ 
ssSetInputPortDataType(S, 7, SS_UINT8); 
ssSetInputPortWidth(S, 7, 1);
/* ABS2.RollingCounter_ABS2 */ 
ssSetInputPortDataType(S, 8, SS_UINT8); 
ssSetInputPortWidth(S, 8, 1);
/* ABS2.RRWheelSpd */ 
ssSetInputPortDataType(S, 9, SS_DOUBLE); 
ssSetInputPortWidth(S, 9, 1);
/* ABS2.RRWheelSpdValid */ 
ssSetInputPortDataType(S, 10, SS_BOOLEAN); 
ssSetInputPortWidth(S, 10, 1);
/* ABS2.RRWheelSpdFuckTRWValid */ 
ssSetInputPortDataType(S, 11, SS_BOOLEAN); 
ssSetInputPortWidth(S, 11, 1);
/* ABS2.RLWheelSpd */ 
ssSetInputPortDataType(S, 12, SS_DOUBLE); 
ssSetInputPortWidth(S, 12, 1);
/* ABS2.RLWheelSpdValid */ 
ssSetInputPortDataType(S, 13, SS_BOOLEAN); 
ssSetInputPortWidth(S, 13, 1);
/* ABS2.RLWheelSpdFuckTRWValid */ 
ssSetInputPortDataType(S, 14, SS_BOOLEAN); 
ssSetInputPortWidth(S, 14, 1);
/* ABS2.CheckSum_ABS2 */ 
ssSetInputPortDataType(S, 15, SS_UINT8); 
ssSetInputPortWidth(S, 15, 1);
/* ABS3.RollingCounter_ABS3 */ 
ssSetInputPortDataType(S, 16, SS_UINT8); 
ssSetInputPortWidth(S, 16, 1);
/* ABS3.VehcileSpd */ 
ssSetInputPortDataType(S, 17, SS_DOUBLE); 
ssSetInputPortWidth(S, 17, 1);
/* ABS3.VehicleSpdValid */ 
ssSetInputPortDataType(S, 18, SS_BOOLEAN); 
ssSetInputPortWidth(S, 18, 1);
/* ABS3.CheckSum_ABS3 */ 
ssSetInputPortDataType(S, 19, SS_UINT8); 
ssSetInputPortWidth(S, 19, 1);
/* ECM2.EngState */ 
ssSetInputPortDataType(S, 20, SS_UINT8); 
ssSetInputPortWidth(S, 20, 1);
/* GWA1.EPSSwErrorSts */ 
ssSetInputPortDataType(S, 21, SS_BOOLEAN); 
ssSetInputPortWidth(S, 21, 1);
/* GWA1.EPSSwSts */ 
ssSetInputPortDataType(S, 22, SS_BOOLEAN); 
ssSetInputPortWidth(S, 22, 1);
/* IFC1.RollingCounter_IFC */ 
ssSetInputPortDataType(S, 23, SS_UINT8); 
ssSetInputPortWidth(S, 23, 1);
/* IFC1.LKATrqCmdReqFlag */ 
ssSetInputPortDataType(S, 24, SS_BOOLEAN); 
ssSetInputPortWidth(S, 24, 1);
/* IFC1.LKATrqOvlCmdReqValue */ 
ssSetInputPortDataType(S, 25, SS_DOUBLE); 
ssSetInputPortWidth(S, 25, 1);
/* IFC1.LKATrqOvlCmdProtnValue */ 
ssSetInputPortDataType(S, 26, SS_UINT16); 
ssSetInputPortWidth(S, 26, 1);
/* IFC1.CheckSum_IFC */ 
ssSetInputPortDataType(S, 27, SS_UINT8); 
ssSetInputPortWidth(S, 27, 1);
/* SAS1.RollingCounter_SAS1 */ 
ssSetInputPortDataType(S, 28, SS_UINT8); 
ssSetInputPortWidth(S, 28, 1);
/* SAS1.SAS_Sts */ 
ssSetInputPortDataType(S, 29, SS_UINT8); 
ssSetInputPortWidth(S, 29, 1);
/* SAS1.SAS_Generation */ 
ssSetInputPortDataType(S, 30, SS_UINT8); 
ssSetInputPortWidth(S, 30, 1);
/* SAS1.SteerWheelSpdSign */ 
ssSetInputPortDataType(S, 31, SS_BOOLEAN); 
ssSetInputPortWidth(S, 31, 1);
/* SAS1.SteerWheelSpd */ 
ssSetInputPortDataType(S, 32, SS_DOUBLE); 
ssSetInputPortWidth(S, 32, 1);
/* SAS1.SteerWheelAngleSign */ 
ssSetInputPortDataType(S, 33, SS_BOOLEAN); 
ssSetInputPortWidth(S, 33, 1);
/* SAS1.SteerWheelAngle */ 
ssSetInputPortDataType(S, 34, SS_DOUBLE); 
ssSetInputPortWidth(S, 34, 1);
/* SAS1.CheckSum_SAS1 */ 
ssSetInputPortDataType(S, 35, SS_UINT8); 
ssSetInputPortWidth(S, 35, 1);
