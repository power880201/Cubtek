/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_MESSAGE_DEFAULTS */
/*                                                                                                                           */
/*   AUTHOR(S):                                                                                                              */
/*      U. Homann                                                                                                              */
/*      M. Eikermann                                                                                                              */
/*                                                                                                                           */
/*                                                                                                                           */
/*   RTICANMM Date: 06-Oct-2014 13:04:04                                                                                     */
/*   RTICANMM Version: 4.0.735878.5444907408                                                                                     */
/*                                                                                                                           */
/*  (c) Copyright 2016, dSPACE GmbH. All rights reserved.                                                                    */
/*      Brand names or product names are trademarks or registered trademarks of their respective companies or organizations. */
/*                                                                                                                           */
/* ***************************************************************************************************************************/

CANMMCAN_1_MAXMSGPERSTEP = 0;

/* DefaultGlobalEnable */
CANMMCAN_1_GEIN = 1;


/* Feedthrough debug variable*/
CANMMCAN_1_FTD = 0;
CANMMCAN_1_RTVE = 1;


/* ABS1 */
CANMMCAN_1_RXCT1 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[5] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[5] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[5] = 0; /* RX Error */
CANMMCAN_1_RXLEN[5] = 8; /* RX Message Length */


/* ABS2 */
CANMMCAN_1_RXCT2 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[6] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[6] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[6] = 0; /* RX Error */
CANMMCAN_1_RXLEN[6] = 8; /* RX Message Length */


/* ABS3 */
CANMMCAN_1_RXCT3 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[8] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[8] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[8] = 0; /* RX Error */
CANMMCAN_1_RXLEN[8] = 8; /* RX Message Length */


/* ABS4 */
CANMMCAN_1_RXCT4 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[13] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[13] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[13] = 0; /* RX Error */
CANMMCAN_1_RXLEN[13] = 8; /* RX Message Length */


/* AC1 */
CANMMCAN_1_RXCT5 = 1.000000e-01; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[25] = 1.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[25] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[25] = 0; /* RX Error */
CANMMCAN_1_RXLEN[25] = 8; /* RX Message Length */


/* ADAS1 */
CANMMCAN_1_TXCT[0] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_1_TXDT[0] = 0; /* TX DelayTime[s] */
CANMMCAN_1_RXdt[9] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[9] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[9] = 0; /* RX Error */
CANMMCAN_1_RXLEN[9] = 8; /* RX Message Length */


/* ADAS2 */
CANMMCAN_1_TXCT[1] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_1_TXDT[1] = 0; /* TX DelayTime[s] */
CANMMCAN_1_RXdt[11] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[11] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[11] = 0; /* RX Error */
CANMMCAN_1_RXLEN[11] = 8; /* RX Message Length */


/* ADAS3 */
CANMMCAN_1_TXCT[2] = 2.000000e-02; /* TX CycleTime[s] */
CANMMCAN_1_TXDT[2] = 0; /* TX DelayTime[s] */
CANMMCAN_1_RXdt[12] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[12] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[12] = 0; /* RX Error */
CANMMCAN_1_RXLEN[12] = 8; /* RX Message Length */


/* ADAS4 */
CANMMCAN_1_TXCT[5] = 1.000000e-01; /* TX CycleTime[s] */
CANMMCAN_1_TXDT[5] = 0; /* TX DelayTime[s] */
CANMMCAN_1_RXdt[21] = 1.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[21] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[21] = 0; /* RX Error */
CANMMCAN_1_RXLEN[21] = 8; /* RX Message Length */


/* ADAS5 */
CANMMCAN_1_TXCT[6] = 1.000000e-01; /* TX CycleTime[s] */
CANMMCAN_1_TXDT[6] = 0; /* TX DelayTime[s] */
CANMMCAN_1_RXdt[22] = 1.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[22] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[22] = 0; /* RX Error */
CANMMCAN_1_RXLEN[22] = 8; /* RX Message Length */


/* BCM1 */
CANMMCAN_1_RXCT11 = 2.000000e-01; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[20] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[20] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[20] = 0; /* RX Error */
CANMMCAN_1_RXLEN[20] = 8; /* RX Message Length */


/* BCM2 */
CANMMCAN_1_RXCT12 = 2.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[18] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[18] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[18] = 0; /* RX Error */
CANMMCAN_1_RXLEN[18] = 8; /* RX Message Length */


/* CSW1 */
CANMMCAN_1_RXCT13 = 2.000000e-01; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[19] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[19] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[19] = 0; /* RX Error */
CANMMCAN_1_RXLEN[19] = 8; /* RX Message Length */


/* ECM1 */
CANMMCAN_1_RXCT14 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[0] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[0] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[0] = 0; /* RX Error */
CANMMCAN_1_RXLEN[0] = 8; /* RX Message Length */


/* ECM2 */
CANMMCAN_1_RXCT15 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[1] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[1] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[1] = 0; /* RX Error */
CANMMCAN_1_RXLEN[1] = 8; /* RX Message Length */


/* ECM3 */
CANMMCAN_1_RXCT16 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[2] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[2] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[2] = 0; /* RX Error */
CANMMCAN_1_RXLEN[2] = 8; /* RX Message Length */


/* ECM9 */
CANMMCAN_1_RXCT17 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[7] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[7] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[7] = 0; /* RX Error */
CANMMCAN_1_RXLEN[7] = 8; /* RX Message Length */


/* EPAS2 */
CANMMCAN_1_TXCT[4] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_1_TXDT[4] = 0; /* TX DelayTime[s] */
CANMMCAN_1_RXdt[16] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[16] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[16] = 0; /* RX Error */
CANMMCAN_1_RXLEN[16] = 8; /* RX Message Length */


/* EPAS3 */
CANMMCAN_1_TXCT[7] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_1_TXDT[7] = 0; /* TX DelayTime[s] */
CANMMCAN_1_RXdt[32] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[32] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[32] = 0; /* RX Error */
CANMMCAN_1_RXLEN[32] = 8; /* RX Message Length */


/* EPB1 */
CANMMCAN_1_RXCT20 = 4.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[17] = 4.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[17] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[17] = 0; /* RX Error */
CANMMCAN_1_RXLEN[17] = 8; /* RX Message Length */


/* ESMCU1 */
CANMMCAN_1_RXCT21 = 2.000000e-01; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[26] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[26] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[26] = 0; /* RX Error */
CANMMCAN_1_RXLEN[26] = 8; /* RX Message Length */


/* FECU1 */
CANMMCAN_1_RXCT22 = 2.000000e-01; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[23] = 2.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[23] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[23] = 0; /* RX Error */
CANMMCAN_1_RXLEN[23] = 8; /* RX Message Length */


/* HCU3 */
CANMMCAN_1_RXCT23 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[10] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[10] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[10] = 0; /* RX Error */
CANMMCAN_1_RXLEN[10] = 8; /* RX Message Length */


/* HCU4 */
CANMMCAN_1_RXCT24 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[14] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[14] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[14] = 0; /* RX Error */
CANMMCAN_1_RXLEN[14] = 8; /* RX Message Length */


/* HMI1 */
CANMMCAN_1_RXCT25 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[29] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[29] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[29] = 0; /* RX Error */
CANMMCAN_1_RXLEN[29] = 8; /* RX Message Length */


/* HMI2 */
CANMMCAN_1_RXCT26 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[28] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[28] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[28] = 0; /* RX Error */
CANMMCAN_1_RXLEN[28] = 8; /* RX Message Length */


/* Meter1 */
CANMMCAN_1_RXCT27 = 1.000000e-01; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[24] = 1.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[24] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[24] = 0; /* RX Error */
CANMMCAN_1_RXLEN[24] = 8; /* RX Message Length */


/* Meter3 */
CANMMCAN_1_RXCT28 = 1.000000e-01; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[27] = 1.000000e-01; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[27] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[27] = 0; /* RX Error */
CANMMCAN_1_RXLEN[27] = 8; /* RX Message Length */


/* SAS1 */
CANMMCAN_1_TXCT[3] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_1_TXDT[3] = 0; /* TX DelayTime[s] */
CANMMCAN_1_RXdt[15] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[15] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[15] = 0; /* RX Error */
CANMMCAN_1_RXLEN[15] = 8; /* RX Message Length */


/* TCM1 */
CANMMCAN_1_RXCT30 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[3] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[3] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[3] = 0; /* RX Error */
CANMMCAN_1_RXLEN[3] = 8; /* RX Message Length */


/* TCM2 */
CANMMCAN_1_RXCT31 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[4] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[4] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[4] = 0; /* RX Error */
CANMMCAN_1_RXLEN[4] = 8; /* RX Message Length */


/* VCU1 */
CANMMCAN_1_RXCT32 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[30] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[30] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[30] = 0; /* RX Error */
CANMMCAN_1_RXLEN[30] = 8; /* RX Message Length */


/* VCU2 */
CANMMCAN_1_RXCT33 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_1_RXdt[31] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_1_RXt[31] = 0.0; /* RX Time[s] */
CANMMCAN_1_RXerr[31] = 0; /* RX Error */
CANMMCAN_1_RXLEN[31] = 8; /* RX Message Length */


/* DefaultGlobalEnable TX */
CANMMCAN_1_TXGEIN = 1;


/* ECU ENABLE */
/* ADAS*/
CANMMCAN_1_TXEEIE[0] = 1;
CANMMCAN_1_TXEEIEOLD[0] = 1;
/* EPAS*/
CANMMCAN_1_TXEEIE[1] = 1;
CANMMCAN_1_TXEEIEOLD[1] = 1;




/* ------------------------------------------------------------------------------ */
/* Message Defaults: */


/* ADAS1 */
CANMMCAN_1_WBS[0] = 0; /* Would be sent */
CANMMCAN_1_TXEIN[0] = 1; /* DefaultEnable */
CANMMCAN_1_TXENIE[0] = 1; /* DefaultEnable */
CANMMCAN_1_TXCIN[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXCIE[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXKIEXC[0] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_1_TXLEN[0] = 8; /* Message length */
CANMMCAN_1_TXRBUF[0] = 0; /* internal -> do not change */
CANMMCAN_1_TXRXBUF[0] = 0; /* internal -> do not change */
CANMMCAN_1_TXusrm[0] = 1;
CANMMCAN_1_TXcraw[0] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ADAS2 */
CANMMCAN_1_WBS[1] = 0; /* Would be sent */
CANMMCAN_1_TXEIN[1] = 1; /* DefaultEnable */
CANMMCAN_1_TXENIE[1] = 1; /* DefaultEnable */
CANMMCAN_1_TXCIN[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXCIE[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXKIEXC[1] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_1_TXLEN[1] = 8; /* Message length */
CANMMCAN_1_TXRBUF[1] = 0; /* internal -> do not change */
CANMMCAN_1_TXRXBUF[1] = 0; /* internal -> do not change */
CANMMCAN_1_TXusrm[1] = 1;
CANMMCAN_1_TXcraw[1] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ADAS3 */
CANMMCAN_1_WBS[2] = 0; /* Would be sent */
CANMMCAN_1_TXEIN[2] = 1; /* DefaultEnable */
CANMMCAN_1_TXENIE[2] = 1; /* DefaultEnable */
CANMMCAN_1_TXCIN[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXCIE[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXKIEXC[2] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_1_TXLEN[2] = 8; /* Message length */
CANMMCAN_1_TXRBUF[2] = 0; /* internal -> do not change */
CANMMCAN_1_TXRXBUF[2] = 0; /* internal -> do not change */
CANMMCAN_1_TXusrm[2] = 1;
CANMMCAN_1_TXcraw[2] = 0; /* 0: SIGNALS 1:RAWDATA */


/* SAS1 */
CANMMCAN_1_WBS[3] = 0; /* Would be sent */
CANMMCAN_1_TXEIN[3] = 1; /* DefaultEnable */
CANMMCAN_1_TXENIE[3] = 1; /* DefaultEnable */
CANMMCAN_1_TXCIN[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXCIE[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXKIEXC[3] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_1_TXLEN[3] = 8; /* Message length */
CANMMCAN_1_TXRBUF[3] = 0; /* internal -> do not change */
CANMMCAN_1_TXRXBUF[3] = 0; /* internal -> do not change */
CANMMCAN_1_TXusrm[3] = 1;
CANMMCAN_1_TXcraw[3] = 0; /* 0: SIGNALS 1:RAWDATA */


/* EPAS2 */
CANMMCAN_1_WBS[4] = 0; /* Would be sent */
CANMMCAN_1_TXEIN[4] = 1; /* DefaultEnable */
CANMMCAN_1_TXENIE[4] = 1; /* DefaultEnable */
CANMMCAN_1_TXCIN[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXCIE[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXKIEXC[4] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_1_TXLEN[4] = 8; /* Message length */
CANMMCAN_1_TXRBUF[4] = 0; /* internal -> do not change */
CANMMCAN_1_TXRXBUF[4] = 0; /* internal -> do not change */
CANMMCAN_1_TXusrm[4] = 1;
CANMMCAN_1_TXcraw[4] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ADAS4 */
CANMMCAN_1_WBS[5] = 0; /* Would be sent */
CANMMCAN_1_TXEIN[5] = 1; /* DefaultEnable */
CANMMCAN_1_TXENIE[5] = 1; /* DefaultEnable */
CANMMCAN_1_TXCIN[5] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXCIE[5] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXKIEXC[5] = 0; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_1_TXLEN[5] = 8; /* Message length */
CANMMCAN_1_TXRBUF[5] = 0; /* internal -> do not change */
CANMMCAN_1_TXRXBUF[5] = 0; /* internal -> do not change */
CANMMCAN_1_TXusrm[5] = 1;
CANMMCAN_1_TXcraw[5] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ADAS5 */
CANMMCAN_1_WBS[6] = 0; /* Would be sent */
CANMMCAN_1_TXEIN[6] = 1; /* DefaultEnable */
CANMMCAN_1_TXENIE[6] = 1; /* DefaultEnable */
CANMMCAN_1_TXCIN[6] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXCIE[6] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXKIEXC[6] = 0; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_1_TXLEN[6] = 8; /* Message length */
CANMMCAN_1_TXRBUF[6] = 0; /* internal -> do not change */
CANMMCAN_1_TXRXBUF[6] = 0; /* internal -> do not change */
CANMMCAN_1_TXusrm[6] = 1;
CANMMCAN_1_TXcraw[6] = 0; /* 0: SIGNALS 1:RAWDATA */


/* EPAS3 */
CANMMCAN_1_WBS[7] = 0; /* Would be sent */
CANMMCAN_1_TXEIN[7] = 1; /* DefaultEnable */
CANMMCAN_1_TXENIE[7] = 1; /* DefaultEnable */
CANMMCAN_1_TXCIN[7] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXCIE[7] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_1_TXKIEXC[7] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_1_TXLEN[7] = 8; /* Message length */
CANMMCAN_1_TXRBUF[7] = 0; /* internal -> do not change */
CANMMCAN_1_TXRXBUF[7] = 0; /* internal -> do not change */
CANMMCAN_1_TXusrm[7] = 1;
CANMMCAN_1_TXcraw[7] = 0; /* 0: SIGNALS 1:RAWDATA */

