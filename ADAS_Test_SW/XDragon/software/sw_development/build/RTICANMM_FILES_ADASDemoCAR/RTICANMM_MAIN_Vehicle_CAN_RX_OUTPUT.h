/*****************************************************************************************************************************/
/* RTICANMM_MAIN_Vehicle_CAN_RX_OUTPUT */
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

/* ABS1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 1))[0] = CANMMVehicle_CAN_RXsta[6];
/* ABS2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 26))[0] = CANMMVehicle_CAN_RXsta[8];
/* ABS3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 45))[0] = CANMMVehicle_CAN_RXsta[10];
/* ABS4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 64))[0] = CANMMVehicle_CAN_RXsta[15];
/* ABS8 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 85))[0] = CANMMVehicle_CAN_RXsta[20];
/* ADAS1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 109))[0] = CANMMVehicle_CAN_RXsta[11];
/* ADAS2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 140))[0] = CANMMVehicle_CAN_RXsta[13];
/* ADAS3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 159))[0] = CANMMVehicle_CAN_RXsta[14];
/* BCM1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 181))[0] = CANMMVehicle_CAN_RXsta[23];
/* BCM2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 193))[0] = CANMMVehicle_CAN_RXsta[21];
/* CSW1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 209))[0] = CANMMVehicle_CAN_RXsta[22];
/* ECM1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 227))[0] = CANMMVehicle_CAN_RXsta[0];
/* ECM2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 241))[0] = CANMMVehicle_CAN_RXsta[1];
/* ECM3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 257))[0] = CANMMVehicle_CAN_RXsta[2];
/* ECM4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 269))[0] = CANMMVehicle_CAN_RXsta[3];
/* ECM9 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 294))[0] = CANMMVehicle_CAN_RXsta[9];
/* EPAS1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 317))[0] = CANMMVehicle_CAN_RXsta[17];
/* EPAS2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 336))[0] = CANMMVehicle_CAN_RXsta[18];
/* EPB1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 349))[0] = CANMMVehicle_CAN_RXsta[19];
/* FECU1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 362))[0] = CANMMVehicle_CAN_RXsta[26];
/* HCU3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 389))[0] = CANMMVehicle_CAN_RXsta[12];
/* HCU4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 404))[0] = CANMMVehicle_CAN_RXsta[16];
/* HMI2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 422))[0] = CANMMVehicle_CAN_RXsta[31];
/* Meter1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 436))[0] = CANMMVehicle_CAN_RXsta[27];
/* Meter3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 448))[0] = CANMMVehicle_CAN_RXsta[28];
/* TCM1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 470))[0] = CANMMVehicle_CAN_RXsta[4];
/* TCM2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 482))[0] = CANMMVehicle_CAN_RXsta[5];
/* VCU1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 509))[0] = CANMMVehicle_CAN_RXsta[29];
/* VCU2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 530))[0] = CANMMVehicle_CAN_RXsta[30];
