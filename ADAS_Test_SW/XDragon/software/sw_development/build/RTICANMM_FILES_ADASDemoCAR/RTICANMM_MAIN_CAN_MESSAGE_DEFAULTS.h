/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_MESSAGE_DEFAULTS */
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

CANMMCAN_MAXMSGPERSTEP = 0;

/* DefaultGlobalEnable */
CANMMCAN_GEIN = 1;


/* Feedthrough debug variable*/
CANMMCAN_FTD = 0;
CANMMCAN_RTVE = 1;


/* ABS1 */
CANMMCAN_TXCT[2] = 2.000000e-02; /* TX CycleTime[s] */
CANMMCAN_TXDT[2] = 0; /* TX DelayTime[s] */
CANMMCAN_RXdt[3] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[3] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[3] = 0; /* RX Error */
CANMMCAN_RXLEN[3] = 8; /* RX Message Length */


/* ABS2 */
CANMMCAN_TXCT[3] = 2.000000e-02; /* TX CycleTime[s] */
CANMMCAN_TXDT[3] = 0; /* TX DelayTime[s] */
CANMMCAN_RXdt[4] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[4] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[4] = 0; /* RX Error */
CANMMCAN_RXLEN[4] = 8; /* RX Message Length */


/* ABS3 */
CANMMCAN_TXCT[4] = 2.000000e-02; /* TX CycleTime[s] */
CANMMCAN_TXDT[4] = 0; /* TX DelayTime[s] */
CANMMCAN_RXdt[5] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[5] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[5] = 0; /* RX Error */
CANMMCAN_RXLEN[5] = 8; /* RX Message Length */


/* ECM2 */
CANMMCAN_TXCT[5] = 2.000000e-02; /* TX CycleTime[s] */
CANMMCAN_TXDT[5] = 0; /* TX DelayTime[s] */
CANMMCAN_RXdt[6] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[6] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[6] = 0; /* RX Error */
CANMMCAN_RXLEN[6] = 8; /* RX Message Length */


/* EPS1 */
CANMMCAN_RXCT5 = 2.000000e-02; /* RX CycleTime[s] */
CANMMCAN_RXdt[8] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[8] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[8] = 0; /* RX Error */
CANMMCAN_RXLEN[8] = 8; /* RX Message Length */


/* EPS2 */
CANMMCAN_RXCT6 = 2.000000e-02; /* RX CycleTime[s] */
CANMMCAN_RXdt[2] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[2] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[2] = 0; /* RX Error */
CANMMCAN_RXLEN[2] = 8; /* RX Message Length */


/* GWA1 */
CANMMCAN_TXCT[6] = 5.000000e-02; /* TX CycleTime[s] */
CANMMCAN_TXDT[6] = 0; /* TX DelayTime[s] */
CANMMCAN_RXdt[7] = 5.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[7] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[7] = 0; /* RX Error */
CANMMCAN_RXLEN[7] = 8; /* RX Message Length */


/* IFC1 */
CANMMCAN_TXCT[1] = 2.000000e-02; /* TX CycleTime[s] */
CANMMCAN_TXDT[1] = 0; /* TX DelayTime[s] */
CANMMCAN_RXdt[1] = 2.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[1] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[1] = 0; /* RX Error */
CANMMCAN_RXLEN[1] = 8; /* RX Message Length */


/* SAS1 */
CANMMCAN_TXCT[0] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_TXDT[0] = 0; /* TX DelayTime[s] */
CANMMCAN_RXdt[0] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[0] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[0] = 0; /* RX Error */
CANMMCAN_RXLEN[0] = 8; /* RX Message Length */


/* SAS2 */
CANMMCAN_RXCT10 = 1.000000e-02; /* RX CycleTime[s] */
CANMMCAN_RXdt[9] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_RXt[9] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[9] = 0; /* RX Error */
CANMMCAN_RXLEN[9] = 8; /* RX Message Length */


/* DefaultGlobalEnable TX */
CANMMCAN_TXGEIN = 1;


/* ECU ENABLE */
/* GW*/
CANMMCAN_TXEEIE[0] = 1;
CANMMCAN_TXEEIEOLD[0] = 1;
/* IFC*/
CANMMCAN_TXEEIE[1] = 1;
CANMMCAN_TXEEIEOLD[1] = 1;




/* ------------------------------------------------------------------------------ */
/* Message Defaults: */


/* SAS1 */
CANMMCAN_WBS[0] = 0; /* Would be sent */
CANMMCAN_TXEIN[0] = 1; /* DefaultEnable */
CANMMCAN_TXENIE[0] = 1; /* DefaultEnable */
CANMMCAN_TXCIN[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXCIE[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXKIEXC[0] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_TXLEN[0] = 8; /* Message length */
CANMMCAN_TXRBUF[0] = 0; /* internal -> do not change */
CANMMCAN_TXRXBUF[0] = 0; /* internal -> do not change */
CANMMCAN_TXusrm[0] = 1;
CANMMCAN_TXcraw[0] = 0; /* 0: SIGNALS 1:RAWDATA */


/* IFC1 */
CANMMCAN_WBS[1] = 0; /* Would be sent */
CANMMCAN_TXEIN[1] = 1; /* DefaultEnable */
CANMMCAN_TXENIE[1] = 1; /* DefaultEnable */
CANMMCAN_TXCIN[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXCIE[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXKIEXC[1] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_TXLEN[1] = 8; /* Message length */
CANMMCAN_TXRBUF[1] = 0; /* internal -> do not change */
CANMMCAN_TXRXBUF[1] = 0; /* internal -> do not change */
CANMMCAN_TXusrm[1] = 1;
CANMMCAN_TXcraw[1] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ABS1 */
CANMMCAN_WBS[2] = 0; /* Would be sent */
CANMMCAN_TXEIN[2] = 1; /* DefaultEnable */
CANMMCAN_TXENIE[2] = 1; /* DefaultEnable */
CANMMCAN_TXCIN[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXCIE[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXKIEXC[2] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_TXLEN[2] = 8; /* Message length */
CANMMCAN_TXRBUF[2] = 0; /* internal -> do not change */
CANMMCAN_TXRXBUF[2] = 0; /* internal -> do not change */
CANMMCAN_TXusrm[2] = 1;
CANMMCAN_TXcraw[2] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ABS2 */
CANMMCAN_WBS[3] = 0; /* Would be sent */
CANMMCAN_TXEIN[3] = 1; /* DefaultEnable */
CANMMCAN_TXENIE[3] = 1; /* DefaultEnable */
CANMMCAN_TXCIN[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXCIE[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXKIEXC[3] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_TXLEN[3] = 8; /* Message length */
CANMMCAN_TXRBUF[3] = 0; /* internal -> do not change */
CANMMCAN_TXRXBUF[3] = 0; /* internal -> do not change */
CANMMCAN_TXusrm[3] = 1;
CANMMCAN_TXcraw[3] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ABS3 */
CANMMCAN_WBS[4] = 0; /* Would be sent */
CANMMCAN_TXEIN[4] = 1; /* DefaultEnable */
CANMMCAN_TXENIE[4] = 1; /* DefaultEnable */
CANMMCAN_TXCIN[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXCIE[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXKIEXC[4] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_TXLEN[4] = 8; /* Message length */
CANMMCAN_TXRBUF[4] = 0; /* internal -> do not change */
CANMMCAN_TXRXBUF[4] = 0; /* internal -> do not change */
CANMMCAN_TXusrm[4] = 1;
CANMMCAN_TXcraw[4] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ECM2 */
CANMMCAN_WBS[5] = 0; /* Would be sent */
CANMMCAN_TXEIN[5] = 1; /* DefaultEnable */
CANMMCAN_TXENIE[5] = 1; /* DefaultEnable */
CANMMCAN_TXCIN[5] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXCIE[5] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXKIEXC[5] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_TXLEN[5] = 8; /* Message length */
CANMMCAN_TXRBUF[5] = 0; /* internal -> do not change */
CANMMCAN_TXRXBUF[5] = 0; /* internal -> do not change */
CANMMCAN_TXusrm[5] = 1;
CANMMCAN_TXcraw[5] = 0; /* 0: SIGNALS 1:RAWDATA */


/* GWA1 */
CANMMCAN_WBS[6] = 0; /* Would be sent */
CANMMCAN_TXEIN[6] = 1; /* DefaultEnable */
CANMMCAN_TXENIE[6] = 1; /* DefaultEnable */
CANMMCAN_TXCIN[6] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXCIE[6] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_TXKIEXC[6] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_TXLEN[6] = 8; /* Message length */
CANMMCAN_TXRBUF[6] = 0; /* internal -> do not change */
CANMMCAN_TXRXBUF[6] = 0; /* internal -> do not change */
CANMMCAN_TXusrm[6] = 1;
CANMMCAN_TXcraw[6] = 0; /* 0: SIGNALS 1:RAWDATA */

