/*****************************************************************************************************************************/
/* RTICANMM_MAIN_Vehicle_CAN_Globals */
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

#undef DEBUG              
#undef IDMANIPULATION
#define WITHOUT_DELAY
#undef NO_TX         
#define KICKOUT_ACTIVE               
#define NOCANID  0xEFFFFFFF
#define S_FUNCTION_NAME                           RTICANMM_MAIN_Vehicle_CAN
#define S_FUNCTION_LEVEL 2
#include "simstruc.h"
#include <math.h>
                                                       
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                            
# include "dsRTICANMMGlobals.h"
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */                                                                  
                                                       
                                                       
#define NUM_TX_INPUT                              143
#define NUM_TX_MSG                                12
#define NUM_RX_OUTPUT                             541
#define NUM_RX_MSG                                32
#define NUM_RX                                    258
#define NUM_TX                                    143
#define TX_PORT_DATA_TYPES                        "RTICANMM_MAIN_Vehicle_CAN_TX_PORT.h"
#define RX_PORT_DATA_TYPES                        "RTICANMM_MAIN_Vehicle_CAN_RX_PORT.h"
#define TX_WRITE_PORT_DATA                        "RTICANMM_MAIN_Vehicle_CAN_TX_INPUT.h"
#define RX_WRITE_PORT_DATA                        "RTICANMM_MAIN_Vehicle_CAN_RX_OUTPUT.h"
                                                       
                                                       
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
#define CAN_BASEUPDATE_FILE                       "RTICANMM_MAIN_Vehicle_CAN_BASEUPDATE.h"
#undef BASEUPDATE_ACTIVE                          
#define CAN_DEFS_FILE                             "RTICANMM_MAIN_Vehicle_CAN_DEFS.h"
#define CAN_MSG_DATA_FILE                         "RTICANMM_MAIN_Vehicle_CAN_MSG_DATA.h"
#define CAN_ID_TABLE_FILE                         "RTICANMM_MAIN_Vehicle_CAN_ID_TABLE.h"
#define CAN_GLOBAL_ENABLE_TX                      CANMMVehicle_CAN_TXGE
#define CAN_GLOBAL_ENABLE                         CANMMVehicle_CAN_GE
#define CAN_VAR_ENABLE                            CANMM_CTL_SETUP_Vehicle_CAN_ID
#define CAN_VAR_TRAFFIC                           CANMMVehicle_CAN_TRAFFIC
#define CANMM_RESET2DEFAULTS                      CANMMVehicle_CAN_RE
#define CAN_SENDBYKICKOUT                         CANMMVehicle_CAN_BYKICK
#define CAN_ENABLE                                CANMMVehicle_CAN_TXEN
#define CAN_WOULDBESENT                           CANMMVehicle_CAN_WBS
#define CAN_ENABLE_TIMEOUT                        CANMMVehicle_CAN_TXTOUT
#define CAN_CYCLIC                                CANMMVehicle_CAN_TXC
#define CAN_RX_DATA                               CANMMVehicle_CAN_RX
#define CAN_TX_DATA                               CANMMVehicle_CAN_TX
#define CAN_NUM_LOST                              CANMMVehicle_CAN_NL
#define CAN_NUM_LOST_RESET                        CANMMVehicle_CAN_NLR
#define rticanmmsaturation(value, maximum, minimum)((value >= maximum)? maximum : ((value <= minimum)? minimum : value))
#define rticanmmmaxsat(value, maximum, minimum)   ((value >= maximum)? maximum : value)
#define CAN_SIGNAL_HEADERFILE                     "RTICANMM_MAIN_Vehicle_CAN_SIGNAL_DEFAULTS.h"
#define CAN_MESSAGE_HEADERFILE                    "RTICANMM_MAIN_Vehicle_CAN_MESSAGE_DEFAULTS.h"
#define ENABLE_PORT                               0
#undef ONLYCAPTURE                                
#define TX_LOOPBACK                               1
#define TX_CYCLETIME                              CANMMVehicle_CAN_TXCT
#define TX_DELAYTIME                              CANMMVehicle_CAN_TXDT
#define TX_KICKOUT                                CANMMVehicle_CAN_TXKOUT
#define TX_KICKOUT_INTERN                         CANMMVehicle_CAN_TXKIN
#define TX_KICKOUT_INTERN_EXTERN                  CANMMVehicle_CAN_TXKIEX
#define TX_KICKOUT_CHECK_INTERN_EXTERN            CANMMVehicle_CAN_TXKIEXC
#define RX_STATUS                                 CANMMVehicle_CAN_RXsta
#define TX_STATUS                                 CANMMVehicle_CAN_TXsta
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
                                                                   
