/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_MESSAGE_DEFAULTS */
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

CANMMCAN_2_MAXMSGPERSTEP = 0;

/* DefaultGlobalEnable */
CANMMCAN_2_GEIN = 1;


/* Feedthrough debug variable*/
CANMMCAN_2_FTD = 0;
CANMMCAN_2_RTVE = 1;


/* ABS2_C */
CANMMCAN_2_TXCT[6] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[6] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[6] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[6] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[6] = 0; /* RX Error */
CANMMCAN_2_RXLEN[6] = 8; /* RX Message Length */


/* ABS4_C */
CANMMCAN_2_TXCT[9] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[9] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[9] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[9] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[9] = 0; /* RX Error */
CANMMCAN_2_RXLEN[9] = 8; /* RX Message Length */


/* BCM1_C */
CANMMCAN_2_TXCT[12] = 2.000000e-01; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[12] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[12] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[12] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[12] = 0; /* RX Error */
CANMMCAN_2_RXLEN[12] = 8; /* RX Message Length */


/* CSW1_C */
CANMMCAN_2_TXCT[11] = 2.000000e-01; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[11] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[11] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[11] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[11] = 0; /* RX Error */
CANMMCAN_2_RXLEN[11] = 8; /* RX Message Length */


/* FECU1_C */
CANMMCAN_2_TXCT[13] = 2.000000e-01; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[13] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[13] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[13] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[13] = 0; /* RX Error */
CANMMCAN_2_RXLEN[13] = 8; /* RX Message Length */


/* HighLowBeam */
CANMMCAN_2_RXCT6 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[22] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[22] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[22] = 0; /* RX Error */
CANMMCAN_2_RXLEN[22] = 3; /* RX Message Length */


/* IBEO1 */
CANMMCAN_2_RXCT7 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[14] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[14] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[14] = 0; /* RX Error */
CANMMCAN_2_RXLEN[14] = 6; /* RX Message Length */


/* IBEO2 */
CANMMCAN_2_RXCT8 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[15] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[15] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[15] = 0; /* RX Error */
CANMMCAN_2_RXLEN[15] = 8; /* RX Message Length */


/* IBEO3 */
CANMMCAN_2_RXCT9 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[16] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[16] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[16] = 0; /* RX Error */
CANMMCAN_2_RXLEN[16] = 8; /* RX Message Length */


/* IBEO4 */
CANMMCAN_2_RXCT10 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[17] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[17] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[17] = 0; /* RX Error */
CANMMCAN_2_RXLEN[17] = 8; /* RX Message Length */


/* IBEO5 */
CANMMCAN_2_RXCT11 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[18] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[18] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[18] = 0; /* RX Error */
CANMMCAN_2_RXLEN[18] = 8; /* RX Message Length */


/* IBEO6 */
CANMMCAN_2_RXCT12 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[19] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[19] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[19] = 0; /* RX Error */
CANMMCAN_2_RXLEN[19] = 8; /* RX Message Length */


/* IBEO7 */
CANMMCAN_2_RXCT13 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[20] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[20] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[20] = 0; /* RX Error */
CANMMCAN_2_RXLEN[20] = 8; /* RX Message Length */


/* IBEO8 */
CANMMCAN_2_RXCT14 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[21] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[21] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[21] = 0; /* RX Error */
CANMMCAN_2_RXLEN[21] = 8; /* RX Message Length */


/* LKA_Left_Lane_A */
CANMMCAN_2_RXCT15 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[56] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[56] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[56] = 0; /* RX Error */
CANMMCAN_2_RXLEN[56] = 8; /* RX Message Length */


/* LKA_Left_Lane_B */
CANMMCAN_2_RXCT16 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[57] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[57] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[57] = 0; /* RX Error */
CANMMCAN_2_RXLEN[57] = 7; /* RX Message Length */


/* LKA_Right_Lane_A */
CANMMCAN_2_RXCT17 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[58] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[58] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[58] = 0; /* RX Error */
CANMMCAN_2_RXLEN[58] = 8; /* RX Message Length */


/* LKA_Right_Lane_B */
CANMMCAN_2_RXCT18 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[59] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[59] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[59] = 0; /* RX Error */
CANMMCAN_2_RXLEN[59] = 7; /* RX Message Length */


/* Next_Left_Lane_A */
CANMMCAN_2_RXCT19 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[61] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[61] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[61] = 0; /* RX Error */
CANMMCAN_2_RXLEN[61] = 8; /* RX Message Length */


/* Next_Left_Lane_B */
CANMMCAN_2_RXCT20 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[62] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[62] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[62] = 0; /* RX Error */
CANMMCAN_2_RXLEN[62] = 4; /* RX Message Length */


/* Next_Right_Lane_A */
CANMMCAN_2_RXCT21 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[63] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[63] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[63] = 0; /* RX Error */
CANMMCAN_2_RXLEN[63] = 8; /* RX Message Length */


/* Next_Right_Lane_B */
CANMMCAN_2_RXCT22 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[64] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[64] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[64] = 0; /* RX Error */
CANMMCAN_2_RXLEN[64] = 4; /* RX Message Length */


/* ObstacleDataA1 */
CANMMCAN_2_RXCT23 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[25] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[25] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[25] = 0; /* RX Error */
CANMMCAN_2_RXLEN[25] = 8; /* RX Message Length */


/* ObstacleDataA10 */
CANMMCAN_2_RXCT24 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[52] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[52] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[52] = 0; /* RX Error */
CANMMCAN_2_RXLEN[52] = 8; /* RX Message Length */


/* ObstacleDataA2 */
CANMMCAN_2_RXCT25 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[28] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[28] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[28] = 0; /* RX Error */
CANMMCAN_2_RXLEN[28] = 8; /* RX Message Length */


/* ObstacleDataA3 */
CANMMCAN_2_RXCT26 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[31] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[31] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[31] = 0; /* RX Error */
CANMMCAN_2_RXLEN[31] = 8; /* RX Message Length */


/* ObstacleDataA4 */
CANMMCAN_2_RXCT27 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[34] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[34] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[34] = 0; /* RX Error */
CANMMCAN_2_RXLEN[34] = 8; /* RX Message Length */


/* ObstacleDataA5 */
CANMMCAN_2_RXCT28 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[37] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[37] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[37] = 0; /* RX Error */
CANMMCAN_2_RXLEN[37] = 8; /* RX Message Length */


/* ObstacleDataA6 */
CANMMCAN_2_RXCT29 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[40] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[40] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[40] = 0; /* RX Error */
CANMMCAN_2_RXLEN[40] = 8; /* RX Message Length */


/* ObstacleDataA7 */
CANMMCAN_2_RXCT30 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[43] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[43] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[43] = 0; /* RX Error */
CANMMCAN_2_RXLEN[43] = 8; /* RX Message Length */


/* ObstacleDataA8 */
CANMMCAN_2_RXCT31 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[46] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[46] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[46] = 0; /* RX Error */
CANMMCAN_2_RXLEN[46] = 8; /* RX Message Length */


/* ObstacleDataA9 */
CANMMCAN_2_RXCT32 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[49] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[49] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[49] = 0; /* RX Error */
CANMMCAN_2_RXLEN[49] = 8; /* RX Message Length */


/* ObstacleDataB1 */
CANMMCAN_2_RXCT33 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[26] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[26] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[26] = 0; /* RX Error */
CANMMCAN_2_RXLEN[26] = 8; /* RX Message Length */


/* ObstacleDataB10 */
CANMMCAN_2_RXCT34 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[53] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[53] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[53] = 0; /* RX Error */
CANMMCAN_2_RXLEN[53] = 8; /* RX Message Length */


/* ObstacleDataB2 */
CANMMCAN_2_RXCT35 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[29] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[29] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[29] = 0; /* RX Error */
CANMMCAN_2_RXLEN[29] = 8; /* RX Message Length */


/* ObstacleDataB3 */
CANMMCAN_2_RXCT36 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[32] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[32] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[32] = 0; /* RX Error */
CANMMCAN_2_RXLEN[32] = 8; /* RX Message Length */


/* ObstacleDataB4 */
CANMMCAN_2_RXCT37 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[35] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[35] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[35] = 0; /* RX Error */
CANMMCAN_2_RXLEN[35] = 8; /* RX Message Length */


/* ObstacleDataB5 */
CANMMCAN_2_RXCT38 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[38] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[38] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[38] = 0; /* RX Error */
CANMMCAN_2_RXLEN[38] = 8; /* RX Message Length */


/* ObstacleDataB6 */
CANMMCAN_2_RXCT39 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[41] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[41] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[41] = 0; /* RX Error */
CANMMCAN_2_RXLEN[41] = 8; /* RX Message Length */


/* ObstacleDataB7 */
CANMMCAN_2_RXCT40 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[44] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[44] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[44] = 0; /* RX Error */
CANMMCAN_2_RXLEN[44] = 8; /* RX Message Length */


/* ObstacleDataB8 */
CANMMCAN_2_RXCT41 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[47] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[47] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[47] = 0; /* RX Error */
CANMMCAN_2_RXLEN[47] = 8; /* RX Message Length */


/* ObstacleDataB9 */
CANMMCAN_2_RXCT42 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[50] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[50] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[50] = 0; /* RX Error */
CANMMCAN_2_RXLEN[50] = 8; /* RX Message Length */


/* ObstacleDataC1 */
CANMMCAN_2_RXCT43 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[27] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[27] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[27] = 0; /* RX Error */
CANMMCAN_2_RXLEN[27] = 8; /* RX Message Length */


/* ObstacleDataC10 */
CANMMCAN_2_RXCT44 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[54] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[54] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[54] = 0; /* RX Error */
CANMMCAN_2_RXLEN[54] = 8; /* RX Message Length */


/* ObstacleDataC2 */
CANMMCAN_2_RXCT45 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[30] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[30] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[30] = 0; /* RX Error */
CANMMCAN_2_RXLEN[30] = 8; /* RX Message Length */


/* ObstacleDataC3 */
CANMMCAN_2_RXCT46 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[33] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[33] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[33] = 0; /* RX Error */
CANMMCAN_2_RXLEN[33] = 8; /* RX Message Length */


/* ObstacleDataC4 */
CANMMCAN_2_RXCT47 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[36] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[36] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[36] = 0; /* RX Error */
CANMMCAN_2_RXLEN[36] = 8; /* RX Message Length */


/* ObstacleDataC5 */
CANMMCAN_2_RXCT48 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[39] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[39] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[39] = 0; /* RX Error */
CANMMCAN_2_RXLEN[39] = 8; /* RX Message Length */


/* ObstacleDataC6 */
CANMMCAN_2_RXCT49 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[42] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[42] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[42] = 0; /* RX Error */
CANMMCAN_2_RXLEN[42] = 8; /* RX Message Length */


/* ObstacleDataC7 */
CANMMCAN_2_RXCT50 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[45] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[45] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[45] = 0; /* RX Error */
CANMMCAN_2_RXLEN[45] = 8; /* RX Message Length */


/* ObstacleDataC8 */
CANMMCAN_2_RXCT51 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[48] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[48] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[48] = 0; /* RX Error */
CANMMCAN_2_RXLEN[48] = 8; /* RX Message Length */


/* ObstacleDataC9 */
CANMMCAN_2_RXCT52 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[51] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[51] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[51] = 0; /* RX Error */
CANMMCAN_2_RXLEN[51] = 8; /* RX Message Length */


/* ObstacleStatusA */
CANMMCAN_2_RXCT53 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[24] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[24] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[24] = 0; /* RX Error */
CANMMCAN_2_RXLEN[24] = 7; /* RX Message Length */


/* ObstacleStatusB */
CANMMCAN_2_RXCT54 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[23] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[23] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[23] = 0; /* RX Error */
CANMMCAN_2_RXLEN[23] = 8; /* RX Message Length */


/* ObstacleStatusC */
CANMMCAN_2_RXCT55 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[55] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[55] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[55] = 0; /* RX Error */
CANMMCAN_2_RXLEN[55] = 8; /* RX Message Length */


/* Road_Information */
CANMMCAN_2_RXCT56 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[60] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[60] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[60] = 0; /* RX Error */
CANMMCAN_2_RXLEN[60] = 8; /* RX Message Length */


/* SAS1_C */
CANMMCAN_2_TXCT[10] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[10] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[10] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[10] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[10] = 0; /* RX Error */
CANMMCAN_2_RXLEN[10] = 8; /* RX Message Length */


/* SpeedInformation */
CANMMCAN_2_TXCT[7] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[7] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[7] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[7] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[7] = 0; /* RX Error */
CANMMCAN_2_RXLEN[7] = 8; /* RX Message Length */


/* TEST1 */
CANMMCAN_2_TXCT[0] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[0] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[0] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[0] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[0] = 0; /* RX Error */
CANMMCAN_2_RXLEN[0] = 8; /* RX Message Length */


/* TEST2 */
CANMMCAN_2_TXCT[1] = 5.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[1] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[1] = 5.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[1] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[1] = 0; /* RX Error */
CANMMCAN_2_RXLEN[1] = 8; /* RX Message Length */


/* TEST3 */
CANMMCAN_2_TXCT[2] = 5.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[2] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[2] = 5.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[2] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[2] = 0; /* RX Error */
CANMMCAN_2_RXLEN[2] = 8; /* RX Message Length */


/* TEST4 */
CANMMCAN_2_TXCT[3] = 5.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[3] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[3] = 5.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[3] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[3] = 0; /* RX Error */
CANMMCAN_2_RXLEN[3] = 8; /* RX Message Length */


/* TEST5 */
CANMMCAN_2_TXCT[4] = 5.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[4] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[4] = 5.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[4] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[4] = 0; /* RX Error */
CANMMCAN_2_RXLEN[4] = 8; /* RX Message Length */


/* TEST6 */
CANMMCAN_2_TXCT[5] = 5.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[5] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[5] = 5.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[5] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[5] = 0; /* RX Error */
CANMMCAN_2_RXLEN[5] = 8; /* RX Message Length */


/* YawRateInformation */
CANMMCAN_2_TXCT[8] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[8] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[8] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[8] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[8] = 0; /* RX Error */
CANMMCAN_2_RXLEN[8] = 8; /* RX Message Length */


/* DefaultGlobalEnable TX */
CANMMCAN_2_TXGEIN = 1;


/* ECU ENABLE */
/* ADAS*/
CANMMCAN_2_TXEEIE[0] = 1;
CANMMCAN_2_TXEEIEOLD[0] = 1;
/* ExternalUnit*/
CANMMCAN_2_TXEEIE[1] = 1;
CANMMCAN_2_TXEEIEOLD[1] = 1;
/* Vector__XXX*/
CANMMCAN_2_TXEEIE[2] = 1;
CANMMCAN_2_TXEEIEOLD[2] = 1;




/* ------------------------------------------------------------------------------ */
/* Message Defaults: */


/* TEST1 */
CANMMCAN_2_WBS[0] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[0] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[0] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[0] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[0] = 8; /* Message length */
CANMMCAN_2_TXRBUF[0] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[0] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[0] = 1;
CANMMCAN_2_TXcraw[0] = 0; /* 0: SIGNALS 1:RAWDATA */


/* TEST2 */
CANMMCAN_2_WBS[1] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[1] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[1] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[1] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[1] = 8; /* Message length */
CANMMCAN_2_TXRBUF[1] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[1] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[1] = 1;
CANMMCAN_2_TXcraw[1] = 0; /* 0: SIGNALS 1:RAWDATA */


/* TEST3 */
CANMMCAN_2_WBS[2] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[2] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[2] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[2] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[2] = 8; /* Message length */
CANMMCAN_2_TXRBUF[2] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[2] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[2] = 1;
CANMMCAN_2_TXcraw[2] = 0; /* 0: SIGNALS 1:RAWDATA */


/* TEST4 */
CANMMCAN_2_WBS[3] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[3] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[3] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[3] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[3] = 8; /* Message length */
CANMMCAN_2_TXRBUF[3] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[3] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[3] = 1;
CANMMCAN_2_TXcraw[3] = 0; /* 0: SIGNALS 1:RAWDATA */


/* TEST5 */
CANMMCAN_2_WBS[4] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[4] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[4] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[4] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[4] = 8; /* Message length */
CANMMCAN_2_TXRBUF[4] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[4] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[4] = 1;
CANMMCAN_2_TXcraw[4] = 0; /* 0: SIGNALS 1:RAWDATA */


/* TEST6 */
CANMMCAN_2_WBS[5] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[5] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[5] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[5] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[5] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[5] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[5] = 8; /* Message length */
CANMMCAN_2_TXRBUF[5] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[5] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[5] = 1;
CANMMCAN_2_TXcraw[5] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ABS2_C */
CANMMCAN_2_WBS[6] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[6] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[6] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[6] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[6] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[6] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[6] = 8; /* Message length */
CANMMCAN_2_TXRBUF[6] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[6] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[6] = 1;
CANMMCAN_2_TXcraw[6] = 0; /* 0: SIGNALS 1:RAWDATA */


/* SpeedInformation */
CANMMCAN_2_WBS[7] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[7] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[7] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[7] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[7] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[7] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[7] = 8; /* Message length */
CANMMCAN_2_TXRBUF[7] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[7] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[7] = 1;
CANMMCAN_2_TXcraw[7] = 0; /* 0: SIGNALS 1:RAWDATA */


/* YawRateInformation */
CANMMCAN_2_WBS[8] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[8] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[8] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[8] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[8] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[8] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[8] = 8; /* Message length */
CANMMCAN_2_TXRBUF[8] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[8] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[8] = 1;
CANMMCAN_2_TXcraw[8] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ABS4_C */
CANMMCAN_2_WBS[9] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[9] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[9] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[9] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[9] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[9] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[9] = 8; /* Message length */
CANMMCAN_2_TXRBUF[9] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[9] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[9] = 1;
CANMMCAN_2_TXcraw[9] = 0; /* 0: SIGNALS 1:RAWDATA */


/* SAS1_C */
CANMMCAN_2_WBS[10] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[10] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[10] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[10] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[10] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[10] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[10] = 8; /* Message length */
CANMMCAN_2_TXRBUF[10] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[10] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[10] = 1;
CANMMCAN_2_TXcraw[10] = 0; /* 0: SIGNALS 1:RAWDATA */


/* CSW1_C */
CANMMCAN_2_WBS[11] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[11] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[11] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[11] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[11] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[11] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[11] = 8; /* Message length */
CANMMCAN_2_TXRBUF[11] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[11] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[11] = 1;
CANMMCAN_2_TXcraw[11] = 0; /* 0: SIGNALS 1:RAWDATA */


/* BCM1_C */
CANMMCAN_2_WBS[12] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[12] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[12] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[12] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[12] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[12] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[12] = 8; /* Message length */
CANMMCAN_2_TXRBUF[12] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[12] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[12] = 1;
CANMMCAN_2_TXcraw[12] = 0; /* 0: SIGNALS 1:RAWDATA */


/* FECU1_C */
CANMMCAN_2_WBS[13] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[13] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[13] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[13] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[13] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[13] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[13] = 8; /* Message length */
CANMMCAN_2_TXRBUF[13] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[13] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[13] = 1;
CANMMCAN_2_TXcraw[13] = 0; /* 0: SIGNALS 1:RAWDATA */

