/*****************************************************************************************************************************/
/* RTICANMM_MAIN_EPS_CAN_RX_OUTPUT */
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

/* EPS1 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 10))[0] = CANMMEPS_CAN_RXsta[8];
/* EPS2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 29))[0] = CANMMEPS_CAN_RXsta[2];
/* SAS2 RX_STATUS */ 
((boolean_T*) ssGetOutputPortSignal(S, 52))[0] = CANMMEPS_CAN_RXsta[9];
