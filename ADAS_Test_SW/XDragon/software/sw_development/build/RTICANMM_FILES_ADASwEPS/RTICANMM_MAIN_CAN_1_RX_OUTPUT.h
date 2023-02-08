/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_RX_OUTPUT */
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

/* ABS1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 10))[0] = CANMMCAN_1_RXsta[5];
/* ABS2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 36))[0] = CANMMCAN_1_RXsta[6];
/* ABS3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 55))[0] = CANMMCAN_1_RXsta[8];
/* ABS4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 74))[0] = CANMMCAN_1_RXsta[13];
/* AC1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 86))[0] = CANMMCAN_1_RXsta[25];
/* BCM1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 119))[0] = CANMMCAN_1_RXsta[20];
/* BCM2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 131))[0] = CANMMCAN_1_RXsta[18];
/* ECM1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 151))[0] = CANMMCAN_1_RXsta[0];
/* ECM2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 165))[0] = CANMMCAN_1_RXsta[1];
/* ECM3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 180))[0] = CANMMCAN_1_RXsta[2];
/* ECM9 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 196))[0] = CANMMCAN_1_RXsta[7];
/* EPAS2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 215))[0] = CANMMCAN_1_RXsta[16];
/* EPAS3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 236))[0] = CANMMCAN_1_RXsta[32];
/* EPB1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 248))[0] = CANMMCAN_1_RXsta[17];
/* HCU3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 278))[0] = CANMMCAN_1_RXsta[10];
/* HCU4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 299))[0] = CANMMCAN_1_RXsta[14];
/* HMI1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 332))[0] = CANMMCAN_1_RXsta[29];
/* HMI2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 350))[0] = CANMMCAN_1_RXsta[28];
/* Meter1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 365))[0] = CANMMCAN_1_RXsta[24];
/* Meter3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 377))[0] = CANMMCAN_1_RXsta[27];
/* SAS1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 393))[0] = CANMMCAN_1_RXsta[15];
/* TCM1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 416))[0] = CANMMCAN_1_RXsta[3];
/* TCM2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 428))[0] = CANMMCAN_1_RXsta[4];
/* VCU1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 455))[0] = CANMMCAN_1_RXsta[30];
/* VCU2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 476))[0] = CANMMCAN_1_RXsta[31];
