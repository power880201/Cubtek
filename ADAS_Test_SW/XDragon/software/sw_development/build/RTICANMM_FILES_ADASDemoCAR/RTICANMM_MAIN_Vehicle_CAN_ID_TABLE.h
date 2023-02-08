/*****************************************************************************************************************************/
/* RTICANMM_MAIN_Vehicle_CAN_ID_TABLE */
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




/* ECM1 */
((UInt32*) IDPTR_MEM_R)[0] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ECM1;
CANMMVehicle_CAN_MIDTXSW[0] = 0;
CANMMVehicle_CAN_RXCNT[0] = 0;
CANMMVehicle_CAN_MIDRX[0] = 0x316;
CANMMVehicle_CAN_MIDTXS[0] = 0x316;
CANMMVehicle_CAN_RXMT[0] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[0] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[0] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[0] = 0;  /* 0: standard, 1:extended */ 



/* ECM2 */
((UInt32*) IDPTR_MEM_R)[1] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ECM2;
CANMMVehicle_CAN_MIDTXSW[1] = 0;
CANMMVehicle_CAN_RXCNT[1] = 0;
CANMMVehicle_CAN_MIDRX[1] = 0x329;
CANMMVehicle_CAN_MIDTXS[1] = 0x329;
CANMMVehicle_CAN_RXMT[1] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[1] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[1] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[1] = 0;  /* 0: standard, 1:extended */ 



/* ECM3 */
((UInt32*) IDPTR_MEM_R)[2] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ECM3;
CANMMVehicle_CAN_MIDTXSW[2] = 0;
CANMMVehicle_CAN_RXCNT[2] = 0;
CANMMVehicle_CAN_MIDRX[2] = 0x335;
CANMMVehicle_CAN_MIDTXS[2] = 0x335;
CANMMVehicle_CAN_RXMT[2] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[2] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[2] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[2] = 0;  /* 0: standard, 1:extended */ 



/* ECM4 */
((UInt32*) IDPTR_MEM_R)[3] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ECM4;
CANMMVehicle_CAN_MIDTXSW[3] = 0;
CANMMVehicle_CAN_RXCNT[3] = 0;
CANMMVehicle_CAN_MIDRX[3] = 0x33A;
CANMMVehicle_CAN_MIDTXS[3] = 0x33A;
CANMMVehicle_CAN_RXMT[3] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[3] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[3] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[3] = 0;  /* 0: standard, 1:extended */ 



/* TCM1 */
((UInt32*) IDPTR_MEM_R)[4] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_TCM1;
CANMMVehicle_CAN_MIDTXSW[4] = 0;
CANMMVehicle_CAN_RXCNT[4] = 0;
CANMMVehicle_CAN_MIDRX[4] = 0x340;
CANMMVehicle_CAN_MIDTXS[4] = 0x340;
CANMMVehicle_CAN_RXMT[4] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[4] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[4] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[4] = 0;  /* 0: standard, 1:extended */ 



/* TCM2 */
((UInt32*) IDPTR_MEM_R)[5] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_TCM2;
CANMMVehicle_CAN_MIDTXSW[5] = 0;
CANMMVehicle_CAN_RXCNT[5] = 0;
CANMMVehicle_CAN_MIDRX[5] = 0x34A;
CANMMVehicle_CAN_MIDTXS[5] = 0x34A;
CANMMVehicle_CAN_RXMT[5] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[5] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[5] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[5] = 0;  /* 0: standard, 1:extended */ 



/* ABS1 */
((UInt32*) IDPTR_MEM_R)[6] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ABS1;
CANMMVehicle_CAN_MIDTXSW[6] = 0;
CANMMVehicle_CAN_RXCNT[6] = 0;
CANMMVehicle_CAN_MIDRX[6] = 0x350;
CANMMVehicle_CAN_MIDTXS[6] = 0x350;
CANMMVehicle_CAN_RXMT[6] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[6] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[6] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[6] = 0;  /* 0: standard, 1:extended */ 



/* HCU2 */
((UInt32*) IDPTR_MEM_R)[7] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_HCU2;
CANMMVehicle_CAN_MIDTXSW[7] = 0;
CANMMVehicle_CAN_RXCNT[7] = 0;
CANMMVehicle_CAN_MIDRX[7] = 0x353;
CANMMVehicle_CAN_MIDTXS[7] = 0x353;
CANMMVehicle_CAN_RXMT[7] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[7] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[7] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[7] = 0;  /* 0: standard, 1:extended */ 



/* ABS2 */
((UInt32*) IDPTR_MEM_R)[8] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ABS2;
CANMMVehicle_CAN_MIDTXSW[8] = 0;
CANMMVehicle_CAN_RXCNT[8] = 0;
CANMMVehicle_CAN_MIDRX[8] = 0x360;
CANMMVehicle_CAN_MIDTXS[8] = 0x360;
CANMMVehicle_CAN_RXMT[8] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[8] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[8] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[8] = 0;  /* 0: standard, 1:extended */ 



/* ECM9 */
((UInt32*) IDPTR_MEM_R)[9] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ECM9;
CANMMVehicle_CAN_MIDTXSW[9] = 0;
CANMMVehicle_CAN_RXCNT[9] = 0;
CANMMVehicle_CAN_MIDRX[9] = 0x36B;
CANMMVehicle_CAN_MIDTXS[9] = 0x36B;
CANMMVehicle_CAN_RXMT[9] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[9] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[9] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[9] = 0;  /* 0: standard, 1:extended */ 



/* ABS3 */
((UInt32*) IDPTR_MEM_R)[10] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ABS3;
CANMMVehicle_CAN_MIDTXSW[10] = 0;
CANMMVehicle_CAN_RXCNT[10] = 0;
CANMMVehicle_CAN_MIDRX[10] = 0x370;
CANMMVehicle_CAN_MIDTXS[10] = 0x370;
CANMMVehicle_CAN_RXMT[10] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[10] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[10] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[10] = 0;  /* 0: standard, 1:extended */ 



/* ADAS1 */
((UInt32*) IDPTR_MEM_R)[11] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS1;
CANMMVehicle_CAN_MIDTXSW[11] = 0;
CANMMVehicle_CAN_RXCNT[11] = 0;
CANMMVehicle_CAN_MIDRX[11] = 0x372;
CANMMVehicle_CAN_MIDTXS[11] = 0x372;
CANMMVehicle_CAN_RXMT[11] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[11] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[11] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[11] = 0;  /* 0: standard, 1:extended */ 



/* HCU3 */
((UInt32*) IDPTR_MEM_R)[12] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_HCU3;
CANMMVehicle_CAN_MIDTXSW[12] = 0;
CANMMVehicle_CAN_RXCNT[12] = 0;
CANMMVehicle_CAN_MIDRX[12] = 0x373;
CANMMVehicle_CAN_MIDTXS[12] = 0x373;
CANMMVehicle_CAN_RXMT[12] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[12] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[12] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[12] = 0;  /* 0: standard, 1:extended */ 



/* ADAS2 */
((UInt32*) IDPTR_MEM_R)[13] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS2;
CANMMVehicle_CAN_MIDTXSW[13] = 0;
CANMMVehicle_CAN_RXCNT[13] = 0;
CANMMVehicle_CAN_MIDRX[13] = 0x379;
CANMMVehicle_CAN_MIDTXS[13] = 0x379;
CANMMVehicle_CAN_RXMT[13] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[13] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[13] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[13] = 0;  /* 0: standard, 1:extended */ 



/* ADAS3 */
((UInt32*) IDPTR_MEM_R)[14] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS3;
CANMMVehicle_CAN_MIDTXSW[14] = 0;
CANMMVehicle_CAN_RXCNT[14] = 0;
CANMMVehicle_CAN_MIDRX[14] = 0x37C;
CANMMVehicle_CAN_MIDTXS[14] = 0x37C;
CANMMVehicle_CAN_RXMT[14] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[14] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[14] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[14] = 0;  /* 0: standard, 1:extended */ 



/* ABS4 */
((UInt32*) IDPTR_MEM_R)[15] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ABS4;
CANMMVehicle_CAN_MIDTXSW[15] = 0;
CANMMVehicle_CAN_RXCNT[15] = 0;
CANMMVehicle_CAN_MIDRX[15] = 0x380;
CANMMVehicle_CAN_MIDTXS[15] = 0x380;
CANMMVehicle_CAN_RXMT[15] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[15] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[15] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[15] = 0;  /* 0: standard, 1:extended */ 



/* HCU4 */
((UInt32*) IDPTR_MEM_R)[16] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_HCU4;
CANMMVehicle_CAN_MIDTXSW[16] = 0;
CANMMVehicle_CAN_RXCNT[16] = 0;
CANMMVehicle_CAN_MIDRX[16] = 0x383;
CANMMVehicle_CAN_MIDTXS[16] = 0x383;
CANMMVehicle_CAN_RXMT[16] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[16] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[16] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[16] = 0;  /* 0: standard, 1:extended */ 



/* EPAS1 */
((UInt32*) IDPTR_MEM_R)[17] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_EPAS1;
CANMMVehicle_CAN_MIDTXSW[17] = 0;
CANMMVehicle_CAN_RXCNT[17] = 0;
CANMMVehicle_CAN_MIDRX[17] = 0x39A;
CANMMVehicle_CAN_MIDTXS[17] = 0x39A;
CANMMVehicle_CAN_RXMT[17] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[17] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[17] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[17] = 0;  /* 0: standard, 1:extended */ 



/* EPAS2 */
((UInt32*) IDPTR_MEM_R)[18] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_EPAS2;
CANMMVehicle_CAN_MIDTXSW[18] = 0;
CANMMVehicle_CAN_RXCNT[18] = 0;
CANMMVehicle_CAN_MIDRX[18] = 0x39E;
CANMMVehicle_CAN_MIDTXS[18] = 0x39E;
CANMMVehicle_CAN_RXMT[18] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[18] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[18] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[18] = 0;  /* 0: standard, 1:extended */ 



/* EPB1 */
((UInt32*) IDPTR_MEM_R)[19] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_EPB1;
CANMMVehicle_CAN_MIDTXSW[19] = 0;
CANMMVehicle_CAN_RXCNT[19] = 0;
CANMMVehicle_CAN_MIDRX[19] = 0x3A0;
CANMMVehicle_CAN_MIDTXS[19] = 0x3A0;
CANMMVehicle_CAN_RXMT[19] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[19] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[19] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[19] = 0;  /* 0: standard, 1:extended */ 



/* ABS8 */
((UInt32*) IDPTR_MEM_R)[20] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ABS8;
CANMMVehicle_CAN_MIDTXSW[20] = 0;
CANMMVehicle_CAN_RXCNT[20] = 0;
CANMMVehicle_CAN_MIDRX[20] = 0x3A1;
CANMMVehicle_CAN_MIDTXS[20] = 0x3A1;
CANMMVehicle_CAN_RXMT[20] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[20] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[20] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[20] = 0;  /* 0: standard, 1:extended */ 



/* BCM2 */
((UInt32*) IDPTR_MEM_R)[21] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_BCM2;
CANMMVehicle_CAN_MIDTXSW[21] = 0;
CANMMVehicle_CAN_RXCNT[21] = 0;
CANMMVehicle_CAN_MIDRX[21] = 0x3F0;
CANMMVehicle_CAN_MIDTXS[21] = 0x3F0;
CANMMVehicle_CAN_RXMT[21] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[21] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[21] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[21] = 0;  /* 0: standard, 1:extended */ 



/* CSW1 */
((UInt32*) IDPTR_MEM_R)[22] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_CSW1;
CANMMVehicle_CAN_MIDTXSW[22] = 0;
CANMMVehicle_CAN_RXCNT[22] = 0;
CANMMVehicle_CAN_MIDRX[22] = 0x410;
CANMMVehicle_CAN_MIDTXS[22] = 0x410;
CANMMVehicle_CAN_RXMT[22] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[22] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[22] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[22] = 0;  /* 0: standard, 1:extended */ 



/* BCM1 */
((UInt32*) IDPTR_MEM_R)[23] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_BCM1;
CANMMVehicle_CAN_MIDTXSW[23] = 0;
CANMMVehicle_CAN_RXCNT[23] = 0;
CANMMVehicle_CAN_MIDRX[23] = 0x420;
CANMMVehicle_CAN_MIDTXS[23] = 0x420;
CANMMVehicle_CAN_RXMT[23] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[23] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[23] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[23] = 0;  /* 0: standard, 1:extended */ 



/* ADAS4 */
((UInt32*) IDPTR_MEM_R)[24] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS4;
CANMMVehicle_CAN_MIDTXSW[24] = 0;
CANMMVehicle_CAN_RXCNT[24] = 0;
CANMMVehicle_CAN_MIDRX[24] = 0x43A;
CANMMVehicle_CAN_MIDTXS[24] = 0x43A;
CANMMVehicle_CAN_RXMT[24] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[24] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[24] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[24] = 0;  /* 0: standard, 1:extended */ 



/* ADAS5 */
((UInt32*) IDPTR_MEM_R)[25] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS5;
CANMMVehicle_CAN_MIDTXSW[25] = 0;
CANMMVehicle_CAN_RXCNT[25] = 0;
CANMMVehicle_CAN_MIDRX[25] = 0x43C;
CANMMVehicle_CAN_MIDTXS[25] = 0x43C;
CANMMVehicle_CAN_RXMT[25] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[25] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[25] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[25] = 0;  /* 0: standard, 1:extended */ 



/* FECU1 */
((UInt32*) IDPTR_MEM_R)[26] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_FECU1;
CANMMVehicle_CAN_MIDTXSW[26] = 0;
CANMMVehicle_CAN_RXCNT[26] = 0;
CANMMVehicle_CAN_MIDRX[26] = 0x440;
CANMMVehicle_CAN_MIDTXS[26] = 0x440;
CANMMVehicle_CAN_RXMT[26] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[26] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[26] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[26] = 0;  /* 0: standard, 1:extended */ 



/* Meter1 */
((UInt32*) IDPTR_MEM_R)[27] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_Meter1;
CANMMVehicle_CAN_MIDTXSW[27] = 0;
CANMMVehicle_CAN_RXCNT[27] = 0;
CANMMVehicle_CAN_MIDRX[27] = 0x450;
CANMMVehicle_CAN_MIDTXS[27] = 0x450;
CANMMVehicle_CAN_RXMT[27] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[27] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[27] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[27] = 0;  /* 0: standard, 1:extended */ 



/* Meter3 */
((UInt32*) IDPTR_MEM_R)[28] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_Meter3;
CANMMVehicle_CAN_MIDTXSW[28] = 0;
CANMMVehicle_CAN_RXCNT[28] = 0;
CANMMVehicle_CAN_MIDRX[28] = 0x51A;
CANMMVehicle_CAN_MIDTXS[28] = 0x51A;
CANMMVehicle_CAN_RXMT[28] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[28] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[28] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[28] = 0;  /* 0: standard, 1:extended */ 



/* VCU1 */
((UInt32*) IDPTR_MEM_R)[29] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_VCU1;
CANMMVehicle_CAN_MIDTXSW[29] = 0;
CANMMVehicle_CAN_RXCNT[29] = 0;
CANMMVehicle_CAN_MIDRX[29] = 0x602;
CANMMVehicle_CAN_MIDTXS[29] = 0x602;
CANMMVehicle_CAN_RXMT[29] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[29] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[29] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[29] = 0;  /* 0: standard, 1:extended */ 



/* VCU2 */
((UInt32*) IDPTR_MEM_R)[30] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_VCU2;
CANMMVehicle_CAN_MIDTXSW[30] = 0;
CANMMVehicle_CAN_RXCNT[30] = 0;
CANMMVehicle_CAN_MIDRX[30] = 0x604;
CANMMVehicle_CAN_MIDTXS[30] = 0x604;
CANMMVehicle_CAN_RXMT[30] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[30] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[30] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[30] = 0;  /* 0: standard, 1:extended */ 



/* HMI2 */
((UInt32*) IDPTR_MEM_R)[31] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_HMI2;
CANMMVehicle_CAN_MIDTXSW[31] = 0;
CANMMVehicle_CAN_RXCNT[31] = 0;
CANMMVehicle_CAN_MIDRX[31] = 0x606;
CANMMVehicle_CAN_MIDTXS[31] = 0x606;
CANMMVehicle_CAN_RXMT[31] = RTICANMM_MESSAGE_TYPE_STD;
CANMMVehicle_CAN_MIDFRX[31] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTXS[31] = 0;  /* 0: standard, 1:extended */ 
CANMMVehicle_CAN_MIDFTX[31] = 0;  /* 0: standard, 1:extended */ 
 
 


/* HCU2 */
CANMMVehicle_CAN_MIDTX[0] = 7; 
((UInt32*) IDPTR_MEM_T)[0] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_HCU2;



/* ADAS1 */
CANMMVehicle_CAN_MIDTX[1] = 11; 
((UInt32*) IDPTR_MEM_T)[1] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS1;



/* HCU3 */
CANMMVehicle_CAN_MIDTX[2] = 12; 
((UInt32*) IDPTR_MEM_T)[2] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_HCU3;



/* ADAS2 */
CANMMVehicle_CAN_MIDTX[3] = 13; 
((UInt32*) IDPTR_MEM_T)[3] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS2;



/* ADAS3 */
CANMMVehicle_CAN_MIDTX[4] = 14; 
((UInt32*) IDPTR_MEM_T)[4] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS3;



/* HCU4 */
CANMMVehicle_CAN_MIDTX[5] = 16; 
((UInt32*) IDPTR_MEM_T)[5] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_HCU4;



/* EPAS1 */
CANMMVehicle_CAN_MIDTX[6] = 17; 
((UInt32*) IDPTR_MEM_T)[6] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_EPAS1;



/* EPAS2 */
CANMMVehicle_CAN_MIDTX[7] = 18; 
((UInt32*) IDPTR_MEM_T)[7] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_EPAS2;



/* ADAS4 */
CANMMVehicle_CAN_MIDTX[8] = 24; 
((UInt32*) IDPTR_MEM_T)[8] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS4;



/* ADAS5 */
CANMMVehicle_CAN_MIDTX[9] = 25; 
((UInt32*) IDPTR_MEM_T)[9] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_ADAS5;



/* VCU1 */
CANMMVehicle_CAN_MIDTX[10] = 29; 
((UInt32*) IDPTR_MEM_T)[10] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_VCU1;



/* VCU2 */
CANMMVehicle_CAN_MIDTX[11] = 30; 
((UInt32*) IDPTR_MEM_T)[11] = (UInt32) RTICANMM_MAIN_Vehicle_CAN_copy_VCU2;



