/*****************************************************************************************************************************/
/* RTICANMM_MAIN_Vehicle_CAN_MESSAGE_DEFAULTS */
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

CANMMVehicle_CAN_MAXMSGPERSTEP = 0;

/* DefaultGlobalEnable */
CANMMVehicle_CAN_GEIN = 1;


/* Feedthrough debug variable*/
CANMMVehicle_CAN_FTD = 0;
CANMMVehicle_CAN_RTVE = 1;


/* ABS1 */
CANMMVehicle_CAN_RXCT1 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[6] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[6] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[6] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[6] = 8; /* RX Message Length */


/* ABS2 */
CANMMVehicle_CAN_RXCT2 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[8] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[8] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[8] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[8] = 8; /* RX Message Length */


/* ABS3 */
CANMMVehicle_CAN_RXCT3 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[10] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[10] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[10] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[10] = 8; /* RX Message Length */


/* ABS4 */
CANMMVehicle_CAN_RXCT4 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[15] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[15] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[15] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[15] = 8; /* RX Message Length */


/* ABS8 */
CANMMVehicle_CAN_RXCT5 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[20] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[20] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[20] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[20] = 8; /* RX Message Length */


/* ADAS1 */
CANMMVehicle_CAN_TXCT[1] = 1.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[1] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[11] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[11] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[11] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[11] = 8; /* RX Message Length */


/* ADAS2 */
CANMMVehicle_CAN_TXCT[3] = 1.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[3] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[13] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[13] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[13] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[13] = 8; /* RX Message Length */


/* ADAS3 */
CANMMVehicle_CAN_TXCT[4] = 2.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[4] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[14] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[14] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[14] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[14] = 8; /* RX Message Length */


/* ADAS4 */
CANMMVehicle_CAN_TXCT[8] = 1.000000e-01; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[8] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[24] = 1.000000e-01; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[24] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[24] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[24] = 8; /* RX Message Length */


/* ADAS5 */
CANMMVehicle_CAN_TXCT[9] = 1.000000e-01; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[9] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[25] = 1.000000e-01; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[25] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[25] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[25] = 8; /* RX Message Length */


/* BCM1 */
CANMMVehicle_CAN_RXCT11 = 2.000000e-01; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[23] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[23] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[23] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[23] = 8; /* RX Message Length */


/* BCM2 */
CANMMVehicle_CAN_RXCT12 = 2.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[21] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[21] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[21] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[21] = 8; /* RX Message Length */


/* CSW1 */
CANMMVehicle_CAN_RXCT13 = 2.000000e-01; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[22] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[22] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[22] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[22] = 8; /* RX Message Length */


/* ECM1 */
CANMMVehicle_CAN_RXCT14 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[0] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[0] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[0] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[0] = 8; /* RX Message Length */


/* ECM2 */
CANMMVehicle_CAN_RXCT15 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[1] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[1] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[1] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[1] = 8; /* RX Message Length */


/* ECM3 */
CANMMVehicle_CAN_RXCT16 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[2] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[2] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[2] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[2] = 8; /* RX Message Length */


/* ECM4 */
CANMMVehicle_CAN_RXCT17 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[3] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[3] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[3] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[3] = 8; /* RX Message Length */


/* ECM9 */
CANMMVehicle_CAN_RXCT18 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[9] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[9] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[9] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[9] = 8; /* RX Message Length */


/* EPAS1 */
CANMMVehicle_CAN_TXCT[6] = 1.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[6] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[17] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[17] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[17] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[17] = 8; /* RX Message Length */


/* EPAS2 */
CANMMVehicle_CAN_TXCT[7] = 1.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[7] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[18] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[18] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[18] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[18] = 8; /* RX Message Length */


/* EPB1 */
CANMMVehicle_CAN_RXCT21 = 4.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[19] = 4.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[19] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[19] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[19] = 8; /* RX Message Length */


/* FECU1 */
CANMMVehicle_CAN_RXCT22 = 2.000000e-01; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[26] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[26] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[26] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[26] = 8; /* RX Message Length */


/* HCU2 */
CANMMVehicle_CAN_TXCT[0] = 1.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[0] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[7] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[7] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[7] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[7] = 8; /* RX Message Length */


/* HCU3 */
CANMMVehicle_CAN_TXCT[2] = 1.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[2] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[12] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[12] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[12] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[12] = 8; /* RX Message Length */


/* HCU4 */
CANMMVehicle_CAN_TXCT[5] = 1.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[5] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[16] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[16] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[16] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[16] = 8; /* RX Message Length */


/* HMI2 */
CANMMVehicle_CAN_RXCT26 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[31] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[31] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[31] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[31] = 8; /* RX Message Length */


/* Meter1 */
CANMMVehicle_CAN_RXCT27 = 1.000000e-01; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[27] = 1.000000e-01; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[27] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[27] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[27] = 8; /* RX Message Length */


/* Meter3 */
CANMMVehicle_CAN_RXCT28 = 1.000000e-01; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[28] = 1.000000e-01; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[28] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[28] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[28] = 8; /* RX Message Length */


/* TCM1 */
CANMMVehicle_CAN_RXCT29 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[4] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[4] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[4] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[4] = 8; /* RX Message Length */


/* TCM2 */
CANMMVehicle_CAN_RXCT30 = 1.000000e-02; /* RX CycleTime[s] */
CANMMVehicle_CAN_RXdt[5] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[5] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[5] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[5] = 8; /* RX Message Length */


/* VCU1 */
CANMMVehicle_CAN_TXCT[10] = 1.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[10] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[29] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[29] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[29] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[29] = 8; /* RX Message Length */


/* VCU2 */
CANMMVehicle_CAN_TXCT[11] = 1.000000e-02; /* TX CycleTime[s] */
CANMMVehicle_CAN_TXDT[11] = 0; /* TX DelayTime[s] */
CANMMVehicle_CAN_RXdt[30] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMVehicle_CAN_RXt[30] = 0.0; /* RX Time[s] */
CANMMVehicle_CAN_RXerr[30] = 0; /* RX Error */
CANMMVehicle_CAN_RXLEN[30] = 8; /* RX Message Length */


/* DefaultGlobalEnable TX */
CANMMVehicle_CAN_TXGEIN = 1;


/* ECU ENABLE */
/* ADAS*/
CANMMVehicle_CAN_TXEEIE[0] = 1;
CANMMVehicle_CAN_TXEEIEOLD[0] = 1;
/* EPAS*/
CANMMVehicle_CAN_TXEEIE[1] = 1;
CANMMVehicle_CAN_TXEEIEOLD[1] = 1;
/* Tester*/
CANMMVehicle_CAN_TXEEIE[2] = 1;
CANMMVehicle_CAN_TXEEIEOLD[2] = 1;




/* ------------------------------------------------------------------------------ */
/* Message Defaults: */


/* HCU2 */
CANMMVehicle_CAN_WBS[0] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[0] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[0] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[0] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[0] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[0] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[0] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[0] = 1;
CANMMVehicle_CAN_TXcraw[0] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ADAS1 */
CANMMVehicle_CAN_WBS[1] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[1] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[1] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[1] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[1] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[1] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[1] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[1] = 1;
CANMMVehicle_CAN_TXcraw[1] = 0; /* 0: SIGNALS 1:RAWDATA */


/* HCU3 */
CANMMVehicle_CAN_WBS[2] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[2] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[2] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[2] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[2] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[2] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[2] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[2] = 1;
CANMMVehicle_CAN_TXcraw[2] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ADAS2 */
CANMMVehicle_CAN_WBS[3] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[3] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[3] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[3] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[3] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[3] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[3] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[3] = 1;
CANMMVehicle_CAN_TXcraw[3] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ADAS3 */
CANMMVehicle_CAN_WBS[4] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[4] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[4] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[4] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[4] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[4] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[4] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[4] = 1;
CANMMVehicle_CAN_TXcraw[4] = 0; /* 0: SIGNALS 1:RAWDATA */


/* HCU4 */
CANMMVehicle_CAN_WBS[5] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[5] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[5] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[5] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[5] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[5] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[5] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[5] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[5] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[5] = 1;
CANMMVehicle_CAN_TXcraw[5] = 0; /* 0: SIGNALS 1:RAWDATA */


/* EPAS1 */
CANMMVehicle_CAN_WBS[6] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[6] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[6] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[6] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[6] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[6] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[6] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[6] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[6] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[6] = 1;
CANMMVehicle_CAN_TXcraw[6] = 0; /* 0: SIGNALS 1:RAWDATA */


/* EPAS2 */
CANMMVehicle_CAN_WBS[7] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[7] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[7] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[7] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[7] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[7] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[7] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[7] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[7] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[7] = 1;
CANMMVehicle_CAN_TXcraw[7] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ADAS4 */
CANMMVehicle_CAN_WBS[8] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[8] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[8] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[8] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[8] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[8] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[8] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[8] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[8] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[8] = 1;
CANMMVehicle_CAN_TXcraw[8] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ADAS5 */
CANMMVehicle_CAN_WBS[9] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[9] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[9] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[9] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[9] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[9] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[9] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[9] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[9] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[9] = 1;
CANMMVehicle_CAN_TXcraw[9] = 0; /* 0: SIGNALS 1:RAWDATA */


/* VCU1 */
CANMMVehicle_CAN_WBS[10] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[10] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[10] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[10] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[10] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[10] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[10] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[10] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[10] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[10] = 1;
CANMMVehicle_CAN_TXcraw[10] = 0; /* 0: SIGNALS 1:RAWDATA */


/* VCU2 */
CANMMVehicle_CAN_WBS[11] = 0; /* Would be sent */
CANMMVehicle_CAN_TXEIN[11] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXENIE[11] = 1; /* DefaultEnable */
CANMMVehicle_CAN_TXCIN[11] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXCIE[11] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMVehicle_CAN_TXKIEXC[11] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMVehicle_CAN_TXLEN[11] = 8; /* Message length */
CANMMVehicle_CAN_TXRBUF[11] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXRXBUF[11] = 0; /* internal -> do not change */
CANMMVehicle_CAN_TXusrm[11] = 1;
CANMMVehicle_CAN_TXcraw[11] = 0; /* 0: SIGNALS 1:RAWDATA */

