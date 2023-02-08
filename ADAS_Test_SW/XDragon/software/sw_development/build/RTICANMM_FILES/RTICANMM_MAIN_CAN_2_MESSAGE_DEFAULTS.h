/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_MESSAGE_DEFAULTS */
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

CANMMCAN_2_MAXMSGPERSTEP = 0;

/* DefaultGlobalEnable */
CANMMCAN_2_GEIN = 1;


/* Feedthrough debug variable*/
CANMMCAN_2_FTD = 0;
CANMMCAN_2_RTVE = 1;


/* ABS2_C */
CANMMCAN_2_TXCT[2] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[2] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[2] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[2] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[2] = 0; /* RX Error */
CANMMCAN_2_RXLEN[2] = 8; /* RX Message Length */


/* ABS4_C */
CANMMCAN_2_TXCT[3] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[3] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[3] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[3] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[3] = 0; /* RX Error */
CANMMCAN_2_RXLEN[3] = 8; /* RX Message Length */


/* Lane_Details */
CANMMCAN_2_RXCT3 = 0; /* RX CycleTime[s] */
CANMMCAN_2_RXdt[5] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[5] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[5] = 0; /* RX Error */
CANMMCAN_2_RXLEN[5] = 8; /* RX Message Length */


/* SAS1 */
CANMMCAN_2_TXCT[4] = 1.000000e-02; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[4] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[4] = 1.000000e-02; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[4] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[4] = 0; /* RX Error */
CANMMCAN_2_RXLEN[4] = 8; /* RX Message Length */


/* SpeedInformation */
CANMMCAN_2_TXCT[0] = 0; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[0] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[0] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[0] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[0] = 0; /* RX Error */
CANMMCAN_2_RXLEN[0] = 8; /* RX Message Length */


/* YawRateInformation */
CANMMCAN_2_TXCT[1] = 0; /* TX CycleTime[s] */
CANMMCAN_2_TXDT[1] = 0; /* TX DelayTime[s] */
CANMMCAN_2_RXdt[1] = 0; /* RX DeltaTime[s] */
CANMMCAN_2_RXt[1] = 0.0; /* RX Time[s] */
CANMMCAN_2_RXerr[1] = 0; /* RX Error */
CANMMCAN_2_RXLEN[1] = 8; /* RX Message Length */


/* DefaultGlobalEnable TX */
CANMMCAN_2_TXGEIN = 1;


/* ECU ENABLE */
/* ADAS*/
CANMMCAN_2_TXEEIE[0] = 1;
CANMMCAN_2_TXEEIEOLD[0] = 1;
/* EPAS*/
CANMMCAN_2_TXEEIE[1] = 1;
CANMMCAN_2_TXEEIEOLD[1] = 1;
/* ExternalUnit*/
CANMMCAN_2_TXEEIE[2] = 1;
CANMMCAN_2_TXEEIEOLD[2] = 1;




/* ------------------------------------------------------------------------------ */
/* Message Defaults: */


/* SpeedInformation */
CANMMCAN_2_WBS[0] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[0] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[0] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[0] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[0] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[0] = 8; /* Message length */
CANMMCAN_2_TXRBUF[0] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[0] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[0] = 1;
CANMMCAN_2_TXcraw[0] = 0; /* 0: SIGNALS 1:RAWDATA */


/* YawRateInformation */
CANMMCAN_2_WBS[1] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[1] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[1] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[1] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[1] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[1] = 8; /* Message length */
CANMMCAN_2_TXRBUF[1] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[1] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[1] = 1;
CANMMCAN_2_TXcraw[1] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ABS2_C */
CANMMCAN_2_WBS[2] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[2] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[2] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[2] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[2] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[2] = 8; /* Message length */
CANMMCAN_2_TXRBUF[2] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[2] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[2] = 1;
CANMMCAN_2_TXcraw[2] = 0; /* 0: SIGNALS 1:RAWDATA */


/* ABS4_C */
CANMMCAN_2_WBS[3] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[3] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[3] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[3] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[3] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[3] = 8; /* Message length */
CANMMCAN_2_TXRBUF[3] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[3] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[3] = 1;
CANMMCAN_2_TXcraw[3] = 0; /* 0: SIGNALS 1:RAWDATA */


/* SAS1 */
CANMMCAN_2_WBS[4] = 0; /* Would be sent */
CANMMCAN_2_TXEIN[4] = 1; /* DefaultEnable */
CANMMCAN_2_TXENIE[4] = 1; /* DefaultEnable */
CANMMCAN_2_TXCIN[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXCIE[4] = 1; /* DefaultCyclic 0: triggered 1: cyclic */
CANMMCAN_2_TXKIEXC[4] = 1; /* Check 0: intern and/or extern    1: just intern */
CANMMCAN_2_TXLEN[4] = 8; /* Message length */
CANMMCAN_2_TXRBUF[4] = 0; /* internal -> do not change */
CANMMCAN_2_TXRXBUF[4] = 0; /* internal -> do not change */
CANMMCAN_2_TXusrm[4] = 1;
CANMMCAN_2_TXcraw[4] = 0; /* 0: SIGNALS 1:RAWDATA */

