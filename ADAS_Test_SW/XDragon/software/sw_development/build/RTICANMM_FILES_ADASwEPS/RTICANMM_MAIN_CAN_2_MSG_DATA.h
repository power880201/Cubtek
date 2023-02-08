/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_MSG_DATA */
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


void RTICANMM_MAIN_CAN_2_copy_ABS2_C(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ABS4_C(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_BCM1_C(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_CSW1_C(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_FECU1_C(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_HighLowBeam(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_IBEO1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_IBEO2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_IBEO3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_IBEO4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_IBEO5(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_IBEO6(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_IBEO7(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_IBEO8(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_LKA_Left_Lane_A(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_LKA_Left_Lane_B(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_LKA_Right_Lane_A(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_LKA_Right_Lane_B(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_Next_Left_Lane_A(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_Next_Left_Lane_B(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_Next_Right_Lane_A(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_Next_Right_Lane_B(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA10(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA5(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA6(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA7(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA8(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA9(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB10(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB5(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB6(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB7(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB8(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB9(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC10(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC5(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC6(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC7(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC8(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC9(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleStatusA(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleStatusB(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ObstacleStatusC(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_Road_Information(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_SAS1_C(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_SpeedInformation(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_TEST1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_TEST2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_TEST3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_TEST4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_TEST5(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_TEST6(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_YawRateInformation(MainSetupMsgData* data, int direction, SimStruct *S);
void CANMMCAN_2_CAPF(MainSetupMsgData* data, SimStruct *S, int MsgIdx);
/*----------------------------------------------------------------------------------------------*/    
/* CAPTURE MESSAGES */

void CANMMCAN_2_CAPF(MainSetupMsgData *data, SimStruct *S, int MsgIdx)
{                                                             
                                                              
  /* Set RX status when loopback timeinfo is received */      
    CANMMCAN_2_CAPS[MsgIdx] = 1;   /* set status to 1 for one step */        
((uint32_T*) ssGetOutputPortSignal(S, CANMMCAN_2_CAPOID[MsgIdx]))[0] = data->CANMsg.Id;          
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_CAPOIDF[MsgIdx]))[0] = data->CANMsg.Format;       
((real_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COT[MsgIdx]))[0]   = data->CANMsg.TimeStamp;   
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COLEN[MsgIdx]))[0]  = data->CANMsg.Dlc;         
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COIDX_0[MsgIdx]))[0] = data->pData[0];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COIDX_1[MsgIdx]))[0] = data->pData[1];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COIDX_2[MsgIdx]))[0] = data->pData[2];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COIDX_3[MsgIdx]))[0] = data->pData[3];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COIDX_4[MsgIdx]))[0] = data->pData[4];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COIDX_5[MsgIdx]))[0] = data->pData[5];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COIDX_6[MsgIdx]))[0] = data->pData[6];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMCAN_2_COIDX_7[MsgIdx]))[0] = data->pData[7];  
  CANMMCAN_2_CAPID[MsgIdx] = data->CANMsg.Id;                              
  CANMMCAN_2_CAPIDF[MsgIdx] = data->CANMsg.Format;                          
  CANMMCAN_2_CAPT[MsgIdx] = data->CANMsg.TimeStamp;                       
  CANMMCAN_2_CAPL[MsgIdx] = data->CANMsg.Dlc;                             
  CANMMCAN_2_CAPD_0[MsgIdx] = data->pData[0];                       
  CANMMCAN_2_CAPD_1[MsgIdx] = data->pData[1];                       
  CANMMCAN_2_CAPD_2[MsgIdx] = data->pData[2];                       
  CANMMCAN_2_CAPD_3[MsgIdx] = data->pData[3];                       
  CANMMCAN_2_CAPD_4[MsgIdx] = data->pData[4];                       
  CANMMCAN_2_CAPD_5[MsgIdx] = data->pData[5];                       
  CANMMCAN_2_CAPD_6[MsgIdx] = data->pData[6];                       
  CANMMCAN_2_CAPD_7[MsgIdx] = data->pData[7];                       
                                                              
                                                              
}                                                             
                                                              
                                           
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
/* ----- ABS2_C  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ABS2_C(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[6] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[6] = data->CANMsg.Dlc;                                  
                                                                
/* BrkSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_1_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BrkSw_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_1_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VehSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_1_Sgn_3 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* BrkSw_Sta */
CANMMCAN_2_TX_Msg_1_Sgn_1 = ((boolean_T*)GetInputPortSignal(S,0))[0];

/* BrkSw_V */
CANMMCAN_2_TX_Msg_1_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,1))[0];

/* VehSpeed */
CANMMCAN_2_TX_Msg_1_Sgn_3 = ((real_T*)GetInputPortSignal(S,2))[0];
/* BrkSw_Sta */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_1_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* BrkSw_V */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_1_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* VehSpeed */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_1_Sgn_3 - (0)) / ((double)0.125)) + (CANMMCAN_2_TX_Msg_1_Sgn_3 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[6], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[6];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[6];  
CANMMCAN_2_TXsta[6] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS4_C  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ABS4_C(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[9] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[9] = data->CANMsg.Dlc;                                  
                                                                
/* YawRate */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_2_Sgn_1 = (double)0.1 * (double)unsignedTemp + (double)(-100);                    

/* YawRate_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_2_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* YawRate */
CANMMCAN_2_TX_Msg_2_Sgn_1 = ((real_T*)GetInputPortSignal(S,3))[0];

/* YawRate_V */
CANMMCAN_2_TX_Msg_2_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,4))[0];
/* YawRate */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_2_Sgn_1 - (-100)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_2_Sgn_1 > -100) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* YawRate_V */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_2_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[9], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[9];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[9];  
CANMMCAN_2_TXsta[9] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- BCM1_C  -----*/  
void RTICANMM_MAIN_CAN_2_copy_BCM1_C(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[12] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[12] = data->CANMsg.Dlc;                                  
                                                                
/* BCM_RTurnLp_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_3_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* BCM_LTurnLp_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_3_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* BCM_RTurnLp_Sta */
CANMMCAN_2_TX_Msg_3_Sgn_1 = ((boolean_T*)GetInputPortSignal(S,5))[0];

/* BCM_LTurnLp_Sta */
CANMMCAN_2_TX_Msg_3_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,6))[0];
/* BCM_RTurnLp_Sta */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_3_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* BCM_LTurnLp_Sta */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_3_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[12], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[12];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[12];  
CANMMCAN_2_TXsta[12] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- CSW1_C  -----*/  
void RTICANMM_MAIN_CAN_2_copy_CSW1_C(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[11] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[11] = data->CANMsg.Dlc;                                  
                                                                
/* CSW_FWipSw_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_4_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* CSW_FWipSw_Sta */
CANMMCAN_2_TX_Msg_4_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,7))[0];
/* CSW_FWipSw_Sta */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_4_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[11], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[11];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[11];  
CANMMCAN_2_TXsta[11] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- FECU1_C  -----*/  
void RTICANMM_MAIN_CAN_2_copy_FECU1_C(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[13] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[13] = data->CANMsg.Dlc;                                  
                                                                
/* FECU_HiBeamRly_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_5_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* FECU_HiBeamRly_Sta */
CANMMCAN_2_TX_Msg_5_Sgn_1 = ((boolean_T*)GetInputPortSignal(S,8))[0];
/* FECU_HiBeamRly_Sta */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_5_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[13], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[13];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[13];  
CANMMCAN_2_TXsta[13] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- HighLowBeam  -----*/  
void RTICANMM_MAIN_CAN_2_copy_HighLowBeam(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[22] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 18))[0] = CANMMCAN_2_RXt[22];   
    ((real_T*) ssGetOutputPortSignal(S, 19))[0] = CANMMCAN_2_RXdt[22];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[22] = data->CANMsg.Dlc;                                  
                                                                
/* Reason_Preceding */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Preceding_Grace */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Oncoming */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Oncoming_Grace */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Street_Light */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Street_Light_Grace */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Lit_Night */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Lit_Night_US */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Low_speed */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Bright_Scene */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Sharp_Curve */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_Load_Balance */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_6_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HLB_decision */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HLB_Running_Mode */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_6_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reason_for_HLB_Inactive */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_6_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_6_Sgn_17 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 0))[0] = CANMMCAN_2_RX_Msg_6_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 1))[0] = CANMMCAN_2_RX_Msg_6_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 2))[0] = CANMMCAN_2_RX_Msg_6_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 3))[0] = CANMMCAN_2_RX_Msg_6_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 4))[0] = CANMMCAN_2_RX_Msg_6_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 5))[0] = CANMMCAN_2_RX_Msg_6_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 6))[0] = CANMMCAN_2_RX_Msg_6_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 7))[0] = CANMMCAN_2_RX_Msg_6_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 8))[0] = CANMMCAN_2_RX_Msg_6_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 9))[0] = CANMMCAN_2_RX_Msg_6_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 10))[0] = CANMMCAN_2_RX_Msg_6_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 11))[0] = CANMMCAN_2_RX_Msg_6_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 12))[0] = CANMMCAN_2_RX_Msg_6_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 13))[0] = CANMMCAN_2_RX_Msg_6_Sgn_14;
((uint8_T*) ssGetOutputPortSignal(S, 14))[0] = CANMMCAN_2_RX_Msg_6_Sgn_15;
((uint8_T*) ssGetOutputPortSignal(S, 15))[0] = CANMMCAN_2_RX_Msg_6_Sgn_16;
((boolean_T*) ssGetOutputPortSignal(S, 16))[0] = CANMMCAN_2_RX_Msg_6_Sgn_17;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- IBEO1  -----*/  
void RTICANMM_MAIN_CAN_2_copy_IBEO1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[14] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 28))[0] = CANMMCAN_2_RXt[14];   
    ((real_T*) ssGetOutputPortSignal(S, 29))[0] = CANMMCAN_2_RXdt[14];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[14] = data->CANMsg.Dlc;                                  
                                                                
/* HeaderCounter */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_7_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjDataInfoFlag_vel */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_7_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjDataInfoFlag_box */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_7_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SensorTemp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_7_Sgn_4 = (Int8)1 * (Int8)signedTemp + (Int8)(0);                    

/* SensorViewRange */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_7_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* NumberOfObject */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_7_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Version */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_7_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 20))[0] = CANMMCAN_2_RX_Msg_7_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 21))[0] = CANMMCAN_2_RX_Msg_7_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 22))[0] = CANMMCAN_2_RX_Msg_7_Sgn_3;
((int8_T*) ssGetOutputPortSignal(S, 23))[0] = CANMMCAN_2_RX_Msg_7_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 24))[0] = CANMMCAN_2_RX_Msg_7_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 25))[0] = CANMMCAN_2_RX_Msg_7_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 26))[0] = CANMMCAN_2_RX_Msg_7_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- IBEO2  -----*/  
void RTICANMM_MAIN_CAN_2_copy_IBEO2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[15] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 33))[0] = CANMMCAN_2_RXt[15];   
    ((real_T*) ssGetOutputPortSignal(S, 34))[0] = CANMMCAN_2_RXdt[15];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[15] = data->CANMsg.Dlc;                                  
                                                                
/* NTP_fractional_seconds */ 
unsignedTemp = INT32_FROM_BE(*(UInt32*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFFFFFF;                             
CANMMCAN_2_RX_Msg_8_Sgn_1 = (UInt32)1 * (UInt32)unsignedTemp + (UInt32)(0);                    

/* NTP_seconds */ 
unsignedTemp = INT32_FROM_BE(*(UInt32*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFFFFFF;                             
CANMMCAN_2_RX_Msg_8_Sgn_2 = (UInt32)1 * (UInt32)unsignedTemp + (UInt32)(0);                    

((uint32_T*) ssGetOutputPortSignal(S, 30))[0] = CANMMCAN_2_RX_Msg_8_Sgn_1;
((uint32_T*) ssGetOutputPortSignal(S, 31))[0] = CANMMCAN_2_RX_Msg_8_Sgn_2;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- IBEO3  -----*/  
void RTICANMM_MAIN_CAN_2_copy_IBEO3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[16] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 41))[0] = CANMMCAN_2_RXt[16];   
    ((real_T*) ssGetOutputPortSignal(S, 42))[0] = CANMMCAN_2_RXdt[16];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[16] = data->CANMsg.Dlc;                                  
                                                                
/* VelocityY */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_9_Sgn_1 = (Int16)1 * (Int16)signedTemp + (Int16)(0);                    

/* VelocityX */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_9_Sgn_2 = (Int16)1 * (Int16)signedTemp + (Int16)(0);                    

/* PositionY */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_9_Sgn_3 = (Int16)1 * (Int16)signedTemp + (Int16)(0);                    

/* PositionX */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_9_Sgn_4 = (Int16)1 * (Int16)signedTemp + (Int16)(0);                    

/* ObjID */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_9_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((int16_T*) ssGetOutputPortSignal(S, 35))[0] = CANMMCAN_2_RX_Msg_9_Sgn_1;
((int16_T*) ssGetOutputPortSignal(S, 36))[0] = CANMMCAN_2_RX_Msg_9_Sgn_2;
((int16_T*) ssGetOutputPortSignal(S, 37))[0] = CANMMCAN_2_RX_Msg_9_Sgn_3;
((int16_T*) ssGetOutputPortSignal(S, 38))[0] = CANMMCAN_2_RX_Msg_9_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 39))[0] = CANMMCAN_2_RX_Msg_9_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- IBEO4  -----*/  
void RTICANMM_MAIN_CAN_2_copy_IBEO4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[17] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 52))[0] = CANMMCAN_2_RXt[17];   
    ((real_T*) ssGetOutputPortSignal(S, 53))[0] = CANMMCAN_2_RXdt[17];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[17] = data->CANMsg.Dlc;                                  
                                                                
/* VelocityYSigma */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_10_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VelocityXSigma */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_10_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PositionYSigma */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_10_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PositionXSigma */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_10_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjTimeOffset */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_10_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjPredictionAge */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_10_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjAge */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_10_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjID */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_10_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 43))[0] = CANMMCAN_2_RX_Msg_10_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 44))[0] = CANMMCAN_2_RX_Msg_10_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 45))[0] = CANMMCAN_2_RX_Msg_10_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 46))[0] = CANMMCAN_2_RX_Msg_10_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 47))[0] = CANMMCAN_2_RX_Msg_10_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 48))[0] = CANMMCAN_2_RX_Msg_10_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 49))[0] = CANMMCAN_2_RX_Msg_10_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 50))[0] = CANMMCAN_2_RX_Msg_10_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- IBEO5  -----*/  
void RTICANMM_MAIN_CAN_2_copy_IBEO5(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[18] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 61))[0] = CANMMCAN_2_RXt[18];   
    ((real_T*) ssGetOutputPortSignal(S, 62))[0] = CANMMCAN_2_RXdt[18];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[18] = data->CANMsg.Dlc;                                  
                                                                
/* BoxCenterY */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_11_Sgn_1 = (Int16)1 * (Int16)signedTemp + (Int16)(0);                    

/* BoxCenterX */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_11_Sgn_2 = (Int16)1 * (Int16)signedTemp + (Int16)(0);                    

/* ObjClassAge */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_11_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjClassCertainty */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_11_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjClassification */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_11_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjID */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_11_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((int16_T*) ssGetOutputPortSignal(S, 54))[0] = CANMMCAN_2_RX_Msg_11_Sgn_1;
((int16_T*) ssGetOutputPortSignal(S, 55))[0] = CANMMCAN_2_RX_Msg_11_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 56))[0] = CANMMCAN_2_RX_Msg_11_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 57))[0] = CANMMCAN_2_RX_Msg_11_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 58))[0] = CANMMCAN_2_RX_Msg_11_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 59))[0] = CANMMCAN_2_RX_Msg_11_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- IBEO6  -----*/  
void RTICANMM_MAIN_CAN_2_copy_IBEO6(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[19] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 68))[0] = CANMMCAN_2_RXt[19];   
    ((real_T*) ssGetOutputPortSignal(S, 69))[0] = CANMMCAN_2_RXdt[19];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[19] = data->CANMsg.Dlc;                                  
                                                                
/* BoxOrientation */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_12_Sgn_1 = (Int16)1 * (Int16)signedTemp + (Int16)(0);                    

/* BoxSizeY */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_12_Sgn_2 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* BoxSizeX */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_12_Sgn_3 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ObjID */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_12_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((int16_T*) ssGetOutputPortSignal(S, 63))[0] = CANMMCAN_2_RX_Msg_12_Sgn_1;
((uint16_T*) ssGetOutputPortSignal(S, 64))[0] = CANMMCAN_2_RX_Msg_12_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 65))[0] = CANMMCAN_2_RX_Msg_12_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 66))[0] = CANMMCAN_2_RX_Msg_12_Sgn_4;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- IBEO7  -----*/  
void RTICANMM_MAIN_CAN_2_copy_IBEO7(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[20] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 76))[0] = CANMMCAN_2_RXt[20];   
    ((real_T*) ssGetOutputPortSignal(S, 77))[0] = CANMMCAN_2_RXdt[20];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[20] = data->CANMsg.Dlc;                                  
                                                                
/* StartPointY */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_13_Sgn_1 = (Int16)1 * (Int16)signedTemp + (Int16)(0);                    

/* StartPointX */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_13_Sgn_2 = (Int16)1 * (Int16)signedTemp + (Int16)(0);                    

/* ClosestContourPointNum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_13_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* NumberOfContourPoints */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_13_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjID */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_13_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((int16_T*) ssGetOutputPortSignal(S, 70))[0] = CANMMCAN_2_RX_Msg_13_Sgn_1;
((int16_T*) ssGetOutputPortSignal(S, 71))[0] = CANMMCAN_2_RX_Msg_13_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 72))[0] = CANMMCAN_2_RX_Msg_13_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 73))[0] = CANMMCAN_2_RX_Msg_13_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 74))[0] = CANMMCAN_2_RX_Msg_13_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- IBEO8  -----*/  
void RTICANMM_MAIN_CAN_2_copy_IBEO8(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[21] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 87))[0] = CANMMCAN_2_RXt[21];   
    ((real_T*) ssGetOutputPortSignal(S, 88))[0] = CANMMCAN_2_RXdt[21];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[21] = data->CANMsg.Dlc;                                  
                                                                
/* yOffset3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_14_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* xOffset3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_14_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* yOffset2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_14_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* xOffset2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_14_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* yOffset */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_14_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* xOffset */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_14_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ContourMessageNum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_14_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObjID */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_14_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 78))[0] = CANMMCAN_2_RX_Msg_14_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 79))[0] = CANMMCAN_2_RX_Msg_14_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 80))[0] = CANMMCAN_2_RX_Msg_14_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 81))[0] = CANMMCAN_2_RX_Msg_14_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 82))[0] = CANMMCAN_2_RX_Msg_14_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 83))[0] = CANMMCAN_2_RX_Msg_14_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 84))[0] = CANMMCAN_2_RX_Msg_14_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 85))[0] = CANMMCAN_2_RX_Msg_14_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- LKA_Left_Lane_A  -----*/  
void RTICANMM_MAIN_CAN_2_copy_LKA_Left_Lane_A(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[56] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 96))[0] = CANMMCAN_2_RXt[56];   
    ((real_T*) ssGetOutputPortSignal(S, 97))[0] = CANMMCAN_2_RXdt[56];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[56] = data->CANMsg.Dlc;                                  
                                                                
/* Lane_Type */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_15_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Quality */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_15_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Position */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_15_Sgn_3 = (double)0.00390625 * (double)signedTemp + (double)(0);                    

/* Curvature */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_15_Sgn_4 = (double)9.765625e-07 * (double)unsignedTemp + (double)(-0.031999023438);                    

/* Curvature_Derivative */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_15_Sgn_5 = (double)3.7252902985e-09 * (double)unsignedTemp + (double)(-0.00012206658721);                    

/* Width_left_marking */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_15_Sgn_6 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 89))[0] = CANMMCAN_2_RX_Msg_15_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 90))[0] = CANMMCAN_2_RX_Msg_15_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 91))[0] = CANMMCAN_2_RX_Msg_15_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 92))[0] = CANMMCAN_2_RX_Msg_15_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 93))[0] = CANMMCAN_2_RX_Msg_15_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 94))[0] = CANMMCAN_2_RX_Msg_15_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- LKA_Left_Lane_B  -----*/  
void RTICANMM_MAIN_CAN_2_copy_LKA_Left_Lane_B(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[57] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 116))[0] = CANMMCAN_2_RXt[57];   
    ((real_T*) ssGetOutputPortSignal(S, 117))[0] = CANMMCAN_2_RXdt[57];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[57] = data->CANMsg.Dlc;                                  
                                                                
/* Heading_Angle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_16_Sgn_1 = (double)0.0009765625 * (double)unsignedTemp + (double)(-31.999023438);                    

/* View_Range_Start */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_16_Sgn_2 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* View_Range_End */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_16_Sgn_3 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* Lane_Crossing */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Lane_mark_color */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_16_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_DIST_BASED_EXTRAPOLATION */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_OTHER_SIDE */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_OVERRIDE */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_OCCLUDED_LM_EXTRAPOLATION */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_HEADWAY_ORIENTED */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reserved1_laneB */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_16_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_DIVERGING_LANES */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_GUARDRAIL_SHADOW */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_HWE_SPAIN */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_STD */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_VRTL_MERGE */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_16_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TLC */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_16_Sgn_17 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 98))[0] = CANMMCAN_2_RX_Msg_16_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 99))[0] = CANMMCAN_2_RX_Msg_16_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 100))[0] = CANMMCAN_2_RX_Msg_16_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 101))[0] = CANMMCAN_2_RX_Msg_16_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 102))[0] = CANMMCAN_2_RX_Msg_16_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 103))[0] = CANMMCAN_2_RX_Msg_16_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 104))[0] = CANMMCAN_2_RX_Msg_16_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 105))[0] = CANMMCAN_2_RX_Msg_16_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 106))[0] = CANMMCAN_2_RX_Msg_16_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 107))[0] = CANMMCAN_2_RX_Msg_16_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 108))[0] = CANMMCAN_2_RX_Msg_16_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 109))[0] = CANMMCAN_2_RX_Msg_16_Sgn_12;
((boolean_T*) ssGetOutputPortSignal(S, 110))[0] = CANMMCAN_2_RX_Msg_16_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 111))[0] = CANMMCAN_2_RX_Msg_16_Sgn_14;
((boolean_T*) ssGetOutputPortSignal(S, 112))[0] = CANMMCAN_2_RX_Msg_16_Sgn_15;
((boolean_T*) ssGetOutputPortSignal(S, 113))[0] = CANMMCAN_2_RX_Msg_16_Sgn_16;
((real_T*) ssGetOutputPortSignal(S, 114))[0] = CANMMCAN_2_RX_Msg_16_Sgn_17;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- LKA_Right_Lane_A  -----*/  
void RTICANMM_MAIN_CAN_2_copy_LKA_Right_Lane_A(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[58] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 125))[0] = CANMMCAN_2_RXt[58];   
    ((real_T*) ssGetOutputPortSignal(S, 126))[0] = CANMMCAN_2_RXdt[58];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[58] = data->CANMsg.Dlc;                                  
                                                                
/* Lane_Type */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_17_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Quality */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_17_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Position */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_17_Sgn_3 = (double)0.00390625 * (double)signedTemp + (double)(0);                    

/* Curvature */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_17_Sgn_4 = (double)9.765625e-07 * (double)unsignedTemp + (double)(-0.031999023438);                    

/* Curvature_Derivative */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_17_Sgn_5 = (double)3.7252902985e-09 * (double)unsignedTemp + (double)(-0.00012206658721);                    

/* Width_right_marking */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_17_Sgn_6 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 118))[0] = CANMMCAN_2_RX_Msg_17_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 119))[0] = CANMMCAN_2_RX_Msg_17_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 120))[0] = CANMMCAN_2_RX_Msg_17_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 121))[0] = CANMMCAN_2_RX_Msg_17_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 122))[0] = CANMMCAN_2_RX_Msg_17_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 123))[0] = CANMMCAN_2_RX_Msg_17_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- LKA_Right_Lane_B  -----*/  
void RTICANMM_MAIN_CAN_2_copy_LKA_Right_Lane_B(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[59] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 145))[0] = CANMMCAN_2_RXt[59];   
    ((real_T*) ssGetOutputPortSignal(S, 146))[0] = CANMMCAN_2_RXdt[59];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[59] = data->CANMsg.Dlc;                                  
                                                                
/* Heading_Angle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_18_Sgn_1 = (double)0.0009765625 * (double)unsignedTemp + (double)(-31.999023438);                    

/* View_Range_Start */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_18_Sgn_2 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* View_Range_End */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_18_Sgn_3 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* Lane_Crossing */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Lane_mark_color */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_18_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_DIST_BASED_EXTRAPOLATION */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_OTHER_SIDE */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_OVERRIDE */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_OCCLUDED_LM_EXTRAPOLATION */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_HEADWAY_ORIENTED */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Reserved1_laneB */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_18_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_DIVERGING_LANES */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_GUARDRAIL_SHADOW */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_HWE_SPAIN */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_STD */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* PRED_SOURCE_VRTL_MERGE */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_18_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* TLC */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_18_Sgn_17 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 127))[0] = CANMMCAN_2_RX_Msg_18_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 128))[0] = CANMMCAN_2_RX_Msg_18_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 129))[0] = CANMMCAN_2_RX_Msg_18_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 130))[0] = CANMMCAN_2_RX_Msg_18_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 131))[0] = CANMMCAN_2_RX_Msg_18_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 132))[0] = CANMMCAN_2_RX_Msg_18_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 133))[0] = CANMMCAN_2_RX_Msg_18_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 134))[0] = CANMMCAN_2_RX_Msg_18_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 135))[0] = CANMMCAN_2_RX_Msg_18_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 136))[0] = CANMMCAN_2_RX_Msg_18_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 137))[0] = CANMMCAN_2_RX_Msg_18_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 138))[0] = CANMMCAN_2_RX_Msg_18_Sgn_12;
((boolean_T*) ssGetOutputPortSignal(S, 139))[0] = CANMMCAN_2_RX_Msg_18_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 140))[0] = CANMMCAN_2_RX_Msg_18_Sgn_14;
((boolean_T*) ssGetOutputPortSignal(S, 141))[0] = CANMMCAN_2_RX_Msg_18_Sgn_15;
((boolean_T*) ssGetOutputPortSignal(S, 142))[0] = CANMMCAN_2_RX_Msg_18_Sgn_16;
((real_T*) ssGetOutputPortSignal(S, 143))[0] = CANMMCAN_2_RX_Msg_18_Sgn_17;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Next_Left_Lane_A  -----*/  
void RTICANMM_MAIN_CAN_2_copy_Next_Left_Lane_A(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[61] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 154))[0] = CANMMCAN_2_RXt[61];   
    ((real_T*) ssGetOutputPortSignal(S, 155))[0] = CANMMCAN_2_RXdt[61];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[61] = data->CANMsg.Dlc;                                  
                                                                
/* Lane_Type */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_19_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Quality */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_19_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Position */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_19_Sgn_3 = (double)0.00390625 * (double)signedTemp + (double)(0);                    

/* Curvature */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_19_Sgn_4 = (double)9.765625e-07 * (double)unsignedTemp + (double)(-0.031999023438);                    

/* Curvature_Derivative */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_19_Sgn_5 = (double)3.7252902985e-09 * (double)unsignedTemp + (double)(-0.00012206658721);                    

/* Lane_mark_width */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_19_Sgn_6 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 147))[0] = CANMMCAN_2_RX_Msg_19_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 148))[0] = CANMMCAN_2_RX_Msg_19_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 149))[0] = CANMMCAN_2_RX_Msg_19_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 150))[0] = CANMMCAN_2_RX_Msg_19_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 151))[0] = CANMMCAN_2_RX_Msg_19_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 152))[0] = CANMMCAN_2_RX_Msg_19_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Next_Left_Lane_B  -----*/  
void RTICANMM_MAIN_CAN_2_copy_Next_Left_Lane_B(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[62] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 160))[0] = CANMMCAN_2_RXt[62];   
    ((real_T*) ssGetOutputPortSignal(S, 161))[0] = CANMMCAN_2_RXdt[62];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[62] = data->CANMsg.Dlc;                                  
                                                                
/* Heading_Angle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_20_Sgn_1 = (double)0.0009765625 * (double)unsignedTemp + (double)(-31.999023438);                    

/* View_Range_Start */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_20_Sgn_2 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* View_Range_End */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_20_Sgn_3 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 156))[0] = CANMMCAN_2_RX_Msg_20_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 157))[0] = CANMMCAN_2_RX_Msg_20_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 158))[0] = CANMMCAN_2_RX_Msg_20_Sgn_3;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Next_Right_Lane_A  -----*/  
void RTICANMM_MAIN_CAN_2_copy_Next_Right_Lane_A(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[63] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 169))[0] = CANMMCAN_2_RXt[63];   
    ((real_T*) ssGetOutputPortSignal(S, 170))[0] = CANMMCAN_2_RXdt[63];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[63] = data->CANMsg.Dlc;                                  
                                                                
/* Lane_Type */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_21_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Quality */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_21_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Position */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_21_Sgn_3 = (double)0.00390625 * (double)signedTemp + (double)(0);                    

/* Curvature */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_21_Sgn_4 = (double)9.765625e-07 * (double)unsignedTemp + (double)(-0.031999023438);                    

/* Curvature_Derivative */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_21_Sgn_5 = (double)3.7252902985e-09 * (double)unsignedTemp + (double)(-0.00012206658721);                    

/* Lane_mark_width */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_21_Sgn_6 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 162))[0] = CANMMCAN_2_RX_Msg_21_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 163))[0] = CANMMCAN_2_RX_Msg_21_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 164))[0] = CANMMCAN_2_RX_Msg_21_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 165))[0] = CANMMCAN_2_RX_Msg_21_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 166))[0] = CANMMCAN_2_RX_Msg_21_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 167))[0] = CANMMCAN_2_RX_Msg_21_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Next_Right_Lane_B  -----*/  
void RTICANMM_MAIN_CAN_2_copy_Next_Right_Lane_B(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[64] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 175))[0] = CANMMCAN_2_RXt[64];   
    ((real_T*) ssGetOutputPortSignal(S, 176))[0] = CANMMCAN_2_RXdt[64];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[64] = data->CANMsg.Dlc;                                  
                                                                
/* Heading_Angle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_22_Sgn_1 = (double)0.0009765625 * (double)unsignedTemp + (double)(-31.999023438);                    

/* View_Range_Start */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_22_Sgn_2 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* View_Range_End */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_22_Sgn_3 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 171))[0] = CANMMCAN_2_RX_Msg_22_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 172))[0] = CANMMCAN_2_RX_Msg_22_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 173))[0] = CANMMCAN_2_RX_Msg_22_Sgn_3;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA1  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[25] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 191))[0] = CANMMCAN_2_RXt[25];   
    ((real_T*) ssGetOutputPortSignal(S, 192))[0] = CANMMCAN_2_RXdt[25];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[25] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_23_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_23_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_23_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_23_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_23_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_23_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_23_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_23_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_23_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_23_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_23_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_23_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_23_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 177))[0] = CANMMCAN_2_RX_Msg_23_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 178))[0] = CANMMCAN_2_RX_Msg_23_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 179))[0] = CANMMCAN_2_RX_Msg_23_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 180))[0] = CANMMCAN_2_RX_Msg_23_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 181))[0] = CANMMCAN_2_RX_Msg_23_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 182))[0] = CANMMCAN_2_RX_Msg_23_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 183))[0] = CANMMCAN_2_RX_Msg_23_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 184))[0] = CANMMCAN_2_RX_Msg_23_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 185))[0] = CANMMCAN_2_RX_Msg_23_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 186))[0] = CANMMCAN_2_RX_Msg_23_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 187))[0] = CANMMCAN_2_RX_Msg_23_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 188))[0] = CANMMCAN_2_RX_Msg_23_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 189))[0] = CANMMCAN_2_RX_Msg_23_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA10  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA10(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[52] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 207))[0] = CANMMCAN_2_RXt[52];   
    ((real_T*) ssGetOutputPortSignal(S, 208))[0] = CANMMCAN_2_RXdt[52];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[52] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_24_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_24_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_24_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_24_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_24_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_24_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_24_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_24_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_24_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_24_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_24_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_24_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_24_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 193))[0] = CANMMCAN_2_RX_Msg_24_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 194))[0] = CANMMCAN_2_RX_Msg_24_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 195))[0] = CANMMCAN_2_RX_Msg_24_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 196))[0] = CANMMCAN_2_RX_Msg_24_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 197))[0] = CANMMCAN_2_RX_Msg_24_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 198))[0] = CANMMCAN_2_RX_Msg_24_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 199))[0] = CANMMCAN_2_RX_Msg_24_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 200))[0] = CANMMCAN_2_RX_Msg_24_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 201))[0] = CANMMCAN_2_RX_Msg_24_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 202))[0] = CANMMCAN_2_RX_Msg_24_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 203))[0] = CANMMCAN_2_RX_Msg_24_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 204))[0] = CANMMCAN_2_RX_Msg_24_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 205))[0] = CANMMCAN_2_RX_Msg_24_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA2  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[28] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 223))[0] = CANMMCAN_2_RXt[28];   
    ((real_T*) ssGetOutputPortSignal(S, 224))[0] = CANMMCAN_2_RXdt[28];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[28] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_25_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_25_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_25_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_25_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_25_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_25_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_25_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_25_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_25_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_25_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_25_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_25_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_25_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 209))[0] = CANMMCAN_2_RX_Msg_25_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 210))[0] = CANMMCAN_2_RX_Msg_25_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 211))[0] = CANMMCAN_2_RX_Msg_25_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 212))[0] = CANMMCAN_2_RX_Msg_25_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 213))[0] = CANMMCAN_2_RX_Msg_25_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 214))[0] = CANMMCAN_2_RX_Msg_25_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 215))[0] = CANMMCAN_2_RX_Msg_25_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 216))[0] = CANMMCAN_2_RX_Msg_25_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 217))[0] = CANMMCAN_2_RX_Msg_25_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 218))[0] = CANMMCAN_2_RX_Msg_25_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 219))[0] = CANMMCAN_2_RX_Msg_25_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 220))[0] = CANMMCAN_2_RX_Msg_25_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 221))[0] = CANMMCAN_2_RX_Msg_25_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA3  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[31] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 239))[0] = CANMMCAN_2_RXt[31];   
    ((real_T*) ssGetOutputPortSignal(S, 240))[0] = CANMMCAN_2_RXdt[31];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[31] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_26_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_26_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_26_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_26_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_26_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_26_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_26_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_26_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_26_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_26_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_26_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_26_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_26_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 225))[0] = CANMMCAN_2_RX_Msg_26_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 226))[0] = CANMMCAN_2_RX_Msg_26_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 227))[0] = CANMMCAN_2_RX_Msg_26_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 228))[0] = CANMMCAN_2_RX_Msg_26_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 229))[0] = CANMMCAN_2_RX_Msg_26_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 230))[0] = CANMMCAN_2_RX_Msg_26_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 231))[0] = CANMMCAN_2_RX_Msg_26_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 232))[0] = CANMMCAN_2_RX_Msg_26_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 233))[0] = CANMMCAN_2_RX_Msg_26_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 234))[0] = CANMMCAN_2_RX_Msg_26_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 235))[0] = CANMMCAN_2_RX_Msg_26_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 236))[0] = CANMMCAN_2_RX_Msg_26_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 237))[0] = CANMMCAN_2_RX_Msg_26_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA4  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[34] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 255))[0] = CANMMCAN_2_RXt[34];   
    ((real_T*) ssGetOutputPortSignal(S, 256))[0] = CANMMCAN_2_RXdt[34];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[34] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_27_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_27_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_27_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_27_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_27_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_27_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_27_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_27_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_27_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_27_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_27_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_27_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_27_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 241))[0] = CANMMCAN_2_RX_Msg_27_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 242))[0] = CANMMCAN_2_RX_Msg_27_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 243))[0] = CANMMCAN_2_RX_Msg_27_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 244))[0] = CANMMCAN_2_RX_Msg_27_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 245))[0] = CANMMCAN_2_RX_Msg_27_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 246))[0] = CANMMCAN_2_RX_Msg_27_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 247))[0] = CANMMCAN_2_RX_Msg_27_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 248))[0] = CANMMCAN_2_RX_Msg_27_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 249))[0] = CANMMCAN_2_RX_Msg_27_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 250))[0] = CANMMCAN_2_RX_Msg_27_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 251))[0] = CANMMCAN_2_RX_Msg_27_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 252))[0] = CANMMCAN_2_RX_Msg_27_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 253))[0] = CANMMCAN_2_RX_Msg_27_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA5  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA5(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[37] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 271))[0] = CANMMCAN_2_RXt[37];   
    ((real_T*) ssGetOutputPortSignal(S, 272))[0] = CANMMCAN_2_RXdt[37];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[37] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_28_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_28_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_28_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_28_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_28_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_28_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_28_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_28_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_28_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_28_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_28_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_28_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_28_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 257))[0] = CANMMCAN_2_RX_Msg_28_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 258))[0] = CANMMCAN_2_RX_Msg_28_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 259))[0] = CANMMCAN_2_RX_Msg_28_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 260))[0] = CANMMCAN_2_RX_Msg_28_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 261))[0] = CANMMCAN_2_RX_Msg_28_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 262))[0] = CANMMCAN_2_RX_Msg_28_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 263))[0] = CANMMCAN_2_RX_Msg_28_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 264))[0] = CANMMCAN_2_RX_Msg_28_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 265))[0] = CANMMCAN_2_RX_Msg_28_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 266))[0] = CANMMCAN_2_RX_Msg_28_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 267))[0] = CANMMCAN_2_RX_Msg_28_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 268))[0] = CANMMCAN_2_RX_Msg_28_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 269))[0] = CANMMCAN_2_RX_Msg_28_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA6  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA6(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[40] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 287))[0] = CANMMCAN_2_RXt[40];   
    ((real_T*) ssGetOutputPortSignal(S, 288))[0] = CANMMCAN_2_RXdt[40];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[40] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_29_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_29_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_29_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_29_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_29_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_29_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_29_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_29_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_29_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_29_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_29_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_29_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_29_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 273))[0] = CANMMCAN_2_RX_Msg_29_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 274))[0] = CANMMCAN_2_RX_Msg_29_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 275))[0] = CANMMCAN_2_RX_Msg_29_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 276))[0] = CANMMCAN_2_RX_Msg_29_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 277))[0] = CANMMCAN_2_RX_Msg_29_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 278))[0] = CANMMCAN_2_RX_Msg_29_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 279))[0] = CANMMCAN_2_RX_Msg_29_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 280))[0] = CANMMCAN_2_RX_Msg_29_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 281))[0] = CANMMCAN_2_RX_Msg_29_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 282))[0] = CANMMCAN_2_RX_Msg_29_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 283))[0] = CANMMCAN_2_RX_Msg_29_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 284))[0] = CANMMCAN_2_RX_Msg_29_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 285))[0] = CANMMCAN_2_RX_Msg_29_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA7  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA7(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[43] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 303))[0] = CANMMCAN_2_RXt[43];   
    ((real_T*) ssGetOutputPortSignal(S, 304))[0] = CANMMCAN_2_RXdt[43];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[43] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_30_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_30_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_30_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_30_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_30_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_30_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_30_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_30_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_30_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_30_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_30_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_30_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_30_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 289))[0] = CANMMCAN_2_RX_Msg_30_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 290))[0] = CANMMCAN_2_RX_Msg_30_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 291))[0] = CANMMCAN_2_RX_Msg_30_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 292))[0] = CANMMCAN_2_RX_Msg_30_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 293))[0] = CANMMCAN_2_RX_Msg_30_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 294))[0] = CANMMCAN_2_RX_Msg_30_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 295))[0] = CANMMCAN_2_RX_Msg_30_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 296))[0] = CANMMCAN_2_RX_Msg_30_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 297))[0] = CANMMCAN_2_RX_Msg_30_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 298))[0] = CANMMCAN_2_RX_Msg_30_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 299))[0] = CANMMCAN_2_RX_Msg_30_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 300))[0] = CANMMCAN_2_RX_Msg_30_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 301))[0] = CANMMCAN_2_RX_Msg_30_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA8  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA8(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[46] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 319))[0] = CANMMCAN_2_RXt[46];   
    ((real_T*) ssGetOutputPortSignal(S, 320))[0] = CANMMCAN_2_RXdt[46];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[46] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_31_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_31_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_31_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_31_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_31_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_31_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_31_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_31_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_31_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_31_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_31_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_31_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_31_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 305))[0] = CANMMCAN_2_RX_Msg_31_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 306))[0] = CANMMCAN_2_RX_Msg_31_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 307))[0] = CANMMCAN_2_RX_Msg_31_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 308))[0] = CANMMCAN_2_RX_Msg_31_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 309))[0] = CANMMCAN_2_RX_Msg_31_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 310))[0] = CANMMCAN_2_RX_Msg_31_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 311))[0] = CANMMCAN_2_RX_Msg_31_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 312))[0] = CANMMCAN_2_RX_Msg_31_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 313))[0] = CANMMCAN_2_RX_Msg_31_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 314))[0] = CANMMCAN_2_RX_Msg_31_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 315))[0] = CANMMCAN_2_RX_Msg_31_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 316))[0] = CANMMCAN_2_RX_Msg_31_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 317))[0] = CANMMCAN_2_RX_Msg_31_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataA9  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataA9(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[49] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 335))[0] = CANMMCAN_2_RXt[49];   
    ((real_T*) ssGetOutputPortSignal(S, 336))[0] = CANMMCAN_2_RXdt[49];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[49] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_32_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_32_Sgn_2 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* reserved_4 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_32_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstaclePosY */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_32_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* BlinkerInfo */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_32_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Move_in_and_Out */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_32_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_32_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleType */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_32_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_32_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleStatus */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_32_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleBrakeLights */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_32_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_32_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_32_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 321))[0] = CANMMCAN_2_RX_Msg_32_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 322))[0] = CANMMCAN_2_RX_Msg_32_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 323))[0] = CANMMCAN_2_RX_Msg_32_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 324))[0] = CANMMCAN_2_RX_Msg_32_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 325))[0] = CANMMCAN_2_RX_Msg_32_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 326))[0] = CANMMCAN_2_RX_Msg_32_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 327))[0] = CANMMCAN_2_RX_Msg_32_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 328))[0] = CANMMCAN_2_RX_Msg_32_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 329))[0] = CANMMCAN_2_RX_Msg_32_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 330))[0] = CANMMCAN_2_RX_Msg_32_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 331))[0] = CANMMCAN_2_RX_Msg_32_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 332))[0] = CANMMCAN_2_RX_Msg_32_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 333))[0] = CANMMCAN_2_RX_Msg_32_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB1  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[26] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 350))[0] = CANMMCAN_2_RXt[26];   
    ((real_T*) ssGetOutputPortSignal(S, 351))[0] = CANMMCAN_2_RXdt[26];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[26] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_33_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_33_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_33_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_33_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_33_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_33_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_33_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_33_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_33_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_33_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_33_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_33_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 337))[0] = CANMMCAN_2_RX_Msg_33_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 338))[0] = CANMMCAN_2_RX_Msg_33_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 339))[0] = CANMMCAN_2_RX_Msg_33_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 340))[0] = CANMMCAN_2_RX_Msg_33_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 341))[0] = CANMMCAN_2_RX_Msg_33_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 342))[0] = CANMMCAN_2_RX_Msg_33_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 343))[0] = CANMMCAN_2_RX_Msg_33_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 344))[0] = CANMMCAN_2_RX_Msg_33_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 345))[0] = CANMMCAN_2_RX_Msg_33_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 346))[0] = CANMMCAN_2_RX_Msg_33_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 347))[0] = CANMMCAN_2_RX_Msg_33_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 348))[0] = CANMMCAN_2_RX_Msg_33_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB10  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB10(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[53] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 365))[0] = CANMMCAN_2_RXt[53];   
    ((real_T*) ssGetOutputPortSignal(S, 366))[0] = CANMMCAN_2_RXdt[53];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[53] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_34_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_34_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_34_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_34_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_34_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_34_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_34_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_34_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_34_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_34_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_34_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_34_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 352))[0] = CANMMCAN_2_RX_Msg_34_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 353))[0] = CANMMCAN_2_RX_Msg_34_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 354))[0] = CANMMCAN_2_RX_Msg_34_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 355))[0] = CANMMCAN_2_RX_Msg_34_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 356))[0] = CANMMCAN_2_RX_Msg_34_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 357))[0] = CANMMCAN_2_RX_Msg_34_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 358))[0] = CANMMCAN_2_RX_Msg_34_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 359))[0] = CANMMCAN_2_RX_Msg_34_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 360))[0] = CANMMCAN_2_RX_Msg_34_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 361))[0] = CANMMCAN_2_RX_Msg_34_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 362))[0] = CANMMCAN_2_RX_Msg_34_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 363))[0] = CANMMCAN_2_RX_Msg_34_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB2  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[29] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 380))[0] = CANMMCAN_2_RXt[29];   
    ((real_T*) ssGetOutputPortSignal(S, 381))[0] = CANMMCAN_2_RXdt[29];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[29] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_35_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_35_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_35_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_35_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_35_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_35_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_35_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_35_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_35_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_35_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_35_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_35_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 367))[0] = CANMMCAN_2_RX_Msg_35_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 368))[0] = CANMMCAN_2_RX_Msg_35_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 369))[0] = CANMMCAN_2_RX_Msg_35_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 370))[0] = CANMMCAN_2_RX_Msg_35_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 371))[0] = CANMMCAN_2_RX_Msg_35_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 372))[0] = CANMMCAN_2_RX_Msg_35_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 373))[0] = CANMMCAN_2_RX_Msg_35_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 374))[0] = CANMMCAN_2_RX_Msg_35_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 375))[0] = CANMMCAN_2_RX_Msg_35_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 376))[0] = CANMMCAN_2_RX_Msg_35_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 377))[0] = CANMMCAN_2_RX_Msg_35_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 378))[0] = CANMMCAN_2_RX_Msg_35_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB3  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[32] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 395))[0] = CANMMCAN_2_RXt[32];   
    ((real_T*) ssGetOutputPortSignal(S, 396))[0] = CANMMCAN_2_RXdt[32];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[32] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_36_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_36_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_36_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_36_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_36_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_36_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_36_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_36_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_36_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_36_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_36_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_36_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 382))[0] = CANMMCAN_2_RX_Msg_36_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 383))[0] = CANMMCAN_2_RX_Msg_36_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 384))[0] = CANMMCAN_2_RX_Msg_36_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 385))[0] = CANMMCAN_2_RX_Msg_36_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 386))[0] = CANMMCAN_2_RX_Msg_36_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 387))[0] = CANMMCAN_2_RX_Msg_36_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 388))[0] = CANMMCAN_2_RX_Msg_36_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 389))[0] = CANMMCAN_2_RX_Msg_36_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 390))[0] = CANMMCAN_2_RX_Msg_36_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 391))[0] = CANMMCAN_2_RX_Msg_36_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 392))[0] = CANMMCAN_2_RX_Msg_36_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 393))[0] = CANMMCAN_2_RX_Msg_36_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB4  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[35] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 410))[0] = CANMMCAN_2_RXt[35];   
    ((real_T*) ssGetOutputPortSignal(S, 411))[0] = CANMMCAN_2_RXdt[35];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[35] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_37_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_37_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_37_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_37_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_37_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_37_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_37_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_37_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_37_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_37_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_37_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_37_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 397))[0] = CANMMCAN_2_RX_Msg_37_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 398))[0] = CANMMCAN_2_RX_Msg_37_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 399))[0] = CANMMCAN_2_RX_Msg_37_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 400))[0] = CANMMCAN_2_RX_Msg_37_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 401))[0] = CANMMCAN_2_RX_Msg_37_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 402))[0] = CANMMCAN_2_RX_Msg_37_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 403))[0] = CANMMCAN_2_RX_Msg_37_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 404))[0] = CANMMCAN_2_RX_Msg_37_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 405))[0] = CANMMCAN_2_RX_Msg_37_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 406))[0] = CANMMCAN_2_RX_Msg_37_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 407))[0] = CANMMCAN_2_RX_Msg_37_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 408))[0] = CANMMCAN_2_RX_Msg_37_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB5  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB5(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[38] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 425))[0] = CANMMCAN_2_RXt[38];   
    ((real_T*) ssGetOutputPortSignal(S, 426))[0] = CANMMCAN_2_RXdt[38];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[38] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_38_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_38_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_38_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_38_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_38_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_38_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_38_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_38_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_38_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_38_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_38_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_38_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 412))[0] = CANMMCAN_2_RX_Msg_38_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 413))[0] = CANMMCAN_2_RX_Msg_38_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 414))[0] = CANMMCAN_2_RX_Msg_38_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 415))[0] = CANMMCAN_2_RX_Msg_38_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 416))[0] = CANMMCAN_2_RX_Msg_38_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 417))[0] = CANMMCAN_2_RX_Msg_38_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 418))[0] = CANMMCAN_2_RX_Msg_38_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 419))[0] = CANMMCAN_2_RX_Msg_38_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 420))[0] = CANMMCAN_2_RX_Msg_38_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 421))[0] = CANMMCAN_2_RX_Msg_38_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 422))[0] = CANMMCAN_2_RX_Msg_38_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 423))[0] = CANMMCAN_2_RX_Msg_38_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB6  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB6(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[41] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 440))[0] = CANMMCAN_2_RXt[41];   
    ((real_T*) ssGetOutputPortSignal(S, 441))[0] = CANMMCAN_2_RXdt[41];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[41] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_39_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_39_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_39_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_39_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_39_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_39_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_39_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_39_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_39_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_39_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_39_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_39_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 427))[0] = CANMMCAN_2_RX_Msg_39_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 428))[0] = CANMMCAN_2_RX_Msg_39_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 429))[0] = CANMMCAN_2_RX_Msg_39_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 430))[0] = CANMMCAN_2_RX_Msg_39_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 431))[0] = CANMMCAN_2_RX_Msg_39_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 432))[0] = CANMMCAN_2_RX_Msg_39_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 433))[0] = CANMMCAN_2_RX_Msg_39_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 434))[0] = CANMMCAN_2_RX_Msg_39_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 435))[0] = CANMMCAN_2_RX_Msg_39_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 436))[0] = CANMMCAN_2_RX_Msg_39_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 437))[0] = CANMMCAN_2_RX_Msg_39_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 438))[0] = CANMMCAN_2_RX_Msg_39_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB7  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB7(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[44] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 455))[0] = CANMMCAN_2_RXt[44];   
    ((real_T*) ssGetOutputPortSignal(S, 456))[0] = CANMMCAN_2_RXdt[44];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[44] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_40_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_40_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_40_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_40_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_40_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_40_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_40_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_40_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_40_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_40_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_40_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_40_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 442))[0] = CANMMCAN_2_RX_Msg_40_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 443))[0] = CANMMCAN_2_RX_Msg_40_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 444))[0] = CANMMCAN_2_RX_Msg_40_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 445))[0] = CANMMCAN_2_RX_Msg_40_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 446))[0] = CANMMCAN_2_RX_Msg_40_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 447))[0] = CANMMCAN_2_RX_Msg_40_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 448))[0] = CANMMCAN_2_RX_Msg_40_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 449))[0] = CANMMCAN_2_RX_Msg_40_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 450))[0] = CANMMCAN_2_RX_Msg_40_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 451))[0] = CANMMCAN_2_RX_Msg_40_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 452))[0] = CANMMCAN_2_RX_Msg_40_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 453))[0] = CANMMCAN_2_RX_Msg_40_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB8  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB8(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[47] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 470))[0] = CANMMCAN_2_RXt[47];   
    ((real_T*) ssGetOutputPortSignal(S, 471))[0] = CANMMCAN_2_RXdt[47];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[47] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_41_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_41_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_41_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_41_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_41_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_41_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_41_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_41_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_41_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_41_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_41_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_41_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 457))[0] = CANMMCAN_2_RX_Msg_41_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 458))[0] = CANMMCAN_2_RX_Msg_41_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 459))[0] = CANMMCAN_2_RX_Msg_41_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 460))[0] = CANMMCAN_2_RX_Msg_41_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 461))[0] = CANMMCAN_2_RX_Msg_41_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 462))[0] = CANMMCAN_2_RX_Msg_41_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 463))[0] = CANMMCAN_2_RX_Msg_41_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 464))[0] = CANMMCAN_2_RX_Msg_41_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 465))[0] = CANMMCAN_2_RX_Msg_41_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 466))[0] = CANMMCAN_2_RX_Msg_41_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 467))[0] = CANMMCAN_2_RX_Msg_41_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 468))[0] = CANMMCAN_2_RX_Msg_41_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataB9  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataB9(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[50] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 485))[0] = CANMMCAN_2_RXt[50];   
    ((real_T*) ssGetOutputPortSignal(S, 486))[0] = CANMMCAN_2_RXdt[50];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[50] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleLength */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_42_Sgn_1 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* ObstacleWidth */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_42_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ObstacleAge */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_42_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleLane */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_42_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CIPVFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_42_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_42_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarPosX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_42_Sgn_7 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* RadarVelX */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_42_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* RadarMatchConfidence */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_42_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_b */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_42_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* MatchedRadarID */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_42_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_1_c */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_42_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((real_T*) ssGetOutputPortSignal(S, 472))[0] = CANMMCAN_2_RX_Msg_42_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 473))[0] = CANMMCAN_2_RX_Msg_42_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 474))[0] = CANMMCAN_2_RX_Msg_42_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 475))[0] = CANMMCAN_2_RX_Msg_42_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 476))[0] = CANMMCAN_2_RX_Msg_42_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 477))[0] = CANMMCAN_2_RX_Msg_42_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 478))[0] = CANMMCAN_2_RX_Msg_42_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 479))[0] = CANMMCAN_2_RX_Msg_42_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 480))[0] = CANMMCAN_2_RX_Msg_42_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 481))[0] = CANMMCAN_2_RX_Msg_42_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 482))[0] = CANMMCAN_2_RX_Msg_42_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 483))[0] = CANMMCAN_2_RX_Msg_42_Sgn_12;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC1  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[27] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 496))[0] = CANMMCAN_2_RXt[27];   
    ((real_T*) ssGetOutputPortSignal(S, 497))[0] = CANMMCAN_2_RXdt[27];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[27] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_43_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_43_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_43_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_43_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_43_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_43_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_43_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_43_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 487))[0] = CANMMCAN_2_RX_Msg_43_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 488))[0] = CANMMCAN_2_RX_Msg_43_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 489))[0] = CANMMCAN_2_RX_Msg_43_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 490))[0] = CANMMCAN_2_RX_Msg_43_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 491))[0] = CANMMCAN_2_RX_Msg_43_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 492))[0] = CANMMCAN_2_RX_Msg_43_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 493))[0] = CANMMCAN_2_RX_Msg_43_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 494))[0] = CANMMCAN_2_RX_Msg_43_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC10  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC10(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[54] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 507))[0] = CANMMCAN_2_RXt[54];   
    ((real_T*) ssGetOutputPortSignal(S, 508))[0] = CANMMCAN_2_RXdt[54];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[54] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_44_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_44_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_44_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_44_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_44_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_44_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_44_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_44_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 498))[0] = CANMMCAN_2_RX_Msg_44_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 499))[0] = CANMMCAN_2_RX_Msg_44_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 500))[0] = CANMMCAN_2_RX_Msg_44_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 501))[0] = CANMMCAN_2_RX_Msg_44_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 502))[0] = CANMMCAN_2_RX_Msg_44_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 503))[0] = CANMMCAN_2_RX_Msg_44_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 504))[0] = CANMMCAN_2_RX_Msg_44_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 505))[0] = CANMMCAN_2_RX_Msg_44_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC2  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[30] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 518))[0] = CANMMCAN_2_RXt[30];   
    ((real_T*) ssGetOutputPortSignal(S, 519))[0] = CANMMCAN_2_RXdt[30];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[30] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_45_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_45_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_45_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_45_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_45_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_45_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_45_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_45_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 509))[0] = CANMMCAN_2_RX_Msg_45_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 510))[0] = CANMMCAN_2_RX_Msg_45_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 511))[0] = CANMMCAN_2_RX_Msg_45_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 512))[0] = CANMMCAN_2_RX_Msg_45_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 513))[0] = CANMMCAN_2_RX_Msg_45_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 514))[0] = CANMMCAN_2_RX_Msg_45_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 515))[0] = CANMMCAN_2_RX_Msg_45_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 516))[0] = CANMMCAN_2_RX_Msg_45_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC3  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[33] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 529))[0] = CANMMCAN_2_RXt[33];   
    ((real_T*) ssGetOutputPortSignal(S, 530))[0] = CANMMCAN_2_RXdt[33];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[33] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_46_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_46_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_46_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_46_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_46_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_46_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_46_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_46_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 520))[0] = CANMMCAN_2_RX_Msg_46_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 521))[0] = CANMMCAN_2_RX_Msg_46_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 522))[0] = CANMMCAN_2_RX_Msg_46_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 523))[0] = CANMMCAN_2_RX_Msg_46_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 524))[0] = CANMMCAN_2_RX_Msg_46_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 525))[0] = CANMMCAN_2_RX_Msg_46_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 526))[0] = CANMMCAN_2_RX_Msg_46_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 527))[0] = CANMMCAN_2_RX_Msg_46_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC4  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[36] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 540))[0] = CANMMCAN_2_RXt[36];   
    ((real_T*) ssGetOutputPortSignal(S, 541))[0] = CANMMCAN_2_RXdt[36];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[36] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_47_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_47_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_47_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_47_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_47_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_47_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_47_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_47_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 531))[0] = CANMMCAN_2_RX_Msg_47_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 532))[0] = CANMMCAN_2_RX_Msg_47_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 533))[0] = CANMMCAN_2_RX_Msg_47_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 534))[0] = CANMMCAN_2_RX_Msg_47_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 535))[0] = CANMMCAN_2_RX_Msg_47_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 536))[0] = CANMMCAN_2_RX_Msg_47_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 537))[0] = CANMMCAN_2_RX_Msg_47_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 538))[0] = CANMMCAN_2_RX_Msg_47_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC5  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC5(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[39] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 551))[0] = CANMMCAN_2_RXt[39];   
    ((real_T*) ssGetOutputPortSignal(S, 552))[0] = CANMMCAN_2_RXdt[39];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[39] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_48_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_48_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_48_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_48_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_48_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_48_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_48_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_48_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 542))[0] = CANMMCAN_2_RX_Msg_48_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 543))[0] = CANMMCAN_2_RX_Msg_48_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 544))[0] = CANMMCAN_2_RX_Msg_48_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 545))[0] = CANMMCAN_2_RX_Msg_48_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 546))[0] = CANMMCAN_2_RX_Msg_48_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 547))[0] = CANMMCAN_2_RX_Msg_48_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 548))[0] = CANMMCAN_2_RX_Msg_48_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 549))[0] = CANMMCAN_2_RX_Msg_48_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC6  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC6(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[42] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 562))[0] = CANMMCAN_2_RXt[42];   
    ((real_T*) ssGetOutputPortSignal(S, 563))[0] = CANMMCAN_2_RXdt[42];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[42] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_49_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_49_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_49_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_49_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_49_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_49_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_49_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_49_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 553))[0] = CANMMCAN_2_RX_Msg_49_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 554))[0] = CANMMCAN_2_RX_Msg_49_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 555))[0] = CANMMCAN_2_RX_Msg_49_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 556))[0] = CANMMCAN_2_RX_Msg_49_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 557))[0] = CANMMCAN_2_RX_Msg_49_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 558))[0] = CANMMCAN_2_RX_Msg_49_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 559))[0] = CANMMCAN_2_RX_Msg_49_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 560))[0] = CANMMCAN_2_RX_Msg_49_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC7  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC7(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[45] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 573))[0] = CANMMCAN_2_RXt[45];   
    ((real_T*) ssGetOutputPortSignal(S, 574))[0] = CANMMCAN_2_RXdt[45];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[45] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_50_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_50_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_50_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_50_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_50_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_50_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_50_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_50_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 564))[0] = CANMMCAN_2_RX_Msg_50_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 565))[0] = CANMMCAN_2_RX_Msg_50_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 566))[0] = CANMMCAN_2_RX_Msg_50_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 567))[0] = CANMMCAN_2_RX_Msg_50_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 568))[0] = CANMMCAN_2_RX_Msg_50_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 569))[0] = CANMMCAN_2_RX_Msg_50_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 570))[0] = CANMMCAN_2_RX_Msg_50_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 571))[0] = CANMMCAN_2_RX_Msg_50_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC8  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC8(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[48] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 584))[0] = CANMMCAN_2_RXt[48];   
    ((real_T*) ssGetOutputPortSignal(S, 585))[0] = CANMMCAN_2_RXdt[48];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[48] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_51_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_51_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_51_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_51_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_51_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_51_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_51_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_51_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 575))[0] = CANMMCAN_2_RX_Msg_51_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 576))[0] = CANMMCAN_2_RX_Msg_51_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 577))[0] = CANMMCAN_2_RX_Msg_51_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 578))[0] = CANMMCAN_2_RX_Msg_51_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 579))[0] = CANMMCAN_2_RX_Msg_51_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 580))[0] = CANMMCAN_2_RX_Msg_51_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 581))[0] = CANMMCAN_2_RX_Msg_51_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 582))[0] = CANMMCAN_2_RX_Msg_51_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleDataC9  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleDataC9(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[51] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 595))[0] = CANMMCAN_2_RXt[51];   
    ((real_T*) ssGetOutputPortSignal(S, 596))[0] = CANMMCAN_2_RXdt[51];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[51] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngleRate */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_52_Sgn_1 = (double)0.01 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
if (unsignedTemp & 0x80) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFF00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_52_Sgn_2 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* reserved_5 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_52_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Object_Accel_X */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_52_Sgn_4 = (double)0.03 * (double)signedTemp + (double)(0);                    

/* reserved_2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_52_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleReplaced */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_52_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_52_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ObstacleAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
if (unsignedTemp & 0x8000) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFF0000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_52_Sgn_8 = (double)0.01 * (double)signedTemp + (double)(0);                    

((real_T*) ssGetOutputPortSignal(S, 586))[0] = CANMMCAN_2_RX_Msg_52_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 587))[0] = CANMMCAN_2_RX_Msg_52_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 588))[0] = CANMMCAN_2_RX_Msg_52_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 589))[0] = CANMMCAN_2_RX_Msg_52_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 590))[0] = CANMMCAN_2_RX_Msg_52_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 591))[0] = CANMMCAN_2_RX_Msg_52_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 592))[0] = CANMMCAN_2_RX_Msg_52_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 593))[0] = CANMMCAN_2_RX_Msg_52_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleStatusA  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleStatusA(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[24] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 609))[0] = CANMMCAN_2_RXt[24];   
    ((real_T*) ssGetOutputPortSignal(S, 610))[0] = CANMMCAN_2_RXdt[24];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[24] = data->CANMsg.Dlc;                                  
                                                                
/* NumObstacles */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_53_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Timestamp */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_53_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ApplicationVersion_minor */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x3F;                             
CANMMCAN_2_RX_Msg_53_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ApplicationVersion_rc */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_53_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ProtocolVersion */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMCAN_2_RX_Msg_53_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Go */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_53_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Close_Car */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_53_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RightCloseRangeCutIn */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_53_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LeftCloseRangeCutIn */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_53_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Failsafe */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMCAN_2_RX_Msg_53_Sgn_10 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* reserved_3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_53_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 597))[0] = CANMMCAN_2_RX_Msg_53_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 598))[0] = CANMMCAN_2_RX_Msg_53_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 599))[0] = CANMMCAN_2_RX_Msg_53_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 600))[0] = CANMMCAN_2_RX_Msg_53_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 601))[0] = CANMMCAN_2_RX_Msg_53_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 602))[0] = CANMMCAN_2_RX_Msg_53_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 603))[0] = CANMMCAN_2_RX_Msg_53_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 604))[0] = CANMMCAN_2_RX_Msg_53_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 605))[0] = CANMMCAN_2_RX_Msg_53_Sgn_9;
((uint16_T*) ssGetOutputPortSignal(S, 606))[0] = CANMMCAN_2_RX_Msg_53_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 607))[0] = CANMMCAN_2_RX_Msg_53_Sgn_11;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleStatusB  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleStatusB(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[23] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 614))[0] = CANMMCAN_2_RXt[23];   
    ((real_T*) ssGetOutputPortSignal(S, 615))[0] = CANMMCAN_2_RXdt[23];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[23] = data->CANMsg.Dlc;                                  
                                                                
/* timeStamp */ 
unsignedTemp = INT32_FROM_LE(*(UInt32*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFFFFFF;                             
CANMMCAN_2_RX_Msg_54_Sgn_1 = (UInt32)1 * (UInt32)unsignedTemp + (UInt32)(0);                    

/* frameIndex */ 
unsignedTemp = INT32_FROM_LE(*(UInt32*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFFFFFF;                             
CANMMCAN_2_RX_Msg_54_Sgn_2 = (UInt32)1 * (UInt32)unsignedTemp + (UInt32)(0);                    

((uint32_T*) ssGetOutputPortSignal(S, 611))[0] = CANMMCAN_2_RX_Msg_54_Sgn_1;
((uint32_T*) ssGetOutputPortSignal(S, 612))[0] = CANMMCAN_2_RX_Msg_54_Sgn_2;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ObstacleStatusC  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ObstacleStatusC(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[55] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 621))[0] = CANMMCAN_2_RXt[55];   
    ((real_T*) ssGetOutputPortSignal(S, 622))[0] = CANMMCAN_2_RXdt[55];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[55] = data->CANMsg.Dlc;                                  
                                                                
/* grabIndex */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_55_Sgn_1 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* pedalConfGenObjDistFromBumper */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_55_Sgn_2 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* pedalConfusionGeneralObjTTC */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMCAN_2_RX_Msg_55_Sgn_3 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

/* reserved_6 */ 
unsignedTemp = INT32_FROM_LE(*(UInt32*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFFFFFF;                             
CANMMCAN_2_RX_Msg_55_Sgn_4 = (UInt32)1 * (UInt32)unsignedTemp + (UInt32)(0);                    

((uint16_T*) ssGetOutputPortSignal(S, 616))[0] = CANMMCAN_2_RX_Msg_55_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 617))[0] = CANMMCAN_2_RX_Msg_55_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 618))[0] = CANMMCAN_2_RX_Msg_55_Sgn_3;
((uint32_T*) ssGetOutputPortSignal(S, 619))[0] = CANMMCAN_2_RX_Msg_55_Sgn_4;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Road_Information  -----*/  
void RTICANMM_MAIN_CAN_2_copy_Road_Information(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[60] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 633))[0] = CANMMCAN_2_RXt[60];   
    ((real_T*) ssGetOutputPortSignal(S, 634))[0] = CANMMCAN_2_RXdt[60];   
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[60] = data->CANMsg.Dlc;                                  
                                                                
/* Construction_Area */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_56_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Road_Type */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_56_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Highway_Exit_Right */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_56_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Highway_Exit_Left */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_56_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Probability_Of_Left_Lane */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMCAN_2_RX_Msg_56_Sgn_5 = (double)0.001 * (double)unsignedTemp + (double)(0);                    

/* Probability_Of_Right_Lane */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMCAN_2_RX_Msg_56_Sgn_6 = (double)0.001 * (double)unsignedTemp + (double)(0);                    

/* Driving_Speed_Left_Lane */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_56_Sgn_7 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* Driving_Speed_Right_Lane */ 
unsignedTemp = INT32_FROM_LE(*(UInt32*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_56_Sgn_8 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* protocol_version */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_56_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 623))[0] = CANMMCAN_2_RX_Msg_56_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 624))[0] = CANMMCAN_2_RX_Msg_56_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 625))[0] = CANMMCAN_2_RX_Msg_56_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 626))[0] = CANMMCAN_2_RX_Msg_56_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 627))[0] = CANMMCAN_2_RX_Msg_56_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 628))[0] = CANMMCAN_2_RX_Msg_56_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 629))[0] = CANMMCAN_2_RX_Msg_56_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 630))[0] = CANMMCAN_2_RX_Msg_56_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 631))[0] = CANMMCAN_2_RX_Msg_56_Sgn_9;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SAS1_C  -----*/  
void RTICANMM_MAIN_CAN_2_copy_SAS1_C(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[10] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[10] = data->CANMsg.Dlc;                                  
                                                                
/* SAS_OK */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_57_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_CAL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_57_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Angle */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_57_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-900);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* SAS_OK */
CANMMCAN_2_TX_Msg_57_Sgn_1 = ((boolean_T*)GetInputPortSignal(S,9))[0];

/* SAS_CAL */
CANMMCAN_2_TX_Msg_57_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,10))[0];

/* SAS_Angle */
CANMMCAN_2_TX_Msg_57_Sgn_3 = ((real_T*)GetInputPortSignal(S,11))[0];
/* SAS_OK */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_57_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_CAL */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_57_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Angle */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_57_Sgn_3 - (-900)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_57_Sgn_3 > -900) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[10], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[10];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[10];  
CANMMCAN_2_TXsta[10] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SpeedInformation  -----*/  
void RTICANMM_MAIN_CAN_2_copy_SpeedInformation(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[7] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[7] = data->CANMsg.Dlc;                                  
                                                                
/* radarDeviceSpeedDirection */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_58_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* radarDeviceSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMCAN_2_RX_Msg_58_Sgn_2 = (double)0.02 * (double)unsignedTemp + (double)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* radarDeviceSpeedDirection */
CANMMCAN_2_TX_Msg_58_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,12))[0];

/* radarDeviceSpeed */
CANMMCAN_2_TX_Msg_58_Sgn_2 = ((real_T*)GetInputPortSignal(S,13))[0];
/* radarDeviceSpeedDirection */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_58_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x3 << 0))) | INT8_TO_BE(unsignedTemp);               

/* radarDeviceSpeed */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_58_Sgn_2 - (0)) / ((double)0.02)) + (CANMMCAN_2_TX_Msg_58_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1FFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0x1FFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[7], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[7];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[7];  
CANMMCAN_2_TXsta[7] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TEST1  -----*/  
void RTICANMM_MAIN_CAN_2_copy_TEST1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[0] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[0] = data->CANMsg.Dlc;                                  
                                                                
/* HighBeamCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_59_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* NoObjTimeLim */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_59_Sgn_2 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* HighBeamTime */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_59_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* NoObjTime */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMCAN_2_RX_Msg_59_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ForceLowBeamT */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_59_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* HighBeamSw */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_59_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RearFogSw */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_59_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ECO_SW_STA */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_59_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FECU_HiBeamRly_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_59_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FECU_LoBeamRly_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_59_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* HighBeamCount */
CANMMCAN_2_TX_Msg_59_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,14))[0];

/* NoObjTimeLim */
CANMMCAN_2_TX_Msg_59_Sgn_2 = ((real_T*)GetInputPortSignal(S,15))[0];

/* HighBeamTime */
CANMMCAN_2_TX_Msg_59_Sgn_3 = ((real_T*)GetInputPortSignal(S,16))[0];

/* NoObjTime */
CANMMCAN_2_TX_Msg_59_Sgn_4 = ((real_T*)GetInputPortSignal(S,17))[0];

/* ForceLowBeamT */
CANMMCAN_2_TX_Msg_59_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,18))[0];

/* HighBeamSw */
CANMMCAN_2_TX_Msg_59_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,19))[0];

/* RearFogSw */
CANMMCAN_2_TX_Msg_59_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,20))[0];

/* ECO_SW_STA */
CANMMCAN_2_TX_Msg_59_Sgn_8 = ((boolean_T*)GetInputPortSignal(S,21))[0];

/* FECU_HiBeamRly_Sta */
CANMMCAN_2_TX_Msg_59_Sgn_9 = ((boolean_T*)GetInputPortSignal(S,22))[0];

/* FECU_LoBeamRly_Sta */
CANMMCAN_2_TX_Msg_59_Sgn_10 = ((boolean_T*)GetInputPortSignal(S,23))[0];
/* HighBeamCount */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_59_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* NoObjTimeLim */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_59_Sgn_2 - (0)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_59_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* HighBeamTime */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_59_Sgn_3 - (0)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_59_Sgn_3 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* NoObjTime */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_59_Sgn_4 - (0)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_59_Sgn_4 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* ForceLowBeamT */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_59_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* HighBeamSw */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_59_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* RearFogSw */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_59_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* ECO_SW_STA */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_59_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* FECU_HiBeamRly_Sta */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_59_Sgn_9 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* FECU_LoBeamRly_Sta */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_59_Sgn_10 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 5))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[0], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[0];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[0];  
CANMMCAN_2_TXsta[0] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TEST2  -----*/  
void RTICANMM_MAIN_CAN_2_copy_TEST2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[1] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[1] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngle_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_60_Sgn_1 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_60_Sgn_2 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleVelX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_60_Sgn_3 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_60_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_60_Sgn_5 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* ObstacleType_Test */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_60_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ObstacleAngle_Test */
CANMMCAN_2_TX_Msg_60_Sgn_1 = ((real_T*)GetInputPortSignal(S,24))[0];

/* ObstacleVelY_Test */
CANMMCAN_2_TX_Msg_60_Sgn_2 = ((real_T*)GetInputPortSignal(S,25))[0];

/* ObstacleVelX_Test */
CANMMCAN_2_TX_Msg_60_Sgn_3 = ((real_T*)GetInputPortSignal(S,26))[0];

/* ObstaclePosY_Test */
CANMMCAN_2_TX_Msg_60_Sgn_4 = ((real_T*)GetInputPortSignal(S,27))[0];

/* ObstaclePosX_Test */
CANMMCAN_2_TX_Msg_60_Sgn_5 = ((real_T*)GetInputPortSignal(S,28))[0];

/* ObstacleType_Test */
CANMMCAN_2_TX_Msg_60_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,29))[0];
/* ObstacleAngle_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_60_Sgn_1 - (0)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_60_Sgn_1 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[6]) = (*((UInt16*)&data->pData[6]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_60_Sgn_2 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_60_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelX_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_60_Sgn_3 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_60_Sgn_3 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_60_Sgn_4 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_60_Sgn_4 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0x3FF)) << 6;                             
*((UInt16*)&data->pData[2]) = (*((UInt16*)&data->pData[2]) & INT16_TO_BE(~(0x3FF << 6))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosX_Test */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_60_Sgn_5 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_60_Sgn_5 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleType_Test */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_60_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[1], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[1];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[1];  
CANMMCAN_2_TXsta[1] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TEST3  -----*/  
void RTICANMM_MAIN_CAN_2_copy_TEST3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[2] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[2] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngle_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_61_Sgn_1 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_61_Sgn_2 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleVelX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_61_Sgn_3 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_61_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_61_Sgn_5 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* ObstacleType_Test */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_61_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ObstacleAngle_Test */
CANMMCAN_2_TX_Msg_61_Sgn_1 = ((real_T*)GetInputPortSignal(S,30))[0];

/* ObstacleVelY_Test */
CANMMCAN_2_TX_Msg_61_Sgn_2 = ((real_T*)GetInputPortSignal(S,31))[0];

/* ObstacleVelX_Test */
CANMMCAN_2_TX_Msg_61_Sgn_3 = ((real_T*)GetInputPortSignal(S,32))[0];

/* ObstaclePosY_Test */
CANMMCAN_2_TX_Msg_61_Sgn_4 = ((real_T*)GetInputPortSignal(S,33))[0];

/* ObstaclePosX_Test */
CANMMCAN_2_TX_Msg_61_Sgn_5 = ((real_T*)GetInputPortSignal(S,34))[0];

/* ObstacleType_Test */
CANMMCAN_2_TX_Msg_61_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,35))[0];
/* ObstacleAngle_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_61_Sgn_1 - (0)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_61_Sgn_1 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[6]) = (*((UInt16*)&data->pData[6]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_61_Sgn_2 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_61_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelX_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_61_Sgn_3 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_61_Sgn_3 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_61_Sgn_4 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_61_Sgn_4 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0x3FF)) << 6;                             
*((UInt16*)&data->pData[2]) = (*((UInt16*)&data->pData[2]) & INT16_TO_BE(~(0x3FF << 6))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosX_Test */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_61_Sgn_5 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_61_Sgn_5 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleType_Test */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_61_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[2], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[2];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[2];  
CANMMCAN_2_TXsta[2] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TEST4  -----*/  
void RTICANMM_MAIN_CAN_2_copy_TEST4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[3] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[3] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngle_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_62_Sgn_1 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_62_Sgn_2 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleVelX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_62_Sgn_3 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_62_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_62_Sgn_5 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* ObstacleType_Test */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_62_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ObstacleAngle_Test */
CANMMCAN_2_TX_Msg_62_Sgn_1 = ((real_T*)GetInputPortSignal(S,36))[0];

/* ObstacleVelY_Test */
CANMMCAN_2_TX_Msg_62_Sgn_2 = ((real_T*)GetInputPortSignal(S,37))[0];

/* ObstacleVelX_Test */
CANMMCAN_2_TX_Msg_62_Sgn_3 = ((real_T*)GetInputPortSignal(S,38))[0];

/* ObstaclePosY_Test */
CANMMCAN_2_TX_Msg_62_Sgn_4 = ((real_T*)GetInputPortSignal(S,39))[0];

/* ObstaclePosX_Test */
CANMMCAN_2_TX_Msg_62_Sgn_5 = ((real_T*)GetInputPortSignal(S,40))[0];

/* ObstacleType_Test */
CANMMCAN_2_TX_Msg_62_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,41))[0];
/* ObstacleAngle_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_62_Sgn_1 - (0)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_62_Sgn_1 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[6]) = (*((UInt16*)&data->pData[6]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_62_Sgn_2 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_62_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelX_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_62_Sgn_3 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_62_Sgn_3 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_62_Sgn_4 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_62_Sgn_4 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0x3FF)) << 6;                             
*((UInt16*)&data->pData[2]) = (*((UInt16*)&data->pData[2]) & INT16_TO_BE(~(0x3FF << 6))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosX_Test */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_62_Sgn_5 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_62_Sgn_5 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleType_Test */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_62_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[3], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[3];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[3];  
CANMMCAN_2_TXsta[3] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TEST5  -----*/  
void RTICANMM_MAIN_CAN_2_copy_TEST5(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[4] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[4] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngle_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_63_Sgn_1 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_63_Sgn_2 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleVelX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_63_Sgn_3 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_63_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_63_Sgn_5 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* ObstacleType_Test */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_63_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ObstacleAngle_Test */
CANMMCAN_2_TX_Msg_63_Sgn_1 = ((real_T*)GetInputPortSignal(S,42))[0];

/* ObstacleVelY_Test */
CANMMCAN_2_TX_Msg_63_Sgn_2 = ((real_T*)GetInputPortSignal(S,43))[0];

/* ObstacleVelX_Test */
CANMMCAN_2_TX_Msg_63_Sgn_3 = ((real_T*)GetInputPortSignal(S,44))[0];

/* ObstaclePosY_Test */
CANMMCAN_2_TX_Msg_63_Sgn_4 = ((real_T*)GetInputPortSignal(S,45))[0];

/* ObstaclePosX_Test */
CANMMCAN_2_TX_Msg_63_Sgn_5 = ((real_T*)GetInputPortSignal(S,46))[0];

/* ObstacleType_Test */
CANMMCAN_2_TX_Msg_63_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,47))[0];
/* ObstacleAngle_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_63_Sgn_1 - (0)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_63_Sgn_1 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[6]) = (*((UInt16*)&data->pData[6]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_63_Sgn_2 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_63_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelX_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_63_Sgn_3 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_63_Sgn_3 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_63_Sgn_4 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_63_Sgn_4 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0x3FF)) << 6;                             
*((UInt16*)&data->pData[2]) = (*((UInt16*)&data->pData[2]) & INT16_TO_BE(~(0x3FF << 6))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosX_Test */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_63_Sgn_5 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_63_Sgn_5 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleType_Test */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_63_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[4], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[4];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[4];  
CANMMCAN_2_TXsta[4] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- TEST6  -----*/  
void RTICANMM_MAIN_CAN_2_copy_TEST6(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[5] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[5] = data->CANMsg.Dlc;                                  
                                                                
/* ObstacleAngle_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_64_Sgn_1 = (double)0.1 * (double)signedTemp + (double)(0);                    

/* ObstacleVelY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_64_Sgn_2 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstacleVelX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
if (unsignedTemp & 0x800) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFF000;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_64_Sgn_3 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosY_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
if (unsignedTemp & 0x200) /* extend sign */      
  unsignedTemp = unsignedTemp | 0xFFFFFC00;                     
signedTemp = *((Int32*)&unsignedTemp);                     
CANMMCAN_2_RX_Msg_64_Sgn_4 = (double)0.0625 * (double)signedTemp + (double)(0);                    

/* ObstaclePosX_Test */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMCAN_2_RX_Msg_64_Sgn_5 = (double)0.0625 * (double)unsignedTemp + (double)(0);                    

/* ObstacleType_Test */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMCAN_2_RX_Msg_64_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ObstacleAngle_Test */
CANMMCAN_2_TX_Msg_64_Sgn_1 = ((real_T*)GetInputPortSignal(S,48))[0];

/* ObstacleVelY_Test */
CANMMCAN_2_TX_Msg_64_Sgn_2 = ((real_T*)GetInputPortSignal(S,49))[0];

/* ObstacleVelX_Test */
CANMMCAN_2_TX_Msg_64_Sgn_3 = ((real_T*)GetInputPortSignal(S,50))[0];

/* ObstaclePosY_Test */
CANMMCAN_2_TX_Msg_64_Sgn_4 = ((real_T*)GetInputPortSignal(S,51))[0];

/* ObstaclePosX_Test */
CANMMCAN_2_TX_Msg_64_Sgn_5 = ((real_T*)GetInputPortSignal(S,52))[0];

/* ObstacleType_Test */
CANMMCAN_2_TX_Msg_64_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,53))[0];
/* ObstacleAngle_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_64_Sgn_1 - (0)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_64_Sgn_1 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[6]) = (*((UInt16*)&data->pData[6]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_64_Sgn_2 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_64_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleVelX_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_64_Sgn_3 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_64_Sgn_3 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosY_Test */ 
signedTemp = (((CANMMCAN_2_TX_Msg_64_Sgn_4 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_64_Sgn_4 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(signedTemp & 0x3FF)) << 6;                             
*((UInt16*)&data->pData[2]) = (*((UInt16*)&data->pData[2]) & INT16_TO_BE(~(0x3FF << 6))) | INT16_TO_BE(unsignedTemp);               

/* ObstaclePosX_Test */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_64_Sgn_5 - (0)) / ((double)0.0625)) + (CANMMCAN_2_TX_Msg_64_Sgn_5 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* ObstacleType_Test */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_64_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x7 << 5))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[5], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[5];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[5];  
CANMMCAN_2_TXsta[5] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- YawRateInformation  -----*/  
void RTICANMM_MAIN_CAN_2_copy_YawRateInformation(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[8] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[8] = data->CANMsg.Dlc;                                  
                                                                
/* radarDeviceYawRate */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_65_Sgn_1 = (double)0.01 * (double)unsignedTemp + (double)(-327.68);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* radarDeviceYawRate */
CANMMCAN_2_TX_Msg_65_Sgn_1 = ((real_T*)GetInputPortSignal(S,54))[0];
/* radarDeviceYawRate */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_65_Sgn_1 - (-327.68)) / ((double)0.01)) + (CANMMCAN_2_TX_Msg_65_Sgn_1 > -327.68) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[8], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMCAN_2_MIDRX[8];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[8];  
CANMMCAN_2_TXsta[8] = 1;                                       
} /* TX */
}


