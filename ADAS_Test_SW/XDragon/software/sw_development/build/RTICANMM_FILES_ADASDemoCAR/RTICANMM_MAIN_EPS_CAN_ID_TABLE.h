/*****************************************************************************************************************************/
/* RTICANMM_MAIN_EPS_CAN_ID_TABLE */
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




/* SAS1 */
((UInt32*) IDPTR_MEM_R)[0] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_SAS1;
CANMMEPS_CAN_MIDTXSW[0] = 0;
CANMMEPS_CAN_RXCNT[0] = 0;
CANMMEPS_CAN_MIDRX[0] = 0xA1;
CANMMEPS_CAN_MIDTXS[0] = 0xA1;
CANMMEPS_CAN_RXMT[0] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[0] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[0] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[0] = 0;  /* 0: standard, 1:extended */ 



/* IFC1 */
((UInt32*) IDPTR_MEM_R)[1] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_IFC1;
CANMMEPS_CAN_MIDTXSW[1] = 0;
CANMMEPS_CAN_RXCNT[1] = 0;
CANMMEPS_CAN_MIDRX[1] = 0x109;
CANMMEPS_CAN_MIDTXS[1] = 0x109;
CANMMEPS_CAN_RXMT[1] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[1] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[1] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[1] = 0;  /* 0: standard, 1:extended */ 



/* EPS2 */
((UInt32*) IDPTR_MEM_R)[2] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_EPS2;
CANMMEPS_CAN_MIDTXSW[2] = 0;
CANMMEPS_CAN_RXCNT[2] = 0;
CANMMEPS_CAN_MIDRX[2] = 0x162;
CANMMEPS_CAN_MIDTXS[2] = 0x162;
CANMMEPS_CAN_RXMT[2] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[2] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[2] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[2] = 0;  /* 0: standard, 1:extended */ 



/* ABS1 */
((UInt32*) IDPTR_MEM_R)[3] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_ABS1;
CANMMEPS_CAN_MIDTXSW[3] = 0;
CANMMEPS_CAN_RXCNT[3] = 0;
CANMMEPS_CAN_MIDRX[3] = 0x231;
CANMMEPS_CAN_MIDTXS[3] = 0x231;
CANMMEPS_CAN_RXMT[3] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[3] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[3] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[3] = 0;  /* 0: standard, 1:extended */ 



/* ABS2 */
((UInt32*) IDPTR_MEM_R)[4] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_ABS2;
CANMMEPS_CAN_MIDTXSW[4] = 0;
CANMMEPS_CAN_RXCNT[4] = 0;
CANMMEPS_CAN_MIDRX[4] = 0x246;
CANMMEPS_CAN_MIDTXS[4] = 0x246;
CANMMEPS_CAN_RXMT[4] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[4] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[4] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[4] = 0;  /* 0: standard, 1:extended */ 



/* ABS3 */
((UInt32*) IDPTR_MEM_R)[5] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_ABS3;
CANMMEPS_CAN_MIDTXSW[5] = 0;
CANMMEPS_CAN_RXCNT[5] = 0;
CANMMEPS_CAN_MIDRX[5] = 0x265;
CANMMEPS_CAN_MIDTXS[5] = 0x265;
CANMMEPS_CAN_RXMT[5] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[5] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[5] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[5] = 0;  /* 0: standard, 1:extended */ 



/* ECM2 */
((UInt32*) IDPTR_MEM_R)[6] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_ECM2;
CANMMEPS_CAN_MIDTXSW[6] = 0;
CANMMEPS_CAN_RXCNT[6] = 0;
CANMMEPS_CAN_MIDRX[6] = 0x271;
CANMMEPS_CAN_MIDTXS[6] = 0x271;
CANMMEPS_CAN_RXMT[6] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[6] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[6] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[6] = 0;  /* 0: standard, 1:extended */ 



/* GWA1 */
((UInt32*) IDPTR_MEM_R)[7] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_GWA1;
CANMMEPS_CAN_MIDTXSW[7] = 0;
CANMMEPS_CAN_RXCNT[7] = 0;
CANMMEPS_CAN_MIDRX[7] = 0x275;
CANMMEPS_CAN_MIDTXS[7] = 0x275;
CANMMEPS_CAN_RXMT[7] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[7] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[7] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[7] = 0;  /* 0: standard, 1:extended */ 



/* EPS1 */
((UInt32*) IDPTR_MEM_R)[8] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_EPS1;
CANMMEPS_CAN_MIDTXSW[8] = 0;
CANMMEPS_CAN_RXCNT[8] = 0;
CANMMEPS_CAN_MIDRX[8] = 0x2EA;
CANMMEPS_CAN_MIDTXS[8] = 0x2EA;
CANMMEPS_CAN_RXMT[8] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[8] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[8] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[8] = 0;  /* 0: standard, 1:extended */ 



/* SAS2 */
((UInt32*) IDPTR_MEM_R)[9] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_SAS2;
CANMMEPS_CAN_MIDTXSW[9] = 0;
CANMMEPS_CAN_RXCNT[9] = 0;
CANMMEPS_CAN_MIDRX[9] = 0x39A;
CANMMEPS_CAN_MIDTXS[9] = 0x39A;
CANMMEPS_CAN_RXMT[9] = RTICANMM_MESSAGE_TYPE_STD;
CANMMEPS_CAN_MIDFRX[9] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTXS[9] = 0;  /* 0: standard, 1:extended */ 
CANMMEPS_CAN_MIDFTX[9] = 0;  /* 0: standard, 1:extended */ 
 
 


/* SAS1 */
CANMMEPS_CAN_MIDTX[0] = 0; 
((UInt32*) IDPTR_MEM_T)[0] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_SAS1;



/* IFC1 */
CANMMEPS_CAN_MIDTX[1] = 1; 
((UInt32*) IDPTR_MEM_T)[1] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_IFC1;



/* ABS1 */
CANMMEPS_CAN_MIDTX[2] = 3; 
((UInt32*) IDPTR_MEM_T)[2] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_ABS1;



/* ABS2 */
CANMMEPS_CAN_MIDTX[3] = 4; 
((UInt32*) IDPTR_MEM_T)[3] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_ABS2;



/* ABS3 */
CANMMEPS_CAN_MIDTX[4] = 5; 
((UInt32*) IDPTR_MEM_T)[4] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_ABS3;



/* ECM2 */
CANMMEPS_CAN_MIDTX[5] = 6; 
((UInt32*) IDPTR_MEM_T)[5] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_ECM2;



/* GWA1 */
CANMMEPS_CAN_MIDTX[6] = 7; 
((UInt32*) IDPTR_MEM_T)[6] = (UInt32) RTICANMM_MAIN_EPS_CAN_copy_GWA1;



