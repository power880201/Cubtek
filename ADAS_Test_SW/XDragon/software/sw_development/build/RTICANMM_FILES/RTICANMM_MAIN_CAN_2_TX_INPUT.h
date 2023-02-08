/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_TX_INPUT */
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


/* ABS2_C */

/* ABS4_C */

/* Lane_Details */

/* SAS1 */

/* SpeedInformation */

/* YawRateInformation */
/* ADAS */ 
/* EPAS */ 
/* ExternalUnit */ 

/* SpeedInformation */
CANMMCAN_2_TXENIE[0] =  CANMMCAN_2_TXEIN[0] && (CANMMCAN_2_TXEEIE[2]) && CANMMCAN_2_RTVE;

/* YawRateInformation */
CANMMCAN_2_TXENIE[1] =  CANMMCAN_2_TXEIN[1] && (CANMMCAN_2_TXEEIE[2]) && CANMMCAN_2_RTVE;

/* ABS2_C */
CANMMCAN_2_TXENIE[2] =  CANMMCAN_2_TXEIN[2] && (CANMMCAN_2_TXEEIE[0]) && CANMMCAN_2_RTVE;

/* ABS4_C */
CANMMCAN_2_TXENIE[3] =  CANMMCAN_2_TXEIN[3] && (CANMMCAN_2_TXEEIE[0]) && CANMMCAN_2_RTVE;

/* SAS1 */
CANMMCAN_2_TXENIE[4] =  CANMMCAN_2_TXEIN[4] && (CANMMCAN_2_TXEEIE[1]) && CANMMCAN_2_RTVE;
