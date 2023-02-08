/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_DEFS */
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
 *  ABS1 - 1
 *     ABS1.BoosterVac - 1
 *     ABS1.GRADE - 2
 *     ABS1.BoosterVac_Failed - 3
 *     ABS1.BoosterVac_Sta - 4
 *     ABS1.BoosterVac_V - 5
 *     ABS1.GRADE_V - 6
 *     ABS1.TCSReqVal_V - 7
 *     ABS1.TCSReqStrat - 8
 *     ABS1.TCSRollCnt - 9
 *     ABS1.TCSReqProt - 10
 *     ABS1.TCSReqVal - 11
 */

/*********
 *  ABS2 - 2
 *     ABS2.VehSpeed_Checksum - 1
 *     ABS2.VehSpeed_LifeCount - 2
 *     ABS2.HSA_Failed - 3
 *     ABS2.HSA_Active - 4
 *     ABS2.BrkSw_Sta - 5
 *     ABS2.BrkSw_V - 6
 *     ABS2.EBD_Failed - 7
 *     ABS2.TCS_Enabled - 8
 *     ABS2.TCS_Failed - 9
 *     ABS2.ESC_Failed - 10
 *     ABS2.ABS_Failed - 11
 *     ABS2.TCS_Active - 12
 *     ABS2.ESC_Active - 13
 *     ABS2.ABS_Active - 14
 *     ABS2.VehSpeed - 15
 */

/*********
 *  ABS3 - 3
 *     ABS3.LF_RawWhlSpeed_V - 1
 *     ABS3.LF_RawWhlSpeed - 2
 *     ABS3.RF_RawWhlSpeed_V - 3
 *     ABS3.RF_RawWhlSpeed - 4
 *     ABS3.LR_RawWhlSpeed_V - 5
 *     ABS3.LR_RawWhlSpeed - 6
 *     ABS3.RR_RawWhlSpeed_V - 7
 *     ABS3.RR_RawWhlSpeed - 8
 */

/*********
 *  ABS4 - 4
 *     ABS4.LongAccel - 1
 *     ABS4.SteerAng - 2
 *     ABS4.YawRate - 3
 *     ABS4.LatAccel - 4
 *     ABS4.MCPressure - 5
 *     ABS4.MCPressure_V - 6
 *     ABS4.LongAccel_V - 7
 *     ABS4.LatAccel_V - 8
 *     ABS4.YawRate_V - 9
 *     ABS4.SteerAng_V - 10
 */

/*********
 *  AC1 - 5
 *     AC1.Sta_Out_Temp - 1
 */

/*********
 *  ADAS1 - 6
 *     ADAS1.ADAS1_Checksum - 1
 *     ADAS1.ADAS1_LifeCount - 2
 *     ADAS1.ADAS_StrTqReq_A - 3
 *     ADAS1.ADAS_StrAngReq_A - 4
 *     ADAS1.ADAS_EPSMode - 5
 *     ADAS1.ADAS_StrTqReqProt - 6
 *     ADAS1.ADAS_StrTqReq - 7
 *     ADAS1.ADAS_StrAngReqProt - 8
 *     ADAS1.ADAS_StrAngReq - 9
 */

/*********
 *  ADAS2 - 7
 *     ADAS2.ADAS2_Checksum - 1
 *     ADAS2.ADAS2_LifeCount - 2
 *     ADAS2.ADAS_VehHoldReq - 3
 *     ADAS2.ADAS_BrakePrefillReq_A - 4
 *     ADAS2.ADAS_BrakePrefillReq - 5
 *     ADAS2.ADAS_AEBReq_A - 6
 *     ADAS2.ADAS_AEBReq - 7
 *     ADAS2.ADAS_ForceIdle_A - 8
 *     ADAS2.ADAS_DecReq_Prot - 9
 *     ADAS2.ADAS_DecReq - 10
 *     ADAS2.ADAS_DecReq_A - 11
 *     ADAS2.ADAS_TqReq_A - 12
 *     ADAS2.ADAS_ForceIdle - 13
 *     ADAS2.ADAS_TqReqProt - 14
 *     ADAS2.ADAS_TqReq - 15
 */

/*********
 *  ADAS3 - 8
 *     ADAS3.ADAS3_Checksum - 1
 *     ADAS3.ADAS3_LifeCount - 2
 *     ADAS3.ForceLowBeam - 3
 *     ADAS3.LeftTurnLightReq - 4
 *     ADAS3.RightTurnLightReq - 5
 *     ADAS3.HazardWarningReq - 6
 *     ADAS3.ADAS_MIL - 7
 *     ADAS3.RampDownEnable - 8
 *     ADAS3.RampDownTime - 9
 *     ADAS3.ADAS_ShftPosnReq_A - 10
 *     ADAS3.ADAS_ShftPosnReq - 11
 *     ADAS3.ADAS_VehSpdLim_A - 12
 *     ADAS3.ADAS_GearPosnReq_A - 13
 *     ADAS3.ADAS_GearPosnReq - 14
 *     ADAS3.ADAS_VehSpdLim - 15
 */

/*********
 *  ADAS4 - 9
 *     ADAS4.ADASFaultWarningReq - 1
 *     ADAS4.HapticWarningReq - 2
 *     ADAS4.ADAS_APSEnable - 3
 *     ADAS4.ADAS_PilotMode - 4
 *     ADAS4.ADAS_IGSAStatus - 5
 *     ADAS4.ADAS_LFCMode - 6
 *     ADAS4.ADAS_MAPPStatus - 7
 *     ADAS4.ADAS_MAPAStatus - 8
 *     ADAS4.ADAS_LCSStatus - 9
 *     ADAS4.ADAS_LFCStatus - 10
 *     ADAS4.ADAS_LKAStatus - 11
 *     ADAS4.ADAS_ACCStatus - 12
 *     ADAS4.ADAS_FCWStatus - 13
 *     ADAS4.ADAS_AEBStatus - 14
 *     ADAS4.MAPPHMIWarningReq - 15
 *     ADAS4.MAPAHMIWarningReq - 16
 *     ADAS4.LCSHMIWarningReq - 17
 *     ADAS4.LFCHMIWarningReq - 18
 *     ADAS4.LKAHMIWarningReq - 19
 *     ADAS4.IGSAHMIWarningReq - 20
 *     ADAS4.AEBHMIWarningReq - 21
 *     ADAS4.ACCHMIWarningReq - 22
 *     ADAS4.FCWHMIWarningReq - 23
 */

/*********
 *  ADAS5 - 10
 *     ADAS5.ADAS_FaultMode - 1
 *     ADAS5.ADAS_LaneModeR - 2
 *     ADAS5.ADAS_LaneModeL - 3
 *     ADAS5.SeleTimeGapLvl - 4
 *     ADAS5.SetTimeGapLvl - 5
 *     ADAS5.IGSASetSpeed - 6
 *     ADAS5.ACCSetSpeed - 7
 *     ADAS5.SetVehTimeGap - 8
 *     ADAS5.LeadVehTimeGap - 9
 *     ADAS5.TargetType - 10
 */

/*********
 *  BCM1 - 11
 *     BCM1.BCM_Hazard_Sta - 1
 *     BCM1.BCM_LRDrSw_Sta - 2
 *     BCM1.BCM_RRDrSw_Sta - 3
 *     BCM1.BCM_TGateSw_Sta - 4
 *     BCM1.BCM_RTurnLp_Sta - 5
 *     BCM1.BCM_LTurnLp_Sta - 6
 *     BCM1.BCM_AllDrSw_Sta - 7
 *     BCM1.BCM_PDrSw_Sta - 8
 *     BCM1.BCM_DDrSw_Sta - 9
 *     BCM1.BCM_Key_Sta - 10
 */

/*********
 *  BCM2 - 12
 *     BCM2.BCM_SRS_Crash_Info - 1
 */

/*********
 *  ECM1 - 13
 *     ECM1.CAN_TQ_STND - 1
 *     ECM1.CAN_TQFR - 2
 *     ECM1.CAN_TQI - 3
 *     ECM1.CAN_N - 4
 *     ECM1.CAN_TQI_ACOR - 5
 *     ECM1.LV_CAN_N_ERR - 6
 *     ECM1.LV_CAN_SUB_TQI - 7
 */

/*********
 *  ECM2 - 14
 *     ECM2.Eng_Hood_SW - 1
 *     ECM2.LV_CAN_ENG_RUN_ST - 2
 */

/*********
 *  ECM3 - 15
 *     ECM3.CAN_PV_AV - 1
 *     ECM3.CAN_PV_EFC - 2
 *     ECM3.LV_CAN_MAIN_CRU_ER - 3
 *     ECM3.LV_CAN_MAIN_CRU - 4
 *     ECM3.LV_CAN_SET_CRU_ERR - 5
 *     ECM3.LV_CAN_SET_CRU - 6
 *     ECM3.LV_CAN_ERRPAS - 7
 *     ECM3.LV_CAN_ERRPVS - 8
 */

/*********
 *  ECM9 - 16
 *     ECM9.EngTqMin - 1
 *     ECM9.EngTqMax - 2
 *     ECM9.EMSOpState - 3
 *     ECM9.EMSHybridOpState - 4
 *     ECM9.ECM9RollCnt - 5
 */

/*********
 *  EPAS2 - 17
 *     EPAS2.SAS_CheckSum2 - 1
 *     EPAS2.SAS_MsgCount2 - 2
 *     EPAS2.R_SAS_Angle - 3
 *     EPAS2.Steering_Torque - 4
 *     EPAS2.Steering_Torque_V - 5
 *     EPAS2.RSP_OK - 6
 *     EPAS2.EpasFailed - 7
 *     EPAS2.Elect_PWR_Consumpt - 8
 */

/*********
 *  EPAS3 - 18
 *     EPAS3.EPAS3_Checksum - 1
 *     EPAS3.EPAS3_LifeCount - 2
 *     EPAS3.CurStrTqReq_A - 3
 *     EPAS3.CurStrAngReq_A - 4
 *     EPAS3.EPSBattVolt - 5
 *     EPAS3.CurStrTqReq - 6
 *     EPAS3.DriverStrIntdLvl - 7
 *     EPAS3.DriverStrIntd - 8
 *     EPAS3.EPSExtComdAvail - 9
 *     EPAS3.EPSOpMode - 10
 *     EPAS3.CurStrAngReq - 11
 */

/*********
 *  EPB1 - 19
 *     EPB1.PB_BrakeBinStat - 1
 */

/*********
 *  HCU3 - 20
 *     HCU3.HybridLimpHome - 1
 *     HCU3.HCU3RollCnt - 2
 *     HCU3.FuelCutReq - 3
 *     HCU3.EngCrankType - 4
 *     HCU3.EngTqIndPermMax_P - 5
 *     HCU3.EngTqIndPermMax - 6
 *     HCU3.EngTqBrkReq_P - 7
 *     HCU3.EngTqBrkReq - 8
 *     HCU3.EIdleAvail - 9
 *     HCU3.EIdleActive - 10
 *     HCU3.EngStpReq - 11
 *     HCU3.EngStpActive - 12
 *     HCU3.FuelPumpReq - 13
 *     HCU3.StarterCrankReq - 14
 *     HCU3.EngStrtActive - 15
 *     HCU3.ACDisableReq - 16
 */

/*********
 *  HCU4 - 21
 *     HCU4.STATE_TQI_ETCU_T - 1
 *     HCU4.Start_Stop_STA - 2
 *     HCU4.Start_Stop_STA_Ind - 3
 *     HCU4.HEVTransMapReq - 4
 *     HCU4.MILReq - 5
 *     HCU4.CAN_TQI_ETCU_GS_T - 6
 *     HCU4.ISS_Idol_stop_flag - 7
 *     HCU4.EngIdleSpdSetpt - 8
 *     HCU4.BSGActTq4EMS_P - 9
 *     HCU4.BSGActTq4EMS - 10
 */

/*********
 *  HMI1 - 22
 *     HMI1.IGSASwitchMode - 1
 *     HMI1.IGSASet_SpdDec - 2
 *     HMI1.IGSARes_SpdInc - 3
 *     HMI1.IGSAOn - 4
 *     HMI1.LFC_PilotCancel - 5
 *     HMI1.LFC_PilotOn - 6
 *     HMI1.FCWWarningMode - 7
 *     HMI1.LCSEnable - 8
 *     HMI1.LKAEnable - 9
 *     HMI1.MAPAEnable - 10
 *     HMI1.CSCEnable - 11
 *     HMI1.FCWEnable - 12
 *     HMI1.AEBEnable - 13
 *     HMI1.DefMaxACCSetSpeed - 14
 *     HMI1.ACCSpeedDec - 15
 *     HMI1.ACCSpeedInc - 16
 *     HMI1.ACCSet_SpdDec - 17
 *     HMI1.ACCRes_SpdInc - 18
 *     HMI1.ACCCancel - 19
 *     HMI1.ACCOn - 20
 *     HMI1.ACCTimeGapDec - 21
 *     HMI1.ACCTimeGapInc - 22
 */

/*********
 *  HMI2 - 23
 *     HMI2.MSAOn_VCU - 1
 *     HMI2.LFCOn_VCU - 2
 *     HMI2.ACCTimeGapDec_VCU - 3
 *     HMI2.ACCTimeGapInc_VCU - 4
 *     HMI2.ACCRes_SpdInc_VCU - 5
 *     HMI2.ACCSet_SpdDec_VCU - 6
 *     HMI2.ACCOn_VCU - 7
 */

/*********
 *  Meter1 - 24
 *     Meter1.ODOMETER - 1
 *     Meter1.SeatBelt - 2
 *     Meter1.LowBrakeFluid_Sta - 3
 *     Meter1.ParkBrake - 4
 */

/*********
 *  Meter3 - 25
 *     Meter3.Meter_Ind_VehSpeed - 1
 */

/*********
 *  NMmADAS - 26
 *     NMmADAS.NM_ADAS_SC - 1
 *     NMmADAS.NM_ADAS_AR - 2
 *     NMmADAS.NM_ADAS_D_ES - 3
 *     NMmADAS.NM_ADAS_Zero_Byte - 4
 */

/*********
 *  SAS1 - 27
 *     SAS1.SAS_CheckSum - 1
 *     SAS1.SAS_MsgCount - 2
 *     SAS1.SAS_OK - 3
 *     SAS1.SAS_CAL - 4
 *     SAS1.SAS_Angle - 5
 */

/*********
 *  TCM1 - 28
 *     TCM1.CAN_N_TM - 1
 *     TCM1.LV_CAN_N_TM_ERR - 2
 *     TCM1.CAN_GEAR_STATE_NOW - 3
 *     TCM1.CAN_GEAR_STA_NOW_V - 4
 *     TCM1.CAN_TQI_ETCU_GS - 5
 *     TCM1.STATE_CAN_TQI_ETCU - 6
 *     TCM1.CAN_GEAR_SEL_ETCU - 7
 *     TCM1.CAN_ETCU_STATE - 8
 */

/*********
 *  TCM2 - 29
 *     TCM2.DR_MODE_IND - 1
 */

/*********
 *  VCU1 - 30
 *     VCU1.VCU1_Checksum - 1
 *     VCU1.VCU1_LifeCount - 2
 *     VCU1.VCUBattVolt - 3
 *     VCU1.CurVehDec - 4
 *     VCU1.CurBrakDecReq - 5
 *     VCU1.CurBrakDecReq_A - 6
 *     VCU1.CurVehDec_V - 7
 *     VCU1.DecContMan - 8
 *     VCU1.ESCBrakStatus - 9
 *     VCU1.VCUFault - 10
 *     VCU1.ESCExtBrkAvail - 11
 *     VCU1.BrakePrefillAvail - 12
 *     VCU1.DrivBrakSw - 13
 *     VCU1.EMSTqSrc - 14
 *     VCU1.EMSExtTqAvail - 15
 *     VCU1.CurEngTqReq_A - 16
 *     VCU1.CurEngTqReq - 17
 */

/*********
 *  VCU2 - 31
 *     VCU2.VCU2_Checksum - 1
 *     VCU2.VCU2_LifeCount - 2
 *     VCU2.CurDriverTqReq - 3
 *     VCU2.CurDriverTqReq_V - 4
 *     VCU2.VCU_AccelPedalPosn_V - 5
 *     VCU2.VCU_AccelPedalPosn - 6
 */
volatile uint8_T CANMMCAN_1_RTVE;
volatile boolean_T CANMMCAN_1_TRAFFIC;
volatile int32_T CANMMCAN_1_MAXMSGPERSTEP;

volatile uint8_T CANMMCAN_1_TVAR8;

volatile uint8_T CANMMCAN_1_TVAR8_2;

volatile uint32_T CANMMCAN_1_TVAR32;

volatile uint8_T CANMMCAN_1_TVAR8A[8];

volatile double CANMMCAN_1_TVARD;
volatile double CANMMCAN_1_TVARD2;

/* Globale Enable */
volatile boolean_T CANMMCAN_1_GEIN;
#define CANMMCAN_1_GE CANMMCAN_1_GEIN

/* Reset */
#define CANMMCAN_1_RE 1


/* Feedthrough debug variable*/
volatile uint8_T CANMMCAN_1_FTD;

/* Globale Enable TX */
volatile boolean_T CANMMCAN_1_TXGEIN;
#define CANMMCAN_1_TXGE CANMMCAN_1_TXGEIN
                               
                               
/* ECU ENABLE */               
volatile boolean_T CANMMCAN_1_TXEEIE[1] = {1};     
volatile boolean_T CANMMCAN_1_TXEEIEOLD[1] = {1};     
volatile boolean_T CANMMCAN_1_TXECUEN_ADAS = 1;   
                            
                            

/* Message would be sent */
volatile uint8_T CANMMCAN_1_WBS[NUM_TX_MSG];
volatile boolean_T CANMMCAN_1_BYKICK[NUM_TX_MSG];

/* Message enable */
volatile boolean_T CANMMCAN_1_TXENIE[NUM_TX_MSG];
volatile boolean_T CANMMCAN_1_TXEIN[NUM_TX_MSG];
#define CANMMCAN_1_TXEN(X) (CANMMCAN_1_TXENIE[X])
#define USE_LOCAL_ENABLE

/* Cyclic triggering */
volatile boolean_T CANMMCAN_1_TXCIE[NUM_TX_MSG];
volatile boolean_T CANMMCAN_1_TXCIN[NUM_TX_MSG];
#define CANMMCAN_1_TXC(X) (CANMMCAN_1_TXCIE[X])

/* Message kickout */
volatile boolean_T CANMMCAN_1_TXKIEX[NUM_TX_MSG];
volatile boolean_T CANMMCAN_1_TXKIN[NUM_TX_MSG];
volatile boolean_T CANMMCAN_1_TXKIEXC[NUM_TX_MSG];
#define CANMMCAN_1_TXKOUT(X) (CANMMCAN_1_TXKIEX[X])
#undef MESSAGETIMEOUT


#define ID_Table_RX(X) (int)(CANMMCAN_1_MIDRX[X])
#define ID_Table_TX(X) (int)(CANMMCAN_1_MIDTX[X])
uint8_T CANMMCAN_1_MIDTXSW[NUM_RX_MSG];
uint32_T CANMMCAN_1_MIDTXIN[NUM_RX_MSG];
uint32_T CANMMCAN_1_MIDTXS[NUM_RX_MSG];
uint32_T CANMMCAN_1_MIDRX[NUM_RX_MSG];
uint8_T CANMMCAN_1_MIDFRX[NUM_RX_MSG];
uint8_T CANMMCAN_1_MIDFTXIN[NUM_RX_MSG];
uint8_T CANMMCAN_1_MIDFTXS[NUM_RX_MSG];
uint8_T CANMMCAN_1_MIDFTX[NUM_RX_MSG];
uint8_T CANMMCAN_1_RXMT[NUM_RX_MSG];
 

volatile real_T CANMMCAN_1_RXt[NUM_RX_MSG];
volatile real_T CANMMCAN_1_RXdt[NUM_RX_MSG];
volatile boolean_T CANMMCAN_1_RXsta[NUM_RX_MSG];
volatile uint8_T CANMMCAN_1_RXerr[NUM_RX_MSG];
volatile real_T CANMMCAN_1_RXCTMIN[NUM_RX_MSG];
volatile real_T CANMMCAN_1_RXCTMAX[NUM_RX_MSG];
volatile uint8_T CANMMCAN_1_RXLEN[NUM_RX_MSG];
volatile uint32_T CANMMCAN_1_RXCNT[NUM_RX_MSG];
uint32_T CANMMCAN_1_MIDTX[NUM_TX_MSG];
volatile real_T CANMMCAN_1_TXCT[NUM_TX_MSG];
volatile real_T CANMMCAN_1_TXDT[NUM_TX_MSG];
volatile uint8_T CANMMCAN_1_TXcraw[NUM_TX_MSG];
volatile boolean_T CANMMCAN_1_TXsta[NUM_TX_MSG];
volatile uint8_T CANMMCAN_1_TXRBUF[NUM_TX_MSG];
volatile uint8_T CANMMCAN_1_TXRXBUF[NUM_TX_MSG];
volatile uint8_T CANMMCAN_1_TXusrm[NUM_TX_MSG];
volatile uint8_T CANMMCAN_1_TXLEN[NUM_TX_MSG];


/* Define RX/TX structure */

volatile real_T CANMMCAN_1_RXCT1;
double CANMMCAN_1_RX_Msg_1_Sgn_1;
double CANMMCAN_1_RX_Msg_1_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_1_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_1_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_1_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_1_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_1_Sgn_7;
UInt8 CANMMCAN_1_RX_Msg_1_Sgn_8;
UInt8 CANMMCAN_1_RX_Msg_1_Sgn_9;
UInt16 CANMMCAN_1_RX_Msg_1_Sgn_10;
double CANMMCAN_1_RX_Msg_1_Sgn_11;
volatile real_T CANMMCAN_1_RXCT2;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_7;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_8;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_9;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_10;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_11;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_12;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_13;
UInt8 CANMMCAN_1_RX_Msg_2_Sgn_14;
double CANMMCAN_1_RX_Msg_2_Sgn_15;
volatile real_T CANMMCAN_1_RXCT3;
UInt8 CANMMCAN_1_RX_Msg_3_Sgn_1;
double CANMMCAN_1_RX_Msg_3_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_3_Sgn_3;
double CANMMCAN_1_RX_Msg_3_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_3_Sgn_5;
double CANMMCAN_1_RX_Msg_3_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_3_Sgn_7;
double CANMMCAN_1_RX_Msg_3_Sgn_8;
volatile real_T CANMMCAN_1_RXCT4;
double CANMMCAN_1_RX_Msg_4_Sgn_1;
double CANMMCAN_1_RX_Msg_4_Sgn_2;
double CANMMCAN_1_RX_Msg_4_Sgn_3;
double CANMMCAN_1_RX_Msg_4_Sgn_4;
double CANMMCAN_1_RX_Msg_4_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_4_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_4_Sgn_7;
UInt8 CANMMCAN_1_RX_Msg_4_Sgn_8;
UInt8 CANMMCAN_1_RX_Msg_4_Sgn_9;
UInt8 CANMMCAN_1_RX_Msg_4_Sgn_10;
volatile real_T CANMMCAN_1_RXCT5;
Int16 CANMMCAN_1_RX_Msg_5_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_6_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_1_constant;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_1_DynValue;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_1_error;
UInt8 CANMMCAN_1_RX_Msg_6_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_2_constant;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_2_DynValue;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_2_error;
UInt8 CANMMCAN_1_RX_Msg_6_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_3_constant;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_3_DynValue;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_3_error;
UInt8 CANMMCAN_1_RX_Msg_6_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_4_constant;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_4_DynValue;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_4_error;
UInt8 CANMMCAN_1_RX_Msg_6_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_5_constant;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_5_DynValue;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_5_error;
UInt8 CANMMCAN_1_RX_Msg_6_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_6_constant;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_6_DynValue;
UInt8 CANMMCAN_1_TX_Msg_6_Sgn_6_error;
double CANMMCAN_1_RX_Msg_6_Sgn_7;
double CANMMCAN_1_TX_Msg_6_Sgn_7;
double CANMMCAN_1_TX_Msg_6_Sgn_7_constant;
double CANMMCAN_1_TX_Msg_6_Sgn_7_DynValue;
double CANMMCAN_1_TX_Msg_6_Sgn_7_error;
UInt16 CANMMCAN_1_RX_Msg_6_Sgn_8;
UInt16 CANMMCAN_1_TX_Msg_6_Sgn_8;
UInt16 CANMMCAN_1_TX_Msg_6_Sgn_8_constant;
UInt16 CANMMCAN_1_TX_Msg_6_Sgn_8_DynValue;
UInt16 CANMMCAN_1_TX_Msg_6_Sgn_8_error;
double CANMMCAN_1_RX_Msg_6_Sgn_9;
double CANMMCAN_1_TX_Msg_6_Sgn_9;
double CANMMCAN_1_TX_Msg_6_Sgn_9_constant;
double CANMMCAN_1_TX_Msg_6_Sgn_9_DynValue;
double CANMMCAN_1_TX_Msg_6_Sgn_9_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_1_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_1_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_1_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_2_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_2_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_2_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_3_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_3_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_3_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_4_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_4_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_4_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_5_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_5_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_5_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_6_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_6_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_6_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_7;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_7;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_7_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_7_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_7_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_8;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_8;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_8_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_8_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_8_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_9;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_9;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_9_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_9_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_9_error;
double CANMMCAN_1_RX_Msg_7_Sgn_10;
double CANMMCAN_1_TX_Msg_7_Sgn_10;
double CANMMCAN_1_TX_Msg_7_Sgn_10_constant;
double CANMMCAN_1_TX_Msg_7_Sgn_10_DynValue;
double CANMMCAN_1_TX_Msg_7_Sgn_10_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_11;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_11;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_11_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_11_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_11_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_12;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_12;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_12_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_12_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_12_error;
UInt8 CANMMCAN_1_RX_Msg_7_Sgn_13;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_13;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_13_constant;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_13_DynValue;
UInt8 CANMMCAN_1_TX_Msg_7_Sgn_13_error;
UInt16 CANMMCAN_1_RX_Msg_7_Sgn_14;
UInt16 CANMMCAN_1_TX_Msg_7_Sgn_14;
UInt16 CANMMCAN_1_TX_Msg_7_Sgn_14_constant;
UInt16 CANMMCAN_1_TX_Msg_7_Sgn_14_DynValue;
UInt16 CANMMCAN_1_TX_Msg_7_Sgn_14_error;
double CANMMCAN_1_RX_Msg_7_Sgn_15;
double CANMMCAN_1_TX_Msg_7_Sgn_15;
double CANMMCAN_1_TX_Msg_7_Sgn_15_constant;
double CANMMCAN_1_TX_Msg_7_Sgn_15_DynValue;
double CANMMCAN_1_TX_Msg_7_Sgn_15_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_1_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_1_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_1_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_2_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_2_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_2_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_3_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_3_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_3_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_4_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_4_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_4_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_5_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_5_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_5_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_6_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_6_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_6_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_7;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_7;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_7_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_7_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_7_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_8;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_8;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_8_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_8_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_8_error;
double CANMMCAN_1_RX_Msg_8_Sgn_9;
double CANMMCAN_1_TX_Msg_8_Sgn_9;
double CANMMCAN_1_TX_Msg_8_Sgn_9_constant;
double CANMMCAN_1_TX_Msg_8_Sgn_9_DynValue;
double CANMMCAN_1_TX_Msg_8_Sgn_9_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_10;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_10;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_10_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_10_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_10_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_11;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_11;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_11_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_11_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_11_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_12;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_12;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_12_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_12_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_12_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_13;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_13;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_13_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_13_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_13_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_14;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_14;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_14_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_14_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_14_error;
UInt8 CANMMCAN_1_RX_Msg_8_Sgn_15;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_15;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_15_constant;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_15_DynValue;
UInt8 CANMMCAN_1_TX_Msg_8_Sgn_15_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_1_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_1_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_1_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_2_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_2_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_2_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_3_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_3_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_3_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_4_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_4_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_4_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_5_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_5_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_5_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_6_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_6_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_6_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_7;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_7;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_7_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_7_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_7_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_8;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_8;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_8_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_8_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_8_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_9;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_9;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_9_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_9_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_9_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_10;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_10;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_10_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_10_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_10_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_11;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_11;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_11_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_11_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_11_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_12;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_12;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_12_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_12_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_12_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_13;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_13;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_13_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_13_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_13_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_14;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_14;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_14_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_14_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_14_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_15;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_15;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_15_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_15_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_15_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_16;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_16;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_16_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_16_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_16_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_17;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_17;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_17_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_17_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_17_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_18;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_18;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_18_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_18_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_18_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_19;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_19;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_19_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_19_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_19_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_20;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_20;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_20_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_20_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_20_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_21;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_21;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_21_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_21_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_21_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_22;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_22;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_22_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_22_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_22_error;
UInt8 CANMMCAN_1_RX_Msg_9_Sgn_23;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_23;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_23_constant;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_23_DynValue;
UInt8 CANMMCAN_1_TX_Msg_9_Sgn_23_error;
UInt8 CANMMCAN_1_RX_Msg_10_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_1;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_1_constant;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_1_DynValue;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_1_error;
UInt8 CANMMCAN_1_RX_Msg_10_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_2;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_2_constant;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_2_DynValue;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_2_error;
UInt8 CANMMCAN_1_RX_Msg_10_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_3;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_3_constant;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_3_DynValue;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_3_error;
UInt8 CANMMCAN_1_RX_Msg_10_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_4;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_4_constant;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_4_DynValue;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_4_error;
UInt8 CANMMCAN_1_RX_Msg_10_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_5;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_5_constant;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_5_DynValue;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_5_error;
UInt8 CANMMCAN_1_RX_Msg_10_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_6;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_6_constant;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_6_DynValue;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_6_error;
UInt8 CANMMCAN_1_RX_Msg_10_Sgn_7;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_7;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_7_constant;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_7_DynValue;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_7_error;
double CANMMCAN_1_RX_Msg_10_Sgn_8;
double CANMMCAN_1_TX_Msg_10_Sgn_8;
double CANMMCAN_1_TX_Msg_10_Sgn_8_constant;
double CANMMCAN_1_TX_Msg_10_Sgn_8_DynValue;
double CANMMCAN_1_TX_Msg_10_Sgn_8_error;
double CANMMCAN_1_RX_Msg_10_Sgn_9;
double CANMMCAN_1_TX_Msg_10_Sgn_9;
double CANMMCAN_1_TX_Msg_10_Sgn_9_constant;
double CANMMCAN_1_TX_Msg_10_Sgn_9_DynValue;
double CANMMCAN_1_TX_Msg_10_Sgn_9_error;
UInt8 CANMMCAN_1_RX_Msg_10_Sgn_10;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_10;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_10_constant;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_10_DynValue;
UInt8 CANMMCAN_1_TX_Msg_10_Sgn_10_error;
volatile real_T CANMMCAN_1_RXCT11;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_7;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_8;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_9;
UInt8 CANMMCAN_1_RX_Msg_11_Sgn_10;
volatile real_T CANMMCAN_1_RXCT12;
UInt8 CANMMCAN_1_RX_Msg_12_Sgn_1;
volatile real_T CANMMCAN_1_RXCT13;
UInt16 CANMMCAN_1_RX_Msg_13_Sgn_1;
double CANMMCAN_1_RX_Msg_13_Sgn_2;
double CANMMCAN_1_RX_Msg_13_Sgn_3;
double CANMMCAN_1_RX_Msg_13_Sgn_4;
double CANMMCAN_1_RX_Msg_13_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_13_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_13_Sgn_7;
volatile real_T CANMMCAN_1_RXCT14;
UInt8 CANMMCAN_1_RX_Msg_14_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_14_Sgn_2;
volatile real_T CANMMCAN_1_RXCT15;
double CANMMCAN_1_RX_Msg_15_Sgn_1;
double CANMMCAN_1_RX_Msg_15_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_15_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_15_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_15_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_15_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_15_Sgn_7;
UInt8 CANMMCAN_1_RX_Msg_15_Sgn_8;
volatile real_T CANMMCAN_1_RXCT16;
double CANMMCAN_1_RX_Msg_16_Sgn_1;
double CANMMCAN_1_RX_Msg_16_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_16_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_16_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_16_Sgn_5;
volatile real_T CANMMCAN_1_RXCT17;
UInt8 CANMMCAN_1_RX_Msg_17_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_17_Sgn_2;
double CANMMCAN_1_RX_Msg_17_Sgn_3;
double CANMMCAN_1_RX_Msg_17_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_17_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_17_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_17_Sgn_7;
double CANMMCAN_1_RX_Msg_17_Sgn_8;
volatile real_T CANMMCAN_1_RXCT18;
UInt8 CANMMCAN_1_RX_Msg_18_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_18_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_18_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_18_Sgn_4;
double CANMMCAN_1_RX_Msg_18_Sgn_5;
double CANMMCAN_1_RX_Msg_18_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_18_Sgn_7;
UInt8 CANMMCAN_1_RX_Msg_18_Sgn_8;
UInt8 CANMMCAN_1_RX_Msg_18_Sgn_9;
UInt8 CANMMCAN_1_RX_Msg_18_Sgn_10;
double CANMMCAN_1_RX_Msg_18_Sgn_11;
volatile real_T CANMMCAN_1_RXCT19;
UInt8 CANMMCAN_1_RX_Msg_19_Sgn_1;
volatile real_T CANMMCAN_1_RXCT20;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_5;
double CANMMCAN_1_RX_Msg_20_Sgn_6;
UInt16 CANMMCAN_1_RX_Msg_20_Sgn_7;
double CANMMCAN_1_RX_Msg_20_Sgn_8;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_9;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_10;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_11;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_12;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_13;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_14;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_15;
UInt8 CANMMCAN_1_RX_Msg_20_Sgn_16;
volatile real_T CANMMCAN_1_RXCT21;
UInt8 CANMMCAN_1_RX_Msg_21_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_21_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_21_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_21_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_21_Sgn_5;
double CANMMCAN_1_RX_Msg_21_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_21_Sgn_7;
UInt16 CANMMCAN_1_RX_Msg_21_Sgn_8;
UInt16 CANMMCAN_1_RX_Msg_21_Sgn_9;
double CANMMCAN_1_RX_Msg_21_Sgn_10;
volatile real_T CANMMCAN_1_RXCT22;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_7;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_8;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_9;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_10;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_11;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_12;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_13;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_14;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_15;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_16;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_17;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_18;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_19;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_20;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_21;
UInt8 CANMMCAN_1_RX_Msg_22_Sgn_22;
volatile real_T CANMMCAN_1_RXCT23;
UInt8 CANMMCAN_1_RX_Msg_23_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_23_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_23_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_23_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_23_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_23_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_23_Sgn_7;
volatile real_T CANMMCAN_1_RXCT24;
UInt32 CANMMCAN_1_RX_Msg_24_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_24_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_24_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_24_Sgn_4;
volatile real_T CANMMCAN_1_RXCT25;
double CANMMCAN_1_RX_Msg_25_Sgn_1;
volatile real_T CANMMCAN_1_RXCT26;
UInt8 CANMMCAN_1_RX_Msg_26_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_26_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_26_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_26_Sgn_4;
volatile real_T CANMMCAN_1_RXCT27;
UInt8 CANMMCAN_1_RX_Msg_27_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_27_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_27_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_27_Sgn_4;
double CANMMCAN_1_RX_Msg_27_Sgn_5;
volatile real_T CANMMCAN_1_RXCT28;
UInt16 CANMMCAN_1_RX_Msg_28_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_28_Sgn_2;
UInt8 CANMMCAN_1_RX_Msg_28_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_28_Sgn_4;
double CANMMCAN_1_RX_Msg_28_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_28_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_28_Sgn_7;
UInt8 CANMMCAN_1_RX_Msg_28_Sgn_8;
volatile real_T CANMMCAN_1_RXCT29;
UInt8 CANMMCAN_1_RX_Msg_29_Sgn_1;
volatile real_T CANMMCAN_1_RXCT30;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_2;
double CANMMCAN_1_RX_Msg_30_Sgn_3;
double CANMMCAN_1_RX_Msg_30_Sgn_4;
double CANMMCAN_1_RX_Msg_30_Sgn_5;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_6;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_7;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_8;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_9;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_10;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_11;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_12;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_13;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_14;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_15;
UInt8 CANMMCAN_1_RX_Msg_30_Sgn_16;
double CANMMCAN_1_RX_Msg_30_Sgn_17;
volatile real_T CANMMCAN_1_RXCT31;
UInt8 CANMMCAN_1_RX_Msg_31_Sgn_1;
UInt8 CANMMCAN_1_RX_Msg_31_Sgn_2;
double CANMMCAN_1_RX_Msg_31_Sgn_3;
UInt8 CANMMCAN_1_RX_Msg_31_Sgn_4;
UInt8 CANMMCAN_1_RX_Msg_31_Sgn_5;
double CANMMCAN_1_RX_Msg_31_Sgn_6;






volatile uint8_T CANMMCAN_1_TXs[72];
volatile uint8_T CANMMCAN_1_TXm[72];
volatile uint8_T CANMMCAN_1_TXGWs[72];
volatile uint32_T CANMMCAN_1_TXcdo[72];
