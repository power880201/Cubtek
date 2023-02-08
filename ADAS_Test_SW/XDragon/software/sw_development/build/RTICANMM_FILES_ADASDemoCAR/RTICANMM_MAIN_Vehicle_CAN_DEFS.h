/*****************************************************************************************************************************/
/* RTICANMM_MAIN_Vehicle_CAN_DEFS */
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
 *     ABS1.BoosterVac_Sta - 1
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
 *     ABS2.TCS_Failed - 8
 *     ABS2.ESC_Failed - 9
 *     ABS2.ABS_Failed - 10
 *     ABS2.TCS_Active - 11
 *     ABS2.ESC_Active - 12
 *     ABS2.ABS_Active - 13
 *     ABS2.VehSpeed - 14
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
 *     ABS4.YawRate - 2
 *     ABS4.LatAccel - 3
 *     ABS4.MCPressure - 4
 *     ABS4.MCPressure_V - 5
 *     ABS4.LongAccel_V - 6
 *     ABS4.LatAccel_V - 7
 *     ABS4.YawRate_V - 8
 */

/*********
 *  ABS8 - 5
 *     ABS8.ABS8_CS - 1
 *     ABS8.ABS8_RC - 2
 *     ABS8.ESCBrkSta - 3
 *     ABS8.ESCExtBrkAvail - 4
 *     ABS8.ActBrkLamp_V - 5
 *     ABS8.ActBrkLamp_Sta - 6
 *     ABS8.DecContMan - 7
 *     ABS8.CurBrakeDecReq_A - 8
 *     ABS8.CurBrakeDecReq - 9
 *     ABS8.BrakDiscTempSta - 10
 */

/*********
 *  ADAS1 - 6
 *     ADAS1.ADAS1_Checksum - 1
 *     ADAS1.ADAS1_LifeCount - 2
 *     ADAS1.ADAS_SHapticReq - 3
 *     ADAS1.ADAS_StrTqReq_A - 4
 *     ADAS1.ADAS_StrAngReq_A - 5
 *     ADAS1.ADAS_LFCTranGain_A - 6
 *     ADAS1.ADAS_EPSMode - 7
 *     ADAS1.ADAS_LKAStatus - 8
 *     ADAS1.ADAS_LFCStatus - 9
 *     ADAS1.ADAS_TqRatio - 10
 *     ADAS1.ADAS_StrTqReq - 11
 *     ADAS1.ADAS_LFCTransGain - 12
 *     ADAS1.ADAS_StrAngReq - 13
 */

/*********
 *  ADAS2 - 7
 *     ADAS2.ADAS2_Checksum - 1
 *     ADAS2.ADAS2_LifeCount - 2
 *     ADAS2.ADAS_BrakeStatus - 3
 *     ADAS2.ADAS_YawRateReq - 4
 *     ADAS2.ADAS_YawRateReq_A - 5
 *     ADAS2.ADAS_BHapticReq - 6
 *     ADAS2.ADAS_VirtualGear - 7
 *     ADAS2.ADAS_ACCSWStatus - 8
 *     ADAS2.ADAS_PTTqReq_V - 9
 *     ADAS2.ADAS_VehHoldReq - 10
 *     ADAS2.ADAS_BPrefillReq_A - 11
 *     ADAS2.ADAS_BPrefillReq - 12
 *     ADAS2.ADAS_AEBReq_A - 13
 *     ADAS2.ADAS_AEBReq - 14
 *     ADAS2.ADAS_DecReq - 15
 *     ADAS2.ADAS_ForceIdle_A - 16
 *     ADAS2.ADAS_DecReq_A - 17
 *     ADAS2.ADAS_PTTqReq_A - 18
 *     ADAS2.ADAS_ForceIdle - 19
 *     ADAS2.ADAS_PTTqReq - 20
 */

/*********
 *  ADAS3 - 8
 *     ADAS3.ADAS3_Checksum - 1
 *     ADAS3.ADAS3_LifeCount - 2
 *     ADAS3.ADAS_ShftPosnReq_A - 3
 *     ADAS3.ADAS_ShftPosnReq - 4
 *     ADAS3.ADAS_VehSpdLim_A - 5
 *     ADAS3.ADAS_GearPosReq_A - 6
 *     ADAS3.ADAS_GearPosReq - 7
 *     ADAS3.ADAS_VehSpdLim - 8
 */

/*********
 *  ADAS4 - 9
 *     ADAS4.ADAS_MIL - 1
 *     ADAS4.ADASFaultWarnReq - 2
 *     ADAS4.ForceLowBeam - 3
 *     ADAS4.OffSoundReq - 4
 *     ADAS4.OnSoundReq - 5
 *     ADAS4.LeftTurnLightReq - 6
 *     ADAS4.RightTurnLightReq - 7
 *     ADAS4.HazardWarningReq - 8
 *     ADAS4.WarningMessage - 9
 *     ADAS4.APSEnable - 10
 *     ADAS4.ISAStatus - 11
 *     ADAS4.PilotStatus - 12
 *     ADAS4.MAPAStatus - 13
 *     ADAS4.LCSStatus - 14
 *     ADAS4.LFCStatus - 15
 *     ADAS4.LKAStatus - 16
 *     ADAS4.ACCStatus - 17
 *     ADAS4.FCWStatus - 18
 *     ADAS4.AEBStatus - 19
 *     ADAS4.PilotHMIWarningReq - 20
 *     ADAS4.MAPAHMIWarningReq - 21
 *     ADAS4.LCSHMIWarningReq - 22
 *     ADAS4.LFCHMIWarningReq - 23
 *     ADAS4.LKAHMIWarningReq - 24
 *     ADAS4.ISAHMIWarningReq - 25
 *     ADAS4.AEBHMIWarningReq - 26
 *     ADAS4.ACCHMIWarningReq - 27
 *     ADAS4.FCWHMIWarningReq - 28
 */

/*********
 *  ADAS5 - 10
 *     ADAS5.ADAS_FaultMode - 1
 *     ADAS5.ADAS_LaneModeR - 2
 *     ADAS5.ADAS_LaneModeL - 3
 *     ADAS5.ISASetSpeed - 4
 *     ADAS5.ACCSetSpeed - 5
 *     ADAS5.TimeGapLevel - 6
 *     ADAS5.TargetType - 7
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
 *     BCM1.BCM_RainWip_Req - 10
 *     BCM1.BCM_Key_Sta - 11
 */

/*********
 *  BCM2 - 12
 *     BCM2.BCM_SRS_Crash_Info - 1
 */

/*********
 *  CSW1 - 13
 *     CSW1.CSW_FWipIntPos - 1
 *     CSW1.CSW_FWipSw_Sta - 2
 *     CSW1.CSW_TurnSw_Sta - 3
 *     CSW1.CSW_DimSw_Sta - 4
 *     CSW1.CSW_HdLpSw_Sta - 5
 */

/*********
 *  ECM1 - 14
 *     ECM1.CAN_TQ_STND - 1
 *     ECM1.CAN_TQFR - 2
 *     ECM1.CAN_TQI - 3
 *     ECM1.CAN_N - 4
 *     ECM1.CAN_TQI_ACOR - 5
 *     ECM1.LV_CAN_N_ERR - 6
 *     ECM1.LV_CAN_SUB_TQI - 7
 */

/*********
 *  ECM2 - 15
 *     ECM2.LV_CAN_ENG_RUN_ST - 1
 *     ECM2.CAN_OBD_STAT_WU - 2
 *     ECM2.CAN_OBD_STAT_DR - 3
 */

/*********
 *  ECM3 - 16
 *     ECM3.CAN_PV_AV - 1
 *     ECM3.CAN_PV_EFC - 2
 *     ECM3.LV_CAN_ERRPAS - 3
 *     ECM3.LV_CAN_ERRPVS - 4
 *     ECM3.MIL_ON_OFF_Request - 5
 */

/*********
 *  ECM4 - 17
 *     ECM4.CAN_ENG_STA - 1
 */

/*********
 *  ECM9 - 18
 *     ECM9.EngTqMin - 1
 *     ECM9.EngTqMax - 2
 *     ECM9.EngIdleSpd - 3
 *     ECM9.EngStartupComplete - 4
 *     ECM9.EngIdleCtrlActive - 5
 *     ECM9.EngNoSmrtChrgAllow - 6
 *     ECM9.EngNoHEVFuncAllow - 7
 *     ECM9.EngNoAStpAllow - 8
 *     ECM9.EngForceConv - 9
 *     ECM9.EngStrtReq - 10
 *     ECM9.EngAStpAllow - 11
 *     ECM9.EMSOpState - 12
 *     ECM9.EMSHybridOpState - 13
 *     ECM9.ECM9RollCnt - 14
 */

/*********
 *  EPAS1 - 19
 *     EPAS1.SAS_CheckSum - 1
 *     EPAS1.SAS_MsgCount - 2
 *     EPAS1.SAS_OK - 3
 *     EPAS1.SAS_CAL - 4
 *     EPAS1.SAS_Trim - 5
 *     EPAS1.SAS_Speed_Valid - 6
 *     EPAS1.SAS_Stat_SF1 - 7
 *     EPAS1.SAS_Stat_SF2 - 8
 *     EPAS1.SAS_Stat_SF3 - 9
 *     EPAS1.SAS_Stat_SF4 - 10
 *     EPAS1.SAS_Speed - 11
 *     EPAS1.SAS_Angle - 12
 */

/*********
 *  EPAS2 - 20
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
 *  EPB1 - 21
 *     EPB1.PB_BrakeBinStat - 1
 *     EPB1.PB_ReqInProgress - 2
 */

/*********
 *  FECU1 - 22
 *     FECU1.FECU_HiBeamRly_Sta - 1
 *     FECU1.FECU_LoBeamRly_Sta - 2
 */

/*********
 *  HCU2 - 23
 *     HCU2.CoolFanReq - 1
 */

/*********
 *  HCU3 - 24
 *     HCU3.HCUAutoStpAllow - 1
 *     HCU3.Neutral_Ctrl_ALLOW - 2
 *     HCU3.HybridLimpHome - 3
 *     HCU3.HCU3RollCnt - 4
 *     HCU3.FuelCutReq - 5
 *     HCU3.EngCrankType - 6
 *     HCU3.EngTqIndPermMax - 7
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
 *  HCU4 - 25
 *     HCU4.HEVTransMapReq - 1
 *     HCU4.MILReq - 2
 *     HCU4.EngIdleSpdSetpt - 3
 *     HCU4.BSGActTq4EMS - 4
 */

/*********
 *  HMI2 - 26
 *     HMI2.MSAOn_VCU - 1
 *     HMI2.LFCOn_VCU - 2
 *     HMI2.ACCTimeGapDec_VCU - 3
 *     HMI2.ACCTimeGapInc_VCU - 4
 *     HMI2.ACCRes_SpdInc_VCU - 5
 *     HMI2.ACCSet_SpdDec_VCU - 6
 *     HMI2.ACCOn_VCU - 7
 */

/*********
 *  Meter1 - 27
 *     Meter1.ODOMETER - 1
 *     Meter1.SeatBelt - 2
 *     Meter1.LowBrakeFluid_Sta - 3
 */

/*********
 *  Meter3 - 28
 *     Meter3.Meter_Ind_VehSpeed - 1
 */

/*********
 *  TCM1 - 29
 *     TCM1.CAN_N_TM - 1
 *     TCM1.LV_CAN_N_TM_ERR - 2
 *     TCM1.CAN_GEAR_STATE_NOW - 3
 *     TCM1.CAN_ETCU_SVL - 4
 *     TCM1.CAN_GEAR_STA_NOW_V - 5
 *     TCM1.CAN_ETCU_OBD - 6
 *     TCM1.CAN_WTR - 7
 *     TCM1.CAN_PWR - 8
 *     TCM1.CAN_GEAR_SEL_ETCU - 9
 *     TCM1.CAN_ETCU_STATE - 10
 *     TCM1.CAN_SWI_CC_ETCU - 11
 */

/*********
 *  TCM2 - 30
 *     TCM2.DR_MODE_IND - 1
 */

/*********
 *  VCU1 - 31
 *     VCU1.VCU1_Checksum - 1
 *     VCU1.VCU1_LifeCount - 2
 *     VCU1.VCUBattVolt - 3
 *     VCU1.CurVehDec - 4
 *     VCU1.VCU_CurBrkeDecReq - 5
 *     VCU1.VCU_CurBrkDecReq_A - 6
 *     VCU1.VCU_DecContMan - 7
 *     VCU1.VCU_ESCBrkSta - 8
 *     VCU1.VCUFault - 9
 *     VCU1.VCU_ESCExtBrkAvail - 10
 *     VCU1.DriverBrakeSw_V - 11
 *     VCU1.DriverBrakeSw - 12
 *     VCU1.ECMTqSrc - 13
 *     VCU1.ExtTqAvail - 14
 *     VCU1.ADASTqReq_A - 15
 *     VCU1.ADASTqReq - 16
 */

/*********
 *  VCU2 - 32
 *     VCU2.VCU2_Checksum - 1
 *     VCU2.VCU2_LifeCount - 2
 *     VCU2.AvgBrakDiscTemp - 3
 *     VCU2.MSAStatus - 4
 *     VCU2.VCU_MIL_ON_OFF_Req - 5
 *     VCU2.ADAS_GearPosReq_AW - 6
 *     VCU2.PedalTqReq - 7
 *     VCU2.VCU_CAN_ENG_STA - 8
 *     VCU2.VCU_AccePedalPos_V - 9
 *     VCU2.VCU_AccePedalPos - 10
 */
volatile uint8_T CANMMVehicle_CAN_RTVE;
volatile boolean_T CANMMVehicle_CAN_TRAFFIC;
volatile int32_T CANMMVehicle_CAN_MAXMSGPERSTEP;

volatile uint8_T CANMMVehicle_CAN_TVAR8;

volatile uint8_T CANMMVehicle_CAN_TVAR8_2;

volatile uint32_T CANMMVehicle_CAN_TVAR32;

volatile uint8_T CANMMVehicle_CAN_TVAR8A[8];

volatile double CANMMVehicle_CAN_TVARD;
volatile double CANMMVehicle_CAN_TVARD2;

/* Globale Enable */
volatile boolean_T CANMMVehicle_CAN_GEIN;
#define CANMMVehicle_CAN_GE CANMMVehicle_CAN_GEIN

/* Reset */
#define CANMMVehicle_CAN_RE 1


/* Feedthrough debug variable*/
volatile uint8_T CANMMVehicle_CAN_FTD;

/* Globale Enable TX */
volatile boolean_T CANMMVehicle_CAN_TXGEIN;
#define CANMMVehicle_CAN_TXGE CANMMVehicle_CAN_TXGEIN
                               
                               
/* ECU ENABLE */               
volatile boolean_T CANMMVehicle_CAN_TXEEIE[3] = {1, 1, 1};     
volatile boolean_T CANMMVehicle_CAN_TXEEIEOLD[3] = {1, 1, 1};     
volatile boolean_T CANMMVehicle_CAN_TXECUEN_ADAS = 1;   
volatile boolean_T CANMMVehicle_CAN_TXECUEN_EPAS = 1;   
volatile boolean_T CANMMVehicle_CAN_TXECUEN_Tester = 1;   
                            
                            

/* Message would be sent */
volatile uint8_T CANMMVehicle_CAN_WBS[NUM_TX_MSG];
volatile boolean_T CANMMVehicle_CAN_BYKICK[NUM_TX_MSG];

/* Message enable */
volatile boolean_T CANMMVehicle_CAN_TXENIE[NUM_TX_MSG];
volatile boolean_T CANMMVehicle_CAN_TXEIN[NUM_TX_MSG];
#define CANMMVehicle_CAN_TXEN(X) (CANMMVehicle_CAN_TXENIE[X])
#define USE_LOCAL_ENABLE

/* Cyclic triggering */
volatile boolean_T CANMMVehicle_CAN_TXCIE[NUM_TX_MSG];
volatile boolean_T CANMMVehicle_CAN_TXCIN[NUM_TX_MSG];
#define CANMMVehicle_CAN_TXC(X) (CANMMVehicle_CAN_TXCIE[X])

/* Message kickout */
volatile boolean_T CANMMVehicle_CAN_TXKIEX[NUM_TX_MSG];
volatile boolean_T CANMMVehicle_CAN_TXKIN[NUM_TX_MSG];
volatile boolean_T CANMMVehicle_CAN_TXKIEXC[NUM_TX_MSG];
#define CANMMVehicle_CAN_TXKOUT(X) (CANMMVehicle_CAN_TXKIEX[X])
#undef MESSAGETIMEOUT


#define ID_Table_RX(X) (int)(CANMMVehicle_CAN_MIDRX[X])
#define ID_Table_TX(X) (int)(CANMMVehicle_CAN_MIDTX[X])
uint8_T CANMMVehicle_CAN_MIDTXSW[NUM_RX_MSG];
uint32_T CANMMVehicle_CAN_MIDTXIN[NUM_RX_MSG];
uint32_T CANMMVehicle_CAN_MIDTXS[NUM_RX_MSG];
uint32_T CANMMVehicle_CAN_MIDRX[NUM_RX_MSG];
uint8_T CANMMVehicle_CAN_MIDFRX[NUM_RX_MSG];
uint8_T CANMMVehicle_CAN_MIDFTXIN[NUM_RX_MSG];
uint8_T CANMMVehicle_CAN_MIDFTXS[NUM_RX_MSG];
uint8_T CANMMVehicle_CAN_MIDFTX[NUM_RX_MSG];
uint8_T CANMMVehicle_CAN_RXMT[NUM_RX_MSG];
 

volatile real_T CANMMVehicle_CAN_RXt[NUM_RX_MSG];
volatile real_T CANMMVehicle_CAN_RXdt[NUM_RX_MSG];
volatile boolean_T CANMMVehicle_CAN_RXsta[NUM_RX_MSG];
volatile uint8_T CANMMVehicle_CAN_RXerr[NUM_RX_MSG];
volatile real_T CANMMVehicle_CAN_RXCTMIN[NUM_RX_MSG];
volatile real_T CANMMVehicle_CAN_RXCTMAX[NUM_RX_MSG];
volatile uint8_T CANMMVehicle_CAN_RXLEN[NUM_RX_MSG];
volatile uint32_T CANMMVehicle_CAN_RXCNT[NUM_RX_MSG];
uint32_T CANMMVehicle_CAN_MIDTX[NUM_TX_MSG];
volatile real_T CANMMVehicle_CAN_TXCT[NUM_TX_MSG];
volatile real_T CANMMVehicle_CAN_TXDT[NUM_TX_MSG];
volatile uint8_T CANMMVehicle_CAN_TXcraw[NUM_TX_MSG];
volatile boolean_T CANMMVehicle_CAN_TXsta[NUM_TX_MSG];
volatile uint8_T CANMMVehicle_CAN_TXRBUF[NUM_TX_MSG];
volatile uint8_T CANMMVehicle_CAN_TXRXBUF[NUM_TX_MSG];
volatile uint8_T CANMMVehicle_CAN_TXusrm[NUM_TX_MSG];
volatile uint8_T CANMMVehicle_CAN_TXLEN[NUM_TX_MSG];


/* Define RX/TX structure */

volatile real_T CANMMVehicle_CAN_RXCT1;
UInt8 CANMMVehicle_CAN_RX_Msg_1_Sgn_1;
volatile real_T CANMMVehicle_CAN_RXCT2;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_3;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_5;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_6;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_7;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_8;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_9;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_10;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_11;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_12;
UInt8 CANMMVehicle_CAN_RX_Msg_2_Sgn_13;
double CANMMVehicle_CAN_RX_Msg_2_Sgn_14;
volatile real_T CANMMVehicle_CAN_RXCT3;
UInt8 CANMMVehicle_CAN_RX_Msg_3_Sgn_1;
double CANMMVehicle_CAN_RX_Msg_3_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_3_Sgn_3;
double CANMMVehicle_CAN_RX_Msg_3_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_3_Sgn_5;
double CANMMVehicle_CAN_RX_Msg_3_Sgn_6;
UInt8 CANMMVehicle_CAN_RX_Msg_3_Sgn_7;
double CANMMVehicle_CAN_RX_Msg_3_Sgn_8;
volatile real_T CANMMVehicle_CAN_RXCT4;
double CANMMVehicle_CAN_RX_Msg_4_Sgn_1;
double CANMMVehicle_CAN_RX_Msg_4_Sgn_2;
double CANMMVehicle_CAN_RX_Msg_4_Sgn_3;
double CANMMVehicle_CAN_RX_Msg_4_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_4_Sgn_5;
UInt8 CANMMVehicle_CAN_RX_Msg_4_Sgn_6;
UInt8 CANMMVehicle_CAN_RX_Msg_4_Sgn_7;
UInt8 CANMMVehicle_CAN_RX_Msg_4_Sgn_8;
volatile real_T CANMMVehicle_CAN_RXCT5;
UInt8 CANMMVehicle_CAN_RX_Msg_5_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_5_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_5_Sgn_3;
UInt8 CANMMVehicle_CAN_RX_Msg_5_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_5_Sgn_5;
UInt8 CANMMVehicle_CAN_RX_Msg_5_Sgn_6;
UInt8 CANMMVehicle_CAN_RX_Msg_5_Sgn_7;
UInt8 CANMMVehicle_CAN_RX_Msg_5_Sgn_8;
double CANMMVehicle_CAN_RX_Msg_5_Sgn_9;
UInt8 CANMMVehicle_CAN_RX_Msg_5_Sgn_10;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_2_error;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_3_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_3_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_3_error;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_4_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_4_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_4_error;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_5_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_5_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_6_error;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_7_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_7_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_7_error;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_8_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_8_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_8_error;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_9_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_9_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_9_error;
UInt8 CANMMVehicle_CAN_RX_Msg_6_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_10_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_10_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_6_Sgn_10_error;
double CANMMVehicle_CAN_RX_Msg_6_Sgn_11;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_11;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_11_constant;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_11_DynValue;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_11_error;
double CANMMVehicle_CAN_RX_Msg_6_Sgn_12;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_12;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_12_constant;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_12_DynValue;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_12_error;
double CANMMVehicle_CAN_RX_Msg_6_Sgn_13;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_13;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_13_constant;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_13_DynValue;
double CANMMVehicle_CAN_TX_Msg_6_Sgn_13_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_2_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_3_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_3_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_3_error;
double CANMMVehicle_CAN_RX_Msg_7_Sgn_4;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_4;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_4_constant;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_4_DynValue;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_4_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_5_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_5_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_6_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_7_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_7_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_7_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_8_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_8_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_8_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_9_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_9_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_9_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_10_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_10_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_10_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_11;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_11;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_11_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_11_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_11_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_12;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_12;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_12_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_12_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_12_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_13;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_13;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_13_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_13_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_13_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_14;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_14;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_14_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_14_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_14_error;
double CANMMVehicle_CAN_RX_Msg_7_Sgn_15;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_15;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_15_constant;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_15_DynValue;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_15_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_16;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_16;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_16_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_16_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_16_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_17;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_17;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_17_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_17_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_17_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_18;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_18;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_18_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_18_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_18_error;
UInt8 CANMMVehicle_CAN_RX_Msg_7_Sgn_19;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_19;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_19_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_19_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_7_Sgn_19_error;
double CANMMVehicle_CAN_RX_Msg_7_Sgn_20;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_20;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_20_constant;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_20_DynValue;
double CANMMVehicle_CAN_TX_Msg_7_Sgn_20_error;
UInt8 CANMMVehicle_CAN_RX_Msg_8_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_8_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_2_error;
UInt8 CANMMVehicle_CAN_RX_Msg_8_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_3_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_3_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_3_error;
UInt8 CANMMVehicle_CAN_RX_Msg_8_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_4_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_4_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_4_error;
UInt8 CANMMVehicle_CAN_RX_Msg_8_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_5_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_5_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_8_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_6_error;
UInt8 CANMMVehicle_CAN_RX_Msg_8_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_7_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_7_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_7_error;
UInt8 CANMMVehicle_CAN_RX_Msg_8_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_8_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_8_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_8_Sgn_8_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_2_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_3_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_3_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_3_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_4_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_4_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_4_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_5_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_5_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_6_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_7_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_7_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_7_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_8_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_8_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_8_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_9_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_9_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_9_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_10_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_10_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_10_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_11;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_11;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_11_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_11_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_11_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_12;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_12;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_12_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_12_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_12_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_13;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_13;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_13_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_13_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_13_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_14;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_14;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_14_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_14_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_14_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_15;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_15;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_15_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_15_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_15_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_16;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_16;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_16_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_16_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_16_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_17;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_17;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_17_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_17_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_17_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_18;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_18;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_18_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_18_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_18_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_19;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_19;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_19_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_19_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_19_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_20;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_20;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_20_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_20_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_20_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_21;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_21;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_21_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_21_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_21_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_22;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_22;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_22_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_22_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_22_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_23;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_23;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_23_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_23_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_23_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_24;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_24;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_24_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_24_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_24_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_25;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_25;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_25_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_25_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_25_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_26;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_26;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_26_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_26_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_26_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_27;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_27;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_27_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_27_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_27_error;
UInt8 CANMMVehicle_CAN_RX_Msg_9_Sgn_28;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_28;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_28_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_28_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_9_Sgn_28_error;
UInt8 CANMMVehicle_CAN_RX_Msg_10_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_10_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_2_error;
UInt8 CANMMVehicle_CAN_RX_Msg_10_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_3_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_3_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_3_error;
UInt8 CANMMVehicle_CAN_RX_Msg_10_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_4_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_4_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_4_error;
UInt8 CANMMVehicle_CAN_RX_Msg_10_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_5_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_5_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_10_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_6_error;
UInt8 CANMMVehicle_CAN_RX_Msg_10_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_7_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_7_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_10_Sgn_7_error;
volatile real_T CANMMVehicle_CAN_RXCT11;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_3;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_5;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_6;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_7;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_8;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_9;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_10;
UInt8 CANMMVehicle_CAN_RX_Msg_11_Sgn_11;
volatile real_T CANMMVehicle_CAN_RXCT12;
UInt8 CANMMVehicle_CAN_RX_Msg_12_Sgn_1;
volatile real_T CANMMVehicle_CAN_RXCT13;
UInt8 CANMMVehicle_CAN_RX_Msg_13_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_13_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_13_Sgn_3;
UInt8 CANMMVehicle_CAN_RX_Msg_13_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_13_Sgn_5;
volatile real_T CANMMVehicle_CAN_RXCT14;
UInt16 CANMMVehicle_CAN_RX_Msg_14_Sgn_1;
double CANMMVehicle_CAN_RX_Msg_14_Sgn_2;
double CANMMVehicle_CAN_RX_Msg_14_Sgn_3;
double CANMMVehicle_CAN_RX_Msg_14_Sgn_4;
double CANMMVehicle_CAN_RX_Msg_14_Sgn_5;
UInt8 CANMMVehicle_CAN_RX_Msg_14_Sgn_6;
UInt8 CANMMVehicle_CAN_RX_Msg_14_Sgn_7;
volatile real_T CANMMVehicle_CAN_RXCT15;
UInt8 CANMMVehicle_CAN_RX_Msg_15_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_15_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_15_Sgn_3;
volatile real_T CANMMVehicle_CAN_RXCT16;
double CANMMVehicle_CAN_RX_Msg_16_Sgn_1;
double CANMMVehicle_CAN_RX_Msg_16_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_16_Sgn_3;
UInt8 CANMMVehicle_CAN_RX_Msg_16_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_16_Sgn_5;
volatile real_T CANMMVehicle_CAN_RXCT17;
UInt8 CANMMVehicle_CAN_RX_Msg_17_Sgn_1;
volatile real_T CANMMVehicle_CAN_RXCT18;
double CANMMVehicle_CAN_RX_Msg_18_Sgn_1;
double CANMMVehicle_CAN_RX_Msg_18_Sgn_2;
UInt16 CANMMVehicle_CAN_RX_Msg_18_Sgn_3;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_5;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_6;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_7;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_8;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_9;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_10;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_11;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_12;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_13;
UInt8 CANMMVehicle_CAN_RX_Msg_18_Sgn_14;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_2_error;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_3_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_3_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_3_error;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_4_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_4_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_4_error;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_5_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_5_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_6_error;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_7_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_7_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_7_error;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_8_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_8_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_8_error;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_9_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_9_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_9_error;
UInt8 CANMMVehicle_CAN_RX_Msg_19_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_10_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_10_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_19_Sgn_10_error;
UInt16 CANMMVehicle_CAN_RX_Msg_19_Sgn_11;
UInt16 CANMMVehicle_CAN_TX_Msg_19_Sgn_11;
UInt16 CANMMVehicle_CAN_TX_Msg_19_Sgn_11_constant;
UInt16 CANMMVehicle_CAN_TX_Msg_19_Sgn_11_DynValue;
UInt16 CANMMVehicle_CAN_TX_Msg_19_Sgn_11_error;
double CANMMVehicle_CAN_RX_Msg_19_Sgn_12;
double CANMMVehicle_CAN_TX_Msg_19_Sgn_12;
double CANMMVehicle_CAN_TX_Msg_19_Sgn_12_constant;
double CANMMVehicle_CAN_TX_Msg_19_Sgn_12_DynValue;
double CANMMVehicle_CAN_TX_Msg_19_Sgn_12_error;
UInt8 CANMMVehicle_CAN_RX_Msg_20_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_20_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_2_error;
double CANMMVehicle_CAN_RX_Msg_20_Sgn_3;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_3;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_3_constant;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_3_DynValue;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_3_error;
double CANMMVehicle_CAN_RX_Msg_20_Sgn_4;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_4;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_4_constant;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_4_DynValue;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_4_error;
UInt8 CANMMVehicle_CAN_RX_Msg_20_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_5_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_5_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_20_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_6_error;
UInt8 CANMMVehicle_CAN_RX_Msg_20_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_7_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_7_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_20_Sgn_7_error;
double CANMMVehicle_CAN_RX_Msg_20_Sgn_8;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_8;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_8_constant;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_8_DynValue;
double CANMMVehicle_CAN_TX_Msg_20_Sgn_8_error;
volatile real_T CANMMVehicle_CAN_RXCT21;
UInt8 CANMMVehicle_CAN_RX_Msg_21_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_21_Sgn_2;
volatile real_T CANMMVehicle_CAN_RXCT22;
UInt8 CANMMVehicle_CAN_RX_Msg_22_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_22_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_23_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_23_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_23_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_23_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_23_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_2_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_3;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_3_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_3_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_3_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_4_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_4_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_4_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_5_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_5_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_6_error;
double CANMMVehicle_CAN_RX_Msg_24_Sgn_7;
double CANMMVehicle_CAN_TX_Msg_24_Sgn_7;
double CANMMVehicle_CAN_TX_Msg_24_Sgn_7_constant;
double CANMMVehicle_CAN_TX_Msg_24_Sgn_7_DynValue;
double CANMMVehicle_CAN_TX_Msg_24_Sgn_7_error;
double CANMMVehicle_CAN_RX_Msg_24_Sgn_8;
double CANMMVehicle_CAN_TX_Msg_24_Sgn_8;
double CANMMVehicle_CAN_TX_Msg_24_Sgn_8_constant;
double CANMMVehicle_CAN_TX_Msg_24_Sgn_8_DynValue;
double CANMMVehicle_CAN_TX_Msg_24_Sgn_8_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_9_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_9_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_9_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_10_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_10_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_10_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_11;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_11;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_11_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_11_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_11_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_12;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_12;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_12_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_12_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_12_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_13;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_13;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_13_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_13_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_13_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_14;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_14;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_14_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_14_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_14_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_15;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_15;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_15_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_15_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_15_error;
UInt8 CANMMVehicle_CAN_RX_Msg_24_Sgn_16;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_16;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_16_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_16_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_24_Sgn_16_error;
UInt8 CANMMVehicle_CAN_RX_Msg_25_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_25_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_25_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_25_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_25_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_25_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_25_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_25_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_25_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_25_Sgn_2_error;
UInt16 CANMMVehicle_CAN_RX_Msg_25_Sgn_3;
UInt16 CANMMVehicle_CAN_TX_Msg_25_Sgn_3;
UInt16 CANMMVehicle_CAN_TX_Msg_25_Sgn_3_constant;
UInt16 CANMMVehicle_CAN_TX_Msg_25_Sgn_3_DynValue;
UInt16 CANMMVehicle_CAN_TX_Msg_25_Sgn_3_error;
double CANMMVehicle_CAN_RX_Msg_25_Sgn_4;
double CANMMVehicle_CAN_TX_Msg_25_Sgn_4;
double CANMMVehicle_CAN_TX_Msg_25_Sgn_4_constant;
double CANMMVehicle_CAN_TX_Msg_25_Sgn_4_DynValue;
double CANMMVehicle_CAN_TX_Msg_25_Sgn_4_error;
volatile real_T CANMMVehicle_CAN_RXCT26;
UInt8 CANMMVehicle_CAN_RX_Msg_26_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_26_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_26_Sgn_3;
UInt8 CANMMVehicle_CAN_RX_Msg_26_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_26_Sgn_5;
UInt8 CANMMVehicle_CAN_RX_Msg_26_Sgn_6;
UInt8 CANMMVehicle_CAN_RX_Msg_26_Sgn_7;
volatile real_T CANMMVehicle_CAN_RXCT27;
UInt32 CANMMVehicle_CAN_RX_Msg_27_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_27_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_27_Sgn_3;
volatile real_T CANMMVehicle_CAN_RXCT28;
double CANMMVehicle_CAN_RX_Msg_28_Sgn_1;
volatile real_T CANMMVehicle_CAN_RXCT29;
UInt16 CANMMVehicle_CAN_RX_Msg_29_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_2;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_3;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_4;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_5;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_6;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_7;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_8;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_9;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_10;
UInt8 CANMMVehicle_CAN_RX_Msg_29_Sgn_11;
volatile real_T CANMMVehicle_CAN_RXCT30;
UInt8 CANMMVehicle_CAN_RX_Msg_30_Sgn_1;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_2_error;
double CANMMVehicle_CAN_RX_Msg_31_Sgn_3;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_3;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_3_constant;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_3_DynValue;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_3_error;
double CANMMVehicle_CAN_RX_Msg_31_Sgn_4;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_4;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_4_constant;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_4_DynValue;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_4_error;
double CANMMVehicle_CAN_RX_Msg_31_Sgn_5;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_5;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_5_constant;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_5_DynValue;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_6_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_7;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_7_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_7_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_7_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_8_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_8_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_8_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_9_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_9_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_9_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_10;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_10_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_10_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_10_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_11;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_11;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_11_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_11_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_11_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_12;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_12;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_12_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_12_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_12_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_13;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_13;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_13_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_13_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_13_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_14;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_14;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_14_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_14_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_14_error;
UInt8 CANMMVehicle_CAN_RX_Msg_31_Sgn_15;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_15;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_15_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_15_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_31_Sgn_15_error;
double CANMMVehicle_CAN_RX_Msg_31_Sgn_16;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_16;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_16_constant;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_16_DynValue;
double CANMMVehicle_CAN_TX_Msg_31_Sgn_16_error;
UInt8 CANMMVehicle_CAN_RX_Msg_32_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_1;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_1_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_1_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_1_error;
UInt8 CANMMVehicle_CAN_RX_Msg_32_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_2;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_2_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_2_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_2_error;
Int16 CANMMVehicle_CAN_RX_Msg_32_Sgn_3;
Int16 CANMMVehicle_CAN_TX_Msg_32_Sgn_3;
Int16 CANMMVehicle_CAN_TX_Msg_32_Sgn_3_constant;
Int16 CANMMVehicle_CAN_TX_Msg_32_Sgn_3_DynValue;
Int16 CANMMVehicle_CAN_TX_Msg_32_Sgn_3_error;
UInt8 CANMMVehicle_CAN_RX_Msg_32_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_4;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_4_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_4_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_4_error;
UInt8 CANMMVehicle_CAN_RX_Msg_32_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_5;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_5_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_5_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_5_error;
UInt8 CANMMVehicle_CAN_RX_Msg_32_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_6;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_6_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_6_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_6_error;
double CANMMVehicle_CAN_RX_Msg_32_Sgn_7;
double CANMMVehicle_CAN_TX_Msg_32_Sgn_7;
double CANMMVehicle_CAN_TX_Msg_32_Sgn_7_constant;
double CANMMVehicle_CAN_TX_Msg_32_Sgn_7_DynValue;
double CANMMVehicle_CAN_TX_Msg_32_Sgn_7_error;
UInt8 CANMMVehicle_CAN_RX_Msg_32_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_8;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_8_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_8_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_8_error;
UInt8 CANMMVehicle_CAN_RX_Msg_32_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_9;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_9_constant;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_9_DynValue;
UInt8 CANMMVehicle_CAN_TX_Msg_32_Sgn_9_error;
double CANMMVehicle_CAN_RX_Msg_32_Sgn_10;
double CANMMVehicle_CAN_TX_Msg_32_Sgn_10;
double CANMMVehicle_CAN_TX_Msg_32_Sgn_10_constant;
double CANMMVehicle_CAN_TX_Msg_32_Sgn_10_DynValue;
double CANMMVehicle_CAN_TX_Msg_32_Sgn_10_error;






volatile uint8_T CANMMVehicle_CAN_TXs[143];
volatile uint8_T CANMMVehicle_CAN_TXm[143];
volatile uint8_T CANMMVehicle_CAN_TXGWs[143];
volatile uint32_T CANMMVehicle_CAN_TXcdo[143];
