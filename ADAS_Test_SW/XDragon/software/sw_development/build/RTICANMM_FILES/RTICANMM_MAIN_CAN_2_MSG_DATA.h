/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_MSG_DATA */
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

/* Global variables used for signal decoding */                               
static ULong64 ulong64Temp  = 0;                                              
static Long64  long64Temp   = 0;                                              
static Int32   signedTemp   = 0;                                              
static UInt32  unsignedTemp = 0;                                              
static Float32 floatTemp    = 0.0;                                            
static double  doubleTemp   = 0.0;                                            


void RTICANMM_MAIN_CAN_2_copy_ABS2_C(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_ABS4_C(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_Lane_Details(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_SAS1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_CAN_2_copy_SpeedInformation(MainSetupMsgData* data, int direction, SimStruct *S);
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
  data->CANMsg.Format  = (CanMM_Msg_Format) msg->idformat;
  data->CANMsg.Id      = msg->identifier;           
  data->CANMsg.Dlc     = msg->len;                  
  for (i=0; i<8; i++) {                             
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
  for (i=0; i<8; i++) {                             
      msg->RAW_DATA[i] = data->pData[i];            
  }                                                 
}                                                   
                                                    
/*----------------------------------------------------------------------------------------------*/
/* ----- ABS2_C  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ABS2_C(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[2] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[2] = data->CANMsg.Dlc;                                  
                                                                
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


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[2], (uint8_T)8, (uint8_T)0);

  data->CANMsg.Id = CANMMCAN_2_MIDRX[2];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[2];  
CANMMCAN_2_TXsta[2] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ABS4_C  -----*/  
void RTICANMM_MAIN_CAN_2_copy_ABS4_C(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[3] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[3] = data->CANMsg.Dlc;                                  
                                                                
/* YawRate */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_2_Sgn_1 = (double)0.1 * (double)unsignedTemp + (double)(-100);                    

/* SteerAng */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_2_Sgn_2 = (double)0.25 * (double)unsignedTemp + (double)(-720);                    

/* SteerAng_Sensor_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_2_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* YawRate_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_2_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SteerAng_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_2_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* YawRate */
CANMMCAN_2_TX_Msg_2_Sgn_1 = ((real_T*)GetInputPortSignal(S,3))[0];

/* SteerAng */
CANMMCAN_2_TX_Msg_2_Sgn_2 = ((real_T*)GetInputPortSignal(S,4))[0];

/* SteerAng_Sensor_V */
CANMMCAN_2_TX_Msg_2_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,5))[0];

/* YawRate_V */
CANMMCAN_2_TX_Msg_2_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,6))[0];

/* SteerAng_V */
CANMMCAN_2_TX_Msg_2_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,7))[0];
/* YawRate */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_2_Sgn_1 - (-100)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_2_Sgn_1 > -100) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[3]) = (*((UInt16*)&data->pData[3]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* SteerAng */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_2_Sgn_2 - (-720)) / ((double)0.25)) + (CANMMCAN_2_TX_Msg_2_Sgn_2 > -720) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[1]) = (*((UInt16*)&data->pData[1]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* SteerAng_Sensor_V */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_2_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 4;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 4))) | INT8_TO_BE(unsignedTemp);               

/* YawRate_V */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_2_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 6;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 6))) | INT8_TO_BE(unsignedTemp);               

/* SteerAng_V */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_2_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[3], (uint8_T)8, (uint8_T)0);

  data->CANMsg.Id = CANMMCAN_2_MIDRX[3];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[3];  
CANMMCAN_2_TXsta[3] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- Lane_Details  -----*/  
void RTICANMM_MAIN_CAN_2_copy_Lane_Details(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[5] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[5] = data->CANMsg.Dlc;                                  
                                                                
/* Left_Guard_Rail */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_3_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Right_Guard_Rail */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_3_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* construction_area */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_3_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Right_LDW_Availability */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_3_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Left_LDW_Availability */ 
unsignedTemp = INT8_FROM_LE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_3_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Yaw_Angle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_3_Sgn_6 = (double)0.0009765625 * (double)unsignedTemp + (double)(-31.999023438);                    

/* Pitch_Angle */ 
unsignedTemp = INT16_FROM_LE(*(UInt16*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_3_Sgn_7 = (double)1.5259021897e-06 * (double)unsignedTemp + (double)(-0.05);                    

/* Number_of_Lanes */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_3_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Position_in_Lanes */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_3_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 0))[0] = CANMMCAN_2_RX_Msg_3_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 1))[0] = CANMMCAN_2_RX_Msg_3_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 2))[0] = CANMMCAN_2_RX_Msg_3_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 3))[0] = CANMMCAN_2_RX_Msg_3_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 4))[0] = CANMMCAN_2_RX_Msg_3_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 5))[0] = CANMMCAN_2_RX_Msg_3_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 6))[0] = CANMMCAN_2_RX_Msg_3_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 7))[0] = CANMMCAN_2_RX_Msg_3_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 8))[0] = CANMMCAN_2_RX_Msg_3_Sgn_9;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SAS1  -----*/  
void RTICANMM_MAIN_CAN_2_copy_SAS1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[4] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[4] = data->CANMsg.Dlc;                                  
                                                                
/* SAS_CheckSum */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_4_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_MsgCount */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMCAN_2_RX_Msg_4_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_OK */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_4_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_CAL */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMCAN_2_RX_Msg_4_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* SAS_Angle */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_4_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(-900);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* SAS_CheckSum */
CANMMCAN_2_TX_Msg_4_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,8))[0];

/* SAS_MsgCount */
CANMMCAN_2_TX_Msg_4_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,9))[0];

/* SAS_OK */
CANMMCAN_2_TX_Msg_4_Sgn_3 = ((boolean_T*)GetInputPortSignal(S,10))[0];

/* SAS_CAL */
CANMMCAN_2_TX_Msg_4_Sgn_4 = ((boolean_T*)GetInputPortSignal(S,11))[0];

/* SAS_Angle */
CANMMCAN_2_TX_Msg_4_Sgn_5 = ((real_T*)GetInputPortSignal(S,12))[0];
/* SAS_CheckSum */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_4_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 0;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xF << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_MsgCount */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_4_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[4]) = (*((UInt8*)&data->pData[4]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* SAS_OK */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_4_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* SAS_CAL */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_4_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[3]) = (*((UInt8*)&data->pData[3]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* SAS_Angle */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_4_Sgn_5 - (-900)) / ((double)0.1)) + (CANMMCAN_2_TX_Msg_4_Sgn_5 > -900) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[4], (uint8_T)8, (uint8_T)0);

  data->CANMsg.Id = CANMMCAN_2_MIDRX[4];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[4];  
CANMMCAN_2_TXsta[4] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SpeedInformation  -----*/  
void RTICANMM_MAIN_CAN_2_copy_SpeedInformation(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[0] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[0] = data->CANMsg.Dlc;                                  
                                                                
/* radarDeviceSpeedDirection */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMCAN_2_RX_Msg_5_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* radarDeviceSpeed */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMCAN_2_RX_Msg_5_Sgn_2 = (double)0.02 * (double)unsignedTemp + (double)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* radarDeviceSpeedDirection */
CANMMCAN_2_TX_Msg_5_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,13))[0];

/* radarDeviceSpeed */
CANMMCAN_2_TX_Msg_5_Sgn_2 = ((real_T*)GetInputPortSignal(S,14))[0];
/* radarDeviceSpeedDirection */ 
unsignedTemp = (CANMMCAN_2_TX_Msg_5_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 0;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x3 << 0))) | INT8_TO_BE(unsignedTemp);               

/* radarDeviceSpeed */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_5_Sgn_2 - (0)) / ((double)0.02)) + (CANMMCAN_2_TX_Msg_5_Sgn_2 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1FFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0x1FFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[0], (uint8_T)8, (uint8_T)0);

  data->CANMsg.Id = CANMMCAN_2_MIDRX[0];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[0];  
CANMMCAN_2_TXsta[0] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- YawRateInformation  -----*/  
void RTICANMM_MAIN_CAN_2_copy_YawRateInformation(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMCAN_2_MIDFRX[1] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMCAN_2_RXLEN[1] = data->CANMsg.Dlc;                                  
                                                                
/* radarDeviceYawRate */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMCAN_2_RX_Msg_6_Sgn_1 = (double)0.01 * (double)unsignedTemp + (double)(-327.68);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* radarDeviceYawRate */
CANMMCAN_2_TX_Msg_6_Sgn_1 = ((real_T*)GetInputPortSignal(S,15))[0];
/* radarDeviceYawRate */ 
unsignedTemp = (((CANMMCAN_2_TX_Msg_6_Sgn_1 - (-327.68)) / ((double)0.01)) + (CANMMCAN_2_TX_Msg_6_Sgn_1 > -327.68) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMCAN_2_TXLEN[1], (uint8_T)8, (uint8_T)0);

  data->CANMsg.Id = CANMMCAN_2_MIDRX[1];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMCAN_2_MIDFTX[1];  
CANMMCAN_2_TXsta[1] = 1;                                       
} /* TX */
}


