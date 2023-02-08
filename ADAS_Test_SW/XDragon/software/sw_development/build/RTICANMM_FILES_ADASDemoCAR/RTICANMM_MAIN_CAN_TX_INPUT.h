/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_TX_INPUT */
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
CANMMCAN_TXENIE[0] =  CANMMCAN_TXEIN[0] && (CANMMCAN_TXEEIE[0]) && CANMMCAN_RTVE;

/* IFC1 */
CANMMCAN_TXENIE[1] =  CANMMCAN_TXEIN[1] && (CANMMCAN_TXEEIE[1]) && CANMMCAN_RTVE;

/* ABS1 */
CANMMCAN_TXENIE[2] =  CANMMCAN_TXEIN[2] && (CANMMCAN_TXEEIE[0]) && CANMMCAN_RTVE;

/* ABS2 */
CANMMCAN_TXENIE[3] =  CANMMCAN_TXEIN[3] && (CANMMCAN_TXEEIE[0]) && CANMMCAN_RTVE;

/* ABS3 */
CANMMCAN_TXENIE[4] =  CANMMCAN_TXEIN[4] && (CANMMCAN_TXEEIE[0]) && CANMMCAN_RTVE;

/* ECM2 */
CANMMCAN_TXENIE[5] =  CANMMCAN_TXEIN[5] && (CANMMCAN_TXEEIE[0]) && CANMMCAN_RTVE;

/* GWA1 */
CANMMCAN_TXENIE[6] =  CANMMCAN_TXEIN[6] && (CANMMCAN_TXEEIE[0]) && CANMMCAN_RTVE;
