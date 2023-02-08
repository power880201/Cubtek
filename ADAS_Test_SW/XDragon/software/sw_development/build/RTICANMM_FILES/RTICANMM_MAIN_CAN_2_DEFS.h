/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_DEFS */
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


/*********
 *  ABS2_C - 1
 *     ABS2_C.BrkSw_Sta - 1
 *     ABS2_C.BrkSw_V - 2
 *     ABS2_C.VehSpeed - 3
 */

/*********
 *  ABS4_C - 2
 *     ABS4_C.YawRate - 1
 *     ABS4_C.SteerAng - 2
 *     ABS4_C.SteerAng_Sensor_V - 3
 *     ABS4_C.YawRate_V - 4
 *     ABS4_C.SteerAng_V - 5
 */

/*********
 *  Lane_Details - 3
 *     Lane_Details.Left_Guard_Rail - 1
 *     Lane_Details.Right_Guard_Rail - 2
 *     Lane_Details.construction_area - 3
 *     Lane_Details.Right_LDW_Availability - 4
 *     Lane_Details.Left_LDW_Availability - 5
 *     Lane_Details.Yaw_Angle - 6
 *     Lane_Details.Pitch_Angle - 7
 *     Lane_Details.Number_of_Lanes - 8
 *     Lane_Details.Position_in_Lanes - 9
 */

/*********
 *  SAS1 - 4
 *     SAS1.SAS_CheckSum - 1
 *     SAS1.SAS_MsgCount - 2
 *     SAS1.SAS_OK - 3
 *     SAS1.SAS_CAL - 4
 *     SAS1.SAS_Angle - 5
 */

/*********
 *  SpeedInformation - 5
 *     SpeedInformation.radarDeviceSpeedDirection - 1
 *     SpeedInformation.radarDeviceSpeed - 2
 */

/*********
 *  YawRateInformation - 6
 *     YawRateInformation.radarDeviceYawRate - 1
 */
volatile uint8_T CANMMCAN_2_RTVE;
volatile boolean_T CANMMCAN_2_TRAFFIC;
volatile int32_T CANMMCAN_2_MAXMSGPERSTEP;

volatile uint8_T CANMMCAN_2_TVAR8;

volatile uint8_T CANMMCAN_2_TVAR8_2;

volatile uint32_T CANMMCAN_2_TVAR32;

volatile uint8_T CANMMCAN_2_TVAR8A[8];

volatile double CANMMCAN_2_TVARD;
volatile double CANMMCAN_2_TVARD2;

/* Globale Enable */
volatile boolean_T CANMMCAN_2_GEIN;
#define CANMMCAN_2_GE CANMMCAN_2_GEIN

/* Reset */
#define CANMMCAN_2_RE 1


/* Feedthrough debug variable*/
volatile uint8_T CANMMCAN_2_FTD;

/* Globale Enable TX */
volatile boolean_T CANMMCAN_2_TXGEIN;
#define CANMMCAN_2_TXGE CANMMCAN_2_TXGEIN
                               
                               
/* ECU ENABLE */               
volatile boolean_T CANMMCAN_2_TXEEIE[3] = {1, 1, 1};     
volatile boolean_T CANMMCAN_2_TXEEIEOLD[3] = {1, 1, 1};     
volatile boolean_T CANMMCAN_2_TXECUEN_ADAS = 1;   
volatile boolean_T CANMMCAN_2_TXECUEN_EPAS = 1;   
volatile boolean_T CANMMCAN_2_TXECUEN_ExternalUnit = 1;   
                            
                            

/* Message would be sent */
volatile uint8_T CANMMCAN_2_WBS[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_BYKICK[NUM_TX_MSG];

/* Message enable */
volatile boolean_T CANMMCAN_2_TXENIE[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXEIN[NUM_TX_MSG];
#define CANMMCAN_2_TXEN(X) (CANMMCAN_2_TXENIE[X])
#define USE_LOCAL_ENABLE

/* Cyclic triggering */
volatile boolean_T CANMMCAN_2_TXCIE[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXCIN[NUM_TX_MSG];
#define CANMMCAN_2_TXC(X) (CANMMCAN_2_TXCIE[X])

/* Message kickout */
volatile boolean_T CANMMCAN_2_TXKIEX[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXKIN[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXKIEXC[NUM_TX_MSG];
#define CANMMCAN_2_TXKOUT(X) (CANMMCAN_2_TXKIEX[X])
#undef MESSAGETIMEOUT


#define ID_Table_RX(X) (int)(CANMMCAN_2_MIDRX[X])
#define ID_Table_TX(X) (int)(CANMMCAN_2_MIDTX[X])
uint8_T CANMMCAN_2_MIDTXSW[NUM_RX_MSG];
uint32_T CANMMCAN_2_MIDTXIN[NUM_RX_MSG];
uint32_T CANMMCAN_2_MIDTXS[NUM_RX_MSG];
uint32_T CANMMCAN_2_MIDRX[NUM_RX_MSG];
uint8_T CANMMCAN_2_MIDFRX[NUM_RX_MSG];
uint8_T CANMMCAN_2_MIDFTXIN[NUM_RX_MSG];
uint8_T CANMMCAN_2_MIDFTXS[NUM_RX_MSG];
uint8_T CANMMCAN_2_MIDFTX[NUM_RX_MSG];
uint8_T CANMMCAN_2_RXMT[NUM_RX_MSG];
 

/* Capture data */
uint32_T CANMMCAN_2_CAPID[25];
uint32_T CANMMCAN_2_CAPOID[25];
uint8_T CANMMCAN_2_CAPIDF[25];
uint32_T CANMMCAN_2_CAPOIDF[25];
uint32_T CANMMCAN_2_COT[25];
uint8_T CANMMCAN_2_CAPL[25];
uint32_T CANMMCAN_2_COLEN[25];
boolean_T CANMMCAN_2_CAPS[25];
volatile real_T CANMMCAN_2_CAPT[25];
uint8_T CANMMCAN_2_CAPD_0[25];
uint32_T CANMMCAN_2_COIDX_0[25];
uint8_T CANMMCAN_2_CAPD_1[25];
uint32_T CANMMCAN_2_COIDX_1[25];
uint8_T CANMMCAN_2_CAPD_2[25];
uint32_T CANMMCAN_2_COIDX_2[25];
uint8_T CANMMCAN_2_CAPD_3[25];
uint32_T CANMMCAN_2_COIDX_3[25];
uint8_T CANMMCAN_2_CAPD_4[25];
uint32_T CANMMCAN_2_COIDX_4[25];
uint8_T CANMMCAN_2_CAPD_5[25];
uint32_T CANMMCAN_2_COIDX_5[25];
uint8_T CANMMCAN_2_CAPD_6[25];
uint32_T CANMMCAN_2_COIDX_6[25];
uint8_T CANMMCAN_2_CAPD_7[25];
uint32_T CANMMCAN_2_COIDX_7[25];


volatile real_T CANMMCAN_2_RXt[NUM_RX_MSG];
volatile real_T CANMMCAN_2_RXdt[NUM_RX_MSG];
volatile boolean_T CANMMCAN_2_RXsta[NUM_RX_MSG];
volatile uint8_T CANMMCAN_2_RXerr[NUM_RX_MSG];
volatile real_T CANMMCAN_2_RXCTMIN[NUM_RX_MSG];
volatile real_T CANMMCAN_2_RXCTMAX[NUM_RX_MSG];
volatile uint8_T CANMMCAN_2_RXLEN[NUM_RX_MSG];
volatile uint32_T CANMMCAN_2_RXCNT[NUM_RX_MSG];
uint32_T CANMMCAN_2_MIDTX[NUM_TX_MSG];
volatile real_T CANMMCAN_2_TXCT[NUM_TX_MSG];
volatile real_T CANMMCAN_2_TXDT[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXcraw[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXsta[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXRBUF[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXRXBUF[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXusrm[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXLEN[NUM_TX_MSG];


/* Define RX/TX structure */

UInt8 CANMMCAN_2_RX_Msg_1_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_1_error;
UInt8 CANMMCAN_2_RX_Msg_1_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_2_constant;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_2_DynValue;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_2_error;
double CANMMCAN_2_RX_Msg_1_Sgn_3;
double CANMMCAN_2_TX_Msg_1_Sgn_3;
double CANMMCAN_2_TX_Msg_1_Sgn_3_constant;
double CANMMCAN_2_TX_Msg_1_Sgn_3_DynValue;
double CANMMCAN_2_TX_Msg_1_Sgn_3_error;
double CANMMCAN_2_RX_Msg_2_Sgn_1;
double CANMMCAN_2_TX_Msg_2_Sgn_1;
double CANMMCAN_2_TX_Msg_2_Sgn_1_constant;
double CANMMCAN_2_TX_Msg_2_Sgn_1_DynValue;
double CANMMCAN_2_TX_Msg_2_Sgn_1_error;
double CANMMCAN_2_RX_Msg_2_Sgn_2;
double CANMMCAN_2_TX_Msg_2_Sgn_2;
double CANMMCAN_2_TX_Msg_2_Sgn_2_constant;
double CANMMCAN_2_TX_Msg_2_Sgn_2_DynValue;
double CANMMCAN_2_TX_Msg_2_Sgn_2_error;
UInt8 CANMMCAN_2_RX_Msg_2_Sgn_3;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_3;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_3_constant;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_3_DynValue;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_3_error;
UInt8 CANMMCAN_2_RX_Msg_2_Sgn_4;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_4;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_4_constant;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_4_DynValue;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_4_error;
UInt8 CANMMCAN_2_RX_Msg_2_Sgn_5;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_5;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_5_constant;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_5_DynValue;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_5_error;
volatile real_T CANMMCAN_2_RXCT3;
UInt8 CANMMCAN_2_RX_Msg_3_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_3_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_3_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_3_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_3_Sgn_5;
double CANMMCAN_2_RX_Msg_3_Sgn_6;
double CANMMCAN_2_RX_Msg_3_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_3_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_3_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_4_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_1_error;
UInt8 CANMMCAN_2_RX_Msg_4_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_2_constant;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_2_DynValue;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_2_error;
UInt8 CANMMCAN_2_RX_Msg_4_Sgn_3;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_3;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_3_constant;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_3_DynValue;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_3_error;
UInt8 CANMMCAN_2_RX_Msg_4_Sgn_4;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_4;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_4_constant;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_4_DynValue;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_4_error;
double CANMMCAN_2_RX_Msg_4_Sgn_5;
double CANMMCAN_2_TX_Msg_4_Sgn_5;
double CANMMCAN_2_TX_Msg_4_Sgn_5_constant;
double CANMMCAN_2_TX_Msg_4_Sgn_5_DynValue;
double CANMMCAN_2_TX_Msg_4_Sgn_5_error;
UInt8 CANMMCAN_2_RX_Msg_5_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_5_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_5_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_5_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_5_Sgn_1_error;
double CANMMCAN_2_RX_Msg_5_Sgn_2;
double CANMMCAN_2_TX_Msg_5_Sgn_2;
double CANMMCAN_2_TX_Msg_5_Sgn_2_constant;
double CANMMCAN_2_TX_Msg_5_Sgn_2_DynValue;
double CANMMCAN_2_TX_Msg_5_Sgn_2_error;
double CANMMCAN_2_RX_Msg_6_Sgn_1;
double CANMMCAN_2_TX_Msg_6_Sgn_1;
double CANMMCAN_2_TX_Msg_6_Sgn_1_constant;
double CANMMCAN_2_TX_Msg_6_Sgn_1_DynValue;
double CANMMCAN_2_TX_Msg_6_Sgn_1_error;






volatile uint8_T CANMMCAN_2_TXs[16];
volatile uint8_T CANMMCAN_2_TXm[16];
volatile uint8_T CANMMCAN_2_TXGWs[16];
volatile uint32_T CANMMCAN_2_TXcdo[16];
