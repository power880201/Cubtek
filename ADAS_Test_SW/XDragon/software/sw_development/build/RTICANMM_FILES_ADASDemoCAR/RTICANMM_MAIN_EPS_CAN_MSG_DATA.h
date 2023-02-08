/*****************************************************************************************************************************/
/* RTICANMM_MAIN_EPS_CAN_MSG_DATA */
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


void RTICANMM_MAIN_EPS_CAN_copy_ABS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_EPS_CAN_copy_ABS2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_EPS_CAN_copy_ABS3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_EPS_CAN_copy_ECM2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_EPS_CAN_copy_EPS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_EPS_CAN_copy_EPS2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_EPS_CAN_copy_GWA1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_EPS_CAN_copy_IFC1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_EPS_CAN_copy_SAS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_EPS_CAN_copy_SAS2(MainSetupMsgData* data, int direction, SimStruct *S);
                                           
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
void RTICANMM_MAIN_EPS_CAN_copy_ABS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[3] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[3] = data->CANMsg.Dlc;                                  
                                                                
/* RollingCounter_ABS1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMEPS_CAN_RX_Msg_1_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FRWheelSpd */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMEPS_CAN_RX_Msg_1_Sgn_2 = (double)0.05625 * (double)unsignedTemp + (double)(0);                    

/* FRWheelSpdValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_1_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FLWheelSpd */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMEPS_CAN_RX_Msg_1_Sgn_4 = (double)0.05625 * (double)unsignedTemp + (double)(0);                    

/* FLWheelSpdValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_1_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CheckSum_ABS1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_1_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* RollingCounter_ABS1 */
CANMMEPS_CAN_TX_Msg_1_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,0))[0];

/* FRWheelSpd */
CANMMEPS_CAN_TX_Msg_1_Sgn_2 = ((real_T*)GetInputPortSignal(S,1))[0];

/* FRWheelSpdValid */
CANMMEPS_CAN_TX_Msg_1_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,2))[0];

/* FLWheelSpd */
CANMMEPS_CAN_TX_Msg_1_Sgn_4 = ((real_T*)GetInputPortSignal(S,3))[0];

/* FLWheelSpdValid */
CANMMEPS_CAN_TX_Msg_1_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,4))[0];

/* CheckSum_ABS1 */
CANMMEPS_CAN_TX_Msg_1_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,5))[0];
/* RollingCounter_ABS1 */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_1_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_LE(~(0xF << 0))) | INT8_TO_LE(unsignedTemp);               

/* FRWheelSpd */ 
unsignedTemp = (((CANMMEPS_CAN_TX_Msg_1_Sgn_2 - (0)) / ((double)0.05625)) + (CANMMEPS_CAN_TX_Msg_1_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1FFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_LE(~(0x1FFF << 0))) | INT16_TO_LE(unsignedTemp);               

/* FRWheelSpdValid */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_1_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_LE(~(0x1 << 5))) | INT8_TO_LE(unsignedTemp);               

/* FLWheelSpd */ 
unsignedTemp = (((CANMMEPS_CAN_TX_Msg_1_Sgn_4 - (0)) / ((double)0.05625)) + (CANMMEPS_CAN_TX_Msg_1_Sgn_4 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1FFF)) << 0;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_LE(~(0x1FFF << 0))) | INT16_TO_LE(unsignedTemp);               

/* FLWheelSpdValid */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_1_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_LE(~(0x1 << 5))) | INT8_TO_LE(unsignedTemp);               

/* CheckSum_ABS1 */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_1_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_LE(~(0xFF << 0))) | INT8_TO_LE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMEPS_CAN_TXLEN[2], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMEPS_CAN_MIDRX[3];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMEPS_CAN_MIDFTX[3];  
CANMMEPS_CAN_TXsta[2] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS2  -----*/  
void RTICANMM_MAIN_EPS_CAN_copy_ABS2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[4] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[4] = data->CANMsg.Dlc;                                  
                                                                
/* RollingCounter_ABS2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMEPS_CAN_RX_Msg_2_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RRWheelSpd */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMEPS_CAN_RX_Msg_2_Sgn_2 = (double)0.05625 * (double)unsignedTemp + (double)(0);                    

/* RRWheelSpdValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_2_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RLWheelSpd */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMEPS_CAN_RX_Msg_2_Sgn_4 = (double)0.05625 * (double)unsignedTemp + (double)(0);                    

/* RLWheelSpdValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_2_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CheckSum_ABS2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_2_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* RollingCounter_ABS2 */
CANMMEPS_CAN_TX_Msg_2_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,6))[0];

/* RRWheelSpd */
CANMMEPS_CAN_TX_Msg_2_Sgn_2 = ((real_T*)GetInputPortSignal(S,7))[0];

/* RRWheelSpdValid */
CANMMEPS_CAN_TX_Msg_2_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,8))[0];

/* RLWheelSpd */
CANMMEPS_CAN_TX_Msg_2_Sgn_4 = ((real_T*)GetInputPortSignal(S,9))[0];

/* RLWheelSpdValid */
CANMMEPS_CAN_TX_Msg_2_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,10))[0];

/* CheckSum_ABS2 */
CANMMEPS_CAN_TX_Msg_2_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,11))[0];
/* RollingCounter_ABS2 */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_2_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_LE(~(0xF << 0))) | INT8_TO_LE(unsignedTemp);               

/* RRWheelSpd */ 
unsignedTemp = (((CANMMEPS_CAN_TX_Msg_2_Sgn_2 - (0)) / ((double)0.05625)) + (CANMMEPS_CAN_TX_Msg_2_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1FFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_LE(~(0x1FFF << 0))) | INT16_TO_LE(unsignedTemp);               

/* RRWheelSpdValid */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_2_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_LE(~(0x1 << 5))) | INT8_TO_LE(unsignedTemp);               

/* RLWheelSpd */ 
unsignedTemp = (((CANMMEPS_CAN_TX_Msg_2_Sgn_4 - (0)) / ((double)0.05625)) + (CANMMEPS_CAN_TX_Msg_2_Sgn_4 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1FFF)) << 0;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_LE(~(0x1FFF << 0))) | INT16_TO_LE(unsignedTemp);               

/* RLWheelSpdValid */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_2_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_LE(~(0x1 << 5))) | INT8_TO_LE(unsignedTemp);               

/* CheckSum_ABS2 */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_2_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_LE(~(0xFF << 0))) | INT8_TO_LE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMEPS_CAN_TXLEN[3], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMEPS_CAN_MIDRX[4];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMEPS_CAN_MIDFTX[4];  
CANMMEPS_CAN_TXsta[3] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS3  -----*/  
void RTICANMM_MAIN_EPS_CAN_copy_ABS3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[5] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[5] = data->CANMsg.Dlc;                                  
                                                                
/* RollingCounter_ABS3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMEPS_CAN_RX_Msg_3_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VehcileSpd */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMEPS_CAN_RX_Msg_3_Sgn_2 = (double)0.05625 * (double)unsignedTemp + (double)(0);                    

/* VehicleSpdValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_3_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CheckSum_ABS3 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_3_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* RollingCounter_ABS3 */
CANMMEPS_CAN_TX_Msg_3_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,12))[0];

/* VehcileSpd */
CANMMEPS_CAN_TX_Msg_3_Sgn_2 = ((real_T*)GetInputPortSignal(S,13))[0];

/* VehicleSpdValid */
CANMMEPS_CAN_TX_Msg_3_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,14))[0];

/* CheckSum_ABS3 */
CANMMEPS_CAN_TX_Msg_3_Sgn_4 = ((uint8_T*)GetInputPortSignal(S,15))[0];
/* RollingCounter_ABS3 */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_3_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_LE(~(0xF << 0))) | INT8_TO_LE(unsignedTemp);               

/* VehcileSpd */ 
unsignedTemp = (((CANMMEPS_CAN_TX_Msg_3_Sgn_2 - (0)) / ((double)0.05625)) + (CANMMEPS_CAN_TX_Msg_3_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1FFF)) << 0;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_LE(~(0x1FFF << 0))) | INT16_TO_LE(unsignedTemp);               

/* VehicleSpdValid */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_3_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_LE(~(0x1 << 5))) | INT8_TO_LE(unsignedTemp);               

/* CheckSum_ABS3 */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_3_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_LE(~(0xFF << 0))) | INT8_TO_LE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMEPS_CAN_TXLEN[4], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMEPS_CAN_MIDRX[5];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMEPS_CAN_MIDFTX[5];  
CANMMEPS_CAN_TXsta[4] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ECM2  -----*/  
void RTICANMM_MAIN_EPS_CAN_copy_ECM2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[6] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[6] = data->CANMsg.Dlc;                                  
                                                                
/* EngState */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMEPS_CAN_RX_Msg_4_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* EngState */
CANMMEPS_CAN_TX_Msg_4_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,16))[0];
/* EngState */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_4_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 3;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_LE(~(0x3 << 3))) | INT8_TO_LE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMEPS_CAN_TXLEN[5], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMEPS_CAN_MIDRX[6];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMEPS_CAN_MIDFTX[6];  
CANMMEPS_CAN_TXsta[5] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- EPS1  -----*/  
void RTICANMM_MAIN_EPS_CAN_copy_EPS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[8] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 11))[0] = CANMMEPS_CAN_RXt[8];   
    ((real_T*) ssGetOutputPortSignal(S, 12))[0] = CANMMEPS_CAN_RXdt[8];   
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[8] = data->CANMsg.Dlc;                                  
                                                                
/* RollingCounter_EPS1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_CurrMod */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_ConsumedCurrValue */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_3 = (double)0.5 * (double)unsignedTemp + (double)(0);                    

/* EPS_DrvInputTrqValue */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_4 = (double)0.1794 * (double)unsignedTemp + (double)(-22.78);                    

/* EPS_AvailSts */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_InterferDetdValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_InterferDetd */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_TrqSnsrSts */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_FailSts */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CheckSum_EPS1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_5_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 0))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 1))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 2))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 3))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 4))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 5))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 6))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 7))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 8))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 9))[0] = CANMMEPS_CAN_RX_Msg_5_Sgn_10;
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
/* ----- EPS2  -----*/  
void RTICANMM_MAIN_EPS_CAN_copy_EPS2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[2] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 30))[0] = CANMMEPS_CAN_RXt[2];   
    ((real_T*) ssGetOutputPortSignal(S, 31))[0] = CANMMEPS_CAN_RXdt[2];   
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[2] = data->CANMsg.Dlc;                                  
                                                                
/* RollingCounter_EPS2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMEPS_CAN_RX_Msg_6_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_LKATrqOvlDlvdSts */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMEPS_CAN_RX_Msg_6_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_HandsOffDetnModEnable */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_6_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_LKATorqOvrlDlvdValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_6_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_LKATorqOvrlDlvd */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMEPS_CAN_RX_Msg_6_Sgn_5 = (double)0.01 * (double)unsignedTemp + (double)(-15);                    

/* EPS_HandsOffDetnStsValid */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_6_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPS_HandsOffDetnSts */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_6_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CheckSum_EPS2 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_6_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 21))[0] = CANMMEPS_CAN_RX_Msg_6_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 22))[0] = CANMMEPS_CAN_RX_Msg_6_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 23))[0] = CANMMEPS_CAN_RX_Msg_6_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 24))[0] = CANMMEPS_CAN_RX_Msg_6_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 25))[0] = CANMMEPS_CAN_RX_Msg_6_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 26))[0] = CANMMEPS_CAN_RX_Msg_6_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 27))[0] = CANMMEPS_CAN_RX_Msg_6_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 28))[0] = CANMMEPS_CAN_RX_Msg_6_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 32))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 33))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 34))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 35))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 36))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 37))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 38))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 39))[0] = data->pData[7];
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- GWA1  -----*/  
void RTICANMM_MAIN_EPS_CAN_copy_GWA1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[7] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[7] = data->CANMsg.Dlc;                                  
                                                                
/* EPSSwErrorSts */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_7_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* EPSSwSts */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_7_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* EPSSwErrorSts */
CANMMEPS_CAN_TX_Msg_7_Sgn_1 = ((boolean_T*)GetInputPortSignal(S,17))[0];

/* EPSSwSts */
CANMMEPS_CAN_TX_Msg_7_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,18))[0];
/* EPSSwErrorSts */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_7_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_LE(~(0x1 << 4))) | INT8_TO_LE(unsignedTemp);               

/* EPSSwSts */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_7_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 5;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_LE(~(0x1 << 5))) | INT8_TO_LE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMEPS_CAN_TXLEN[6], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMEPS_CAN_MIDRX[7];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMEPS_CAN_MIDFTX[7];  
CANMMEPS_CAN_TXsta[6] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- IFC1  -----*/  
void RTICANMM_MAIN_EPS_CAN_copy_IFC1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[1] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[1] = data->CANMsg.Dlc;                                  
                                                                
/* RollingCounter_IFC */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMEPS_CAN_RX_Msg_8_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LKATrqCmdReqFlag */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_8_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LKATrqOvlCmdReqValue */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMEPS_CAN_RX_Msg_8_Sgn_3 = (double)0.01 * (double)unsignedTemp + (double)(-10.23);                    

/* LKATrqOvlCmdProtnValue */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3FFF;                             
CANMMEPS_CAN_RX_Msg_8_Sgn_4 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* CheckSum_IFC */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_8_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* RollingCounter_IFC */
CANMMEPS_CAN_TX_Msg_8_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,19))[0];

/* LKATrqCmdReqFlag */
CANMMEPS_CAN_TX_Msg_8_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,20))[0];

/* LKATrqOvlCmdReqValue */
CANMMEPS_CAN_TX_Msg_8_Sgn_3 = ((real_T*)GetInputPortSignal(S,21))[0];

/* LKATrqOvlCmdProtnValue */
CANMMEPS_CAN_TX_Msg_8_Sgn_4 = ((uint16_T*)GetInputPortSignal(S,22))[0];

/* CheckSum_IFC */
CANMMEPS_CAN_TX_Msg_8_Sgn_5 = ((uint8_T*)GetInputPortSignal(S,23))[0];
/* RollingCounter_IFC */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_8_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_LE(~(0xF << 0))) | INT8_TO_LE(unsignedTemp);               

/* LKATrqCmdReqFlag */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_8_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_LE(~(0x1 << 1))) | INT8_TO_LE(unsignedTemp);               

/* LKATrqOvlCmdReqValue */ 
unsignedTemp = (((CANMMEPS_CAN_TX_Msg_8_Sgn_3 - (-10.23)) / ((double)0.01)) + (CANMMEPS_CAN_TX_Msg_8_Sgn_3 > -10.23) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7FF)) << 5;                             
*((UInt16*)&data->pData[2]) = (*((UInt16*)&data->pData[2]) & INT16_TO_LE(~(0x7FF << 5))) | INT16_TO_LE(unsignedTemp);               

/* LKATrqOvlCmdProtnValue */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_8_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3FFF)) << 2;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_LE(~(0x3FFF << 2))) | INT16_TO_LE(unsignedTemp);               

/* CheckSum_IFC */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_8_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_LE(~(0xFF << 0))) | INT8_TO_LE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMEPS_CAN_TXLEN[1], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMEPS_CAN_MIDRX[1];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMEPS_CAN_MIDFTX[1];  
CANMMEPS_CAN_TXsta[1] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SAS1  -----*/  
void RTICANMM_MAIN_EPS_CAN_copy_SAS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[0] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[0] = data->CANMsg.Dlc;                                  
                                                                
/* RollingCounter_SAS1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMEPS_CAN_RX_Msg_9_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Sts */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMEPS_CAN_RX_Msg_9_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Generation */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_9_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SteerWheelSpdSign */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_9_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SteerWheelSpd */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMEPS_CAN_RX_Msg_9_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* SteerWheelAngleSign */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_9_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SteerWheelAngle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FFF;                             
CANMMEPS_CAN_RX_Msg_9_Sgn_7 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* CheckSum_SAS1 */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_9_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* RollingCounter_SAS1 */
CANMMEPS_CAN_TX_Msg_9_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,24))[0];

/* SAS_Sts */
CANMMEPS_CAN_TX_Msg_9_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,25))[0];

/* SAS_Generation */
CANMMEPS_CAN_TX_Msg_9_Sgn_3 = ((uint8_T*)GetInputPortSignal(S,26))[0];

/* SteerWheelSpdSign */
CANMMEPS_CAN_TX_Msg_9_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,27))[0];

/* SteerWheelSpd */
CANMMEPS_CAN_TX_Msg_9_Sgn_5 = ((real_T*)GetInputPortSignal(S,28))[0];

/* SteerWheelAngleSign */
CANMMEPS_CAN_TX_Msg_9_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,29))[0];

/* SteerWheelAngle */
CANMMEPS_CAN_TX_Msg_9_Sgn_7 = ((real_T*)GetInputPortSignal(S,30))[0];

/* CheckSum_SAS1 */
CANMMEPS_CAN_TX_Msg_9_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,31))[0];
/* RollingCounter_SAS1 */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_9_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_LE(~(0xF << 0))) | INT8_TO_LE(unsignedTemp);               

/* SAS_Sts */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_9_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 6;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_LE(~(0x3 << 6))) | INT8_TO_LE(unsignedTemp);               

/* SAS_Generation */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_9_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_LE(~(0xFF << 0))) | INT8_TO_LE(unsignedTemp);               

/* SteerWheelSpdSign */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_9_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_LE(~(0x1 << 0))) | INT8_TO_LE(unsignedTemp);               

/* SteerWheelSpd */ 
unsignedTemp = (((CANMMEPS_CAN_TX_Msg_9_Sgn_5 - (0)) / ((double)0.1)) + (CANMMEPS_CAN_TX_Msg_9_Sgn_5 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7FFF)) << 1;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_LE(~(0x7FFF << 1))) | INT16_TO_LE(unsignedTemp);               

/* SteerWheelAngleSign */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_9_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[5]) = (*((UInt8*)&data->pData[5]) & INT8_TO_LE(~(0x1 << 0))) | INT8_TO_LE(unsignedTemp);               

/* SteerWheelAngle */ 
unsignedTemp = (((CANMMEPS_CAN_TX_Msg_9_Sgn_7 - (0)) / ((double)0.1)) + (CANMMEPS_CAN_TX_Msg_9_Sgn_7 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7FFF)) << 1;                             
*((UInt16*)&data->pData[5]) = (*((UInt16*)&data->pData[5]) & INT16_TO_LE(~(0x7FFF << 1))) | INT16_TO_LE(unsignedTemp);               

/* CheckSum_SAS1 */ 
unsignedTemp = (CANMMEPS_CAN_TX_Msg_9_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_LE(~(0xFF << 0))) | INT8_TO_LE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMEPS_CAN_TXLEN[0], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMEPS_CAN_MIDRX[0];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMEPS_CAN_MIDFTX[0];  
CANMMEPS_CAN_TXsta[0] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SAS2  -----*/  
void RTICANMM_MAIN_EPS_CAN_copy_SAS2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMEPS_CAN_MIDFRX[9] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 53))[0] = CANMMEPS_CAN_RXt[9];   
    ((real_T*) ssGetOutputPortSignal(S, 54))[0] = CANMMEPS_CAN_RXdt[9];   
                                                                
    /* Decode message data */                                   
    CANMMEPS_CAN_RXLEN[9] = data->CANMsg.Dlc;                                  
                                                                
/* SAS_CheckSum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_MsgCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_OK */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_CAL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Trim */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Speed_Valid */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Stat_SF1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Stat_SF2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Stat_SF3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Stat_SF4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Speed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_11 = (UInt16)4 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* SAS_Angle */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMEPS_CAN_RX_Msg_10_Sgn_12 = (double)0.1 * (double)unsignedTemp + (double)(-900);                    

((uint8_T*) ssGetOutputPortSignal(S, 40))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 41))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 42))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 43))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 44))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 45))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 46))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 47))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 48))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 49))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_10;
((uint16_T*) ssGetOutputPortSignal(S, 50))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 51))[0] = CANMMEPS_CAN_RX_Msg_10_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 55))[0] = data->pData[0];
((uint8_T*) ssGetOutputPortSignal(S, 56))[0] = data->pData[1];
((uint8_T*) ssGetOutputPortSignal(S, 57))[0] = data->pData[2];
((uint8_T*) ssGetOutputPortSignal(S, 58))[0] = data->pData[3];
((uint8_T*) ssGetOutputPortSignal(S, 59))[0] = data->pData[4];
((uint8_T*) ssGetOutputPortSignal(S, 60))[0] = data->pData[5];
((uint8_T*) ssGetOutputPortSignal(S, 61))[0] = data->pData[6];
((uint8_T*) ssGetOutputPortSignal(S, 62))[0] = data->pData[7];
}      
}


