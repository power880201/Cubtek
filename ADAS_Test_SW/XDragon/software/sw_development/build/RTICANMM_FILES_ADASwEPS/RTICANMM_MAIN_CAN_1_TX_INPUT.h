/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_TX_INPUT */
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


/* ABS1 */

/* ABS2 */

/* ABS3 */

/* ABS4 */

/* AC1 */

/* ADAS1 */

/* ADAS2 */

/* ADAS3 */

/* ADAS4 */

/* ADAS5 */

/* BCM1 */

/* BCM2 */

/* CSW1 */

/* ECM1 */

/* ECM2 */

/* ECM3 */

/* ECM9 */

/* EPAS2 */

/* EPAS3 */

/* EPB1 */

/* ESMCU1 */

/* FECU1 */

/* HCU3 */

/* HCU4 */

/* HMI1 */

/* HMI2 */

/* Meter1 */

/* Meter3 */

/* SAS1 */

/* TCM1 */

/* TCM2 */

/* VCU1 */

/* VCU2 */
/* ADAS */ 
/* EPAS */ 

/* ADAS1 */
CANMMCAN_1_TXENIE[0] =  CANMMCAN_1_TXEIN[0] && (CANMMCAN_1_TXEEIE[0]) && CANMMCAN_1_RTVE;

/* ADAS2 */
CANMMCAN_1_TXENIE[1] =  CANMMCAN_1_TXEIN[1] && (CANMMCAN_1_TXEEIE[0]) && CANMMCAN_1_RTVE;

/* ADAS3 */
CANMMCAN_1_TXENIE[2] =  CANMMCAN_1_TXEIN[2] && (CANMMCAN_1_TXEEIE[0]) && CANMMCAN_1_RTVE;

/* SAS1 */
CANMMCAN_1_TXENIE[3] =  CANMMCAN_1_TXEIN[3] && (CANMMCAN_1_TXEEIE[1]) && CANMMCAN_1_RTVE;

/* EPAS2 */
CANMMCAN_1_TXENIE[4] =  CANMMCAN_1_TXEIN[4] && (CANMMCAN_1_TXEEIE[1]) && CANMMCAN_1_RTVE;

/* ADAS4 */
CANMMCAN_1_TXENIE[5] =  CANMMCAN_1_TXEIN[5] && (CANMMCAN_1_TXEEIE[0]) && CANMMCAN_1_RTVE;
CANMMCAN_1_TXKIEX[5] = CANMMCAN_1_TXKIN[5] || ((boolean_T*)GetInputPortSignal(S, 0))[0];
if(1 == CANMMCAN_1_TXKIEX[5])
        {
CANMMCAN_1_TX_Msg_9_Sgn_1kD = ((boolean_T*)GetInputPortSignal(S, 37))[0];
CANMMCAN_1_TX_Msg_9_Sgn_2kD = ((boolean_T*)GetInputPortSignal(S, 38))[0];
CANMMCAN_1_TX_Msg_9_Sgn_3kD = ((boolean_T*)GetInputPortSignal(S, 39))[0];
CANMMCAN_1_TX_Msg_9_Sgn_4kD = ((boolean_T*)GetInputPortSignal(S, 40))[0];
CANMMCAN_1_TX_Msg_9_Sgn_5kD = ((boolean_T*)GetInputPortSignal(S, 41))[0];
CANMMCAN_1_TX_Msg_9_Sgn_6kD = ((boolean_T*)GetInputPortSignal(S, 42))[0];
CANMMCAN_1_TX_Msg_9_Sgn_7kD = ((boolean_T*)GetInputPortSignal(S, 43))[0];
CANMMCAN_1_TX_Msg_9_Sgn_8kD = ((boolean_T*)GetInputPortSignal(S, 44))[0];
CANMMCAN_1_TX_Msg_9_Sgn_9kD = ((boolean_T*)GetInputPortSignal(S, 45))[0];
CANMMCAN_1_TX_Msg_9_Sgn_10kD = ((boolean_T*)GetInputPortSignal(S, 46))[0];
CANMMCAN_1_TX_Msg_9_Sgn_11kD = ((uint8_T*)GetInputPortSignal(S, 47))[0];
CANMMCAN_1_TX_Msg_9_Sgn_12kD = ((uint8_T*)GetInputPortSignal(S, 48))[0];
CANMMCAN_1_TX_Msg_9_Sgn_13kD = ((uint8_T*)GetInputPortSignal(S, 49))[0];
CANMMCAN_1_TX_Msg_9_Sgn_14kD = ((uint8_T*)GetInputPortSignal(S, 50))[0];
CANMMCAN_1_TX_Msg_9_Sgn_15kD = ((uint8_T*)GetInputPortSignal(S, 51))[0];
CANMMCAN_1_TX_Msg_9_Sgn_16kD = ((uint8_T*)GetInputPortSignal(S, 52))[0];
CANMMCAN_1_TX_Msg_9_Sgn_17kD = ((uint8_T*)GetInputPortSignal(S, 53))[0];
CANMMCAN_1_TX_Msg_9_Sgn_18kD = ((uint8_T*)GetInputPortSignal(S, 54))[0];
CANMMCAN_1_TX_Msg_9_Sgn_19kD = ((uint8_T*)GetInputPortSignal(S, 55))[0];
CANMMCAN_1_TX_Msg_9_Sgn_20kD = ((uint8_T*)GetInputPortSignal(S, 56))[0];
CANMMCAN_1_TX_Msg_9_Sgn_21kD = ((uint8_T*)GetInputPortSignal(S, 57))[0];
CANMMCAN_1_TX_Msg_9_Sgn_22kD = ((uint8_T*)GetInputPortSignal(S, 58))[0];
CANMMCAN_1_TX_Msg_9_Sgn_23kD = ((uint8_T*)GetInputPortSignal(S, 59))[0];
CANMMCAN_1_TX_Msg_9_Sgn_24kD = ((uint8_T*)GetInputPortSignal(S, 60))[0];
CANMMCAN_1_TX_Msg_9_Sgn_25kD = ((boolean_T*)GetInputPortSignal(S, 61))[0];
CANMMCAN_1_TX_Msg_9_Sgn_26kD = ((boolean_T*)GetInputPortSignal(S, 62))[0];
CANMMCAN_1_TX_Msg_9_Sgn_27kD = ((boolean_T*)GetInputPortSignal(S, 63))[0];
CANMMCAN_1_TX_Msg_9_Sgn_28kD = ((boolean_T*)GetInputPortSignal(S, 64))[0];
CANMMCAN_1_TX_Msg_9_Sgn_29kD = ((boolean_T*)GetInputPortSignal(S, 65))[0];
CANMMCAN_1_TX_Msg_9_Sgn_30kD = ((boolean_T*)GetInputPortSignal(S, 66))[0];
CANMMCAN_1_IDKICK_9 = CANMMCAN_1_MIDRX[21];
}


/* ADAS5 */
CANMMCAN_1_TXENIE[6] =  CANMMCAN_1_TXEIN[6] && (CANMMCAN_1_TXEEIE[0]) && CANMMCAN_1_RTVE;
CANMMCAN_1_TXKIEX[6] = CANMMCAN_1_TXKIN[6] || ((boolean_T*)GetInputPortSignal(S, 0))[1];
if(1 == CANMMCAN_1_TXKIEX[6])
        {
CANMMCAN_1_TX_Msg_10_Sgn_1kD = ((uint8_T*)GetInputPortSignal(S, 67))[0];
CANMMCAN_1_TX_Msg_10_Sgn_2kD = ((uint8_T*)GetInputPortSignal(S, 68))[0];
CANMMCAN_1_TX_Msg_10_Sgn_3kD = ((uint8_T*)GetInputPortSignal(S, 69))[0];
CANMMCAN_1_TX_Msg_10_Sgn_4kD = ((uint8_T*)GetInputPortSignal(S, 70))[0];
CANMMCAN_1_TX_Msg_10_Sgn_5kD = ((uint8_T*)GetInputPortSignal(S, 71))[0];
CANMMCAN_1_TX_Msg_10_Sgn_6kD = ((uint8_T*)GetInputPortSignal(S, 72))[0];
CANMMCAN_1_TX_Msg_10_Sgn_7kD = ((uint8_T*)GetInputPortSignal(S, 73))[0];
CANMMCAN_1_TX_Msg_10_Sgn_8kD = ((uint8_T*)GetInputPortSignal(S, 74))[0];
CANMMCAN_1_TX_Msg_10_Sgn_9kD = ((real_T*)GetInputPortSignal(S, 75))[0];
CANMMCAN_1_TX_Msg_10_Sgn_10kD = ((real_T*)GetInputPortSignal(S, 76))[0];
CANMMCAN_1_TX_Msg_10_Sgn_11kD = ((uint8_T*)GetInputPortSignal(S, 77))[0];
CANMMCAN_1_IDKICK_10 = CANMMCAN_1_MIDRX[22];
}


/* EPAS3 */
CANMMCAN_1_TXENIE[7] =  CANMMCAN_1_TXEIN[7] && (CANMMCAN_1_TXEEIE[1]) && CANMMCAN_1_RTVE;
