/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_Globals */
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

#undef DEBUG              
#undef IDMANIPULATION
#define WITHOUT_DELAY
#undef NO_TX         
#define KICKOUT_ACTIVE               
#define NOCANID  0xEFFFFFFF
#define S_FUNCTION_NAME                           RTICANMM_MAIN_CAN_1
#define S_FUNCTION_LEVEL 2
#include "simstruc.h"
#include <math.h>
                                                       
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                            
# include "dsRTICANMMGlobals.h"
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */                                                                  
                                                       
                                                       
#define NUM_TX_INPUT                              101
#define NUM_TX_MSG                                8
#define NUM_RX_OUTPUT                             487
#define NUM_RX_MSG                                33
#define NUM_RX                                    277
#define NUM_TX                                    100
#define TX_PORT_DATA_TYPES                        "RTICANMM_MAIN_CAN_1_TX_PORT.h"
#define RX_PORT_DATA_TYPES                        "RTICANMM_MAIN_CAN_1_RX_PORT.h"
#define TX_WRITE_PORT_DATA                        "RTICANMM_MAIN_CAN_1_TX_INPUT.h"
#define RX_WRITE_PORT_DATA                        "RTICANMM_MAIN_CAN_1_RX_OUTPUT.h"
                                                       
                                                       
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                            
struct MainSetupMsgData {                              
  CanMM_Msg CANMsg;                                    
  UInt8 PaddingData[4];                                
  UInt8* pData;         /* Pointer to DLC data bytes */
  double DeltaTime;                                    
  double DelayTime;                                    
  double CycleTime;                                    
  UInt8  Status;                                       
  UInt32 TXCounter;                                    
  UInt32 RXCounter;                                    
  UInt8  MsgType;                                      
};                                                     
typedef struct MainSetupMsgData MainSetupMsgData;      
                                                       
enum CanMM_MsgTypes {                      
   RTICANMM_MESSAGE_TYPE_STD,              
   RTICANMM_MESSAGE_TYPE_EXT,              
   RTICANMM_MESSAGE_TYPE_J1939,            
   RTICANMM_MESSAGE_TYPE_FD_STD,           
   RTICANMM_MESSAGE_TYPE_FD_EXT            
};                                         
typedef enum CanMM_MsgTypes CanMM_MsgTypes;
                                           
#undef CAN_J1939
#undef WITHOUT_LOOPBACKSTATUS

     /* Include CRC and CustomCode here */
#define CAN_BASEUPDATE_FILE                       "RTICANMM_MAIN_CAN_1_BASEUPDATE.h"
#undef BASEUPDATE_ACTIVE                          
#define CAN_DEFS_FILE                             "RTICANMM_MAIN_CAN_1_DEFS.h"
#define CAN_MSG_DATA_FILE                         "RTICANMM_MAIN_CAN_1_MSG_DATA.h"
#define CAN_ID_TABLE_FILE                         "RTICANMM_MAIN_CAN_1_ID_TABLE.h"
#define CAN_GLOBAL_ENABLE_TX                      CANMMCAN_1_TXGE
#define CAN_GLOBAL_ENABLE                         CANMMCAN_1_GE
#define CAN_VAR_ENABLE                            CANMM_CTL_SETUP_CAN_1_ID
#define CAN_VAR_TRAFFIC                           CANMMCAN_1_TRAFFIC
#define CANMM_RESET2DEFAULTS                      CANMMCAN_1_RE
#define CAN_SENDBYKICKOUT                         CANMMCAN_1_BYKICK
#define CAN_ENABLE                                CANMMCAN_1_TXEN
#define CAN_WOULDBESENT                           CANMMCAN_1_WBS
#define CAN_ENABLE_TIMEOUT                        CANMMCAN_1_TXTOUT
#define CAN_CYCLIC                                CANMMCAN_1_TXC
#define CAN_RX_DATA                               CANMMCAN_1_RX
#define CAN_TX_DATA                               CANMMCAN_1_TX
#define CAN_NUM_LOST                              CANMMCAN_1_NL
#define CAN_NUM_LOST_RESET                        CANMMCAN_1_NLR
#define rticanmmsaturation(value, maximum, minimum)((value >= maximum)? maximum : ((value <= minimum)? minimum : value))
#define rticanmmmaxsat(value, maximum, minimum)   ((value >= maximum)? maximum : value)
#define CAN_SIGNAL_HEADERFILE                     "RTICANMM_MAIN_CAN_1_SIGNAL_DEFAULTS.h"
#define CAN_MESSAGE_HEADERFILE                    "RTICANMM_MAIN_CAN_1_MESSAGE_DEFAULTS.h"
#define ENABLE_PORT                               0
#undef ONLYCAPTURE                                
#define TX_LOOPBACK                               1
#define TX_CYCLETIME                              CANMMCAN_1_TXCT
#define TX_DELAYTIME                              CANMMCAN_1_TXDT
#define TX_KICKOUT                                CANMMCAN_1_TXKOUT
#define TX_KICKOUT_INTERN                         CANMMCAN_1_TXKIN
#define TX_KICKOUT_INTERN_EXTERN                  CANMMCAN_1_TXKIEX
#define TX_KICKOUT_CHECK_INTERN_EXTERN            CANMMCAN_1_TXKIEXC
#define RX_STATUS                                 CANMMCAN_1_RXsta
#define TX_STATUS                                 CANMMCAN_1_TXsta
#define TX_MESSAGES_EXIST                         1
#undef USE_CAPTURE                                
#define CANMM_Q_NUM                               1

#if (RTICANMM_FEEDTHROUGH_CHECK)        
static const void * GetInputPortSignal(SimStruct *S, int port_num);
static int CheckDirectFeedThroughInputPort(SimStruct *S, int port_num);
#else                                                              
#define GetInputPortSignal ssGetInputPortSignal                    
#endif //RTICANMM_FEEDTHROUGH_CHECK                                
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */               
                                                                   
