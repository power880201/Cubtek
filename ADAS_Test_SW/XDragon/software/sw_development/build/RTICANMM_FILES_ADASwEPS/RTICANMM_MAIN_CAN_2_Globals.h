/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_Globals */
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
#define S_FUNCTION_NAME                           RTICANMM_MAIN_CAN_2
#define S_FUNCTION_LEVEL 2
#include "simstruc.h"
#include <math.h>
                                                       
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                            
# include "dsRTICANMMGlobals.h"
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */                                                                  
                                                       
                                                       
#define NUM_TX_INPUT                              55
#define NUM_TX_MSG                                14
#define NUM_RX_OUTPUT                             960
#define NUM_RX_MSG                                65
#define NUM_RX                                    862
#define NUM_TX                                    55
#define TX_PORT_DATA_TYPES                        "RTICANMM_MAIN_CAN_2_TX_PORT.h"
#define RX_PORT_DATA_TYPES                        "RTICANMM_MAIN_CAN_2_RX_PORT.h"
#define TX_WRITE_PORT_DATA                        "RTICANMM_MAIN_CAN_2_TX_INPUT.h"
#define RX_WRITE_PORT_DATA                        "RTICANMM_MAIN_CAN_2_RX_OUTPUT.h"
                                                       
                                                       
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
#define CAN_BASEUPDATE_FILE                       "RTICANMM_MAIN_CAN_2_BASEUPDATE.h"
#undef BASEUPDATE_ACTIVE                          
#define CAN_DEFS_FILE                             "RTICANMM_MAIN_CAN_2_DEFS.h"
#define CAN_MSG_DATA_FILE                         "RTICANMM_MAIN_CAN_2_MSG_DATA.h"
#define CAN_ID_TABLE_FILE                         "RTICANMM_MAIN_CAN_2_ID_TABLE.h"
#define CAN_GLOBAL_ENABLE_TX                      CANMMCAN_2_TXGE
#define CAN_GLOBAL_ENABLE                         CANMMCAN_2_GE
#define CAN_VAR_ENABLE                            CANMM_CTL_SETUP_CAN_2_ID
#define CAN_VAR_TRAFFIC                           CANMMCAN_2_TRAFFIC
#define CANMM_RESET2DEFAULTS                      CANMMCAN_2_RE
#define CAN_SENDBYKICKOUT                         CANMMCAN_2_BYKICK
#define CAN_ENABLE                                CANMMCAN_2_TXEN
#define CAN_WOULDBESENT                           CANMMCAN_2_WBS
#define CAN_ENABLE_TIMEOUT                        CANMMCAN_2_TXTOUT
#define CAN_CYCLIC                                CANMMCAN_2_TXC
#define CAN_RX_DATA                               CANMMCAN_2_RX
#define CAN_TX_DATA                               CANMMCAN_2_TX
#define CAN_NUM_LOST                              CANMMCAN_2_NL
#define CAN_NUM_LOST_RESET                        CANMMCAN_2_NLR
#define rticanmmsaturation(value, maximum, minimum)((value >= maximum)? maximum : ((value <= minimum)? minimum : value))
#define rticanmmmaxsat(value, maximum, minimum)   ((value >= maximum)? maximum : value)
#define CAN_SIGNAL_HEADERFILE                     "RTICANMM_MAIN_CAN_2_SIGNAL_DEFAULTS.h"
#define CAN_MESSAGE_HEADERFILE                    "RTICANMM_MAIN_CAN_2_MESSAGE_DEFAULTS.h"
#define ENABLE_PORT                               0
#undef ONLYCAPTURE                                
#define TX_LOOPBACK                               1
#define TX_CYCLETIME                              CANMMCAN_2_TXCT
#define TX_DELAYTIME                              CANMMCAN_2_TXDT
#define TX_KICKOUT                                CANMMCAN_2_TXKOUT
#define TX_KICKOUT_INTERN                         CANMMCAN_2_TXKIN
#define TX_KICKOUT_INTERN_EXTERN                  CANMMCAN_2_TXKIEX
#define TX_KICKOUT_CHECK_INTERN_EXTERN            CANMMCAN_2_TXKIEXC
#define RX_STATUS                                 CANMMCAN_2_RXsta
#define TX_STATUS                                 CANMMCAN_2_TXsta
#define TX_MESSAGES_EXIST                         1
#undef CAPTURE_KNOWN_MSGS
#define CAPTUREFCN                                CANMMCAN_2_CAPF
#define CAPTURE_INDEX_MAX                         25
#define CAPTURE_STATUS                            CANMMCAN_2_CAPS
#define USE_CAPTURE                               
#define CAPTUREMASK_EXT                           0
#define CAPTUREFILTER_EXT                         0
#define CAPTUREMASK_STD                           65528
#define CAPTUREFILTER_STD                         1656
#define CANMM_Q_NUM                               50

#if (RTICANMM_FEEDTHROUGH_CHECK)        
static const void * GetInputPortSignal(SimStruct *S, int port_num);
static int CheckDirectFeedThroughInputPort(SimStruct *S, int port_num);
#else                                                              
#define GetInputPortSignal ssGetInputPortSignal                    
#endif //RTICANMM_FEEDTHROUGH_CHECK                                
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */               
                                                                   
