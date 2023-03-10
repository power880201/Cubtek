/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_ID_TABLE */
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




/* SpeedInformation */
((UInt32*) IDPTR_MEM_R)[0] = (UInt32) RTICANMM_MAIN_CAN_2_copy_SpeedInformation;
CANMMCAN_2_MIDTXSW[0] = 0;
CANMMCAN_2_RXCNT[0] = 0;
CANMMCAN_2_MIDRX[0] = 0x310;
CANMMCAN_2_MIDTXS[0] = 0x310;
CANMMCAN_2_RXMT[0] = RTICANMM_MESSAGE_TYPE_STD;
CANMMCAN_2_MIDFRX[0] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTXS[0] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTX[0] = 0;  /* 0: standard, 1:extended */ 



/* YawRateInformation */
((UInt32*) IDPTR_MEM_R)[1] = (UInt32) RTICANMM_MAIN_CAN_2_copy_YawRateInformation;
CANMMCAN_2_MIDTXSW[1] = 0;
CANMMCAN_2_RXCNT[1] = 0;
CANMMCAN_2_MIDRX[1] = 0x311;
CANMMCAN_2_MIDTXS[1] = 0x311;
CANMMCAN_2_RXMT[1] = RTICANMM_MESSAGE_TYPE_STD;
CANMMCAN_2_MIDFRX[1] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTXS[1] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTX[1] = 0;  /* 0: standard, 1:extended */ 



/* ABS2_C */
((UInt32*) IDPTR_MEM_R)[2] = (UInt32) RTICANMM_MAIN_CAN_2_copy_ABS2_C;
CANMMCAN_2_MIDTXSW[2] = 0;
CANMMCAN_2_RXCNT[2] = 0;
CANMMCAN_2_MIDRX[2] = 0x360;
CANMMCAN_2_MIDTXS[2] = 0x360;
CANMMCAN_2_RXMT[2] = RTICANMM_MESSAGE_TYPE_STD;
CANMMCAN_2_MIDFRX[2] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTXS[2] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTX[2] = 0;  /* 0: standard, 1:extended */ 



/* ABS4_C */
((UInt32*) IDPTR_MEM_R)[3] = (UInt32) RTICANMM_MAIN_CAN_2_copy_ABS4_C;
CANMMCAN_2_MIDTXSW[3] = 0;
CANMMCAN_2_RXCNT[3] = 0;
CANMMCAN_2_MIDRX[3] = 0x380;
CANMMCAN_2_MIDTXS[3] = 0x380;
CANMMCAN_2_RXMT[3] = RTICANMM_MESSAGE_TYPE_STD;
CANMMCAN_2_MIDFRX[3] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTXS[3] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTX[3] = 0;  /* 0: standard, 1:extended */ 



/* SAS1 */
((UInt32*) IDPTR_MEM_R)[4] = (UInt32) RTICANMM_MAIN_CAN_2_copy_SAS1;
CANMMCAN_2_MIDTXSW[4] = 0;
CANMMCAN_2_RXCNT[4] = 0;
CANMMCAN_2_MIDRX[4] = 0x39A;
CANMMCAN_2_MIDTXS[4] = 0x39A;
CANMMCAN_2_RXMT[4] = RTICANMM_MESSAGE_TYPE_STD;
CANMMCAN_2_MIDFRX[4] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTXS[4] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTX[4] = 0;  /* 0: standard, 1:extended */ 



/* Lane_Details */
((UInt32*) IDPTR_MEM_R)[5] = (UInt32) RTICANMM_MAIN_CAN_2_copy_Lane_Details;
CANMMCAN_2_MIDTXSW[5] = 0;
CANMMCAN_2_RXCNT[5] = 0;
CANMMCAN_2_MIDRX[5] = 0x737;
CANMMCAN_2_MIDTXS[5] = 0x737;
CANMMCAN_2_RXMT[5] = RTICANMM_MESSAGE_TYPE_STD;
CANMMCAN_2_MIDFRX[5] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTXS[5] = 0;  /* 0: standard, 1:extended */ 
CANMMCAN_2_MIDFTX[5] = 0;  /* 0: standard, 1:extended */ 
 
 


/* SpeedInformation */
CANMMCAN_2_MIDTX[0] = 0; 
((UInt32*) IDPTR_MEM_T)[0] = (UInt32) RTICANMM_MAIN_CAN_2_copy_SpeedInformation;



/* YawRateInformation */
CANMMCAN_2_MIDTX[1] = 1; 
((UInt32*) IDPTR_MEM_T)[1] = (UInt32) RTICANMM_MAIN_CAN_2_copy_YawRateInformation;



/* ABS2_C */
CANMMCAN_2_MIDTX[2] = 2; 
((UInt32*) IDPTR_MEM_T)[2] = (UInt32) RTICANMM_MAIN_CAN_2_copy_ABS2_C;



/* ABS4_C */
CANMMCAN_2_MIDTX[3] = 3; 
((UInt32*) IDPTR_MEM_T)[3] = (UInt32) RTICANMM_MAIN_CAN_2_copy_ABS4_C;



/* SAS1 */
CANMMCAN_2_MIDTX[4] = 4; 
((UInt32*) IDPTR_MEM_T)[4] = (UInt32) RTICANMM_MAIN_CAN_2_copy_SAS1;

CANMMCAN_2_COT[0] = 10;
CANMMCAN_2_COLEN[0] = 13;
CANMMCAN_2_CAPOID[0] = 11;
CANMMCAN_2_CAPOIDF[0] = 12;
CANMMCAN_2_COIDX_0[0] = 14;
CANMMCAN_2_COIDX_1[0] = 15;
CANMMCAN_2_COIDX_2[0] = 16;
CANMMCAN_2_COIDX_3[0] = 17;
CANMMCAN_2_COIDX_4[0] = 18;
CANMMCAN_2_COIDX_5[0] = 19;
CANMMCAN_2_COIDX_6[0] = 20;
CANMMCAN_2_COIDX_7[0] = 21;
CANMMCAN_2_COT[1] = 23;
CANMMCAN_2_COLEN[1] = 26;
CANMMCAN_2_CAPOID[1] = 24;
CANMMCAN_2_CAPOIDF[1] = 25;
CANMMCAN_2_COIDX_0[1] = 27;
CANMMCAN_2_COIDX_1[1] = 28;
CANMMCAN_2_COIDX_2[1] = 29;
CANMMCAN_2_COIDX_3[1] = 30;
CANMMCAN_2_COIDX_4[1] = 31;
CANMMCAN_2_COIDX_5[1] = 32;
CANMMCAN_2_COIDX_6[1] = 33;
CANMMCAN_2_COIDX_7[1] = 34;
CANMMCAN_2_COT[2] = 36;
CANMMCAN_2_COLEN[2] = 39;
CANMMCAN_2_CAPOID[2] = 37;
CANMMCAN_2_CAPOIDF[2] = 38;
CANMMCAN_2_COIDX_0[2] = 40;
CANMMCAN_2_COIDX_1[2] = 41;
CANMMCAN_2_COIDX_2[2] = 42;
CANMMCAN_2_COIDX_3[2] = 43;
CANMMCAN_2_COIDX_4[2] = 44;
CANMMCAN_2_COIDX_5[2] = 45;
CANMMCAN_2_COIDX_6[2] = 46;
CANMMCAN_2_COIDX_7[2] = 47;
CANMMCAN_2_COT[3] = 49;
CANMMCAN_2_COLEN[3] = 52;
CANMMCAN_2_CAPOID[3] = 50;
CANMMCAN_2_CAPOIDF[3] = 51;
CANMMCAN_2_COIDX_0[3] = 53;
CANMMCAN_2_COIDX_1[3] = 54;
CANMMCAN_2_COIDX_2[3] = 55;
CANMMCAN_2_COIDX_3[3] = 56;
CANMMCAN_2_COIDX_4[3] = 57;
CANMMCAN_2_COIDX_5[3] = 58;
CANMMCAN_2_COIDX_6[3] = 59;
CANMMCAN_2_COIDX_7[3] = 60;
CANMMCAN_2_COT[4] = 62;
CANMMCAN_2_COLEN[4] = 65;
CANMMCAN_2_CAPOID[4] = 63;
CANMMCAN_2_CAPOIDF[4] = 64;
CANMMCAN_2_COIDX_0[4] = 66;
CANMMCAN_2_COIDX_1[4] = 67;
CANMMCAN_2_COIDX_2[4] = 68;
CANMMCAN_2_COIDX_3[4] = 69;
CANMMCAN_2_COIDX_4[4] = 70;
CANMMCAN_2_COIDX_5[4] = 71;
CANMMCAN_2_COIDX_6[4] = 72;
CANMMCAN_2_COIDX_7[4] = 73;
CANMMCAN_2_COT[5] = 75;
CANMMCAN_2_COLEN[5] = 78;
CANMMCAN_2_CAPOID[5] = 76;
CANMMCAN_2_CAPOIDF[5] = 77;
CANMMCAN_2_COIDX_0[5] = 79;
CANMMCAN_2_COIDX_1[5] = 80;
CANMMCAN_2_COIDX_2[5] = 81;
CANMMCAN_2_COIDX_3[5] = 82;
CANMMCAN_2_COIDX_4[5] = 83;
CANMMCAN_2_COIDX_5[5] = 84;
CANMMCAN_2_COIDX_6[5] = 85;
CANMMCAN_2_COIDX_7[5] = 86;
CANMMCAN_2_COT[6] = 88;
CANMMCAN_2_COLEN[6] = 91;
CANMMCAN_2_CAPOID[6] = 89;
CANMMCAN_2_CAPOIDF[6] = 90;
CANMMCAN_2_COIDX_0[6] = 92;
CANMMCAN_2_COIDX_1[6] = 93;
CANMMCAN_2_COIDX_2[6] = 94;
CANMMCAN_2_COIDX_3[6] = 95;
CANMMCAN_2_COIDX_4[6] = 96;
CANMMCAN_2_COIDX_5[6] = 97;
CANMMCAN_2_COIDX_6[6] = 98;
CANMMCAN_2_COIDX_7[6] = 99;
CANMMCAN_2_COT[7] = 101;
CANMMCAN_2_COLEN[7] = 104;
CANMMCAN_2_CAPOID[7] = 102;
CANMMCAN_2_CAPOIDF[7] = 103;
CANMMCAN_2_COIDX_0[7] = 105;
CANMMCAN_2_COIDX_1[7] = 106;
CANMMCAN_2_COIDX_2[7] = 107;
CANMMCAN_2_COIDX_3[7] = 108;
CANMMCAN_2_COIDX_4[7] = 109;
CANMMCAN_2_COIDX_5[7] = 110;
CANMMCAN_2_COIDX_6[7] = 111;
CANMMCAN_2_COIDX_7[7] = 112;
CANMMCAN_2_COT[8] = 114;
CANMMCAN_2_COLEN[8] = 117;
CANMMCAN_2_CAPOID[8] = 115;
CANMMCAN_2_CAPOIDF[8] = 116;
CANMMCAN_2_COIDX_0[8] = 118;
CANMMCAN_2_COIDX_1[8] = 119;
CANMMCAN_2_COIDX_2[8] = 120;
CANMMCAN_2_COIDX_3[8] = 121;
CANMMCAN_2_COIDX_4[8] = 122;
CANMMCAN_2_COIDX_5[8] = 123;
CANMMCAN_2_COIDX_6[8] = 124;
CANMMCAN_2_COIDX_7[8] = 125;
CANMMCAN_2_COT[9] = 127;
CANMMCAN_2_COLEN[9] = 130;
CANMMCAN_2_CAPOID[9] = 128;
CANMMCAN_2_CAPOIDF[9] = 129;
CANMMCAN_2_COIDX_0[9] = 131;
CANMMCAN_2_COIDX_1[9] = 132;
CANMMCAN_2_COIDX_2[9] = 133;
CANMMCAN_2_COIDX_3[9] = 134;
CANMMCAN_2_COIDX_4[9] = 135;
CANMMCAN_2_COIDX_5[9] = 136;
CANMMCAN_2_COIDX_6[9] = 137;
CANMMCAN_2_COIDX_7[9] = 138;
CANMMCAN_2_COT[10] = 140;
CANMMCAN_2_COLEN[10] = 143;
CANMMCAN_2_CAPOID[10] = 141;
CANMMCAN_2_CAPOIDF[10] = 142;
CANMMCAN_2_COIDX_0[10] = 144;
CANMMCAN_2_COIDX_1[10] = 145;
CANMMCAN_2_COIDX_2[10] = 146;
CANMMCAN_2_COIDX_3[10] = 147;
CANMMCAN_2_COIDX_4[10] = 148;
CANMMCAN_2_COIDX_5[10] = 149;
CANMMCAN_2_COIDX_6[10] = 150;
CANMMCAN_2_COIDX_7[10] = 151;
CANMMCAN_2_COT[11] = 153;
CANMMCAN_2_COLEN[11] = 156;
CANMMCAN_2_CAPOID[11] = 154;
CANMMCAN_2_CAPOIDF[11] = 155;
CANMMCAN_2_COIDX_0[11] = 157;
CANMMCAN_2_COIDX_1[11] = 158;
CANMMCAN_2_COIDX_2[11] = 159;
CANMMCAN_2_COIDX_3[11] = 160;
CANMMCAN_2_COIDX_4[11] = 161;
CANMMCAN_2_COIDX_5[11] = 162;
CANMMCAN_2_COIDX_6[11] = 163;
CANMMCAN_2_COIDX_7[11] = 164;
CANMMCAN_2_COT[12] = 166;
CANMMCAN_2_COLEN[12] = 169;
CANMMCAN_2_CAPOID[12] = 167;
CANMMCAN_2_CAPOIDF[12] = 168;
CANMMCAN_2_COIDX_0[12] = 170;
CANMMCAN_2_COIDX_1[12] = 171;
CANMMCAN_2_COIDX_2[12] = 172;
CANMMCAN_2_COIDX_3[12] = 173;
CANMMCAN_2_COIDX_4[12] = 174;
CANMMCAN_2_COIDX_5[12] = 175;
CANMMCAN_2_COIDX_6[12] = 176;
CANMMCAN_2_COIDX_7[12] = 177;
CANMMCAN_2_COT[13] = 179;
CANMMCAN_2_COLEN[13] = 182;
CANMMCAN_2_CAPOID[13] = 180;
CANMMCAN_2_CAPOIDF[13] = 181;
CANMMCAN_2_COIDX_0[13] = 183;
CANMMCAN_2_COIDX_1[13] = 184;
CANMMCAN_2_COIDX_2[13] = 185;
CANMMCAN_2_COIDX_3[13] = 186;
CANMMCAN_2_COIDX_4[13] = 187;
CANMMCAN_2_COIDX_5[13] = 188;
CANMMCAN_2_COIDX_6[13] = 189;
CANMMCAN_2_COIDX_7[13] = 190;
CANMMCAN_2_COT[14] = 192;
CANMMCAN_2_COLEN[14] = 195;
CANMMCAN_2_CAPOID[14] = 193;
CANMMCAN_2_CAPOIDF[14] = 194;
CANMMCAN_2_COIDX_0[14] = 196;
CANMMCAN_2_COIDX_1[14] = 197;
CANMMCAN_2_COIDX_2[14] = 198;
CANMMCAN_2_COIDX_3[14] = 199;
CANMMCAN_2_COIDX_4[14] = 200;
CANMMCAN_2_COIDX_5[14] = 201;
CANMMCAN_2_COIDX_6[14] = 202;
CANMMCAN_2_COIDX_7[14] = 203;
CANMMCAN_2_COT[15] = 205;
CANMMCAN_2_COLEN[15] = 208;
CANMMCAN_2_CAPOID[15] = 206;
CANMMCAN_2_CAPOIDF[15] = 207;
CANMMCAN_2_COIDX_0[15] = 209;
CANMMCAN_2_COIDX_1[15] = 210;
CANMMCAN_2_COIDX_2[15] = 211;
CANMMCAN_2_COIDX_3[15] = 212;
CANMMCAN_2_COIDX_4[15] = 213;
CANMMCAN_2_COIDX_5[15] = 214;
CANMMCAN_2_COIDX_6[15] = 215;
CANMMCAN_2_COIDX_7[15] = 216;
CANMMCAN_2_COT[16] = 218;
CANMMCAN_2_COLEN[16] = 221;
CANMMCAN_2_CAPOID[16] = 219;
CANMMCAN_2_CAPOIDF[16] = 220;
CANMMCAN_2_COIDX_0[16] = 222;
CANMMCAN_2_COIDX_1[16] = 223;
CANMMCAN_2_COIDX_2[16] = 224;
CANMMCAN_2_COIDX_3[16] = 225;
CANMMCAN_2_COIDX_4[16] = 226;
CANMMCAN_2_COIDX_5[16] = 227;
CANMMCAN_2_COIDX_6[16] = 228;
CANMMCAN_2_COIDX_7[16] = 229;
CANMMCAN_2_COT[17] = 231;
CANMMCAN_2_COLEN[17] = 234;
CANMMCAN_2_CAPOID[17] = 232;
CANMMCAN_2_CAPOIDF[17] = 233;
CANMMCAN_2_COIDX_0[17] = 235;
CANMMCAN_2_COIDX_1[17] = 236;
CANMMCAN_2_COIDX_2[17] = 237;
CANMMCAN_2_COIDX_3[17] = 238;
CANMMCAN_2_COIDX_4[17] = 239;
CANMMCAN_2_COIDX_5[17] = 240;
CANMMCAN_2_COIDX_6[17] = 241;
CANMMCAN_2_COIDX_7[17] = 242;
CANMMCAN_2_COT[18] = 244;
CANMMCAN_2_COLEN[18] = 247;
CANMMCAN_2_CAPOID[18] = 245;
CANMMCAN_2_CAPOIDF[18] = 246;
CANMMCAN_2_COIDX_0[18] = 248;
CANMMCAN_2_COIDX_1[18] = 249;
CANMMCAN_2_COIDX_2[18] = 250;
CANMMCAN_2_COIDX_3[18] = 251;
CANMMCAN_2_COIDX_4[18] = 252;
CANMMCAN_2_COIDX_5[18] = 253;
CANMMCAN_2_COIDX_6[18] = 254;
CANMMCAN_2_COIDX_7[18] = 255;
CANMMCAN_2_COT[19] = 257;
CANMMCAN_2_COLEN[19] = 260;
CANMMCAN_2_CAPOID[19] = 258;
CANMMCAN_2_CAPOIDF[19] = 259;
CANMMCAN_2_COIDX_0[19] = 261;
CANMMCAN_2_COIDX_1[19] = 262;
CANMMCAN_2_COIDX_2[19] = 263;
CANMMCAN_2_COIDX_3[19] = 264;
CANMMCAN_2_COIDX_4[19] = 265;
CANMMCAN_2_COIDX_5[19] = 266;
CANMMCAN_2_COIDX_6[19] = 267;
CANMMCAN_2_COIDX_7[19] = 268;
CANMMCAN_2_COT[20] = 270;
CANMMCAN_2_COLEN[20] = 273;
CANMMCAN_2_CAPOID[20] = 271;
CANMMCAN_2_CAPOIDF[20] = 272;
CANMMCAN_2_COIDX_0[20] = 274;
CANMMCAN_2_COIDX_1[20] = 275;
CANMMCAN_2_COIDX_2[20] = 276;
CANMMCAN_2_COIDX_3[20] = 277;
CANMMCAN_2_COIDX_4[20] = 278;
CANMMCAN_2_COIDX_5[20] = 279;
CANMMCAN_2_COIDX_6[20] = 280;
CANMMCAN_2_COIDX_7[20] = 281;
CANMMCAN_2_COT[21] = 283;
CANMMCAN_2_COLEN[21] = 286;
CANMMCAN_2_CAPOID[21] = 284;
CANMMCAN_2_CAPOIDF[21] = 285;
CANMMCAN_2_COIDX_0[21] = 287;
CANMMCAN_2_COIDX_1[21] = 288;
CANMMCAN_2_COIDX_2[21] = 289;
CANMMCAN_2_COIDX_3[21] = 290;
CANMMCAN_2_COIDX_4[21] = 291;
CANMMCAN_2_COIDX_5[21] = 292;
CANMMCAN_2_COIDX_6[21] = 293;
CANMMCAN_2_COIDX_7[21] = 294;
CANMMCAN_2_COT[22] = 296;
CANMMCAN_2_COLEN[22] = 299;
CANMMCAN_2_CAPOID[22] = 297;
CANMMCAN_2_CAPOIDF[22] = 298;
CANMMCAN_2_COIDX_0[22] = 300;
CANMMCAN_2_COIDX_1[22] = 301;
CANMMCAN_2_COIDX_2[22] = 302;
CANMMCAN_2_COIDX_3[22] = 303;
CANMMCAN_2_COIDX_4[22] = 304;
CANMMCAN_2_COIDX_5[22] = 305;
CANMMCAN_2_COIDX_6[22] = 306;
CANMMCAN_2_COIDX_7[22] = 307;
CANMMCAN_2_COT[23] = 309;
CANMMCAN_2_COLEN[23] = 312;
CANMMCAN_2_CAPOID[23] = 310;
CANMMCAN_2_CAPOIDF[23] = 311;
CANMMCAN_2_COIDX_0[23] = 313;
CANMMCAN_2_COIDX_1[23] = 314;
CANMMCAN_2_COIDX_2[23] = 315;
CANMMCAN_2_COIDX_3[23] = 316;
CANMMCAN_2_COIDX_4[23] = 317;
CANMMCAN_2_COIDX_5[23] = 318;
CANMMCAN_2_COIDX_6[23] = 319;
CANMMCAN_2_COIDX_7[23] = 320;
CANMMCAN_2_COT[24] = 322;
CANMMCAN_2_COLEN[24] = 325;
CANMMCAN_2_CAPOID[24] = 323;
CANMMCAN_2_CAPOIDF[24] = 324;
CANMMCAN_2_COIDX_0[24] = 326;
CANMMCAN_2_COIDX_1[24] = 327;
CANMMCAN_2_COIDX_2[24] = 328;
CANMMCAN_2_COIDX_3[24] = 329;
CANMMCAN_2_COIDX_4[24] = 330;
CANMMCAN_2_COIDX_5[24] = 331;
CANMMCAN_2_COIDX_6[24] = 332;
CANMMCAN_2_COIDX_7[24] = 333;


