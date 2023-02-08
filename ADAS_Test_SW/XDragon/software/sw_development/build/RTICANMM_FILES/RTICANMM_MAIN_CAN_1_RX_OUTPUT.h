/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_RX_OUTPUT */
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

/* ABS1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 11))[0] = CANMMCAN_1_RXsta[5];
/* ABS2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 37))[0] = CANMMCAN_1_RXsta[6];
/* ABS3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 56))[0] = CANMMCAN_1_RXsta[8];
/* ABS4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 77))[0] = CANMMCAN_1_RXsta[10];
/* AC1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 89))[0] = CANMMCAN_1_RXsta[18];
/* BCM1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 110))[0] = CANMMCAN_1_RXsta[16];
/* BCM2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 122))[0] = CANMMCAN_1_RXsta[15];
/* ECM1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 140))[0] = CANMMCAN_1_RXsta[0];
/* ECM2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 153))[0] = CANMMCAN_1_RXsta[1];
/* ECM3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 172))[0] = CANMMCAN_1_RXsta[2];
/* ECM9 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 188))[0] = CANMMCAN_1_RXsta[7];
/* EPAS2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 207))[0] = CANMMCAN_1_RXsta[13];
/* EPAS3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 229))[0] = CANMMCAN_1_RXsta[29];
/* EPB1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 241))[0] = CANMMCAN_1_RXsta[14];
/* HCU3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 268))[0] = CANMMCAN_1_RXsta[9];
/* HCU4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 289))[0] = CANMMCAN_1_RXsta[11];
/* HMI1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 322))[0] = CANMMCAN_1_RXsta[26];
/* HMI2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 340))[0] = CANMMCAN_1_RXsta[25];
/* Meter1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 355))[0] = CANMMCAN_1_RXsta[17];
/* Meter3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 367))[0] = CANMMCAN_1_RXsta[19];
/* NMmADAS RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 382))[0] = CANMMCAN_1_RXsta[30];
/* SAS1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 398))[0] = CANMMCAN_1_RXsta[12];
/* TCM1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 417))[0] = CANMMCAN_1_RXsta[3];
/* TCM2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 429))[0] = CANMMCAN_1_RXsta[4];
/* VCU1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 457))[0] = CANMMCAN_1_RXsta[27];
/* VCU2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 474))[0] = CANMMCAN_1_RXsta[28];
