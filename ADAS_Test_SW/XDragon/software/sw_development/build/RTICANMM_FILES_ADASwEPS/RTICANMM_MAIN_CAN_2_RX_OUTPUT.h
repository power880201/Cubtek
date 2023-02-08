/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_RX_OUTPUT */
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

/* HighLowBeam RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 17))[0] = CANMMCAN_2_RXsta[22];
/* IBEO1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 27))[0] = CANMMCAN_2_RXsta[14];
/* IBEO2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 32))[0] = CANMMCAN_2_RXsta[15];
/* IBEO3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 40))[0] = CANMMCAN_2_RXsta[16];
/* IBEO4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 51))[0] = CANMMCAN_2_RXsta[17];
/* IBEO5 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 60))[0] = CANMMCAN_2_RXsta[18];
/* IBEO6 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 67))[0] = CANMMCAN_2_RXsta[19];
/* IBEO7 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 75))[0] = CANMMCAN_2_RXsta[20];
/* IBEO8 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 86))[0] = CANMMCAN_2_RXsta[21];
/* LKA_Left_Lane_A RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 95))[0] = CANMMCAN_2_RXsta[56];
/* LKA_Left_Lane_B RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 115))[0] = CANMMCAN_2_RXsta[57];
/* LKA_Right_Lane_A RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 124))[0] = CANMMCAN_2_RXsta[58];
/* LKA_Right_Lane_B RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 144))[0] = CANMMCAN_2_RXsta[59];
/* Next_Left_Lane_A RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 153))[0] = CANMMCAN_2_RXsta[61];
/* Next_Left_Lane_B RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 159))[0] = CANMMCAN_2_RXsta[62];
/* Next_Right_Lane_A RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 168))[0] = CANMMCAN_2_RXsta[63];
/* Next_Right_Lane_B RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 174))[0] = CANMMCAN_2_RXsta[64];
/* ObstacleDataA1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 190))[0] = CANMMCAN_2_RXsta[25];
/* ObstacleDataA10 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 206))[0] = CANMMCAN_2_RXsta[52];
/* ObstacleDataA2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 222))[0] = CANMMCAN_2_RXsta[28];
/* ObstacleDataA3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 238))[0] = CANMMCAN_2_RXsta[31];
/* ObstacleDataA4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 254))[0] = CANMMCAN_2_RXsta[34];
/* ObstacleDataA5 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 270))[0] = CANMMCAN_2_RXsta[37];
/* ObstacleDataA6 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 286))[0] = CANMMCAN_2_RXsta[40];
/* ObstacleDataA7 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 302))[0] = CANMMCAN_2_RXsta[43];
/* ObstacleDataA8 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 318))[0] = CANMMCAN_2_RXsta[46];
/* ObstacleDataA9 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 334))[0] = CANMMCAN_2_RXsta[49];
/* ObstacleDataB1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 349))[0] = CANMMCAN_2_RXsta[26];
/* ObstacleDataB10 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 364))[0] = CANMMCAN_2_RXsta[53];
/* ObstacleDataB2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 379))[0] = CANMMCAN_2_RXsta[29];
/* ObstacleDataB3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 394))[0] = CANMMCAN_2_RXsta[32];
/* ObstacleDataB4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 409))[0] = CANMMCAN_2_RXsta[35];
/* ObstacleDataB5 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 424))[0] = CANMMCAN_2_RXsta[38];
/* ObstacleDataB6 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 439))[0] = CANMMCAN_2_RXsta[41];
/* ObstacleDataB7 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 454))[0] = CANMMCAN_2_RXsta[44];
/* ObstacleDataB8 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 469))[0] = CANMMCAN_2_RXsta[47];
/* ObstacleDataB9 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 484))[0] = CANMMCAN_2_RXsta[50];
/* ObstacleDataC1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 495))[0] = CANMMCAN_2_RXsta[27];
/* ObstacleDataC10 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 506))[0] = CANMMCAN_2_RXsta[54];
/* ObstacleDataC2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 517))[0] = CANMMCAN_2_RXsta[30];
/* ObstacleDataC3 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 528))[0] = CANMMCAN_2_RXsta[33];
/* ObstacleDataC4 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 539))[0] = CANMMCAN_2_RXsta[36];
/* ObstacleDataC5 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 550))[0] = CANMMCAN_2_RXsta[39];
/* ObstacleDataC6 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 561))[0] = CANMMCAN_2_RXsta[42];
/* ObstacleDataC7 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 572))[0] = CANMMCAN_2_RXsta[45];
/* ObstacleDataC8 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 583))[0] = CANMMCAN_2_RXsta[48];
/* ObstacleDataC9 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 594))[0] = CANMMCAN_2_RXsta[51];
/* ObstacleStatusA RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 608))[0] = CANMMCAN_2_RXsta[24];
/* ObstacleStatusB RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 613))[0] = CANMMCAN_2_RXsta[23];
/* ObstacleStatusC RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 620))[0] = CANMMCAN_2_RXsta[55];
/* Road_Information RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 632))[0] = CANMMCAN_2_RXsta[60];
/* Capture Message 1 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 635))[0] = CANMMCAN_2_CAPS[0];
/* Capture Message 2 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 648))[0] = CANMMCAN_2_CAPS[1];
/* Capture Message 3 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 661))[0] = CANMMCAN_2_CAPS[2];
/* Capture Message 4 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 674))[0] = CANMMCAN_2_CAPS[3];
/* Capture Message 5 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 687))[0] = CANMMCAN_2_CAPS[4];
/* Capture Message 6 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 700))[0] = CANMMCAN_2_CAPS[5];
/* Capture Message 7 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 713))[0] = CANMMCAN_2_CAPS[6];
/* Capture Message 8 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 726))[0] = CANMMCAN_2_CAPS[7];
/* Capture Message 9 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 739))[0] = CANMMCAN_2_CAPS[8];
/* Capture Message 10 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 752))[0] = CANMMCAN_2_CAPS[9];
/* Capture Message 11 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 765))[0] = CANMMCAN_2_CAPS[10];
/* Capture Message 12 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 778))[0] = CANMMCAN_2_CAPS[11];
/* Capture Message 13 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 791))[0] = CANMMCAN_2_CAPS[12];
/* Capture Message 14 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 804))[0] = CANMMCAN_2_CAPS[13];
/* Capture Message 15 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 817))[0] = CANMMCAN_2_CAPS[14];
/* Capture Message 16 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 830))[0] = CANMMCAN_2_CAPS[15];
/* Capture Message 17 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 843))[0] = CANMMCAN_2_CAPS[16];
/* Capture Message 18 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 856))[0] = CANMMCAN_2_CAPS[17];
/* Capture Message 19 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 869))[0] = CANMMCAN_2_CAPS[18];
/* Capture Message 20 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 882))[0] = CANMMCAN_2_CAPS[19];
/* Capture Message 21 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 895))[0] = CANMMCAN_2_CAPS[20];
/* Capture Message 22 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 908))[0] = CANMMCAN_2_CAPS[21];
/* Capture Message 23 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 921))[0] = CANMMCAN_2_CAPS[22];
/* Capture Message 24 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 934))[0] = CANMMCAN_2_CAPS[23];
/* Capture Message 25 RX Status */ 
((boolean_T*) ssGetOutputPortSignal(S, 947))[0] = CANMMCAN_2_CAPS[24];
