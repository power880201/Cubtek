/*****************************************************************************************************************************/
/* RTICANMM_MAIN_EPS_CAN_DEFS */
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


/*********
 *  ABS1 - 1
 *     ABS1.RollingCounter_ABS1 - 1
 *     ABS1.FRWheelSpd - 2
 *     ABS1.FRWheelSpdValid - 3
 *     ABS1.FLWheelSpd - 4
 *     ABS1.FLWheelSpdValid - 5
 *     ABS1.CheckSum_ABS1 - 6
 */

/*********
 *  ABS2 - 2
 *     ABS2.RollingCounter_ABS2 - 1
 *     ABS2.RRWheelSpd - 2
 *     ABS2.RRWheelSpdValid - 3
 *     ABS2.RLWheelSpd - 4
 *     ABS2.RLWheelSpdValid - 5
 *     ABS2.CheckSum_ABS2 - 6
 */

/*********
 *  ABS3 - 3
 *     ABS3.RollingCounter_ABS3 - 1
 *     ABS3.VehcileSpd - 2
 *     ABS3.VehicleSpdValid - 3
 *     ABS3.CheckSum_ABS3 - 4
 */

/*********
 *  ECM2 - 4
 *     ECM2.EngState - 1
 */

/*********
 *  EPS1 - 5
 *     EPS1.RollingCounter_EPS1 - 1
 *     EPS1.EPS_CurrMod - 2
 *     EPS1.EPS_ConsumedCurrValue - 3
 *     EPS1.EPS_DrvInputTrqValue - 4
 *     EPS1.EPS_AvailSts - 5
 *     EPS1.EPS_InterferDetdValid - 6
 *     EPS1.EPS_InterferDetd - 7
 *     EPS1.EPS_TrqSnsrSts - 8
 *     EPS1.EPS_FailSts - 9
 *     EPS1.CheckSum_EPS1 - 10
 */

/*********
 *  EPS2 - 6
 *     EPS2.RollingCounter_EPS2 - 1
 *     EPS2.EPS_LKATrqOvlDlvdSts - 2
 *     EPS2.EPS_HandsOffDetnModEnable - 3
 *     EPS2.EPS_LKATorqOvrlDlvdValid - 4
 *     EPS2.EPS_LKATorqOvrlDlvd - 5
 *     EPS2.EPS_HandsOffDetnStsValid - 6
 *     EPS2.EPS_HandsOffDetnSts - 7
 *     EPS2.CheckSum_EPS2 - 8
 */

/*********
 *  GWA1 - 7
 *     GWA1.EPSSwErrorSts - 1
 *     GWA1.EPSSwSts - 2
 */

/*********
 *  IFC1 - 8
 *     IFC1.RollingCounter_IFC - 1
 *     IFC1.LKATrqCmdReqFlag - 2
 *     IFC1.LKATrqOvlCmdReqValue - 3
 *     IFC1.LKATrqOvlCmdProtnValue - 4
 *     IFC1.CheckSum_IFC - 5
 */

/*********
 *  SAS1 - 9
 *     SAS1.RollingCounter_SAS1 - 1
 *     SAS1.SAS_Sts - 2
 *     SAS1.SAS_Generation - 3
 *     SAS1.SteerWheelSpdSign - 4
 *     SAS1.SteerWheelSpd - 5
 *     SAS1.SteerWheelAngleSign - 6
 *     SAS1.SteerWheelAngle - 7
 *     SAS1.CheckSum_SAS1 - 8
 */

/*********
 *  SAS2 - 10
 *     SAS2.SAS_CheckSum - 1
 *     SAS2.SAS_MsgCount - 2
 *     SAS2.SAS_OK - 3
 *     SAS2.SAS_CAL - 4
 *     SAS2.SAS_Trim - 5
 *     SAS2.SAS_Speed_Valid - 6
 *     SAS2.SAS_Stat_SF1 - 7
 *     SAS2.SAS_Stat_SF2 - 8
 *     SAS2.SAS_Stat_SF3 - 9
 *     SAS2.SAS_Stat_SF4 - 10
 *     SAS2.SAS_Speed - 11
 *     SAS2.SAS_Angle - 12
 */
volatile uint8_T CANMMEPS_CAN_RTVE;
volatile boolean_T CANMMEPS_CAN_TRAFFIC;
volatile int32_T CANMMEPS_CAN_MAXMSGPERSTEP;

volatile uint8_T CANMMEPS_CAN_TVAR8;

volatile uint8_T CANMMEPS_CAN_TVAR8_2;

volatile uint32_T CANMMEPS_CAN_TVAR32;

volatile uint8_T CANMMEPS_CAN_TVAR8A[8];

volatile double CANMMEPS_CAN_TVARD;
volatile double CANMMEPS_CAN_TVARD2;

/* Globale Enable */
volatile boolean_T CANMMEPS_CAN_GEIN;
#define CANMMEPS_CAN_GE CANMMEPS_CAN_GEIN

/* Reset */
#define CANMMEPS_CAN_RE 1


/* Feedthrough debug variable*/
volatile uint8_T CANMMEPS_CAN_FTD;

/* Globale Enable TX */
volatile boolean_T CANMMEPS_CAN_TXGEIN;
#define CANMMEPS_CAN_TXGE CANMMEPS_CAN_TXGEIN
                               
                               
/* ECU ENABLE */               
volatile boolean_T CANMMEPS_CAN_TXEEIE[2] = {1, 1};     
volatile boolean_T CANMMEPS_CAN_TXEEIEOLD[2] = {1, 1};     
volatile boolean_T CANMMEPS_CAN_TXECUEN_GW = 1;   
volatile boolean_T CANMMEPS_CAN_TXECUEN_IFC = 1;   
                            
                            

/* Message would be sent */
volatile uint8_T CANMMEPS_CAN_WBS[NUM_TX_MSG];
volatile boolean_T CANMMEPS_CAN_BYKICK[NUM_TX_MSG];

/* Message enable */
volatile boolean_T CANMMEPS_CAN_TXENIE[NUM_TX_MSG];
volatile boolean_T CANMMEPS_CAN_TXEIN[NUM_TX_MSG];
#define CANMMEPS_CAN_TXEN(X) (CANMMEPS_CAN_TXENIE[X])
#define USE_LOCAL_ENABLE

/* Cyclic triggering */
volatile boolean_T CANMMEPS_CAN_TXCIE[NUM_TX_MSG];
volatile boolean_T CANMMEPS_CAN_TXCIN[NUM_TX_MSG];
#define CANMMEPS_CAN_TXC(X) (CANMMEPS_CAN_TXCIE[X])

/* Message kickout */
volatile boolean_T CANMMEPS_CAN_TXKIEX[NUM_TX_MSG];
volatile boolean_T CANMMEPS_CAN_TXKIN[NUM_TX_MSG];
volatile boolean_T CANMMEPS_CAN_TXKIEXC[NUM_TX_MSG];
#define CANMMEPS_CAN_TXKOUT(X) (CANMMEPS_CAN_TXKIEX[X])
#undef MESSAGETIMEOUT


#define ID_Table_RX(X) (int)(CANMMEPS_CAN_MIDRX[X])
#define ID_Table_TX(X) (int)(CANMMEPS_CAN_MIDTX[X])
uint8_T CANMMEPS_CAN_MIDTXSW[NUM_RX_MSG];
uint32_T CANMMEPS_CAN_MIDTXIN[NUM_RX_MSG];
uint32_T CANMMEPS_CAN_MIDTXS[NUM_RX_MSG];
uint32_T CANMMEPS_CAN_MIDRX[NUM_RX_MSG];
uint8_T CANMMEPS_CAN_MIDFRX[NUM_RX_MSG];
uint8_T CANMMEPS_CAN_MIDFTXIN[NUM_RX_MSG];
uint8_T CANMMEPS_CAN_MIDFTXS[NUM_RX_MSG];
uint8_T CANMMEPS_CAN_MIDFTX[NUM_RX_MSG];
uint8_T CANMMEPS_CAN_RXMT[NUM_RX_MSG];
 

volatile real_T CANMMEPS_CAN_RXt[NUM_RX_MSG];
volatile real_T CANMMEPS_CAN_RXdt[NUM_RX_MSG];
volatile boolean_T CANMMEPS_CAN_RXsta[NUM_RX_MSG];
volatile uint8_T CANMMEPS_CAN_RXerr[NUM_RX_MSG];
volatile real_T CANMMEPS_CAN_RXCTMIN[NUM_RX_MSG];
volatile real_T CANMMEPS_CAN_RXCTMAX[NUM_RX_MSG];
volatile uint8_T CANMMEPS_CAN_RXLEN[NUM_RX_MSG];
volatile uint32_T CANMMEPS_CAN_RXCNT[NUM_RX_MSG];
uint32_T CANMMEPS_CAN_MIDTX[NUM_TX_MSG];
volatile real_T CANMMEPS_CAN_TXCT[NUM_TX_MSG];
volatile real_T CANMMEPS_CAN_TXDT[NUM_TX_MSG];
volatile uint8_T CANMMEPS_CAN_TXcraw[NUM_TX_MSG];
volatile boolean_T CANMMEPS_CAN_TXsta[NUM_TX_MSG];
volatile uint8_T CANMMEPS_CAN_TXRBUF[NUM_TX_MSG];
volatile uint8_T CANMMEPS_CAN_TXRXBUF[NUM_TX_MSG];
volatile uint8_T CANMMEPS_CAN_TXusrm[NUM_TX_MSG];
volatile uint8_T CANMMEPS_CAN_TXLEN[NUM_TX_MSG];


/* Define RX/TX structure */

UInt8 CANMMEPS_CAN_RX_Msg_1_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_1_constant;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_1_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_1_error;
double CANMMEPS_CAN_RX_Msg_1_Sgn_2;
double CANMMEPS_CAN_TX_Msg_1_Sgn_2;
double CANMMEPS_CAN_TX_Msg_1_Sgn_2_constant;
double CANMMEPS_CAN_TX_Msg_1_Sgn_2_DynValue;
double CANMMEPS_CAN_TX_Msg_1_Sgn_2_error;
UInt8 CANMMEPS_CAN_RX_Msg_1_Sgn_3;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_3;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_3_constant;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_3_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_3_error;
double CANMMEPS_CAN_RX_Msg_1_Sgn_4;
double CANMMEPS_CAN_TX_Msg_1_Sgn_4;
double CANMMEPS_CAN_TX_Msg_1_Sgn_4_constant;
double CANMMEPS_CAN_TX_Msg_1_Sgn_4_DynValue;
double CANMMEPS_CAN_TX_Msg_1_Sgn_4_error;
UInt8 CANMMEPS_CAN_RX_Msg_1_Sgn_5;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_5;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_5_constant;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_5_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_5_error;
UInt8 CANMMEPS_CAN_RX_Msg_1_Sgn_6;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_6;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_6_constant;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_6_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_1_Sgn_6_error;
UInt8 CANMMEPS_CAN_RX_Msg_2_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_1_constant;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_1_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_1_error;
double CANMMEPS_CAN_RX_Msg_2_Sgn_2;
double CANMMEPS_CAN_TX_Msg_2_Sgn_2;
double CANMMEPS_CAN_TX_Msg_2_Sgn_2_constant;
double CANMMEPS_CAN_TX_Msg_2_Sgn_2_DynValue;
double CANMMEPS_CAN_TX_Msg_2_Sgn_2_error;
UInt8 CANMMEPS_CAN_RX_Msg_2_Sgn_3;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_3;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_3_constant;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_3_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_3_error;
double CANMMEPS_CAN_RX_Msg_2_Sgn_4;
double CANMMEPS_CAN_TX_Msg_2_Sgn_4;
double CANMMEPS_CAN_TX_Msg_2_Sgn_4_constant;
double CANMMEPS_CAN_TX_Msg_2_Sgn_4_DynValue;
double CANMMEPS_CAN_TX_Msg_2_Sgn_4_error;
UInt8 CANMMEPS_CAN_RX_Msg_2_Sgn_5;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_5;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_5_constant;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_5_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_5_error;
UInt8 CANMMEPS_CAN_RX_Msg_2_Sgn_6;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_6;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_6_constant;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_6_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_2_Sgn_6_error;
UInt8 CANMMEPS_CAN_RX_Msg_3_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_1_constant;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_1_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_1_error;
double CANMMEPS_CAN_RX_Msg_3_Sgn_2;
double CANMMEPS_CAN_TX_Msg_3_Sgn_2;
double CANMMEPS_CAN_TX_Msg_3_Sgn_2_constant;
double CANMMEPS_CAN_TX_Msg_3_Sgn_2_DynValue;
double CANMMEPS_CAN_TX_Msg_3_Sgn_2_error;
UInt8 CANMMEPS_CAN_RX_Msg_3_Sgn_3;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_3;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_3_constant;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_3_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_3_error;
UInt8 CANMMEPS_CAN_RX_Msg_3_Sgn_4;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_4;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_4_constant;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_4_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_3_Sgn_4_error;
UInt8 CANMMEPS_CAN_RX_Msg_4_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_4_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_4_Sgn_1_constant;
UInt8 CANMMEPS_CAN_TX_Msg_4_Sgn_1_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_4_Sgn_1_error;
volatile real_T CANMMEPS_CAN_RXCT5;
UInt8 CANMMEPS_CAN_RX_Msg_5_Sgn_1;
UInt8 CANMMEPS_CAN_RX_Msg_5_Sgn_2;
double CANMMEPS_CAN_RX_Msg_5_Sgn_3;
double CANMMEPS_CAN_RX_Msg_5_Sgn_4;
UInt8 CANMMEPS_CAN_RX_Msg_5_Sgn_5;
UInt8 CANMMEPS_CAN_RX_Msg_5_Sgn_6;
UInt8 CANMMEPS_CAN_RX_Msg_5_Sgn_7;
UInt8 CANMMEPS_CAN_RX_Msg_5_Sgn_8;
UInt8 CANMMEPS_CAN_RX_Msg_5_Sgn_9;
UInt8 CANMMEPS_CAN_RX_Msg_5_Sgn_10;
volatile real_T CANMMEPS_CAN_RXCT6;
UInt8 CANMMEPS_CAN_RX_Msg_6_Sgn_1;
UInt8 CANMMEPS_CAN_RX_Msg_6_Sgn_2;
UInt8 CANMMEPS_CAN_RX_Msg_6_Sgn_3;
UInt8 CANMMEPS_CAN_RX_Msg_6_Sgn_4;
double CANMMEPS_CAN_RX_Msg_6_Sgn_5;
UInt8 CANMMEPS_CAN_RX_Msg_6_Sgn_6;
UInt8 CANMMEPS_CAN_RX_Msg_6_Sgn_7;
UInt8 CANMMEPS_CAN_RX_Msg_6_Sgn_8;
UInt8 CANMMEPS_CAN_RX_Msg_7_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_7_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_7_Sgn_1_constant;
UInt8 CANMMEPS_CAN_TX_Msg_7_Sgn_1_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_7_Sgn_1_error;
UInt8 CANMMEPS_CAN_RX_Msg_7_Sgn_2;
UInt8 CANMMEPS_CAN_TX_Msg_7_Sgn_2;
UInt8 CANMMEPS_CAN_TX_Msg_7_Sgn_2_constant;
UInt8 CANMMEPS_CAN_TX_Msg_7_Sgn_2_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_7_Sgn_2_error;
UInt8 CANMMEPS_CAN_RX_Msg_8_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_1_constant;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_1_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_1_error;
UInt8 CANMMEPS_CAN_RX_Msg_8_Sgn_2;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_2;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_2_constant;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_2_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_2_error;
double CANMMEPS_CAN_RX_Msg_8_Sgn_3;
double CANMMEPS_CAN_TX_Msg_8_Sgn_3;
double CANMMEPS_CAN_TX_Msg_8_Sgn_3_constant;
double CANMMEPS_CAN_TX_Msg_8_Sgn_3_DynValue;
double CANMMEPS_CAN_TX_Msg_8_Sgn_3_error;
UInt16 CANMMEPS_CAN_RX_Msg_8_Sgn_4;
UInt16 CANMMEPS_CAN_TX_Msg_8_Sgn_4;
UInt16 CANMMEPS_CAN_TX_Msg_8_Sgn_4_constant;
UInt16 CANMMEPS_CAN_TX_Msg_8_Sgn_4_DynValue;
UInt16 CANMMEPS_CAN_TX_Msg_8_Sgn_4_error;
UInt8 CANMMEPS_CAN_RX_Msg_8_Sgn_5;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_5;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_5_constant;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_5_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_8_Sgn_5_error;
UInt8 CANMMEPS_CAN_RX_Msg_9_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_1;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_1_constant;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_1_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_1_error;
UInt8 CANMMEPS_CAN_RX_Msg_9_Sgn_2;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_2;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_2_constant;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_2_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_2_error;
UInt8 CANMMEPS_CAN_RX_Msg_9_Sgn_3;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_3;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_3_constant;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_3_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_3_error;
UInt8 CANMMEPS_CAN_RX_Msg_9_Sgn_4;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_4;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_4_constant;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_4_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_4_error;
double CANMMEPS_CAN_RX_Msg_9_Sgn_5;
double CANMMEPS_CAN_TX_Msg_9_Sgn_5;
double CANMMEPS_CAN_TX_Msg_9_Sgn_5_constant;
double CANMMEPS_CAN_TX_Msg_9_Sgn_5_DynValue;
double CANMMEPS_CAN_TX_Msg_9_Sgn_5_error;
UInt8 CANMMEPS_CAN_RX_Msg_9_Sgn_6;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_6;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_6_constant;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_6_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_6_error;
double CANMMEPS_CAN_RX_Msg_9_Sgn_7;
double CANMMEPS_CAN_TX_Msg_9_Sgn_7;
double CANMMEPS_CAN_TX_Msg_9_Sgn_7_constant;
double CANMMEPS_CAN_TX_Msg_9_Sgn_7_DynValue;
double CANMMEPS_CAN_TX_Msg_9_Sgn_7_error;
UInt8 CANMMEPS_CAN_RX_Msg_9_Sgn_8;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_8;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_8_constant;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_8_DynValue;
UInt8 CANMMEPS_CAN_TX_Msg_9_Sgn_8_error;
volatile real_T CANMMEPS_CAN_RXCT10;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_1;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_2;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_3;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_4;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_5;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_6;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_7;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_8;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_9;
UInt8 CANMMEPS_CAN_RX_Msg_10_Sgn_10;
UInt16 CANMMEPS_CAN_RX_Msg_10_Sgn_11;
double CANMMEPS_CAN_RX_Msg_10_Sgn_12;






volatile uint8_T CANMMEPS_CAN_TXs[32];
volatile uint8_T CANMMEPS_CAN_TXm[32];
volatile uint8_T CANMMEPS_CAN_TXGWs[32];
volatile uint32_T CANMMEPS_CAN_TXcdo[32];
