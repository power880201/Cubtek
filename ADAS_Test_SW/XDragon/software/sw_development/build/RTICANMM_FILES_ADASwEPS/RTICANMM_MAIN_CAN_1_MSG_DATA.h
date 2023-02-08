/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_1_MSG_DATA */
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

/* Global variables used for signal decoding */                               
static ULong64 ulong64Temp  = 0;                                              
static Long64  long64Temp   = 0;                                              
static Int32   signedTemp   = 0;                                              
static UInt32  unsignedTemp = 0;                                              
static Float32 floatTemp    = 0.0;                                            
static double  doubleTemp   = 0.0;                                            


void RTICANMM_MAIN_CAN_1_copy_ABS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ABS2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ABS3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ABS4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_AC1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ADAS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ADAS2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ADAS3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ADAS4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ADAS5(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_BCM1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_BCM2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_CSW1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ECM1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ECM2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ECM3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ECM9(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_EPAS2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_EPAS3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_EPB1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_ESMCU1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_FECU1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_HCU3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_HCU4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_HMI1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_HMI2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_Meter1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_Meter3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_SAS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_TCM1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_TCM2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_VCU1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_1_copy_VCU2(MainSetupMsgData* data, int direction, SimStruct *S);
                                           
/* Message for custom code manipulations */         
static RTICANMMMsgStruct custCodeMsg;               
                                                    
static void custCodeMsg2Data(RTICANMMMsgStruct *msg, MainSetupMsgData *data) {         
  int i = 0;                                        
  int rawBytes = 0;                                 
  data->CANMsg.Format  = (CanMM_Msg_Format) msg->idformat;
  data->CANMsg.Id      = msg->identifier;           
  data->CANMsg.Dlc     = msg->len;                  
  switch(data->CANMsg.Format) {                     
      case CANMM_MSG_FORMAT_FD_STD_SLOW:            
      case CANMM_MSG_FORMAT_FD_EXT_SLOW:            
      case CANMM_MSG_FORMAT_FD_STD_FAST:            
      case CANMM_MSG_FORMAT_FD_EXT_FAST:            
          rawBytes = (msg->len<8 ? 8 : msg->len);   
          break;                                    
      default:                                      
          rawBytes = 8;                             
          break;                                    
  }                                                 
  for (i=0; i<rawBytes && i<64; i++) {              
      data->pData[i] = msg->RAW_DATA[i];            
  }                                                 
  data->DelayTime   = msg->DelayTime;               
  data->CycleTime   = msg->CycleTime;               
  data->Status      = msg->status;                  
  data->TXCounter   = msg->TX_counter;              
  data->RXCounter   = msg->RX_counter;              
}                                                   
                                                    
                                                    
/* CustomCode requires all data (TX path) */        
static void data2CustCodeMsg(MainSetupMsgData *data, RTICANMMMsgStruct *msg) {        
  int i = 0;                                        
  int rawBytes = 0;                                 
  msg->idformat    = (int)data->CANMsg.Format;      
  msg->identifier  = data->CANMsg.Id;               
  msg->DelayTime   = data->DelayTime;               
  msg->CycleTime   = data->CycleTime;               
  msg->status      = data->Status;                  
  msg->TX_counter  = data->TXCounter;               
  msg->RX_counter  = data->RXCounter;               
                                                    
  msg->deltatime   = data->DeltaTime;               
  msg->time        = data->CANMsg.TimeStamp;        
                                                    
  msg->len         = data->CANMsg.Dlc;              
  switch(data->CANMsg.Format) {                     
      case CANMM_MSG_FORMAT_FD_STD_SLOW:            
      case CANMM_MSG_FORMAT_FD_EXT_SLOW:            
      case CANMM_MSG_FORMAT_FD_STD_FAST:            
      case CANMM_MSG_FORMAT_FD_EXT_FAST:            
          rawBytes = (data->CANMsg.Dlc<8 ? 8 : data->CANMsg.Dlc);     
          break;                                    
      default:                                      
          rawBytes = 8;                             
          break;                                    
  }                                                 
  for (i=0; i<rawBytes && i<64; i++) {              
      msg->RAW_DATA[i] = data->pData[i];            
  }                                                 
}                                                   
                                                    
/*----------------------------------------------------------------------------------------------*/
/* ----- ABS1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ABS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[5] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 11))[0] = CANMMCAN_1_RXt[5];   
    ((real_T*) ssGetOutputPortSignal(S, 12))[0] = CANMMCAN_1_RXdt[5];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[5] = data->CANMsg.Dlc;                                  
                                                                
/* BoosterVac */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_1_Sgn_1 = (double)0.3937 * (double)unsignedTemp + (double)(0);                    

/* GRADE */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_1_Sgn_2 = (double)0.354331 * (double)unsignedTemp + (double)(-45);                    

/* BoosterVac_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_1_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BoosterVac_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_1_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* GRADE_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_1_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TCSReqVal_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_1_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TCSReqStrat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_1_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TCSRollCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_1_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TCSReqProt */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_1_Sgn_9 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* TCSReqVal */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_1_Sgn_10 = (double)0.39215 * (double)unsignedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 0))[0] = CANMMCAN_1_RX_Msg_1_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 1))[0] = CANMMCAN_1_RX_Msg_1_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 2))[0] = CANMMCAN_1_RX_Msg_1_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 3))[0] = CANMMCAN_1_RX_Msg_1_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 4))[0] = CANMMCAN_1_RX_Msg_1_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 5))[0] = CANMMCAN_1_RX_Msg_1_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 6))[0] = CANMMCAN_1_RX_Msg_1_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 7))[0] = CANMMCAN_1_RX_Msg_1_Sgn_8;
((uint16_T*) ssGetOutputPortSignal(S, 8))[0] = CANMMCAN_1_RX_Msg_1_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 9))[0] = CANMMCAN_1_RX_Msg_1_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 13))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 14))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 15))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 16))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 17))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 18))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 19))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 20))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS2  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ABS2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[6] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 37))[0] = CANMMCAN_1_RXt[6];   
    ((real_T*) ssGetOutputPortSignal(S, 38))[0] = CANMMCAN_1_RXdt[6];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[6] = data->CANMsg.Dlc;                                  
                                                                
/* VehSpeed_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_2_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VehSpeed_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_2_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HSA_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HSA_Active */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BrkSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BrkSw_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EBD_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TCS_Enabled */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TCS_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ESC_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ABS_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TCS_Active */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ESC_Active */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ABS_Active */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_2_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VehSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_2_Sgn_15 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 21))[0] = CANMMCAN_1_RX_Msg_2_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 22))[0] = CANMMCAN_1_RX_Msg_2_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 23))[0] = CANMMCAN_1_RX_Msg_2_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 24))[0] = CANMMCAN_1_RX_Msg_2_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 25))[0] = CANMMCAN_1_RX_Msg_2_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 26))[0] = CANMMCAN_1_RX_Msg_2_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 27))[0] = CANMMCAN_1_RX_Msg_2_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 28))[0] = CANMMCAN_1_RX_Msg_2_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 29))[0] = CANMMCAN_1_RX_Msg_2_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 30))[0] = CANMMCAN_1_RX_Msg_2_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 31))[0] = CANMMCAN_1_RX_Msg_2_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 32))[0] = CANMMCAN_1_RX_Msg_2_Sgn_12;
((boolean_T*) ssGetOutputPortSignal(S, 33))[0] = CANMMCAN_1_RX_Msg_2_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 34))[0] = CANMMCAN_1_RX_Msg_2_Sgn_14;
((real_T*) ssGetOutputPortSignal(S, 35))[0] = CANMMCAN_1_RX_Msg_2_Sgn_15;
((uint8_T*) ssGetOutputPortSignal(S, 39))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 40))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 41))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 42))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 43))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 44))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 45))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 46))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS3  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ABS3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[8] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 56))[0] = CANMMCAN_1_RXt[8];   
    ((real_T*) ssGetOutputPortSignal(S, 57))[0] = CANMMCAN_1_RXdt[8];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[8] = data->CANMsg.Dlc;                                  
                                                                
/* LF_RawWhlSpeed_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_3_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LF_RawWhlSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMCAN_1_RX_Msg_3_Sgn_2 = (double)0.015625 * (double)unsignedTemp + (double)(0);                    

/* RF_RawWhlSpeed_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_3_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RF_RawWhlSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMCAN_1_RX_Msg_3_Sgn_4 = (double)0.015625 * (double)unsignedTemp + (double)(0);                    

/* LR_RawWhlSpeed_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_3_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LR_RawWhlSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMCAN_1_RX_Msg_3_Sgn_6 = (double)0.015625 * (double)unsignedTemp + (double)(0);                    

/* RR_RawWhlSpeed_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_3_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RR_RawWhlSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMCAN_1_RX_Msg_3_Sgn_8 = (double)0.015625 * (double)unsignedTemp + (double)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 47))[0] = CANMMCAN_1_RX_Msg_3_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 48))[0] = CANMMCAN_1_RX_Msg_3_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 49))[0] = CANMMCAN_1_RX_Msg_3_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 50))[0] = CANMMCAN_1_RX_Msg_3_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 51))[0] = CANMMCAN_1_RX_Msg_3_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 52))[0] = CANMMCAN_1_RX_Msg_3_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 53))[0] = CANMMCAN_1_RX_Msg_3_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 54))[0] = CANMMCAN_1_RX_Msg_3_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 58))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 59))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 60))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 61))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 62))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 63))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 64))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 65))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS4  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ABS4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[13] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 75))[0] = CANMMCAN_1_RXt[13];   
    ((real_T*) ssGetOutputPortSignal(S, 76))[0] = CANMMCAN_1_RXdt[13];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[13] = data->CANMsg.Dlc;                                  
                                                                
/* LongAccel */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_4_Sgn_1 = (double)0.01 * (double)unsignedTemp + (double)(-1.27);                    

/* YawRate */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_4_Sgn_2 = (double)0.1 * (double)unsignedTemp + (double)(-100);                    

/* LatAccel */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_4_Sgn_3 = (double)0.01 * (double)unsignedTemp + (double)(-1.27);                    

/* MCPressure */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMCAN_1_RX_Msg_4_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-11.6);                    

/* MCPressure_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_4_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LongAccel_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_4_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LatAccel_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_4_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* YawRate_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_4_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 66))[0] = CANMMCAN_1_RX_Msg_4_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 67))[0] = CANMMCAN_1_RX_Msg_4_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 68))[0] = CANMMCAN_1_RX_Msg_4_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 69))[0] = CANMMCAN_1_RX_Msg_4_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 70))[0] = CANMMCAN_1_RX_Msg_4_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 71))[0] = CANMMCAN_1_RX_Msg_4_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 72))[0] = CANMMCAN_1_RX_Msg_4_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 73))[0] = CANMMCAN_1_RX_Msg_4_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 77))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 78))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 79))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 80))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 81))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 82))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 83))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 84))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- AC1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_AC1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[25] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 87))[0] = CANMMCAN_1_RXt[25];   
    ((real_T*) ssGetOutputPortSignal(S, 88))[0] = CANMMCAN_1_RXdt[25];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[25] = data->CANMsg.Dlc;                                  
                                                                
/* Sta_Out_Temp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_5_Sgn_1 = (Int16)1 * (Int16)unsignedTemp + (Int16)(-40);                    

((int16_T*) ssGetOutputPortSignal(S, 85))[0] = CANMMCAN_1_RX_Msg_5_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 89))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 90))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 91))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 92))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 93))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 94))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 95))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 96))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ADAS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[9] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[9] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS1_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_6_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS1_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_6_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_TqRatio */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_6_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_StrTqReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_6_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_StrAngReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_6_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LFCTranGain_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_6_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_EPSMode */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_6_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LKAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_6_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LFCStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_6_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_StrTqReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_6_Sgn_10 = (double)0.005 * (double)unsignedTemp + (double)(-10);                    

/* ADAS_LFCTransGain */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_6_Sgn_11 = (double)0.01 * (double)unsignedTemp + (double)(0.8);                    

/* ADAS_StrAngReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_6_Sgn_12 = (double)0.1 * (double)unsignedTemp + (double)(-720);                    

((uint8_T*) ssGetOutputPortSignal(S, 97))[0] = CANMMCAN_1_RX_Msg_6_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 98))[0] = CANMMCAN_1_RX_Msg_6_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 99))[0] = CANMMCAN_1_RX_Msg_6_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 100))[0] = CANMMCAN_1_RX_Msg_6_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 101))[0] = CANMMCAN_1_RX_Msg_6_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 102))[0] = CANMMCAN_1_RX_Msg_6_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 103))[0] = CANMMCAN_1_RX_Msg_6_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 104))[0] = CANMMCAN_1_RX_Msg_6_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 105))[0] = CANMMCAN_1_RX_Msg_6_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 106))[0] = CANMMCAN_1_RX_Msg_6_Sgn_10;
((real_T*) ssGetOutputPortSignal(S, 107))[0] = CANMMCAN_1_RX_Msg_6_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 108))[0] = CANMMCAN_1_RX_Msg_6_Sgn_12;
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS1_Checksum */
CANMMCAN_1_TX_Msg_6_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,1))[0];

/* ADAS1_LifeCount */
CANMMCAN_1_TX_Msg_6_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,2))[0];

/* ADAS_TqRatio */
CANMMCAN_1_TX_Msg_6_Sgn_3 = ((uint8_T*)GetInputPortSignal(S,3))[0];

/* ADAS_StrTqReq_A */
CANMMCAN_1_TX_Msg_6_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,4))[0];

/* ADAS_StrAngReq_A */
CANMMCAN_1_TX_Msg_6_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,5))[0];

/* ADAS_LFCTranGain_A */
CANMMCAN_1_TX_Msg_6_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,6))[0];

/* ADAS_EPSMode */
CANMMCAN_1_TX_Msg_6_Sgn_7 = ((uint8_T*)GetInputPortSignal(S,7))[0];

/* ADAS_LKAStatus */
CANMMCAN_1_TX_Msg_6_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,8))[0];

/* ADAS_LFCStatus */
CANMMCAN_1_TX_Msg_6_Sgn_9 = ((uint8_T*)GetInputPortSignal(S,9))[0];

/* ADAS_StrTqReq */
CANMMCAN_1_TX_Msg_6_Sgn_10 = ((real_T*)GetInputPortSignal(S,10))[0];

/* ADAS_LFCTransGain */
CANMMCAN_1_TX_Msg_6_Sgn_11 = ((real_T*)GetInputPortSignal(S,11))[0];

/* ADAS_StrAngReq */
CANMMCAN_1_TX_Msg_6_Sgn_12 = ((real_T*)GetInputPortSignal(S,12))[0];
/* ADAS1_Checksum */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_6_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS1_LifeCount */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_6_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_TqRatio */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_6_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_StrTqReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_6_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_StrAngReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_6_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_LFCTranGain_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_6_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_EPSMode */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_6_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 3;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x3 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_LKAStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_6_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_LFCStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_6_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x7 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_StrTqReq */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_6_Sgn_10 - (-10)) / ((double)0.005)) + (CANMMCAN_1_TX_Msg_6_Sgn_10 > -10) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               

/* ADAS_LFCTransGain */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_6_Sgn_11 - (0.8)) / ((double)0.01)) + (CANMMCAN_1_TX_Msg_6_Sgn_11 > 0.8) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_StrAngReq */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_6_Sgn_12 - (-720)) / ((double)0.1)) + (CANMMCAN_1_TX_Msg_6_Sgn_12 > -720) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_1_TXLEN[0], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_1_MIDRX[9];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_1_MIDFTX[9];  
CANMMCAN_1_TXsta[0] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS2  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ADAS2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[11] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[11] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS2_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_7_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS2_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_7_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_VirtualGear */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_7_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_ACCStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_7_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_BHapticReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_VehHoldReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_BPrefillReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_BPrefillReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_AEBReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_AEBReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_DecReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_7_Sgn_11 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ADAS_ForceIdle_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_DecReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_PTTqReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_ForceIdle */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_7_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_PTTqReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_7_Sgn_16 = (double)0.2 * (double)unsignedTemp + (double)(-100);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS2_Checksum */
CANMMCAN_1_TX_Msg_7_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,13))[0];

/* ADAS2_LifeCount */
CANMMCAN_1_TX_Msg_7_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,14))[0];

/* ADAS_VirtualGear */
CANMMCAN_1_TX_Msg_7_Sgn_3 = ((uint8_T*)GetInputPortSignal(S,15))[0];

/* ADAS_ACCStatus */
CANMMCAN_1_TX_Msg_7_Sgn_4 = ((uint8_T*)GetInputPortSignal(S,16))[0];

/* ADAS_BHapticReq */
CANMMCAN_1_TX_Msg_7_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,17))[0];

/* ADAS_VehHoldReq */
CANMMCAN_1_TX_Msg_7_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,18))[0];

/* ADAS_BPrefillReq_A */
CANMMCAN_1_TX_Msg_7_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,19))[0];

/* ADAS_BPrefillReq */
CANMMCAN_1_TX_Msg_7_Sgn_8 = ((boolean_T*)GetInputPortSignal(S,20))[0];

/* ADAS_AEBReq_A */
CANMMCAN_1_TX_Msg_7_Sgn_9 = ((boolean_T*)GetInputPortSignal(S,21))[0];

/* ADAS_AEBReq */
CANMMCAN_1_TX_Msg_7_Sgn_10 = ((boolean_T*)GetInputPortSignal(S,22))[0];

/* ADAS_DecReq */
CANMMCAN_1_TX_Msg_7_Sgn_11 = ((real_T*)GetInputPortSignal(S,23))[0];

/* ADAS_ForceIdle_A */
CANMMCAN_1_TX_Msg_7_Sgn_12 = ((boolean_T*)GetInputPortSignal(S,24))[0];

/* ADAS_DecReq_A */
CANMMCAN_1_TX_Msg_7_Sgn_13 = ((boolean_T*)GetInputPortSignal(S,25))[0];

/* ADAS_PTTqReq_A */
CANMMCAN_1_TX_Msg_7_Sgn_14 = ((boolean_T*)GetInputPortSignal(S,26))[0];

/* ADAS_ForceIdle */
CANMMCAN_1_TX_Msg_7_Sgn_15 = ((boolean_T*)GetInputPortSignal(S,27))[0];

/* ADAS_PTTqReq */
CANMMCAN_1_TX_Msg_7_Sgn_16 = ((real_T*)GetInputPortSignal(S,28))[0];
/* ADAS2_Checksum */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS2_LifeCount */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_VirtualGear */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ACCStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_BHapticReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_VehHoldReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_BPrefillReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_BPrefillReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_AEBReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_AEBReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_10 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_DecReq */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_7_Sgn_11 - (0)) / ((double)0.1)) + (CANMMCAN_1_TX_Msg_7_Sgn_11 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ForceIdle_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_12 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_DecReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_13 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_PTTqReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_14 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ForceIdle */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_7_Sgn_15 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_PTTqReq */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_7_Sgn_16 - (-100)) / ((double)0.2)) + (CANMMCAN_1_TX_Msg_7_Sgn_16 > -100) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_1_TXLEN[1], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_1_MIDRX[11];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_1_MIDFTX[11];  
CANMMCAN_1_TXsta[1] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS3  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ADAS3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[12] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[12] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS3_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_8_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS3_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_8_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_ShftPosnReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_8_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_ShftPosnReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_8_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_VehSpdLim_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_8_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_GearPosnReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_8_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_GearPosnReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_8_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_VehSpdLim */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_8_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS3_Checksum */
CANMMCAN_1_TX_Msg_8_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,29))[0];

/* ADAS3_LifeCount */
CANMMCAN_1_TX_Msg_8_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,30))[0];

/* ADAS_ShftPosnReq_A */
CANMMCAN_1_TX_Msg_8_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,31))[0];

/* ADAS_ShftPosnReq */
CANMMCAN_1_TX_Msg_8_Sgn_4 = ((uint8_T*)GetInputPortSignal(S,32))[0];

/* ADAS_VehSpdLim_A */
CANMMCAN_1_TX_Msg_8_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,33))[0];

/* ADAS_GearPosnReq_A */
CANMMCAN_1_TX_Msg_8_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,34))[0];

/* ADAS_GearPosnReq */
CANMMCAN_1_TX_Msg_8_Sgn_7 = ((uint8_T*)GetInputPortSignal(S,35))[0];

/* ADAS_VehSpdLim */
CANMMCAN_1_TX_Msg_8_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,36))[0];
/* ADAS3_Checksum */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_8_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS3_LifeCount */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_8_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ShftPosnReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_8_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ShftPosnReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_8_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_VehSpdLim_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_8_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_GearPosnReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_8_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_GearPosnReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_8_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_VehSpdLim */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_8_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_1_TXLEN[2], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_1_MIDRX[12];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_1_MIDFTX[12];  
CANMMCAN_1_TXsta[2] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS4  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ADAS4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[21] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[21] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS_MIL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADASFaultWarnReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ForceLowBeam */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* OffSoundReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* OnSoundReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LeftTurnLightReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RightTurnLightReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HazardWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HapticWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* APSEnable */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PilotMode */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_9_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* IGSAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_9_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LFCMode */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MAPPStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MAPAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LCSStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LFCStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_17 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LKAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_18 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_19 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FCWStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_20 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* AEBStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_9_Sgn_21 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MAPPHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_9_Sgn_22 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MAPAHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_23 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LCSHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_9_Sgn_24 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LFCHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_25 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LKAHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_26 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* IGSAHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_27 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* AEBHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_28 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_29 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FCWHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_9_Sgn_30 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS_MIL */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_1 = ((boolean_T*)GetInputPortSignal(S,37))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_1 = CANMMCAN_1_TX_Msg_9_Sgn_1kD;                       
}                                

/* ADASFaultWarnReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,38))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_2 = CANMMCAN_1_TX_Msg_9_Sgn_2kD;                       
}                                

/* ForceLowBeam */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,39))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_3 = CANMMCAN_1_TX_Msg_9_Sgn_3kD;                       
}                                

/* OffSoundReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,40))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_4 = CANMMCAN_1_TX_Msg_9_Sgn_4kD;                       
}                                

/* OnSoundReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,41))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_5 = CANMMCAN_1_TX_Msg_9_Sgn_5kD;                       
}                                

/* LeftTurnLightReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,42))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_6 = CANMMCAN_1_TX_Msg_9_Sgn_6kD;                       
}                                

/* RightTurnLightReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,43))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_7 = CANMMCAN_1_TX_Msg_9_Sgn_7kD;                       
}                                

/* HazardWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_8 = ((boolean_T*)GetInputPortSignal(S,44))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_8 = CANMMCAN_1_TX_Msg_9_Sgn_8kD;                       
}                                

/* HapticWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_9 = ((boolean_T*)GetInputPortSignal(S,45))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_9 = CANMMCAN_1_TX_Msg_9_Sgn_9kD;                       
}                                

/* APSEnable */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_10 = ((boolean_T*)GetInputPortSignal(S,46))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_10 = CANMMCAN_1_TX_Msg_9_Sgn_10kD;                       
}                                

/* PilotMode */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_11 = ((uint8_T*)GetInputPortSignal(S,47))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_11 = CANMMCAN_1_TX_Msg_9_Sgn_11kD;                       
}                                

/* IGSAStatus */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_12 = ((uint8_T*)GetInputPortSignal(S,48))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_12 = CANMMCAN_1_TX_Msg_9_Sgn_12kD;                       
}                                

/* LFCMode */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_13 = ((uint8_T*)GetInputPortSignal(S,49))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_13 = CANMMCAN_1_TX_Msg_9_Sgn_13kD;                       
}                                

/* MAPPStatus */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_14 = ((uint8_T*)GetInputPortSignal(S,50))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_14 = CANMMCAN_1_TX_Msg_9_Sgn_14kD;                       
}                                

/* MAPAStatus */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_15 = ((uint8_T*)GetInputPortSignal(S,51))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_15 = CANMMCAN_1_TX_Msg_9_Sgn_15kD;                       
}                                

/* LCSStatus */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_16 = ((uint8_T*)GetInputPortSignal(S,52))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_16 = CANMMCAN_1_TX_Msg_9_Sgn_16kD;                       
}                                

/* LFCStatus */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_17 = ((uint8_T*)GetInputPortSignal(S,53))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_17 = CANMMCAN_1_TX_Msg_9_Sgn_17kD;                       
}                                

/* LKAStatus */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_18 = ((uint8_T*)GetInputPortSignal(S,54))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_18 = CANMMCAN_1_TX_Msg_9_Sgn_18kD;                       
}                                

/* ACCStatus */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_19 = ((uint8_T*)GetInputPortSignal(S,55))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_19 = CANMMCAN_1_TX_Msg_9_Sgn_19kD;                       
}                                

/* FCWStatus */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_20 = ((uint8_T*)GetInputPortSignal(S,56))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_20 = CANMMCAN_1_TX_Msg_9_Sgn_20kD;                       
}                                

/* AEBStatus */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_21 = ((uint8_T*)GetInputPortSignal(S,57))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_21 = CANMMCAN_1_TX_Msg_9_Sgn_21kD;                       
}                                

/* MAPPHMIWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_22 = ((uint8_T*)GetInputPortSignal(S,58))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_22 = CANMMCAN_1_TX_Msg_9_Sgn_22kD;                       
}                                

/* MAPAHMIWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_23 = ((uint8_T*)GetInputPortSignal(S,59))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_23 = CANMMCAN_1_TX_Msg_9_Sgn_23kD;                       
}                                

/* LCSHMIWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_24 = ((uint8_T*)GetInputPortSignal(S,60))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_24 = CANMMCAN_1_TX_Msg_9_Sgn_24kD;                       
}                                

/* LFCHMIWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_25 = ((boolean_T*)GetInputPortSignal(S,61))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_25 = CANMMCAN_1_TX_Msg_9_Sgn_25kD;                       
}                                

/* LKAHMIWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_26 = ((boolean_T*)GetInputPortSignal(S,62))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_26 = CANMMCAN_1_TX_Msg_9_Sgn_26kD;                       
}                                

/* IGSAHMIWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_27 = ((boolean_T*)GetInputPortSignal(S,63))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_27 = CANMMCAN_1_TX_Msg_9_Sgn_27kD;                       
}                                

/* AEBHMIWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_28 = ((boolean_T*)GetInputPortSignal(S,64))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_28 = CANMMCAN_1_TX_Msg_9_Sgn_28kD;                       
}                                

/* ACCHMIWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_29 = ((boolean_T*)GetInputPortSignal(S,65))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_29 = CANMMCAN_1_TX_Msg_9_Sgn_29kD;                       
}                                

/* FCWHMIWarningReq */
if(0 == CAN_SENDBYKICKOUT[5]) { 
  CANMMCAN_1_TX_Msg_9_Sgn_30 = ((boolean_T*)GetInputPortSignal(S,66))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_9_Sgn_30 = CANMMCAN_1_TX_Msg_9_Sgn_30kD;                       
}                                
/* ADAS_MIL */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADASFaultWarnReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* ForceLowBeam */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* OffSoundReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* OnSoundReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* LeftTurnLightReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* RightTurnLightReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* HazardWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* HapticWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* APSEnable */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_10 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* PilotMode */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_11 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 2;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x7 << 2))) | INT8_TO_BE(unsignedTemp);               

/* IGSAStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_12 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* LFCMode */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_13 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x3 << 0))) | INT8_TO_BE(unsignedTemp);               

/* MAPPStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_14 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 2;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x3 << 2))) | INT8_TO_BE(unsignedTemp);               

/* MAPAStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_15 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 4;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x3 << 4))) | INT8_TO_BE(unsignedTemp);               

/* LCSStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_16 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 6;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x3 << 6))) | INT8_TO_BE(unsignedTemp);               

/* LFCStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_17 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 0))) | INT8_TO_BE(unsignedTemp);               

/* LKAStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_18 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 2;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ACCStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_19 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 4;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 4))) | INT8_TO_BE(unsignedTemp);               

/* FCWStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_20 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 6;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 6))) | INT8_TO_BE(unsignedTemp);               

/* AEBStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_21 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x7 << 0))) | INT8_TO_BE(unsignedTemp);               

/* MAPPHMIWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_22 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 3;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x7 << 3))) | INT8_TO_BE(unsignedTemp);               

/* MAPAHMIWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_23 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 6;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x3 << 6))) | INT8_TO_BE(unsignedTemp);               

/* LCSHMIWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_24 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x3 << 0))) | INT8_TO_BE(unsignedTemp);               

/* LFCHMIWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_25 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* LKAHMIWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_26 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* IGSAHMIWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_27 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* AEBHMIWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_28 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ACCHMIWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_29 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* FCWHMIWarningReq */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_9_Sgn_30 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_1_TXLEN[5], (uint8_T)8, (uint8_T)0);

if (0 == CAN_SENDBYKICKOUT[5]) {    
  data->CANMsg.Id = CANMMCAN_1_MIDRX[21];          
}                                    
else {                               
  data->CANMsg.Id  = CANMMCAN_1_IDKICK_9;          
}
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_1_MIDFTX[21];  
CANMMCAN_1_TXsta[5] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS5  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ADAS5(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[22] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[22] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS_FaultMode */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_10_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* NumOfTarget */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3F;                             
CANMMCAN_1_RX_Msg_10_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LaneModeR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_10_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LaneModeL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_10_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SeleTimeGapLvl */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_10_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SetTimeGapLvl */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_10_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* IGSASetSpeed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_10_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCSetSpeed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_10_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SetVehTimeGap */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_10_Sgn_9 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* LeadVehTimeGap */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_10_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* TargetType */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_10_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS_FaultMode */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,67))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_1 = CANMMCAN_1_TX_Msg_10_Sgn_1kD;                       
}                                

/* NumOfTarget */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,68))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_2 = CANMMCAN_1_TX_Msg_10_Sgn_2kD;                       
}                                

/* ADAS_LaneModeR */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_3 = ((uint8_T*)GetInputPortSignal(S,69))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_3 = CANMMCAN_1_TX_Msg_10_Sgn_3kD;                       
}                                

/* ADAS_LaneModeL */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_4 = ((uint8_T*)GetInputPortSignal(S,70))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_4 = CANMMCAN_1_TX_Msg_10_Sgn_4kD;                       
}                                

/* SeleTimeGapLvl */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_5 = ((uint8_T*)GetInputPortSignal(S,71))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_5 = CANMMCAN_1_TX_Msg_10_Sgn_5kD;                       
}                                

/* SetTimeGapLvl */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,72))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_6 = CANMMCAN_1_TX_Msg_10_Sgn_6kD;                       
}                                

/* IGSASetSpeed */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_7 = ((uint8_T*)GetInputPortSignal(S,73))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_7 = CANMMCAN_1_TX_Msg_10_Sgn_7kD;                       
}                                

/* ACCSetSpeed */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,74))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_8 = CANMMCAN_1_TX_Msg_10_Sgn_8kD;                       
}                                

/* SetVehTimeGap */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_9 = ((real_T*)GetInputPortSignal(S,75))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_9 = CANMMCAN_1_TX_Msg_10_Sgn_9kD;                       
}                                

/* LeadVehTimeGap */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_10 = ((real_T*)GetInputPortSignal(S,76))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_10 = CANMMCAN_1_TX_Msg_10_Sgn_10kD;                       
}                                

/* TargetType */
if(0 == CAN_SENDBYKICKOUT[6]) { 
  CANMMCAN_1_TX_Msg_10_Sgn_11 = ((uint8_T*)GetInputPortSignal(S,77))[0];                             
}                                
else {                           
  CANMMCAN_1_TX_Msg_10_Sgn_11 = CANMMCAN_1_TX_Msg_10_Sgn_11kD;                       
}                                
/* ADAS_FaultMode */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_10_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* NumOfTarget */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_10_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3F)) << 4;                             
*((UInt16*)&data->pData[6]) = (*((UInt16*)&data->pData[6]) & INT16_TO_BE(~(0x3F << 4))) | INT16_TO_BE(unsignedTemp);               

/* ADAS_LaneModeR */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_10_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 2;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x7 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_LaneModeL */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_10_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* SeleTimeGapLvl */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_10_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 2;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x7 << 2))) | INT8_TO_BE(unsignedTemp);               

/* SetTimeGapLvl */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_10_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* IGSASetSpeed */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_10_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ACCSetSpeed */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_10_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* SetVehTimeGap */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_10_Sgn_9 - (0)) / ((double)0.05)) + (CANMMCAN_1_TX_Msg_10_Sgn_9 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* LeadVehTimeGap */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_10_Sgn_10 - (0)) / ((double)0.05)) + (CANMMCAN_1_TX_Msg_10_Sgn_10 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* TargetType */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_10_Sgn_11 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_1_TXLEN[6], (uint8_T)8, (uint8_T)0);

if (0 == CAN_SENDBYKICKOUT[6]) {    
  data->CANMsg.Id = CANMMCAN_1_MIDRX[22];          
}                                    
else {                               
  data->CANMsg.Id  = CANMMCAN_1_IDKICK_10;          
}
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_1_MIDFTX[22];  
CANMMCAN_1_TXsta[6] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- BCM1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_BCM1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[20] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 120))[0] = CANMMCAN_1_RXt[20];   
    ((real_T*) ssGetOutputPortSignal(S, 121))[0] = CANMMCAN_1_RXdt[20];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[20] = data->CANMsg.Dlc;                                  
                                                                
/* BCM_Hazard_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_11_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_LRDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_11_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_RRDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_11_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_TGateSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_11_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_RTurnLp_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_11_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_LTurnLp_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_11_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_AllDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_11_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_PDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_11_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_DDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_11_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_Key_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_11_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 109))[0] = CANMMCAN_1_RX_Msg_11_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 110))[0] = CANMMCAN_1_RX_Msg_11_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 111))[0] = CANMMCAN_1_RX_Msg_11_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 112))[0] = CANMMCAN_1_RX_Msg_11_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 113))[0] = CANMMCAN_1_RX_Msg_11_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 114))[0] = CANMMCAN_1_RX_Msg_11_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 115))[0] = CANMMCAN_1_RX_Msg_11_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 116))[0] = CANMMCAN_1_RX_Msg_11_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 117))[0] = CANMMCAN_1_RX_Msg_11_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 118))[0] = CANMMCAN_1_RX_Msg_11_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 122))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 123))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 124))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 125))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 126))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 127))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 128))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 129))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- BCM2  -----*/  
void RTICANMM_MAIN_CAN_1_copy_BCM2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[18] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 132))[0] = CANMMCAN_1_RXt[18];   
    ((real_T*) ssGetOutputPortSignal(S, 133))[0] = CANMMCAN_1_RXdt[18];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[18] = data->CANMsg.Dlc;                                  
                                                                
/* BCM_SRS_Crash_Info */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_12_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 130))[0] = CANMMCAN_1_RX_Msg_12_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 134))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 135))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 136))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 137))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 138))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 139))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 140))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 141))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- CSW1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_CSW1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[19] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[19] = data->CANMsg.Dlc;                                  
                                                                
/* CSW_RFogLpSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_13_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CSW_FWipSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_13_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CSW_DimSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_13_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 142))[0] = CANMMCAN_1_RX_Msg_13_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 143))[0] = CANMMCAN_1_RX_Msg_13_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 144))[0] = CANMMCAN_1_RX_Msg_13_Sgn_3;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ECM1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[0] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 152))[0] = CANMMCAN_1_RXt[0];   
    ((real_T*) ssGetOutputPortSignal(S, 153))[0] = CANMMCAN_1_RXdt[0];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[0] = data->CANMsg.Dlc;                                  
                                                                
/* CAN_TQFR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_14_Sgn_1 = (double)1.96 * (double)unsignedTemp + (double)(-100);                    

/* CAN_TQI */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_14_Sgn_2 = (double)1.96 * (double)unsignedTemp + (double)(-100);                    

/* CAN_N */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_14_Sgn_3 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

/* CAN_TQI_ACOR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_14_Sgn_4 = (double)1.96 * (double)unsignedTemp + (double)(-100);                    

/* LV_CAN_N_ERR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_14_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LV_CAN_SUB_TQI */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_14_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 145))[0] = CANMMCAN_1_RX_Msg_14_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 146))[0] = CANMMCAN_1_RX_Msg_14_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 147))[0] = CANMMCAN_1_RX_Msg_14_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 148))[0] = CANMMCAN_1_RX_Msg_14_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 149))[0] = CANMMCAN_1_RX_Msg_14_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 150))[0] = CANMMCAN_1_RX_Msg_14_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 154))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 155))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 156))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 157))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 158))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 159))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 160))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 161))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM2  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ECM2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[1] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 166))[0] = CANMMCAN_1_RXt[1];   
    ((real_T*) ssGetOutputPortSignal(S, 167))[0] = CANMMCAN_1_RXdt[1];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[1] = data->CANMsg.Dlc;                                  
                                                                
/* Eng_Hood_SW */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_15_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_OBD_STAT_WU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_15_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_OBD_STAT_DR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_15_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 162))[0] = CANMMCAN_1_RX_Msg_15_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 163))[0] = CANMMCAN_1_RX_Msg_15_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 164))[0] = CANMMCAN_1_RX_Msg_15_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 168))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 169))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 170))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 171))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 172))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 173))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 174))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 175))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM3  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ECM3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[2] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 181))[0] = CANMMCAN_1_RXt[2];   
    ((real_T*) ssGetOutputPortSignal(S, 182))[0] = CANMMCAN_1_RXdt[2];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[2] = data->CANMsg.Dlc;                                  
                                                                
/* CAN_PV_AV */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_16_Sgn_1 = (double)0.3906 * (double)unsignedTemp + (double)(0);                    

/* CAN_PV_EFC */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_16_Sgn_2 = (double)0.3906 * (double)unsignedTemp + (double)(0);                    

/* LV_CAN_ERRPAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_16_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LV_CAN_ERRPVS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_16_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 176))[0] = CANMMCAN_1_RX_Msg_16_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 177))[0] = CANMMCAN_1_RX_Msg_16_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 178))[0] = CANMMCAN_1_RX_Msg_16_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 179))[0] = CANMMCAN_1_RX_Msg_16_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 183))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 184))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 185))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 186))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 187))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 188))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 189))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 190))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM9  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ECM9(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[7] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 197))[0] = CANMMCAN_1_RXt[7];   
    ((real_T*) ssGetOutputPortSignal(S, 198))[0] = CANMMCAN_1_RXdt[7];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[7] = data->CANMsg.Dlc;                                  
                                                                
/* EngTqMin */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_17_Sgn_1 = (double)0.0078 * (double)unsignedTemp + (double)(-100);                    

/* EngTqMax */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_17_Sgn_2 = (double)0.0078 * (double)unsignedTemp + (double)(-100);                    

/* EMSOpState */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_17_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EMSHybridOpState */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_17_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ECM9RollCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_17_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 191))[0] = CANMMCAN_1_RX_Msg_17_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 192))[0] = CANMMCAN_1_RX_Msg_17_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 193))[0] = CANMMCAN_1_RX_Msg_17_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 194))[0] = CANMMCAN_1_RX_Msg_17_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 195))[0] = CANMMCAN_1_RX_Msg_17_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 199))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 200))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 201))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 202))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 203))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 204))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 205))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 206))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- EPAS2  -----*/  
void RTICANMM_MAIN_CAN_1_copy_EPAS2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[16] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 216))[0] = CANMMCAN_1_RXt[16];   
    ((real_T*) ssGetOutputPortSignal(S, 217))[0] = CANMMCAN_1_RXdt[16];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[16] = data->CANMsg.Dlc;                                  
                                                                
/* SAS_CheckSum2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_18_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_MsgCount2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_18_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* R_SAS_Angle */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_18_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-1400);                    

/* Steering_Torque */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_18_Sgn_4 = (double)0.1794 * (double)unsignedTemp + (double)(-22.78);                    

/* Steering_Torque_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_18_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RSP_OK */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_18_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EpasFailed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_18_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Elect_PWR_Consumpt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_18_Sgn_8 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 207))[0] = CANMMCAN_1_RX_Msg_18_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 208))[0] = CANMMCAN_1_RX_Msg_18_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 209))[0] = CANMMCAN_1_RX_Msg_18_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 210))[0] = CANMMCAN_1_RX_Msg_18_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 211))[0] = CANMMCAN_1_RX_Msg_18_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 212))[0] = CANMMCAN_1_RX_Msg_18_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 213))[0] = CANMMCAN_1_RX_Msg_18_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 214))[0] = CANMMCAN_1_RX_Msg_18_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 218))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 219))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 220))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 221))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 222))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 223))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 224))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 225))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* SAS_CheckSum2 */
CANMMCAN_1_TX_Msg_18_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,78))[0];

/* SAS_MsgCount2 */
CANMMCAN_1_TX_Msg_18_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,79))[0];

/* R_SAS_Angle */
CANMMCAN_1_TX_Msg_18_Sgn_3 = ((real_T*)GetInputPortSignal(S,80))[0];

/* Steering_Torque */
CANMMCAN_1_TX_Msg_18_Sgn_4 = ((real_T*)GetInputPortSignal(S,81))[0];

/* Steering_Torque_V */
CANMMCAN_1_TX_Msg_18_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,82))[0];

/* RSP_OK */
CANMMCAN_1_TX_Msg_18_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,83))[0];

/* EpasFailed */
CANMMCAN_1_TX_Msg_18_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,84))[0];

/* Elect_PWR_Consumpt */
CANMMCAN_1_TX_Msg_18_Sgn_8 = ((real_T*)GetInputPortSignal(S,85))[0];
/* SAS_CheckSum2 */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_18_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_MsgCount2 */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_18_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* R_SAS_Angle */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_18_Sgn_3 - (-1400)) / ((double)0.1)) + (CANMMCAN_1_TX_Msg_18_Sgn_3 > -1400) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* Steering_Torque */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_18_Sgn_4 - (-22.78)) / ((double)0.1794)) + (CANMMCAN_1_TX_Msg_18_Sgn_4 > -22.78) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* Steering_Torque_V */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_18_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* RSP_OK */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_18_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* EpasFailed */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_18_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* Elect_PWR_Consumpt */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_18_Sgn_8 - (0)) / ((double)0.5)) + (CANMMCAN_1_TX_Msg_18_Sgn_8 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_1_TXLEN[4], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_1_MIDRX[16];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_1_MIDFTX[16];  
CANMMCAN_1_TXsta[4] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- EPAS3  -----*/  
void RTICANMM_MAIN_CAN_1_copy_EPAS3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[32] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 237))[0] = CANMMCAN_1_RXt[32];   
    ((real_T*) ssGetOutputPortSignal(S, 238))[0] = CANMMCAN_1_RXdt[32];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[32] = data->CANMsg.Dlc;                                  
                                                                
/* EPAS3_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_19_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPAS3_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_19_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CurStrTqReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_19_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CurStrAngReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_19_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPSLFCStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_19_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPSBattVolt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_19_Sgn_6 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* CurStrTqReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_19_Sgn_7 = (double)0.1 * (double)unsignedTemp + (double)(-10);                    

/* EPSADASAbReason */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x1F;                             
CANMMCAN_1_RX_Msg_19_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPSLKAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_19_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CurStrAngReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_19_Sgn_10 = (double)0.1 * (double)unsignedTemp + (double)(-720);                    

((uint8_T*) ssGetOutputPortSignal(S, 226))[0] = CANMMCAN_1_RX_Msg_19_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 227))[0] = CANMMCAN_1_RX_Msg_19_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 228))[0] = CANMMCAN_1_RX_Msg_19_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 229))[0] = CANMMCAN_1_RX_Msg_19_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 230))[0] = CANMMCAN_1_RX_Msg_19_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 231))[0] = CANMMCAN_1_RX_Msg_19_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 232))[0] = CANMMCAN_1_RX_Msg_19_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 233))[0] = CANMMCAN_1_RX_Msg_19_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 234))[0] = CANMMCAN_1_RX_Msg_19_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 235))[0] = CANMMCAN_1_RX_Msg_19_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 239))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 240))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 241))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 242))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 243))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 244))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 245))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 246))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* EPAS3_Checksum */
CANMMCAN_1_TX_Msg_19_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,86))[0];

/* EPAS3_LifeCount */
CANMMCAN_1_TX_Msg_19_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,87))[0];

/* CurStrTqReq_A */
CANMMCAN_1_TX_Msg_19_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,88))[0];

/* CurStrAngReq_A */
CANMMCAN_1_TX_Msg_19_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,89))[0];

/* EPSLFCStatus */
CANMMCAN_1_TX_Msg_19_Sgn_5 = ((uint8_T*)GetInputPortSignal(S,90))[0];

/* EPSBattVolt */
CANMMCAN_1_TX_Msg_19_Sgn_6 = ((real_T*)GetInputPortSignal(S,91))[0];

/* CurStrTqReq */
CANMMCAN_1_TX_Msg_19_Sgn_7 = ((real_T*)GetInputPortSignal(S,92))[0];

/* EPSADASAbReason */
CANMMCAN_1_TX_Msg_19_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,93))[0];

/* EPSLKAStatus */
CANMMCAN_1_TX_Msg_19_Sgn_9 = ((uint8_T*)GetInputPortSignal(S,94))[0];

/* CurStrAngReq */
CANMMCAN_1_TX_Msg_19_Sgn_10 = ((real_T*)GetInputPortSignal(S,95))[0];
/* EPAS3_Checksum */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_19_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* EPAS3_LifeCount */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_19_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* CurStrTqReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_19_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* CurStrAngReq_A */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_19_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* EPSLFCStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_19_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* EPSBattVolt */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_19_Sgn_6 - (0)) / ((double)0.1)) + (CANMMCAN_1_TX_Msg_19_Sgn_6 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* CurStrTqReq */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_19_Sgn_7 - (-10)) / ((double)0.1)) + (CANMMCAN_1_TX_Msg_19_Sgn_7 > -10) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* EPSADASAbReason */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_19_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1F)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1F << 0))) | INT8_TO_BE(unsignedTemp);               

/* EPSLKAStatus */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_19_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* CurStrAngReq */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_19_Sgn_10 - (-720)) / ((double)0.1)) + (CANMMCAN_1_TX_Msg_19_Sgn_10 > -720) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_1_TXLEN[7], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_1_MIDRX[32];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_1_MIDFTX[32];  
CANMMCAN_1_TXsta[7] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- EPB1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_EPB1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[17] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 249))[0] = CANMMCAN_1_RXt[17];   
    ((real_T*) ssGetOutputPortSignal(S, 250))[0] = CANMMCAN_1_RXdt[17];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[17] = data->CANMsg.Dlc;                                  
                                                                
/* PB_BrakeBinStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_20_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 247))[0] = CANMMCAN_1_RX_Msg_20_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 251))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 252))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 253))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 254))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 255))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 256))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 257))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 258))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ESMCU1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_ESMCU1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[26] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[26] = data->CANMsg.Dlc;                                  
                                                                
/* ECO_SW_STA */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_21_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 259))[0] = CANMMCAN_1_RX_Msg_21_Sgn_1;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- FECU1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_FECU1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[23] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[23] = data->CANMsg.Dlc;                                  
                                                                
/* FECU_HiBeamRly_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_22_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FECU_LoBeamRly_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_22_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 260))[0] = CANMMCAN_1_RX_Msg_22_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 261))[0] = CANMMCAN_1_RX_Msg_22_Sgn_2;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- HCU3  -----*/  
void RTICANMM_MAIN_CAN_1_copy_HCU3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[10] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 279))[0] = CANMMCAN_1_RXt[10];   
    ((real_T*) ssGetOutputPortSignal(S, 280))[0] = CANMMCAN_1_RXdt[10];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[10] = data->CANMsg.Dlc;                                  
                                                                
/* HybridLimpHome */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HCU3RollCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_23_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FuelCutReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngCrankType */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngTqIndPermMax_P */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_23_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngTqIndPermMax */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_23_Sgn_6 = (double)0.39215 * (double)unsignedTemp + (double)(0);                    

/* EngTqBrkReq_P */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_23_Sgn_7 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* EngTqBrkReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_23_Sgn_8 = (double)0.0078 * (double)unsignedTemp + (double)(-100);                    

/* EIdleAvail */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EIdleActive */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngStpReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngStpActive */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FuelPumpReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* StarterCrankReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngStrtActive */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACDisableReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_23_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 262))[0] = CANMMCAN_1_RX_Msg_23_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 263))[0] = CANMMCAN_1_RX_Msg_23_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 264))[0] = CANMMCAN_1_RX_Msg_23_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 265))[0] = CANMMCAN_1_RX_Msg_23_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 266))[0] = CANMMCAN_1_RX_Msg_23_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 267))[0] = CANMMCAN_1_RX_Msg_23_Sgn_6;
((uint16_T*) ssGetOutputPortSignal(S, 268))[0] = CANMMCAN_1_RX_Msg_23_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 269))[0] = CANMMCAN_1_RX_Msg_23_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 270))[0] = CANMMCAN_1_RX_Msg_23_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 271))[0] = CANMMCAN_1_RX_Msg_23_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 272))[0] = CANMMCAN_1_RX_Msg_23_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 273))[0] = CANMMCAN_1_RX_Msg_23_Sgn_12;
((boolean_T*) ssGetOutputPortSignal(S, 274))[0] = CANMMCAN_1_RX_Msg_23_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 275))[0] = CANMMCAN_1_RX_Msg_23_Sgn_14;
((boolean_T*) ssGetOutputPortSignal(S, 276))[0] = CANMMCAN_1_RX_Msg_23_Sgn_15;
((boolean_T*) ssGetOutputPortSignal(S, 277))[0] = CANMMCAN_1_RX_Msg_23_Sgn_16;
((uint8_T*) ssGetOutputPortSignal(S, 281))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 282))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 283))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 284))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 285))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 286))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 287))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 288))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- HCU4  -----*/  
void RTICANMM_MAIN_CAN_1_copy_HCU4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[14] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 300))[0] = CANMMCAN_1_RXt[14];   
    ((real_T*) ssGetOutputPortSignal(S, 301))[0] = CANMMCAN_1_RXdt[14];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[14] = data->CANMsg.Dlc;                                  
                                                                
/* STATE_TQI_ETCU_T */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_24_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Start_Stop_STA */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_24_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Start_Stop_STA_Ind */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_24_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HEVTransMapReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_24_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MILReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_24_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_TQI_ETCU_GS_T */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_24_Sgn_6 = (double)0.39215 * (double)unsignedTemp + (double)(0);                    

/* ISS_Idol_stop_flag */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_24_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngIdleSpdSetpt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_24_Sgn_8 = (UInt16)10 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* BSGActTq4EMS_P */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_24_Sgn_9 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* BSGActTq4EMS */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_24_Sgn_10 = (double)0.0977 * (double)unsignedTemp + (double)(-200);                    

((uint8_T*) ssGetOutputPortSignal(S, 289))[0] = CANMMCAN_1_RX_Msg_24_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 290))[0] = CANMMCAN_1_RX_Msg_24_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 291))[0] = CANMMCAN_1_RX_Msg_24_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 292))[0] = CANMMCAN_1_RX_Msg_24_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 293))[0] = CANMMCAN_1_RX_Msg_24_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 294))[0] = CANMMCAN_1_RX_Msg_24_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 295))[0] = CANMMCAN_1_RX_Msg_24_Sgn_7;
((uint16_T*) ssGetOutputPortSignal(S, 296))[0] = CANMMCAN_1_RX_Msg_24_Sgn_8;
((uint16_T*) ssGetOutputPortSignal(S, 297))[0] = CANMMCAN_1_RX_Msg_24_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 298))[0] = CANMMCAN_1_RX_Msg_24_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 302))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 303))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 304))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 305))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 306))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 307))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 308))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 309))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- HMI1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_HMI1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[29] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 333))[0] = CANMMCAN_1_RXt[29];   
    ((real_T*) ssGetOutputPortSignal(S, 334))[0] = CANMMCAN_1_RXdt[29];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[29] = data->CANMsg.Dlc;                                  
                                                                
/* IGSASwitchMode */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* IGSASet_SpdDec */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* IGSARes_SpdInc */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* IGSAOn */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LFC_PilotCancel */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LFC_PilotOn */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FCWWarningMode */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_25_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LCSEnable */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LKAEnable */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MAPAEnable */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CSCEnable */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FCWEnable */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* AEBEnable */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* DefMaxACCSetSpeed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_25_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCSpeedDec */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCSpeedInc */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCSet_SpdDec */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_17 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCRes_SpdInc */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_18 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCCancel */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_19 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCOn */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_20 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCTimeGapDec */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_21 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCTimeGapInc */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_25_Sgn_22 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 310))[0] = CANMMCAN_1_RX_Msg_25_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 311))[0] = CANMMCAN_1_RX_Msg_25_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 312))[0] = CANMMCAN_1_RX_Msg_25_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 313))[0] = CANMMCAN_1_RX_Msg_25_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 314))[0] = CANMMCAN_1_RX_Msg_25_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 315))[0] = CANMMCAN_1_RX_Msg_25_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 316))[0] = CANMMCAN_1_RX_Msg_25_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 317))[0] = CANMMCAN_1_RX_Msg_25_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 318))[0] = CANMMCAN_1_RX_Msg_25_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 319))[0] = CANMMCAN_1_RX_Msg_25_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 320))[0] = CANMMCAN_1_RX_Msg_25_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 321))[0] = CANMMCAN_1_RX_Msg_25_Sgn_12;
((boolean_T*) ssGetOutputPortSignal(S, 322))[0] = CANMMCAN_1_RX_Msg_25_Sgn_13;
((uint8_T*) ssGetOutputPortSignal(S, 323))[0] = CANMMCAN_1_RX_Msg_25_Sgn_14;
((boolean_T*) ssGetOutputPortSignal(S, 324))[0] = CANMMCAN_1_RX_Msg_25_Sgn_15;
((boolean_T*) ssGetOutputPortSignal(S, 325))[0] = CANMMCAN_1_RX_Msg_25_Sgn_16;
((boolean_T*) ssGetOutputPortSignal(S, 326))[0] = CANMMCAN_1_RX_Msg_25_Sgn_17;
((boolean_T*) ssGetOutputPortSignal(S, 327))[0] = CANMMCAN_1_RX_Msg_25_Sgn_18;
((boolean_T*) ssGetOutputPortSignal(S, 328))[0] = CANMMCAN_1_RX_Msg_25_Sgn_19;
((boolean_T*) ssGetOutputPortSignal(S, 329))[0] = CANMMCAN_1_RX_Msg_25_Sgn_20;
((boolean_T*) ssGetOutputPortSignal(S, 330))[0] = CANMMCAN_1_RX_Msg_25_Sgn_21;
((boolean_T*) ssGetOutputPortSignal(S, 331))[0] = CANMMCAN_1_RX_Msg_25_Sgn_22;
((uint8_T*) ssGetOutputPortSignal(S, 335))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 336))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 337))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 338))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 339))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 340))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 341))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 342))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- HMI2  -----*/  
void RTICANMM_MAIN_CAN_1_copy_HMI2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[28] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 351))[0] = CANMMCAN_1_RXt[28];   
    ((real_T*) ssGetOutputPortSignal(S, 352))[0] = CANMMCAN_1_RXdt[28];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[28] = data->CANMsg.Dlc;                                  
                                                                
/* MSAOn_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_26_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LFCOn_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_26_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCTimeGapDec_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_26_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCTimeGapInc_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_26_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCRes_SpdInc_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_26_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCSet_SpdDec_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_26_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCOn_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_26_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 343))[0] = CANMMCAN_1_RX_Msg_26_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 344))[0] = CANMMCAN_1_RX_Msg_26_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 345))[0] = CANMMCAN_1_RX_Msg_26_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 346))[0] = CANMMCAN_1_RX_Msg_26_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 347))[0] = CANMMCAN_1_RX_Msg_26_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 348))[0] = CANMMCAN_1_RX_Msg_26_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 349))[0] = CANMMCAN_1_RX_Msg_26_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 353))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 354))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 355))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 356))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 357))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 358))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 359))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 360))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Meter1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_Meter1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[24] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 366))[0] = CANMMCAN_1_RXt[24];   
    ((real_T*) ssGetOutputPortSignal(S, 367))[0] = CANMMCAN_1_RXdt[24];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[24] = data->CANMsg.Dlc;                                  
                                                                
/* ODOMETER */ 
unsignedTemp = INT32_FROM_BE(*(UInt32*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFFFF;                             
CANMMCAN_1_RX_Msg_27_Sgn_1 = (UInt32)1 * (UInt32)unsignedTemp + (UInt32)(0);                    

/* SeatBelt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_27_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LowBrakeFluid_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_27_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ParkBrake */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_27_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint32_T*) ssGetOutputPortSignal(S, 361))[0] = CANMMCAN_1_RX_Msg_27_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 362))[0] = CANMMCAN_1_RX_Msg_27_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 363))[0] = CANMMCAN_1_RX_Msg_27_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 364))[0] = CANMMCAN_1_RX_Msg_27_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 368))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 369))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 370))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 371))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 372))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 373))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 374))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 375))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Meter3  -----*/  
void RTICANMM_MAIN_CAN_1_copy_Meter3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[27] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 378))[0] = CANMMCAN_1_RXt[27];   
    ((real_T*) ssGetOutputPortSignal(S, 379))[0] = CANMMCAN_1_RXdt[27];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[27] = data->CANMsg.Dlc;                                  
                                                                
/* Meter_Ind_VehSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_28_Sgn_1 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 376))[0] = CANMMCAN_1_RX_Msg_28_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 380))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 381))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 382))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 383))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 384))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 385))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 386))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 387))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SAS1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_SAS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[15] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 394))[0] = CANMMCAN_1_RXt[15];   
    ((real_T*) ssGetOutputPortSignal(S, 395))[0] = CANMMCAN_1_RXdt[15];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[15] = data->CANMsg.Dlc;                                  
                                                                
/* SAS_CheckSum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_29_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_MsgCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_29_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_OK */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_29_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_CAL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_29_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Angle */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_1_RX_Msg_29_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(-900);                    

((uint8_T*) ssGetOutputPortSignal(S, 388))[0] = CANMMCAN_1_RX_Msg_29_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 389))[0] = CANMMCAN_1_RX_Msg_29_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 390))[0] = CANMMCAN_1_RX_Msg_29_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 391))[0] = CANMMCAN_1_RX_Msg_29_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 392))[0] = CANMMCAN_1_RX_Msg_29_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 396))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 397))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 398))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 399))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 400))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 401))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 402))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 403))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* SAS_CheckSum */
CANMMCAN_1_TX_Msg_29_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,96))[0];

/* SAS_MsgCount */
CANMMCAN_1_TX_Msg_29_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,97))[0];

/* SAS_OK */
CANMMCAN_1_TX_Msg_29_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,98))[0];

/* SAS_CAL */
CANMMCAN_1_TX_Msg_29_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,99))[0];

/* SAS_Angle */
CANMMCAN_1_TX_Msg_29_Sgn_5 = ((real_T*)GetInputPortSignal(S,100))[0];
/* SAS_CheckSum */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_29_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_MsgCount */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_29_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* SAS_OK */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_29_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_CAL */ 
unsignedTemp = (CANMMCAN_1_TX_Msg_29_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Angle */ 
unsignedTemp = (((CANMMCAN_1_TX_Msg_29_Sgn_5 - (-900)) / ((double)0.1)) + (CANMMCAN_1_TX_Msg_29_Sgn_5 > -900) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_1_TXLEN[3], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_1_MIDRX[15];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_1_MIDFTX[15];  
CANMMCAN_1_TXsta[3] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TCM1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_TCM1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[3] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 417))[0] = CANMMCAN_1_RXt[3];   
    ((real_T*) ssGetOutputPortSignal(S, 418))[0] = CANMMCAN_1_RXdt[3];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[3] = data->CANMsg.Dlc;                                  
                                                                
/* CAN_N_TM */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_30_Sgn_1 = (UInt16)2 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* LV_CAN_N_TM_ERR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_30_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_GEAR_STATE_NOW */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_30_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_GEAR_STA_NOW_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_30_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_TQI_ETCU_GS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_30_Sgn_5 = (double)0.39215 * (double)unsignedTemp + (double)(0);                    

/* STATE_CAN_TQI_ETCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_30_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_ETCU_OBD */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_30_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_WTR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_30_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_PWR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_30_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_GEAR_SEL_ETCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_30_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_ETCU_STATE */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_30_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_SWI_CC_ETCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_30_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint16_T*) ssGetOutputPortSignal(S, 404))[0] = CANMMCAN_1_RX_Msg_30_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 405))[0] = CANMMCAN_1_RX_Msg_30_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 406))[0] = CANMMCAN_1_RX_Msg_30_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 407))[0] = CANMMCAN_1_RX_Msg_30_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 408))[0] = CANMMCAN_1_RX_Msg_30_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 409))[0] = CANMMCAN_1_RX_Msg_30_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 410))[0] = CANMMCAN_1_RX_Msg_30_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 411))[0] = CANMMCAN_1_RX_Msg_30_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 412))[0] = CANMMCAN_1_RX_Msg_30_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 413))[0] = CANMMCAN_1_RX_Msg_30_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 414))[0] = CANMMCAN_1_RX_Msg_30_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 415))[0] = CANMMCAN_1_RX_Msg_30_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 419))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 420))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 421))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 422))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 423))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 424))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 425))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 426))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TCM2  -----*/  
void RTICANMM_MAIN_CAN_1_copy_TCM2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[4] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 429))[0] = CANMMCAN_1_RXt[4];   
    ((real_T*) ssGetOutputPortSignal(S, 430))[0] = CANMMCAN_1_RXdt[4];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[4] = data->CANMsg.Dlc;                                  
                                                                
/* DR_MODE_IND */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_31_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 427))[0] = CANMMCAN_1_RX_Msg_31_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 431))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 432))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 433))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 434))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 435))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 436))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 437))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 438))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- VCU1  -----*/  
void RTICANMM_MAIN_CAN_1_copy_VCU1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[30] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 456))[0] = CANMMCAN_1_RXt[30];   
    ((real_T*) ssGetOutputPortSignal(S, 457))[0] = CANMMCAN_1_RXdt[30];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[30] = data->CANMsg.Dlc;                                  
                                                                
/* VCU1_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_32_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU1_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_32_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCUBattVolt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_32_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* CurVehDec */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_32_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* CurBrakeDecReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_32_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* CurBrakeDecReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_32_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* DecContMan */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_32_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ESCBrkSta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_32_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCUFault */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_32_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ESCExtBrkAvail */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_32_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* DriverBrakeSw_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_32_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* DriverBrakeSw */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_32_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ECMTqSrc */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_32_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ExtTqAvail */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_32_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADASTqReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_32_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADASTqReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_32_Sgn_16 = (double)0.2 * (double)unsignedTemp + (double)(-100);                    

((uint8_T*) ssGetOutputPortSignal(S, 439))[0] = CANMMCAN_1_RX_Msg_32_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 440))[0] = CANMMCAN_1_RX_Msg_32_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 441))[0] = CANMMCAN_1_RX_Msg_32_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 442))[0] = CANMMCAN_1_RX_Msg_32_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 443))[0] = CANMMCAN_1_RX_Msg_32_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 444))[0] = CANMMCAN_1_RX_Msg_32_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 445))[0] = CANMMCAN_1_RX_Msg_32_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 446))[0] = CANMMCAN_1_RX_Msg_32_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 447))[0] = CANMMCAN_1_RX_Msg_32_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 448))[0] = CANMMCAN_1_RX_Msg_32_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 449))[0] = CANMMCAN_1_RX_Msg_32_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 450))[0] = CANMMCAN_1_RX_Msg_32_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 451))[0] = CANMMCAN_1_RX_Msg_32_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 452))[0] = CANMMCAN_1_RX_Msg_32_Sgn_14;
((boolean_T*) ssGetOutputPortSignal(S, 453))[0] = CANMMCAN_1_RX_Msg_32_Sgn_15;
((real_T*) ssGetOutputPortSignal(S, 454))[0] = CANMMCAN_1_RX_Msg_32_Sgn_16;
((uint8_T*) ssGetOutputPortSignal(S, 458))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 459))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 460))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 461))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 462))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 463))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 464))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 465))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- VCU2  -----*/  
void RTICANMM_MAIN_CAN_1_copy_VCU2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_1_MIDFRX[31] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 477))[0] = CANMMCAN_1_RXt[31];   
    ((real_T*) ssGetOutputPortSignal(S, 478))[0] = CANMMCAN_1_RXdt[31];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_1_RXLEN[31] = data->CANMsg.Dlc;                                  
                                                                
/* VCU2_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_33_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU2_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_1_RX_Msg_33_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MSAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_33_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* AvgBrakDiscTemp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_33_Sgn_4 = (Int16)3 * (Int16)unsignedTemp + (Int16)(-40);                    

/* CAN_ENG_STA */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_1_RX_Msg_33_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MIL_ON_OFF_Request */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_33_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_GearPosnReq_ALLOW */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_1_RX_Msg_33_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PedalTqReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_1_RX_Msg_33_Sgn_8 = (double)0.2 * (double)unsignedTemp + (double)(-100);                    

/* VCU_AccelPedalPosn_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_1_RX_Msg_33_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU_AccelPedalPosn */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_1_RX_Msg_33_Sgn_10 = (double)0.3906 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 466))[0] = CANMMCAN_1_RX_Msg_33_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 467))[0] = CANMMCAN_1_RX_Msg_33_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 468))[0] = CANMMCAN_1_RX_Msg_33_Sgn_3;
((int16_T*) ssGetOutputPortSignal(S, 469))[0] = CANMMCAN_1_RX_Msg_33_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 470))[0] = CANMMCAN_1_RX_Msg_33_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 471))[0] = CANMMCAN_1_RX_Msg_33_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 472))[0] = CANMMCAN_1_RX_Msg_33_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 473))[0] = CANMMCAN_1_RX_Msg_33_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 474))[0] = CANMMCAN_1_RX_Msg_33_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 475))[0] = CANMMCAN_1_RX_Msg_33_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 479))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 480))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 481))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 482))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 483))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 484))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 485))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 486))[0] = data->pData[7];
}      
}


