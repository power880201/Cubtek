/*****************************************************************************************************************************/
/* RTICANMM_MAIN_Vehicle_CAN_MSG_DATA */
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

/* Global variables used for signal decoding */                               
static ULong64 ulong64Temp  = 0;                                              
static Long64  long64Temp   = 0;                                              
static Int32   signedTemp   = 0;                                              
static UInt32  unsignedTemp = 0;                                              
static Float32 floatTemp    = 0.0;                                            
static double  doubleTemp   = 0.0;                                            


void RTICANMM_MAIN_Vehicle_CAN_copy_ABS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ABS2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ABS3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ABS4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ABS8(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS5(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_BCM1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_BCM2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_CSW1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM9(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_EPAS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_EPAS2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_EPB1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_FECU1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_HCU2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_HCU3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_HCU4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_HMI2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_Meter1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_Meter3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_TCM1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_TCM2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_VCU1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_Vehicle_CAN_copy_VCU2(MainSetupMsgData* data, int direction, SimStruct *S);
                                           
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
void RTICANMM_MAIN_Vehicle_CAN_copy_ABS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[6] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 2))[0] = CANMMVehicle_CAN_RXt[6];   
    ((real_T*) ssGetOutputPortSignal(S, 3))[0] = CANMMVehicle_CAN_RXdt[6];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[6] = data->CANMsg.Dlc;                                  
                                                                
/* BoosterVac_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_1_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 0))[0] = CANMMVehicle_CAN_RX_Msg_1_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 4))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 5))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 6))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 7))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 8))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 9))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 10))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 11))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS2  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ABS2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[8] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 27))[0] = CANMMVehicle_CAN_RXt[8];   
    ((real_T*) ssGetOutputPortSignal(S, 28))[0] = CANMMVehicle_CAN_RXdt[8];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[8] = data->CANMsg.Dlc;                                  
                                                                
/* VehSpeed_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VehSpeed_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HSA_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HSA_Active */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BrkSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BrkSw_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EBD_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TCS_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ESC_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ABS_Failed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TCS_Active */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ESC_Active */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ABS_Active */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VehSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMVehicle_CAN_RX_Msg_2_Sgn_14 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 12))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 13))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 14))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 15))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 16))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 17))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 18))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 19))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 20))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 21))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 22))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 23))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_12;
((boolean_T*) ssGetOutputPortSignal(S, 24))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_13;
((real_T*) ssGetOutputPortSignal(S, 25))[0] = CANMMVehicle_CAN_RX_Msg_2_Sgn_14;
((uint8_T*) ssGetOutputPortSignal(S, 29))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 30))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 31))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 32))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 33))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 34))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 35))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 36))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS3  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ABS3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[10] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 46))[0] = CANMMVehicle_CAN_RXt[10];   
    ((real_T*) ssGetOutputPortSignal(S, 47))[0] = CANMMVehicle_CAN_RXdt[10];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[10] = data->CANMsg.Dlc;                                  
                                                                
/* LF_RawWhlSpeed_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_3_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LF_RawWhlSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMVehicle_CAN_RX_Msg_3_Sgn_2 = (double)0.015625 * (double)unsignedTemp + (double)(0);                    

/* RF_RawWhlSpeed_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_3_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RF_RawWhlSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMVehicle_CAN_RX_Msg_3_Sgn_4 = (double)0.015625 * (double)unsignedTemp + (double)(0);                    

/* LR_RawWhlSpeed_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_3_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LR_RawWhlSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMVehicle_CAN_RX_Msg_3_Sgn_6 = (double)0.015625 * (double)unsignedTemp + (double)(0);                    

/* RR_RawWhlSpeed_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_3_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RR_RawWhlSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMVehicle_CAN_RX_Msg_3_Sgn_8 = (double)0.015625 * (double)unsignedTemp + (double)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 37))[0] = CANMMVehicle_CAN_RX_Msg_3_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 38))[0] = CANMMVehicle_CAN_RX_Msg_3_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 39))[0] = CANMMVehicle_CAN_RX_Msg_3_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 40))[0] = CANMMVehicle_CAN_RX_Msg_3_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 41))[0] = CANMMVehicle_CAN_RX_Msg_3_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 42))[0] = CANMMVehicle_CAN_RX_Msg_3_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 43))[0] = CANMMVehicle_CAN_RX_Msg_3_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 44))[0] = CANMMVehicle_CAN_RX_Msg_3_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 48))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 49))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 50))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 51))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 52))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 53))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 54))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 55))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS4  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ABS4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[15] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 65))[0] = CANMMVehicle_CAN_RXt[15];   
    ((real_T*) ssGetOutputPortSignal(S, 66))[0] = CANMMVehicle_CAN_RXdt[15];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[15] = data->CANMsg.Dlc;                                  
                                                                
/* LongAccel */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_4_Sgn_1 = (double)0.01 * (double)unsignedTemp + (double)(-1.27);                    

/* YawRate */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMVehicle_CAN_RX_Msg_4_Sgn_2 = (double)0.1 * (double)unsignedTemp + (double)(-100);                    

/* LatAccel */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_4_Sgn_3 = (double)0.01 * (double)unsignedTemp + (double)(-1.27);                    

/* MCPressure */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMVehicle_CAN_RX_Msg_4_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-11.6);                    

/* MCPressure_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_4_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LongAccel_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_4_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LatAccel_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_4_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* YawRate_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_4_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 56))[0] = CANMMVehicle_CAN_RX_Msg_4_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 57))[0] = CANMMVehicle_CAN_RX_Msg_4_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 58))[0] = CANMMVehicle_CAN_RX_Msg_4_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 59))[0] = CANMMVehicle_CAN_RX_Msg_4_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 60))[0] = CANMMVehicle_CAN_RX_Msg_4_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 61))[0] = CANMMVehicle_CAN_RX_Msg_4_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 62))[0] = CANMMVehicle_CAN_RX_Msg_4_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 63))[0] = CANMMVehicle_CAN_RX_Msg_4_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 67))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 68))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 69))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 70))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 71))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 72))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 73))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 74))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS8  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ABS8(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[20] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 86))[0] = CANMMVehicle_CAN_RXt[20];   
    ((real_T*) ssGetOutputPortSignal(S, 87))[0] = CANMMVehicle_CAN_RXdt[20];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[20] = data->CANMsg.Dlc;                                  
                                                                
/* ABS8_CS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ABS8_RC */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ESCBrkSta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ESCExtBrkAvail */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ActBrkLamp_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ActBrkLamp_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* DecContMan */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CurBrakeDecReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CurBrakeDecReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_9 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* BrakDiscTempSta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_5_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 75))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 76))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 77))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 78))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 79))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 80))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 81))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 82))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_8;
((real_T*) ssGetOutputPortSignal(S, 83))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 84))[0] = CANMMVehicle_CAN_RX_Msg_5_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 88))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 89))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 90))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 91))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 92))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 93))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 94))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 95))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[11] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 110))[0] = CANMMVehicle_CAN_RXt[11];   
    ((real_T*) ssGetOutputPortSignal(S, 111))[0] = CANMMVehicle_CAN_RXdt[11];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[11] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS1_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS1_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_SHapticReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_StrTqReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_StrAngReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LFCTranGain_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_EPSMode */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LKAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LFCStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_TqRatio */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_StrTqReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_11 = (double)0.005 * (double)unsignedTemp + (double)(-10);                    

/* ADAS_LFCTransGain */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_12 = (double)0.002 * (double)unsignedTemp + (double)(0.8);                    

/* ADAS_StrAngReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMVehicle_CAN_RX_Msg_6_Sgn_13 = (double)0.1 * (double)unsignedTemp + (double)(-720);                    

((uint8_T*) ssGetOutputPortSignal(S, 96))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 97))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 98))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 99))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 100))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 101))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 102))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 103))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 104))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 105))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_10;
((real_T*) ssGetOutputPortSignal(S, 106))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 107))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 108))[0] = CANMMVehicle_CAN_RX_Msg_6_Sgn_13;
((uint8_T*) ssGetOutputPortSignal(S, 112))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 113))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 114))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 115))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 116))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 117))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 118))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 119))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS1_Checksum */
CANMMVehicle_CAN_TX_Msg_6_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,0))[0];

/* ADAS1_LifeCount */
CANMMVehicle_CAN_TX_Msg_6_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,1))[0];

/* ADAS_SHapticReq */
CANMMVehicle_CAN_TX_Msg_6_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,2))[0];

/* ADAS_StrTqReq_A */
CANMMVehicle_CAN_TX_Msg_6_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,3))[0];

/* ADAS_StrAngReq_A */
CANMMVehicle_CAN_TX_Msg_6_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,4))[0];

/* ADAS_LFCTranGain_A */
CANMMVehicle_CAN_TX_Msg_6_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,5))[0];

/* ADAS_EPSMode */
CANMMVehicle_CAN_TX_Msg_6_Sgn_7 = ((uint8_T*)GetInputPortSignal(S,6))[0];

/* ADAS_LKAStatus */
CANMMVehicle_CAN_TX_Msg_6_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,7))[0];

/* ADAS_LFCStatus */
CANMMVehicle_CAN_TX_Msg_6_Sgn_9 = ((uint8_T*)GetInputPortSignal(S,8))[0];

/* ADAS_TqRatio */
CANMMVehicle_CAN_TX_Msg_6_Sgn_10 = ((uint8_T*)GetInputPortSignal(S,9))[0];

/* ADAS_StrTqReq */
CANMMVehicle_CAN_TX_Msg_6_Sgn_11 = ((real_T*)GetInputPortSignal(S,10))[0];

/* ADAS_LFCTransGain */
CANMMVehicle_CAN_TX_Msg_6_Sgn_12 = ((real_T*)GetInputPortSignal(S,11))[0];

/* ADAS_StrAngReq */
CANMMVehicle_CAN_TX_Msg_6_Sgn_13 = ((real_T*)GetInputPortSignal(S,12))[0];
/* ADAS1_Checksum */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS1_LifeCount */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_SHapticReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_StrTqReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_StrAngReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_LFCTranGain_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_EPSMode */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x3 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_LKAStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 2;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x7 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_LFCStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_TqRatio */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_6_Sgn_10 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_StrTqReq */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_6_Sgn_11 - (-10)) / ((double)0.005)) + (CANMMVehicle_CAN_TX_Msg_6_Sgn_11 > -10) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               

/* ADAS_LFCTransGain */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_6_Sgn_12 - (0.8)) / ((double)0.002)) + (CANMMVehicle_CAN_TX_Msg_6_Sgn_12 > 0.8) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_StrAngReq */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_6_Sgn_13 - (-720)) / ((double)0.1)) + (CANMMVehicle_CAN_TX_Msg_6_Sgn_13 > -720) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[1], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[11];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[11];  
CANMMVehicle_CAN_TXsta[1] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS2  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[13] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 141))[0] = CANMMVehicle_CAN_RXt[13];   
    ((real_T*) ssGetOutputPortSignal(S, 142))[0] = CANMMVehicle_CAN_RXdt[13];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[13] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS2_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS2_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_BrakeStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_YawRateReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-50);                    

/* ADAS_YawRateReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_BHapticReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_VirtualGear */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_ACCSWStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_PTTqReq_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_VehHoldReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_BPrefillReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_BPrefillReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_AEBReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_AEBReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_DecReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_15 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ADAS_ForceIdle_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_DecReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_17 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_PTTqReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_18 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_ForceIdle */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_19 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_PTTqReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMVehicle_CAN_RX_Msg_7_Sgn_20 = (double)0.2 * (double)unsignedTemp + (double)(-100);                    

((uint8_T*) ssGetOutputPortSignal(S, 120))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 121))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 122))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 123))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 124))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 125))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 126))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 127))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 128))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 129))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 130))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 131))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_12;
((boolean_T*) ssGetOutputPortSignal(S, 132))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 133))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_14;
((real_T*) ssGetOutputPortSignal(S, 134))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_15;
((boolean_T*) ssGetOutputPortSignal(S, 135))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_16;
((boolean_T*) ssGetOutputPortSignal(S, 136))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_17;
((boolean_T*) ssGetOutputPortSignal(S, 137))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_18;
((boolean_T*) ssGetOutputPortSignal(S, 138))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_19;
((real_T*) ssGetOutputPortSignal(S, 139))[0] = CANMMVehicle_CAN_RX_Msg_7_Sgn_20;
((uint8_T*) ssGetOutputPortSignal(S, 143))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 144))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 145))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 146))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 147))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 148))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 149))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 150))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS2_Checksum */
CANMMVehicle_CAN_TX_Msg_7_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,13))[0];

/* ADAS2_LifeCount */
CANMMVehicle_CAN_TX_Msg_7_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,14))[0];

/* ADAS_BrakeStatus */
CANMMVehicle_CAN_TX_Msg_7_Sgn_3 = ((uint8_T*)GetInputPortSignal(S,15))[0];

/* ADAS_YawRateReq */
CANMMVehicle_CAN_TX_Msg_7_Sgn_4 = ((real_T*)GetInputPortSignal(S,16))[0];

/* ADAS_YawRateReq_A */
CANMMVehicle_CAN_TX_Msg_7_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,17))[0];

/* ADAS_BHapticReq */
CANMMVehicle_CAN_TX_Msg_7_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,18))[0];

/* ADAS_VirtualGear */
CANMMVehicle_CAN_TX_Msg_7_Sgn_7 = ((uint8_T*)GetInputPortSignal(S,19))[0];

/* ADAS_ACCSWStatus */
CANMMVehicle_CAN_TX_Msg_7_Sgn_8 = ((boolean_T*)GetInputPortSignal(S,20))[0];

/* ADAS_PTTqReq_V */
CANMMVehicle_CAN_TX_Msg_7_Sgn_9 = ((boolean_T*)GetInputPortSignal(S,21))[0];

/* ADAS_VehHoldReq */
CANMMVehicle_CAN_TX_Msg_7_Sgn_10 = ((boolean_T*)GetInputPortSignal(S,22))[0];

/* ADAS_BPrefillReq_A */
CANMMVehicle_CAN_TX_Msg_7_Sgn_11 = ((boolean_T*)GetInputPortSignal(S,23))[0];

/* ADAS_BPrefillReq */
CANMMVehicle_CAN_TX_Msg_7_Sgn_12 = ((boolean_T*)GetInputPortSignal(S,24))[0];

/* ADAS_AEBReq_A */
CANMMVehicle_CAN_TX_Msg_7_Sgn_13 = ((boolean_T*)GetInputPortSignal(S,25))[0];

/* ADAS_AEBReq */
CANMMVehicle_CAN_TX_Msg_7_Sgn_14 = ((boolean_T*)GetInputPortSignal(S,26))[0];

/* ADAS_DecReq */
CANMMVehicle_CAN_TX_Msg_7_Sgn_15 = ((real_T*)GetInputPortSignal(S,27))[0];

/* ADAS_ForceIdle_A */
CANMMVehicle_CAN_TX_Msg_7_Sgn_16 = ((boolean_T*)GetInputPortSignal(S,28))[0];

/* ADAS_DecReq_A */
CANMMVehicle_CAN_TX_Msg_7_Sgn_17 = ((boolean_T*)GetInputPortSignal(S,29))[0];

/* ADAS_PTTqReq_A */
CANMMVehicle_CAN_TX_Msg_7_Sgn_18 = ((boolean_T*)GetInputPortSignal(S,30))[0];

/* ADAS_ForceIdle */
CANMMVehicle_CAN_TX_Msg_7_Sgn_19 = ((boolean_T*)GetInputPortSignal(S,31))[0];

/* ADAS_PTTqReq */
CANMMVehicle_CAN_TX_Msg_7_Sgn_20 = ((real_T*)GetInputPortSignal(S,32))[0];
/* ADAS2_Checksum */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS2_LifeCount */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_BrakeStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 6;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x3 << 6))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_YawRateReq */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_7_Sgn_4 - (-50)) / ((double)0.1)) + (CANMMVehicle_CAN_TX_Msg_7_Sgn_4 > -50) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3FF)) << 0;                             
*((UInt16*)&data->pData[4]) = (*((UInt16*)&data->pData[4]) & INT16_TO_BE(~(0x3FF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ADAS_YawRateReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_BHapticReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 3;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x3 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_VirtualGear */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ACCSWStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_PTTqReq_V */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_VehHoldReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_10 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_BPrefillReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_11 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_BPrefillReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_12 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_AEBReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_13 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_AEBReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_14 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_DecReq */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_7_Sgn_15 - (0)) / ((double)0.1)) + (CANMMVehicle_CAN_TX_Msg_7_Sgn_15 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ForceIdle_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_16 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_DecReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_17 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_PTTqReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_18 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ForceIdle */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_7_Sgn_19 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_PTTqReq */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_7_Sgn_20 - (-100)) / ((double)0.2)) + (CANMMVehicle_CAN_TX_Msg_7_Sgn_20 > -100) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[3], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[13];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[13];  
CANMMVehicle_CAN_TXsta[3] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS3  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[14] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 160))[0] = CANMMVehicle_CAN_RXt[14];   
    ((real_T*) ssGetOutputPortSignal(S, 161))[0] = CANMMVehicle_CAN_RXdt[14];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[14] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS3_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_8_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS3_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_8_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_ShftPosnReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_8_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_ShftPosnReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_8_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_VehSpdLim_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_8_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_GearPosReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_8_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_GearPosReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_8_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_VehSpdLim */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_8_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 151))[0] = CANMMVehicle_CAN_RX_Msg_8_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 152))[0] = CANMMVehicle_CAN_RX_Msg_8_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 153))[0] = CANMMVehicle_CAN_RX_Msg_8_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 154))[0] = CANMMVehicle_CAN_RX_Msg_8_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 155))[0] = CANMMVehicle_CAN_RX_Msg_8_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 156))[0] = CANMMVehicle_CAN_RX_Msg_8_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 157))[0] = CANMMVehicle_CAN_RX_Msg_8_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 158))[0] = CANMMVehicle_CAN_RX_Msg_8_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 162))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 163))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 164))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 165))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 166))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 167))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 168))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 169))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS3_Checksum */
CANMMVehicle_CAN_TX_Msg_8_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,33))[0];

/* ADAS3_LifeCount */
CANMMVehicle_CAN_TX_Msg_8_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,34))[0];

/* ADAS_ShftPosnReq_A */
CANMMVehicle_CAN_TX_Msg_8_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,35))[0];

/* ADAS_ShftPosnReq */
CANMMVehicle_CAN_TX_Msg_8_Sgn_4 = ((uint8_T*)GetInputPortSignal(S,36))[0];

/* ADAS_VehSpdLim_A */
CANMMVehicle_CAN_TX_Msg_8_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,37))[0];

/* ADAS_GearPosReq_A */
CANMMVehicle_CAN_TX_Msg_8_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,38))[0];

/* ADAS_GearPosReq */
CANMMVehicle_CAN_TX_Msg_8_Sgn_7 = ((uint8_T*)GetInputPortSignal(S,39))[0];

/* ADAS_VehSpdLim */
CANMMVehicle_CAN_TX_Msg_8_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,40))[0];
/* ADAS3_Checksum */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_8_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS3_LifeCount */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_8_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ShftPosnReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_8_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_ShftPosnReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_8_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_VehSpdLim_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_8_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_GearPosReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_8_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_GearPosReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_8_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_VehSpdLim */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_8_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[4], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[14];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[14];  
CANMMVehicle_CAN_TXsta[4] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS4  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[24] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[24] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS_MIL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADASFaultWarnReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ForceLowBeam */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* OffSoundReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* OnSoundReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LeftTurnLightReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RightTurnLightReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HazardWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* WarningMessage */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* APSEnable */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ISAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PilotStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MAPAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LCSStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LFCStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LKAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_17 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FCWStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_18 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* AEBStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_19 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PilotHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_20 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MAPAHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_21 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LCSHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_22 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LFCHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_23 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LKAHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_24 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ISAHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_25 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* AEBHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_26 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_27 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FCWHMIWarningReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_9_Sgn_28 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS_MIL */
CANMMVehicle_CAN_TX_Msg_9_Sgn_1 = ((boolean_T*)GetInputPortSignal(S,41))[0];

/* ADASFaultWarnReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,42))[0];

/* ForceLowBeam */
CANMMVehicle_CAN_TX_Msg_9_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,43))[0];

/* OffSoundReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,44))[0];

/* OnSoundReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,45))[0];

/* LeftTurnLightReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,46))[0];

/* RightTurnLightReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,47))[0];

/* HazardWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_8 = ((boolean_T*)GetInputPortSignal(S,48))[0];

/* WarningMessage */
CANMMVehicle_CAN_TX_Msg_9_Sgn_9 = ((uint8_T*)GetInputPortSignal(S,49))[0];

/* APSEnable */
CANMMVehicle_CAN_TX_Msg_9_Sgn_10 = ((boolean_T*)GetInputPortSignal(S,50))[0];

/* ISAStatus */
CANMMVehicle_CAN_TX_Msg_9_Sgn_11 = ((uint8_T*)GetInputPortSignal(S,51))[0];

/* PilotStatus */
CANMMVehicle_CAN_TX_Msg_9_Sgn_12 = ((uint8_T*)GetInputPortSignal(S,52))[0];

/* MAPAStatus */
CANMMVehicle_CAN_TX_Msg_9_Sgn_13 = ((uint8_T*)GetInputPortSignal(S,53))[0];

/* LCSStatus */
CANMMVehicle_CAN_TX_Msg_9_Sgn_14 = ((uint8_T*)GetInputPortSignal(S,54))[0];

/* LFCStatus */
CANMMVehicle_CAN_TX_Msg_9_Sgn_15 = ((uint8_T*)GetInputPortSignal(S,55))[0];

/* LKAStatus */
CANMMVehicle_CAN_TX_Msg_9_Sgn_16 = ((uint8_T*)GetInputPortSignal(S,56))[0];

/* ACCStatus */
CANMMVehicle_CAN_TX_Msg_9_Sgn_17 = ((uint8_T*)GetInputPortSignal(S,57))[0];

/* FCWStatus */
CANMMVehicle_CAN_TX_Msg_9_Sgn_18 = ((uint8_T*)GetInputPortSignal(S,58))[0];

/* AEBStatus */
CANMMVehicle_CAN_TX_Msg_9_Sgn_19 = ((uint8_T*)GetInputPortSignal(S,59))[0];

/* PilotHMIWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_20 = ((boolean_T*)GetInputPortSignal(S,60))[0];

/* MAPAHMIWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_21 = ((boolean_T*)GetInputPortSignal(S,61))[0];

/* LCSHMIWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_22 = ((boolean_T*)GetInputPortSignal(S,62))[0];

/* LFCHMIWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_23 = ((boolean_T*)GetInputPortSignal(S,63))[0];

/* LKAHMIWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_24 = ((boolean_T*)GetInputPortSignal(S,64))[0];

/* ISAHMIWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_25 = ((boolean_T*)GetInputPortSignal(S,65))[0];

/* AEBHMIWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_26 = ((boolean_T*)GetInputPortSignal(S,66))[0];

/* ACCHMIWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_27 = ((boolean_T*)GetInputPortSignal(S,67))[0];

/* FCWHMIWarningReq */
CANMMVehicle_CAN_TX_Msg_9_Sgn_28 = ((boolean_T*)GetInputPortSignal(S,68))[0];
/* ADAS_MIL */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADASFaultWarnReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* ForceLowBeam */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* OffSoundReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* OnSoundReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* LeftTurnLightReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* RightTurnLightReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* HazardWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* WarningMessage */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* APSEnable */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_10 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* ISAStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_11 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* PilotStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_12 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 1;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x7 << 1))) | INT8_TO_BE(unsignedTemp);               

/* MAPAStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_13 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 4;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x3 << 4))) | INT8_TO_BE(unsignedTemp);               

/* LCSStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_14 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 6;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0x3 << 6))) | INT8_TO_BE(unsignedTemp);               

/* LFCStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_15 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 1;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 1))) | INT8_TO_BE(unsignedTemp);               

/* LKAStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_16 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 3;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ACCStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_17 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 6;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 6))) | INT8_TO_BE(unsignedTemp);               

/* FCWStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_18 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 1;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x3 << 1))) | INT8_TO_BE(unsignedTemp);               

/* AEBStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_19 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 4;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x3 << 4))) | INT8_TO_BE(unsignedTemp);               

/* PilotHMIWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_20 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* MAPAHMIWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_21 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* LCSHMIWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_22 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* LFCHMIWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_23 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* LKAHMIWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_24 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* ISAHMIWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_25 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* AEBHMIWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_26 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ACCHMIWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_27 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* FCWHMIWarningReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_9_Sgn_28 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[8], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[24];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[24];  
CANMMVehicle_CAN_TXsta[8] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS5  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ADAS5(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[25] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[25] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS_FaultMode */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_10_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LaneModeR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_10_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_LaneModeL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_10_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ISASetSpeed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_10_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCSetSpeed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_10_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TimeGapLevel */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_10_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TargetType */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_10_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS_FaultMode */
CANMMVehicle_CAN_TX_Msg_10_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,69))[0];

/* ADAS_LaneModeR */
CANMMVehicle_CAN_TX_Msg_10_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,70))[0];

/* ADAS_LaneModeL */
CANMMVehicle_CAN_TX_Msg_10_Sgn_3 = ((uint8_T*)GetInputPortSignal(S,71))[0];

/* ISASetSpeed */
CANMMVehicle_CAN_TX_Msg_10_Sgn_4 = ((uint8_T*)GetInputPortSignal(S,72))[0];

/* ACCSetSpeed */
CANMMVehicle_CAN_TX_Msg_10_Sgn_5 = ((uint8_T*)GetInputPortSignal(S,73))[0];

/* TimeGapLevel */
CANMMVehicle_CAN_TX_Msg_10_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,74))[0];

/* TargetType */
CANMMVehicle_CAN_TX_Msg_10_Sgn_7 = ((uint8_T*)GetInputPortSignal(S,75))[0];
/* ADAS_FaultMode */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_10_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_LaneModeR */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_10_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 2;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x7 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_LaneModeL */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_10_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ISASetSpeed */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_10_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ACCSetSpeed */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_10_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* TimeGapLevel */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_10_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 1;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x7 << 1))) | INT8_TO_BE(unsignedTemp);               

/* TargetType */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_10_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[9], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[25];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[25];  
CANMMVehicle_CAN_TXsta[9] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- BCM1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_BCM1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[23] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 182))[0] = CANMMVehicle_CAN_RXt[23];   
    ((real_T*) ssGetOutputPortSignal(S, 183))[0] = CANMMVehicle_CAN_RXdt[23];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[23] = data->CANMsg.Dlc;                                  
                                                                
/* BCM_Hazard_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_LRDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_RRDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_TGateSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_RTurnLp_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_LTurnLp_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_AllDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_PDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_DDrSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_RainWip_Req */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_Key_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_11_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 170))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 171))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 172))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 173))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 174))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 175))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 176))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 177))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 178))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 179))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 180))[0] = CANMMVehicle_CAN_RX_Msg_11_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 184))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 185))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 186))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 187))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 188))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 189))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 190))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 191))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- BCM2  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_BCM2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[21] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 194))[0] = CANMMVehicle_CAN_RXt[21];   
    ((real_T*) ssGetOutputPortSignal(S, 195))[0] = CANMMVehicle_CAN_RXdt[21];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[21] = data->CANMsg.Dlc;                                  
                                                                
/* BCM_SRS_Crash_Info */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_12_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 192))[0] = CANMMVehicle_CAN_RX_Msg_12_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 196))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 197))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 198))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 199))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 200))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 201))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 202))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 203))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- CSW1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_CSW1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[22] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 210))[0] = CANMMVehicle_CAN_RXt[22];   
    ((real_T*) ssGetOutputPortSignal(S, 211))[0] = CANMMVehicle_CAN_RXdt[22];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[22] = data->CANMsg.Dlc;                                  
                                                                
/* CSW_FWipIntPos */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_13_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CSW_FWipSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_13_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CSW_TurnSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_13_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CSW_DimSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_13_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CSW_HdLpSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_13_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 204))[0] = CANMMVehicle_CAN_RX_Msg_13_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 205))[0] = CANMMVehicle_CAN_RX_Msg_13_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 206))[0] = CANMMVehicle_CAN_RX_Msg_13_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 207))[0] = CANMMVehicle_CAN_RX_Msg_13_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 208))[0] = CANMMVehicle_CAN_RX_Msg_13_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 212))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 213))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 214))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 215))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 216))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 217))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 218))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 219))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[0] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 228))[0] = CANMMVehicle_CAN_RXt[0];   
    ((real_T*) ssGetOutputPortSignal(S, 229))[0] = CANMMVehicle_CAN_RXdt[0];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[0] = data->CANMsg.Dlc;                                  
                                                                
/* CAN_TQ_STND */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0x3F;                             
CANMMVehicle_CAN_RX_Msg_14_Sgn_1 = (UInt16)10 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* CAN_TQFR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_14_Sgn_2 = (double)1.96 * (double)unsignedTemp + (double)(-100);                    

/* CAN_TQI */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_14_Sgn_3 = (double)1.96 * (double)unsignedTemp + (double)(-100);                    

/* CAN_N */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMVehicle_CAN_RX_Msg_14_Sgn_4 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

/* CAN_TQI_ACOR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_14_Sgn_5 = (double)1.96 * (double)unsignedTemp + (double)(-100);                    

/* LV_CAN_N_ERR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_14_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LV_CAN_SUB_TQI */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_14_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint16_T*) ssGetOutputPortSignal(S, 220))[0] = CANMMVehicle_CAN_RX_Msg_14_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 221))[0] = CANMMVehicle_CAN_RX_Msg_14_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 222))[0] = CANMMVehicle_CAN_RX_Msg_14_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 223))[0] = CANMMVehicle_CAN_RX_Msg_14_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 224))[0] = CANMMVehicle_CAN_RX_Msg_14_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 225))[0] = CANMMVehicle_CAN_RX_Msg_14_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 226))[0] = CANMMVehicle_CAN_RX_Msg_14_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 230))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 231))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 232))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 233))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 234))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 235))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 236))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 237))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM2  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[1] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 242))[0] = CANMMVehicle_CAN_RXt[1];   
    ((real_T*) ssGetOutputPortSignal(S, 243))[0] = CANMMVehicle_CAN_RXdt[1];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[1] = data->CANMsg.Dlc;                                  
                                                                
/* LV_CAN_ENG_RUN_ST */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_15_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_OBD_STAT_WU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_15_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_OBD_STAT_DR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_15_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 238))[0] = CANMMVehicle_CAN_RX_Msg_15_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 239))[0] = CANMMVehicle_CAN_RX_Msg_15_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 240))[0] = CANMMVehicle_CAN_RX_Msg_15_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 244))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 245))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 246))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 247))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 248))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 249))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 250))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 251))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM3  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[2] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 258))[0] = CANMMVehicle_CAN_RXt[2];   
    ((real_T*) ssGetOutputPortSignal(S, 259))[0] = CANMMVehicle_CAN_RXdt[2];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[2] = data->CANMsg.Dlc;                                  
                                                                
/* CAN_PV_AV */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_16_Sgn_1 = (double)0.3906 * (double)unsignedTemp + (double)(0);                    

/* CAN_PV_EFC */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_16_Sgn_2 = (double)0.3906 * (double)unsignedTemp + (double)(0);                    

/* LV_CAN_ERRPAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_16_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LV_CAN_ERRPVS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_16_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MIL_ON_OFF_Request */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_16_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 252))[0] = CANMMVehicle_CAN_RX_Msg_16_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 253))[0] = CANMMVehicle_CAN_RX_Msg_16_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 254))[0] = CANMMVehicle_CAN_RX_Msg_16_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 255))[0] = CANMMVehicle_CAN_RX_Msg_16_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 256))[0] = CANMMVehicle_CAN_RX_Msg_16_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 260))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 261))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 262))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 263))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 264))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 265))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 266))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 267))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM4  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[3] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 270))[0] = CANMMVehicle_CAN_RXt[3];   
    ((real_T*) ssGetOutputPortSignal(S, 271))[0] = CANMMVehicle_CAN_RXdt[3];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[3] = data->CANMsg.Dlc;                                  
                                                                
/* CAN_ENG_STA */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_17_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 268))[0] = CANMMVehicle_CAN_RX_Msg_17_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 272))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 273))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 274))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 275))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 276))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 277))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 278))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 279))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM9  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_ECM9(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[9] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 295))[0] = CANMMVehicle_CAN_RXt[9];   
    ((real_T*) ssGetOutputPortSignal(S, 296))[0] = CANMMVehicle_CAN_RXdt[9];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[9] = data->CANMsg.Dlc;                                  
                                                                
/* EngTqMin */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_1 = (double)0.0078 * (double)unsignedTemp + (double)(-100);                    

/* EngTqMax */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_2 = (double)0.0078 * (double)unsignedTemp + (double)(-100);                    

/* EngIdleSpd */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_3 = (UInt16)10 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* EngStartupComplete */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngIdleCtrlActive */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngNoSmrtChrgAllow */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngNoHEVFuncAllow */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngNoAStpAllow */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngForceConv */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngStrtReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngAStpAllow */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EMSOpState */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EMSHybridOpState */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ECM9RollCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_18_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 280))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 281))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 282))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 283))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 284))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 285))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 286))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 287))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 288))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 289))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 290))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 291))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 292))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_13;
((uint8_T*) ssGetOutputPortSignal(S, 293))[0] = CANMMVehicle_CAN_RX_Msg_18_Sgn_14;
((uint8_T*) ssGetOutputPortSignal(S, 297))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 298))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 299))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 300))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 301))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 302))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 303))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 304))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- EPAS1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_EPAS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[17] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 318))[0] = CANMMVehicle_CAN_RXt[17];   
    ((real_T*) ssGetOutputPortSignal(S, 319))[0] = CANMMVehicle_CAN_RXdt[17];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[17] = data->CANMsg.Dlc;                                  
                                                                
/* SAS_CheckSum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_MsgCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_OK */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_CAL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Trim */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Speed_Valid */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Stat_SF1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Stat_SF2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Stat_SF3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Stat_SF4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Speed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_11 = (UInt16)4 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* SAS_Angle */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMVehicle_CAN_RX_Msg_19_Sgn_12 = (double)0.1 * (double)unsignedTemp + (double)(-900);                    

((uint8_T*) ssGetOutputPortSignal(S, 305))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 306))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 307))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 308))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 309))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 310))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 311))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 312))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 313))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 314))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_10;
((uint16_T*) ssGetOutputPortSignal(S, 315))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 316))[0] = CANMMVehicle_CAN_RX_Msg_19_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 320))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 321))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 322))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 323))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 324))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 325))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 326))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 327))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* SAS_CheckSum */
CANMMVehicle_CAN_TX_Msg_19_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,76))[0];

/* SAS_MsgCount */
CANMMVehicle_CAN_TX_Msg_19_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,77))[0];

/* SAS_OK */
CANMMVehicle_CAN_TX_Msg_19_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,78))[0];

/* SAS_CAL */
CANMMVehicle_CAN_TX_Msg_19_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,79))[0];

/* SAS_Trim */
CANMMVehicle_CAN_TX_Msg_19_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,80))[0];

/* SAS_Speed_Valid */
CANMMVehicle_CAN_TX_Msg_19_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,81))[0];

/* SAS_Stat_SF1 */
CANMMVehicle_CAN_TX_Msg_19_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,82))[0];

/* SAS_Stat_SF2 */
CANMMVehicle_CAN_TX_Msg_19_Sgn_8 = ((boolean_T*)GetInputPortSignal(S,83))[0];

/* SAS_Stat_SF3 */
CANMMVehicle_CAN_TX_Msg_19_Sgn_9 = ((boolean_T*)GetInputPortSignal(S,84))[0];

/* SAS_Stat_SF4 */
CANMMVehicle_CAN_TX_Msg_19_Sgn_10 = ((boolean_T*)GetInputPortSignal(S,85))[0];

/* SAS_Speed */
CANMMVehicle_CAN_TX_Msg_19_Sgn_11 = ((uint16_T*)GetInputPortSignal(S,86))[0];

/* SAS_Angle */
CANMMVehicle_CAN_TX_Msg_19_Sgn_12 = ((real_T*)GetInputPortSignal(S,87))[0];
/* SAS_CheckSum */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_MsgCount */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* SAS_OK */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_CAL */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Trim */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Speed_Valid */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Stat_SF1 */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Stat_SF2 */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Stat_SF3 */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Stat_SF4 */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_19_Sgn_10 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Speed */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_19_Sgn_11 - (0)) / ((double)4)) + (CANMMVehicle_CAN_TX_Msg_19_Sgn_11 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Angle */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_19_Sgn_12 - (-900)) / ((double)0.1)) + (CANMMVehicle_CAN_TX_Msg_19_Sgn_12 > -900) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[6], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[17];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[17];  
CANMMVehicle_CAN_TXsta[6] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- EPAS2  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_EPAS2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[18] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 337))[0] = CANMMVehicle_CAN_RXt[18];   
    ((real_T*) ssGetOutputPortSignal(S, 338))[0] = CANMMVehicle_CAN_RXdt[18];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[18] = data->CANMsg.Dlc;                                  
                                                                
/* SAS_CheckSum2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_20_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_MsgCount2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_20_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* R_SAS_Angle */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMVehicle_CAN_RX_Msg_20_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-1400);                    

/* Steering_Torque */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_20_Sgn_4 = (double)0.1794 * (double)unsignedTemp + (double)(-22.78);                    

/* Steering_Torque_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_20_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RSP_OK */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_20_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EpasFailed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_20_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Elect_PWR_Consumpt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_20_Sgn_8 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 328))[0] = CANMMVehicle_CAN_RX_Msg_20_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 329))[0] = CANMMVehicle_CAN_RX_Msg_20_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 330))[0] = CANMMVehicle_CAN_RX_Msg_20_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 331))[0] = CANMMVehicle_CAN_RX_Msg_20_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 332))[0] = CANMMVehicle_CAN_RX_Msg_20_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 333))[0] = CANMMVehicle_CAN_RX_Msg_20_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 334))[0] = CANMMVehicle_CAN_RX_Msg_20_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 335))[0] = CANMMVehicle_CAN_RX_Msg_20_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 339))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 340))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 341))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 342))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 343))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 344))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 345))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 346))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* SAS_CheckSum2 */
CANMMVehicle_CAN_TX_Msg_20_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,88))[0];

/* SAS_MsgCount2 */
CANMMVehicle_CAN_TX_Msg_20_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,89))[0];

/* R_SAS_Angle */
CANMMVehicle_CAN_TX_Msg_20_Sgn_3 = ((real_T*)GetInputPortSignal(S,90))[0];

/* Steering_Torque */
CANMMVehicle_CAN_TX_Msg_20_Sgn_4 = ((real_T*)GetInputPortSignal(S,91))[0];

/* Steering_Torque_V */
CANMMVehicle_CAN_TX_Msg_20_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,92))[0];

/* RSP_OK */
CANMMVehicle_CAN_TX_Msg_20_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,93))[0];

/* EpasFailed */
CANMMVehicle_CAN_TX_Msg_20_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,94))[0];

/* Elect_PWR_Consumpt */
CANMMVehicle_CAN_TX_Msg_20_Sgn_8 = ((real_T*)GetInputPortSignal(S,95))[0];
/* SAS_CheckSum2 */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_20_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_MsgCount2 */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_20_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* R_SAS_Angle */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_20_Sgn_3 - (-1400)) / ((double)0.1)) + (CANMMVehicle_CAN_TX_Msg_20_Sgn_3 > -1400) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* Steering_Torque */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_20_Sgn_4 - (-22.78)) / ((double)0.1794)) + (CANMMVehicle_CAN_TX_Msg_20_Sgn_4 > -22.78) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* Steering_Torque_V */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_20_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* RSP_OK */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_20_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* EpasFailed */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_20_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* Elect_PWR_Consumpt */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_20_Sgn_8 - (0)) / ((double)0.5)) + (CANMMVehicle_CAN_TX_Msg_20_Sgn_8 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[7], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[18];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[18];  
CANMMVehicle_CAN_TXsta[7] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- EPB1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_EPB1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[19] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 350))[0] = CANMMVehicle_CAN_RXt[19];   
    ((real_T*) ssGetOutputPortSignal(S, 351))[0] = CANMMVehicle_CAN_RXdt[19];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[19] = data->CANMsg.Dlc;                                  
                                                                
/* PB_BrakeBinStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_21_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PB_ReqInProgress */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_21_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 347))[0] = CANMMVehicle_CAN_RX_Msg_21_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 348))[0] = CANMMVehicle_CAN_RX_Msg_21_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 352))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 353))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 354))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 355))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 356))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 357))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 358))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 359))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- FECU1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_FECU1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[26] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 363))[0] = CANMMVehicle_CAN_RXt[26];   
    ((real_T*) ssGetOutputPortSignal(S, 364))[0] = CANMMVehicle_CAN_RXdt[26];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[26] = data->CANMsg.Dlc;                                  
                                                                
/* FECU_HiBeamRly_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_22_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FECU_LoBeamRly_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_22_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 360))[0] = CANMMVehicle_CAN_RX_Msg_22_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 361))[0] = CANMMVehicle_CAN_RX_Msg_22_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 365))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 366))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 367))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 368))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 369))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 370))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 371))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 372))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- HCU2  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_HCU2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[7] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[7] = data->CANMsg.Dlc;                                  
                                                                
/* CoolFanReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_23_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* CoolFanReq */
CANMMVehicle_CAN_TX_Msg_23_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,96))[0];
/* CoolFanReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_23_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 1;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x3 << 1))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[0], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[7];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[7];  
CANMMVehicle_CAN_TXsta[0] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- HCU3  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_HCU3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[12] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 390))[0] = CANMMVehicle_CAN_RXt[12];   
    ((real_T*) ssGetOutputPortSignal(S, 391))[0] = CANMMVehicle_CAN_RXdt[12];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[12] = data->CANMsg.Dlc;                                  
                                                                
/* HCUAutoStpAllow */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Neutral_Ctrl_ALLOW */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HybridLimpHome */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HCU3RollCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FuelCutReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngCrankType */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngTqIndPermMax */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_7 = (double)0.39215 * (double)unsignedTemp + (double)(0);                    

/* EngTqBrkReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_8 = (double)0.0078 * (double)unsignedTemp + (double)(-100);                    

/* EIdleAvail */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EIdleActive */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngStpReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngStpActive */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FuelPumpReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* StarterCrankReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngStrtActive */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACDisableReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_24_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 373))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 374))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 375))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 376))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 377))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 378))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 379))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 380))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 381))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 382))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 383))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 384))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_12;
((boolean_T*) ssGetOutputPortSignal(S, 385))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 386))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_14;
((boolean_T*) ssGetOutputPortSignal(S, 387))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_15;
((boolean_T*) ssGetOutputPortSignal(S, 388))[0] = CANMMVehicle_CAN_RX_Msg_24_Sgn_16;
((uint8_T*) ssGetOutputPortSignal(S, 392))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 393))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 394))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 395))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 396))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 397))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 398))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 399))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* HCUAutoStpAllow */
CANMMVehicle_CAN_TX_Msg_24_Sgn_1 = ((boolean_T*)GetInputPortSignal(S,97))[0];

/* Neutral_Ctrl_ALLOW */
CANMMVehicle_CAN_TX_Msg_24_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,98))[0];

/* HybridLimpHome */
CANMMVehicle_CAN_TX_Msg_24_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,99))[0];

/* HCU3RollCnt */
CANMMVehicle_CAN_TX_Msg_24_Sgn_4 = ((uint8_T*)GetInputPortSignal(S,100))[0];

/* FuelCutReq */
CANMMVehicle_CAN_TX_Msg_24_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,101))[0];

/* EngCrankType */
CANMMVehicle_CAN_TX_Msg_24_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,102))[0];

/* EngTqIndPermMax */
CANMMVehicle_CAN_TX_Msg_24_Sgn_7 = ((real_T*)GetInputPortSignal(S,103))[0];

/* EngTqBrkReq */
CANMMVehicle_CAN_TX_Msg_24_Sgn_8 = ((real_T*)GetInputPortSignal(S,104))[0];

/* EIdleAvail */
CANMMVehicle_CAN_TX_Msg_24_Sgn_9 = ((boolean_T*)GetInputPortSignal(S,105))[0];

/* EIdleActive */
CANMMVehicle_CAN_TX_Msg_24_Sgn_10 = ((boolean_T*)GetInputPortSignal(S,106))[0];

/* EngStpReq */
CANMMVehicle_CAN_TX_Msg_24_Sgn_11 = ((boolean_T*)GetInputPortSignal(S,107))[0];

/* EngStpActive */
CANMMVehicle_CAN_TX_Msg_24_Sgn_12 = ((boolean_T*)GetInputPortSignal(S,108))[0];

/* FuelPumpReq */
CANMMVehicle_CAN_TX_Msg_24_Sgn_13 = ((boolean_T*)GetInputPortSignal(S,109))[0];

/* StarterCrankReq */
CANMMVehicle_CAN_TX_Msg_24_Sgn_14 = ((boolean_T*)GetInputPortSignal(S,110))[0];

/* EngStrtActive */
CANMMVehicle_CAN_TX_Msg_24_Sgn_15 = ((boolean_T*)GetInputPortSignal(S,111))[0];

/* ACDisableReq */
CANMMVehicle_CAN_TX_Msg_24_Sgn_16 = ((boolean_T*)GetInputPortSignal(S,112))[0];
/* HCUAutoStpAllow */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* Neutral_Ctrl_ALLOW */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* HybridLimpHome */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* HCU3RollCnt */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 4;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x3 << 4))) | INT8_TO_BE(unsignedTemp);               

/* FuelCutReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* EngCrankType */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* EngTqIndPermMax */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_24_Sgn_7 - (0)) / ((double)0.39215)) + (CANMMVehicle_CAN_TX_Msg_24_Sgn_7 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* EngTqBrkReq */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_24_Sgn_8 - (-100)) / ((double)0.0078)) + (CANMMVehicle_CAN_TX_Msg_24_Sgn_8 > -100) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[1]) = (*((UInt16*)&data->pData[1]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* EIdleAvail */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* EIdleActive */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_10 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* EngStpReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_11 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* EngStpActive */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_12 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* FuelPumpReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_13 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* StarterCrankReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_14 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* EngStrtActive */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_15 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* ACDisableReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_24_Sgn_16 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[2], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[12];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[12];  
CANMMVehicle_CAN_TXsta[2] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- HCU4  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_HCU4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[16] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 405))[0] = CANMMVehicle_CAN_RXt[16];   
    ((real_T*) ssGetOutputPortSignal(S, 406))[0] = CANMMVehicle_CAN_RXdt[16];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[16] = data->CANMsg.Dlc;                                  
                                                                
/* HEVTransMapReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_25_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MILReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_25_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EngIdleSpdSetpt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_25_Sgn_3 = (UInt16)10 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* BSGActTq4EMS */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMVehicle_CAN_RX_Msg_25_Sgn_4 = (double)0.0977 * (double)unsignedTemp + (double)(-200);                    

((uint8_T*) ssGetOutputPortSignal(S, 400))[0] = CANMMVehicle_CAN_RX_Msg_25_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 401))[0] = CANMMVehicle_CAN_RX_Msg_25_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 402))[0] = CANMMVehicle_CAN_RX_Msg_25_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 403))[0] = CANMMVehicle_CAN_RX_Msg_25_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 407))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 408))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 409))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 410))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 411))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 412))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 413))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 414))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* HEVTransMapReq */
CANMMVehicle_CAN_TX_Msg_25_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,113))[0];

/* MILReq */
CANMMVehicle_CAN_TX_Msg_25_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,114))[0];

/* EngIdleSpdSetpt */
CANMMVehicle_CAN_TX_Msg_25_Sgn_3 = ((uint16_T*)GetInputPortSignal(S,115))[0];

/* BSGActTq4EMS */
CANMMVehicle_CAN_TX_Msg_25_Sgn_4 = ((real_T*)GetInputPortSignal(S,116))[0];
/* HEVTransMapReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_25_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x3 << 5))) | INT8_TO_BE(unsignedTemp);               

/* MILReq */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_25_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* EngIdleSpdSetpt */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_25_Sgn_3 - (0)) / ((double)10)) + (CANMMVehicle_CAN_TX_Msg_25_Sgn_3 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* BSGActTq4EMS */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_25_Sgn_4 - (-200)) / ((double)0.0977)) + (CANMMVehicle_CAN_TX_Msg_25_Sgn_4 > -200) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[5], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[16];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[16];  
CANMMVehicle_CAN_TXsta[5] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- HMI2  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_HMI2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[31] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 423))[0] = CANMMVehicle_CAN_RXt[31];   
    ((real_T*) ssGetOutputPortSignal(S, 424))[0] = CANMMVehicle_CAN_RXdt[31];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[31] = data->CANMsg.Dlc;                                  
                                                                
/* MSAOn_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_26_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LFCOn_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_26_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCTimeGapDec_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_26_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCTimeGapInc_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_26_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCRes_SpdInc_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_26_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCSet_SpdDec_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_26_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ACCOn_VCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_26_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 415))[0] = CANMMVehicle_CAN_RX_Msg_26_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 416))[0] = CANMMVehicle_CAN_RX_Msg_26_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 417))[0] = CANMMVehicle_CAN_RX_Msg_26_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 418))[0] = CANMMVehicle_CAN_RX_Msg_26_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 419))[0] = CANMMVehicle_CAN_RX_Msg_26_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 420))[0] = CANMMVehicle_CAN_RX_Msg_26_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 421))[0] = CANMMVehicle_CAN_RX_Msg_26_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 425))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 426))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 427))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 428))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 429))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 430))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 431))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 432))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Meter1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_Meter1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[27] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 437))[0] = CANMMVehicle_CAN_RXt[27];   
    ((real_T*) ssGetOutputPortSignal(S, 438))[0] = CANMMVehicle_CAN_RXdt[27];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[27] = data->CANMsg.Dlc;                                  
                                                                
/* ODOMETER */ 
unsignedTemp = INT32_FROM_BE(*(UInt32*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFFFF;                             
CANMMVehicle_CAN_RX_Msg_27_Sgn_1 = (UInt32)1 * (UInt32)unsignedTemp + (UInt32)(0);                    

/* SeatBelt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_27_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LowBrakeFluid_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_27_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint32_T*) ssGetOutputPortSignal(S, 433))[0] = CANMMVehicle_CAN_RX_Msg_27_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 434))[0] = CANMMVehicle_CAN_RX_Msg_27_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 435))[0] = CANMMVehicle_CAN_RX_Msg_27_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 439))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 440))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 441))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 442))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 443))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 444))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 445))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 446))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Meter3  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_Meter3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[28] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 449))[0] = CANMMVehicle_CAN_RXt[28];   
    ((real_T*) ssGetOutputPortSignal(S, 450))[0] = CANMMVehicle_CAN_RXdt[28];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[28] = data->CANMsg.Dlc;                                  
                                                                
/* Meter_Ind_VehSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMVehicle_CAN_RX_Msg_28_Sgn_1 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 447))[0] = CANMMVehicle_CAN_RX_Msg_28_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 451))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 452))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 453))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 454))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 455))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 456))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 457))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 458))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TCM1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_TCM1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[4] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 471))[0] = CANMMVehicle_CAN_RXt[4];   
    ((real_T*) ssGetOutputPortSignal(S, 472))[0] = CANMMVehicle_CAN_RXdt[4];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[4] = data->CANMsg.Dlc;                                  
                                                                
/* CAN_N_TM */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_1 = (UInt16)2 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* LV_CAN_N_TM_ERR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_GEAR_STATE_NOW */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_ETCU_SVL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_GEAR_STA_NOW_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_ETCU_OBD */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_WTR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_PWR */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_GEAR_SEL_ETCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_ETCU_STATE */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_SWI_CC_ETCU */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_29_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint16_T*) ssGetOutputPortSignal(S, 459))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 460))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 461))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 462))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 463))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 464))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 465))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 466))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 467))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 468))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 469))[0] = CANMMVehicle_CAN_RX_Msg_29_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 473))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 474))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 475))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 476))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 477))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 478))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 479))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 480))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TCM2  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_TCM2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[5] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 483))[0] = CANMMVehicle_CAN_RXt[5];   
    ((real_T*) ssGetOutputPortSignal(S, 484))[0] = CANMMVehicle_CAN_RXdt[5];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[5] = data->CANMsg.Dlc;                                  
                                                                
/* DR_MODE_IND */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_30_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 481))[0] = CANMMVehicle_CAN_RX_Msg_30_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 485))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 486))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 487))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 488))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 489))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 490))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 491))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 492))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- VCU1  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_VCU1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[29] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 510))[0] = CANMMVehicle_CAN_RXt[29];   
    ((real_T*) ssGetOutputPortSignal(S, 511))[0] = CANMMVehicle_CAN_RXdt[29];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[29] = data->CANMsg.Dlc;                                  
                                                                
/* VCU1_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU1_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCUBattVolt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(1);                    

/* CurVehDec */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* VCU_CurBrkeDecReq */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* VCU_CurBrkDecReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU_DecContMan */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU_ESCBrkSta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCUFault */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU_ESCExtBrkAvail */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* DriverBrakeSw_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* DriverBrakeSw */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ECMTqSrc */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ExtTqAvail */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADASTqReq_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADASTqReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMVehicle_CAN_RX_Msg_31_Sgn_16 = (double)0.2 * (double)unsignedTemp + (double)(-100);                    

((uint8_T*) ssGetOutputPortSignal(S, 493))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 494))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 495))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 496))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 497))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 498))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 499))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 500))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 501))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 502))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 503))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 504))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 505))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 506))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_14;
((boolean_T*) ssGetOutputPortSignal(S, 507))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_15;
((real_T*) ssGetOutputPortSignal(S, 508))[0] = CANMMVehicle_CAN_RX_Msg_31_Sgn_16;
((uint8_T*) ssGetOutputPortSignal(S, 512))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 513))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 514))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 515))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 516))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 517))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 518))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 519))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* VCU1_Checksum */
CANMMVehicle_CAN_TX_Msg_31_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,117))[0];

/* VCU1_LifeCount */
CANMMVehicle_CAN_TX_Msg_31_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,118))[0];

/* VCUBattVolt */
CANMMVehicle_CAN_TX_Msg_31_Sgn_3 = ((real_T*)GetInputPortSignal(S,119))[0];

/* CurVehDec */
CANMMVehicle_CAN_TX_Msg_31_Sgn_4 = ((real_T*)GetInputPortSignal(S,120))[0];

/* VCU_CurBrkeDecReq */
CANMMVehicle_CAN_TX_Msg_31_Sgn_5 = ((real_T*)GetInputPortSignal(S,121))[0];

/* VCU_CurBrkDecReq_A */
CANMMVehicle_CAN_TX_Msg_31_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,122))[0];

/* VCU_DecContMan */
CANMMVehicle_CAN_TX_Msg_31_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,123))[0];

/* VCU_ESCBrkSta */
CANMMVehicle_CAN_TX_Msg_31_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,124))[0];

/* VCUFault */
CANMMVehicle_CAN_TX_Msg_31_Sgn_9 = ((boolean_T*)GetInputPortSignal(S,125))[0];

/* VCU_ESCExtBrkAvail */
CANMMVehicle_CAN_TX_Msg_31_Sgn_10 = ((boolean_T*)GetInputPortSignal(S,126))[0];

/* DriverBrakeSw_V */
CANMMVehicle_CAN_TX_Msg_31_Sgn_11 = ((boolean_T*)GetInputPortSignal(S,127))[0];

/* DriverBrakeSw */
CANMMVehicle_CAN_TX_Msg_31_Sgn_12 = ((boolean_T*)GetInputPortSignal(S,128))[0];

/* ECMTqSrc */
CANMMVehicle_CAN_TX_Msg_31_Sgn_13 = ((uint8_T*)GetInputPortSignal(S,129))[0];

/* ExtTqAvail */
CANMMVehicle_CAN_TX_Msg_31_Sgn_14 = ((boolean_T*)GetInputPortSignal(S,130))[0];

/* ADASTqReq_A */
CANMMVehicle_CAN_TX_Msg_31_Sgn_15 = ((boolean_T*)GetInputPortSignal(S,131))[0];

/* ADASTqReq */
CANMMVehicle_CAN_TX_Msg_31_Sgn_16 = ((real_T*)GetInputPortSignal(S,132))[0];
/* VCU1_Checksum */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* VCU1_LifeCount */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* VCUBattVolt */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_31_Sgn_3 - (1)) / ((double)0.1)) + (CANMMVehicle_CAN_TX_Msg_31_Sgn_3 > 1) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* CurVehDec */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_31_Sgn_4 - (0)) / ((double)0.1)) + (CANMMVehicle_CAN_TX_Msg_31_Sgn_4 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* VCU_CurBrkeDecReq */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_31_Sgn_5 - (0)) / ((double)0.1)) + (CANMMVehicle_CAN_TX_Msg_31_Sgn_5 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* VCU_CurBrkDecReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* VCU_DecContMan */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* VCU_ESCBrkSta */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 1;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x7 << 1))) | INT8_TO_BE(unsignedTemp);               

/* VCUFault */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* VCU_ESCExtBrkAvail */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_10 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* DriverBrakeSw_V */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_11 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* DriverBrakeSw */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_12 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* ECMTqSrc */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_13 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x3 << 0))) | INT8_TO_BE(unsignedTemp);               

/* ExtTqAvail */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_14 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ADASTqReq_A */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_31_Sgn_15 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* ADASTqReq */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_31_Sgn_16 - (-100)) / ((double)0.2)) + (CANMMVehicle_CAN_TX_Msg_31_Sgn_16 > -100) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[10], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[29];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[29];  
CANMMVehicle_CAN_TXsta[10] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- VCU2  -----*/  
void RTICANMM_MAIN_Vehicle_CAN_copy_VCU2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMVehicle_CAN_MIDFRX[30] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 531))[0] = CANMMVehicle_CAN_RXt[30];   
    ((real_T*) ssGetOutputPortSignal(S, 532))[0] = CANMMVehicle_CAN_RXdt[30];   
                                                                
    /* Decode message data */                                   
    CANMMVehicle_CAN_RXLEN[30] = data->CANMsg.Dlc;                                  
                                                                
/* VCU2_Checksum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU2_LifeCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* AvgBrakDiscTemp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_3 = (Int16)3 * (Int16)unsignedTemp + (Int16)(-40);                    

/* MSAStatus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU_MIL_ON_OFF_Req */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ADAS_GearPosReq_AW */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PedalTqReq */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_7 = (double)0.2 * (double)unsignedTemp + (double)(-100);                    

/* VCU_CAN_ENG_STA */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU_AccePedalPos_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VCU_AccePedalPos */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMVehicle_CAN_RX_Msg_32_Sgn_10 = (double)0.3906 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 520))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 521))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_2;
((int16_T*) ssGetOutputPortSignal(S, 522))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 523))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 524))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 525))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 526))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 527))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 528))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 529))[0] = CANMMVehicle_CAN_RX_Msg_32_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 533))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 534))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 535))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 536))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 537))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 538))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 539))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 540))[0] = data->pData[7];
}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* VCU2_Checksum */
CANMMVehicle_CAN_TX_Msg_32_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,133))[0];

/* VCU2_LifeCount */
CANMMVehicle_CAN_TX_Msg_32_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,134))[0];

/* AvgBrakDiscTemp */
CANMMVehicle_CAN_TX_Msg_32_Sgn_3 = ((int16_T*)GetInputPortSignal(S,135))[0];

/* MSAStatus */
CANMMVehicle_CAN_TX_Msg_32_Sgn_4 = ((uint8_T*)GetInputPortSignal(S,136))[0];

/* VCU_MIL_ON_OFF_Req */
CANMMVehicle_CAN_TX_Msg_32_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,137))[0];

/* ADAS_GearPosReq_AW */
CANMMVehicle_CAN_TX_Msg_32_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,138))[0];

/* PedalTqReq */
CANMMVehicle_CAN_TX_Msg_32_Sgn_7 = ((real_T*)GetInputPortSignal(S,139))[0];

/* VCU_CAN_ENG_STA */
CANMMVehicle_CAN_TX_Msg_32_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,140))[0];

/* VCU_AccePedalPos_V */
CANMMVehicle_CAN_TX_Msg_32_Sgn_9 = ((boolean_T*)GetInputPortSignal(S,141))[0];

/* VCU_AccePedalPos */
CANMMVehicle_CAN_TX_Msg_32_Sgn_10 = ((real_T*)GetInputPortSignal(S,142))[0];
/* VCU2_Checksum */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_32_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* VCU2_LifeCount */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_32_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* AvgBrakDiscTemp */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_32_Sgn_3 - (-40)) / ((double)3)) + (CANMMVehicle_CAN_TX_Msg_32_Sgn_3 > -40) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* MSAStatus */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_32_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 2;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 2))) | INT8_TO_BE(unsignedTemp);               

/* VCU_MIL_ON_OFF_Req */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_32_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               

/* ADAS_GearPosReq_AW */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_32_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 6;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x3 << 6))) | INT8_TO_BE(unsignedTemp);               

/* PedalTqReq */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_32_Sgn_7 - (-100)) / ((double)0.2)) + (CANMMVehicle_CAN_TX_Msg_32_Sgn_7 > -100) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[1]) = (*((UInt16*)&data->pData[1]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* VCU_CAN_ENG_STA */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_32_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 4;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x7 << 4))) | INT8_TO_BE(unsignedTemp);               

/* VCU_AccePedalPos_V */ 
unsignedTemp = (CANMMVehicle_CAN_TX_Msg_32_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* VCU_AccePedalPos */ 
unsignedTemp = (((CANMMVehicle_CAN_TX_Msg_32_Sgn_10 - (0)) / ((double)0.3906)) + (CANMMVehicle_CAN_TX_Msg_32_Sgn_10 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMVehicle_CAN_TXLEN[11], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMVehicle_CAN_MIDRX[30];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMVehicle_CAN_MIDFTX[30];  
CANMMVehicle_CAN_TXsta[11] = 1;                                       
} /* TX */
}


