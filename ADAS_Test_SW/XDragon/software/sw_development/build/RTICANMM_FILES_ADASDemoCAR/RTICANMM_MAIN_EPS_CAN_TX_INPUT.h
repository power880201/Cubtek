/*****************************************************************************************************************************/
/* RTICANMM_MAIN_EPS_CAN_TX_INPUT */
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


/* ABS1 */

/* ABS2 */

/* ABS3 */

/* ECM2 */

/* EPS1 */

/* EPS2 */

/* GWA1 */

/* IFC1 */

/* SAS1 */

/* SAS2 */
/* GW */ 
/* IFC */ 

/* SAS1 */
CANMMEPS_CAN_TXENIE[0] =  CANMMEPS_CAN_TXEIN[0] && (CANMMEPS_CAN_TXEEIE[0]) && CANMMEPS_CAN_RTVE;

/* IFC1 */
CANMMEPS_CAN_TXENIE[1] =  CANMMEPS_CAN_TXEIN[1] && (CANMMEPS_CAN_TXEEIE[1]) && CANMMEPS_CAN_RTVE;

/* ABS1 */
CANMMEPS_CAN_TXENIE[2] =  CANMMEPS_CAN_TXEIN[2] && (CANMMEPS_CAN_TXEEIE[0]) && CANMMEPS_CAN_RTVE;

/* ABS2 */
CANMMEPS_CAN_TXENIE[3] =  CANMMEPS_CAN_TXEIN[3] && (CANMMEPS_CAN_TXEEIE[0]) && CANMMEPS_CAN_RTVE;

/* ABS3 */
CANMMEPS_CAN_TXENIE[4] =  CANMMEPS_CAN_TXEIN[4] && (CANMMEPS_CAN_TXEEIE[0]) && CANMMEPS_CAN_RTVE;

/* ECM2 */
CANMMEPS_CAN_TXENIE[5] =  CANMMEPS_CAN_TXEIN[5] && (CANMMEPS_CAN_TXEEIE[0]) && CANMMEPS_CAN_RTVE;

/* GWA1 */
CANMMEPS_CAN_TXENIE[6] =  CANMMEPS_CAN_TXEIN[6] && (CANMMEPS_CAN_TXEEIE[0]) && CANMMEPS_CAN_RTVE;
