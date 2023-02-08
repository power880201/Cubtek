/*****************************************************************************************************************************/
/* RTICANMM_MAIN_ADAS_CAN_MSG_DATA */
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


void RTICANMM_MAIN_ADAS_CAN_copy_ADAS10(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_ADAS11(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP1(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP10(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP11(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP12(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP13(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP14(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP15(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP16(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP17(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP18(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP19(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP2(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP20(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP21(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP22(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP23(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP24(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP25(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP26(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP27(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP28(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP29(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP3(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP30(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP31(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP32(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP33(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP34(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP35(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP36(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP37(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP38(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP39(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP4(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP40(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP41(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP42(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP43(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP44(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP45(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP46(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP47(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP48(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP49(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP5(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP50(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP51(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP52(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP53(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP54(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP55(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP56(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP57(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP58(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP59(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP6(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP60(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP61(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP7(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP8(MainSetupMsgData* data, int direction, SimStruct *S);
void RTICANMM_MAIN_ADAS_CAN_copy_SENP9(MainSetupMsgData* data, int direction, SimStruct *S);
void CANMMADAS_CAN_CAPF(MainSetupMsgData* data, SimStruct *S, int MsgIdx);
/*----------------------------------------------------------------------------------------------*/    
/* CAPTURE MESSAGES */

void CANMMADAS_CAN_CAPF(MainSetupMsgData *data, SimStruct *S, int MsgIdx)
{                                                             
                                                              
  /* Set RX status when loopback timeinfo is received */      
    CANMMADAS_CAN_CAPS[MsgIdx] = 1;   /* set status to 1 for one step */        
((uint32_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_CAPOID[MsgIdx]))[0] = data->CANMsg.Id;          
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_CAPOIDF[MsgIdx]))[0] = data->CANMsg.Format;       
((real_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COT[MsgIdx]))[0]   = data->CANMsg.TimeStamp;   
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COLEN[MsgIdx]))[0]  = data->CANMsg.Dlc;         
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COIDX_0[MsgIdx]))[0] = data->pData[0];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COIDX_1[MsgIdx]))[0] = data->pData[1];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COIDX_2[MsgIdx]))[0] = data->pData[2];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COIDX_3[MsgIdx]))[0] = data->pData[3];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COIDX_4[MsgIdx]))[0] = data->pData[4];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COIDX_5[MsgIdx]))[0] = data->pData[5];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COIDX_6[MsgIdx]))[0] = data->pData[6];  
((uint8_T*) ssGetOutputPortSignal(S, CANMMADAS_CAN_COIDX_7[MsgIdx]))[0] = data->pData[7];  
  CANMMADAS_CAN_CAPID[MsgIdx] = data->CANMsg.Id;                              
  CANMMADAS_CAN_CAPIDF[MsgIdx] = data->CANMsg.Format;                          
  CANMMADAS_CAN_CAPT[MsgIdx] = data->CANMsg.TimeStamp;                       
  CANMMADAS_CAN_CAPL[MsgIdx] = data->CANMsg.Dlc;                             
  CANMMADAS_CAN_CAPD_0[MsgIdx] = data->pData[0];                       
  CANMMADAS_CAN_CAPD_1[MsgIdx] = data->pData[1];                       
  CANMMADAS_CAN_CAPD_2[MsgIdx] = data->pData[2];                       
  CANMMADAS_CAN_CAPD_3[MsgIdx] = data->pData[3];                       
  CANMMADAS_CAN_CAPD_4[MsgIdx] = data->pData[4];                       
  CANMMADAS_CAN_CAPD_5[MsgIdx] = data->pData[5];                       
  CANMMADAS_CAN_CAPD_6[MsgIdx] = data->pData[6];                       
  CANMMADAS_CAN_CAPD_7[MsgIdx] = data->pData[7];                       
                                                              
                                                              
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
/* ----- ADAS10  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_ADAS10(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[0] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[0] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS1_LifeCount_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_1_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CrashOutputSts_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_1_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Str_Angle_ADAS */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_1_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-900);                    

/* YawRate_ADAS */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_1_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-100);                    

/* Str_Angle_ADAS_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_1_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Brk_Sta_ADAS_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_1_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Brk_Sta_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_1_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* YawRate_ADAS_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_1_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* VehSpeed_ADAS */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_1_Sgn_9 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS1_LifeCount_ADAS */
CANMMADAS_CAN_TX_Msg_1_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,0))[0];

/* CrashOutputSts_ADAS */
CANMMADAS_CAN_TX_Msg_1_Sgn_2 = ((uint8_T*)GetInputPortSignal(S,1))[0];

/* Str_Angle_ADAS */
CANMMADAS_CAN_TX_Msg_1_Sgn_3 = ((real_T*)GetInputPortSignal(S,2))[0];

/* YawRate_ADAS */
CANMMADAS_CAN_TX_Msg_1_Sgn_4 = ((real_T*)GetInputPortSignal(S,3))[0];

/* Str_Angle_ADAS_V */
CANMMADAS_CAN_TX_Msg_1_Sgn_5 = ((boolean_T*)GetInputPortSignal(S,4))[0];

/* Brk_Sta_ADAS_V */
CANMMADAS_CAN_TX_Msg_1_Sgn_6 = ((boolean_T*)GetInputPortSignal(S,5))[0];

/* Brk_Sta_ADAS */
CANMMADAS_CAN_TX_Msg_1_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,6))[0];

/* YawRate_ADAS_V */
CANMMADAS_CAN_TX_Msg_1_Sgn_8 = ((boolean_T*)GetInputPortSignal(S,7))[0];

/* VehSpeed_ADAS */
CANMMADAS_CAN_TX_Msg_1_Sgn_9 = ((real_T*)GetInputPortSignal(S,8))[0];
/* ADAS1_LifeCount_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_1_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* CrashOutputSts_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_1_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFF)) << 0;                             
*((UInt8*)&data->pData[6]) = (*((UInt8*)&data->pData[6]) & INT8_TO_BE(~(0xFF << 0))) | INT8_TO_BE(unsignedTemp);               

/* Str_Angle_ADAS */ 
unsignedTemp = (((CANMMADAS_CAN_TX_Msg_1_Sgn_3 - (-900)) / ((double)0.1)) + (CANMMADAS_CAN_TX_Msg_1_Sgn_3 > -900) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[4]) = (*((UInt16*)&data->pData[4]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* YawRate_ADAS */ 
unsignedTemp = (((CANMMADAS_CAN_TX_Msg_1_Sgn_4 - (-100)) / ((double)0.1)) + (CANMMADAS_CAN_TX_Msg_1_Sgn_4 > -100) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFFF)) << 0;                             
*((UInt16*)&data->pData[2]) = (*((UInt16*)&data->pData[2]) & INT16_TO_BE(~(0xFFFF << 0))) | INT16_TO_BE(unsignedTemp);               

/* Str_Angle_ADAS_V */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_1_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 0;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 0))) | INT8_TO_BE(unsignedTemp);               

/* Brk_Sta_ADAS_V */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_1_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 1;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 1))) | INT8_TO_BE(unsignedTemp);               

/* Brk_Sta_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_1_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 2;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 2))) | INT8_TO_BE(unsignedTemp);               

/* YawRate_ADAS_V */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_1_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* VehSpeed_ADAS */ 
unsignedTemp = (((CANMMADAS_CAN_TX_Msg_1_Sgn_9 - (0)) / ((double)0.125)) + (CANMMADAS_CAN_TX_Msg_1_Sgn_9 > 0) - 0.5);                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xFFF)) << 4;                             
*((UInt16*)&data->pData[0]) = (*((UInt16*)&data->pData[0]) & INT16_TO_BE(~(0xFFF << 4))) | INT16_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMADAS_CAN_TXLEN[0], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMADAS_CAN_MIDRX[0];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMADAS_CAN_MIDFTX[0];  
CANMMADAS_CAN_TXsta[0] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- ADAS11  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_ADAS11(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[1] = (int)data->CANMsg.Format;                            
  
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[1] = data->CANMsg.Dlc;                                  
                                                                
/* ADAS2_LifeCount_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_2_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* LDW_Enable_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_2_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CSW_FWipSw_Sta_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_2_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FECU_HiBeamRly_Sta_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_2_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* FECU_LoBeamRly_Sta_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_2_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CSW_TurnSw_Sta_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_2_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_GEAR_STA_NOW_ADAS_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_2_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* CAN_GEAR_STATE_NOW_ADAS */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_2_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

}      
else {  /* TX ========================================================================================== */ 
/* Init encode structure */                                 
*((UInt32*)data->pData) = INT32_TO_BE(0x00000000);              
*((UInt32*)(data->pData+4)) = INT32_TO_BE(0x00000000);          

/* ADAS2_LifeCount_ADAS */
CANMMADAS_CAN_TX_Msg_2_Sgn_1 = ((uint8_T*)GetInputPortSignal(S,9))[0];

/* LDW_Enable_ADAS */
CANMMADAS_CAN_TX_Msg_2_Sgn_2 = ((boolean_T*)GetInputPortSignal(S,10))[0];

/* CSW_FWipSw_Sta_ADAS */
CANMMADAS_CAN_TX_Msg_2_Sgn_3 = ((uint8_T*)GetInputPortSignal(S,11))[0];

/* FECU_HiBeamRly_Sta_ADAS */
CANMMADAS_CAN_TX_Msg_2_Sgn_4 = ((uint8_T*)GetInputPortSignal(S,12))[0];

/* FECU_LoBeamRly_Sta_ADAS */
CANMMADAS_CAN_TX_Msg_2_Sgn_5 = ((uint8_T*)GetInputPortSignal(S,13))[0];

/* CSW_TurnSw_Sta_ADAS */
CANMMADAS_CAN_TX_Msg_2_Sgn_6 = ((uint8_T*)GetInputPortSignal(S,14))[0];

/* CAN_GEAR_STA_NOW_ADAS_V */
CANMMADAS_CAN_TX_Msg_2_Sgn_7 = ((boolean_T*)GetInputPortSignal(S,15))[0];

/* CAN_GEAR_STATE_NOW_ADAS */
CANMMADAS_CAN_TX_Msg_2_Sgn_8 = ((uint8_T*)GetInputPortSignal(S,16))[0];
/* ADAS2_LifeCount_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_2_Sgn_1 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0xF)) << 4;                             
*((UInt8*)&data->pData[7]) = (*((UInt8*)&data->pData[7]) & INT8_TO_BE(~(0xF << 4))) | INT8_TO_BE(unsignedTemp);               

/* LDW_Enable_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_2_Sgn_2 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 7;                             
*((UInt8*)&data->pData[2]) = (*((UInt8*)&data->pData[2]) & INT8_TO_BE(~(0x1 << 7))) | INT8_TO_BE(unsignedTemp);               

/* CSW_FWipSw_Sta_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_2_Sgn_3 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 1;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x7 << 1))) | INT8_TO_BE(unsignedTemp);               

/* FECU_HiBeamRly_Sta_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_2_Sgn_4 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 4;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x3 << 4))) | INT8_TO_BE(unsignedTemp);               

/* FECU_LoBeamRly_Sta_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_2_Sgn_5 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 6;                             
*((UInt8*)&data->pData[1]) = (*((UInt8*)&data->pData[1]) & INT8_TO_BE(~(0x3 << 6))) | INT8_TO_BE(unsignedTemp);               

/* CSW_TurnSw_Sta_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_2_Sgn_6 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x3)) << 0;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x3 << 0))) | INT8_TO_BE(unsignedTemp);               

/* CAN_GEAR_STA_NOW_ADAS_V */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_2_Sgn_7 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x1)) << 3;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x1 << 3))) | INT8_TO_BE(unsignedTemp);               

/* CAN_GEAR_STATE_NOW_ADAS */ 
unsignedTemp = (CANMMADAS_CAN_TX_Msg_2_Sgn_8 );                                
unsignedTemp = ((UInt32)(unsignedTemp & 0x7)) << 4;                             
*((UInt8*)&data->pData[0]) = (*((UInt8*)&data->pData[0]) & INT8_TO_BE(~(0x7 << 4))) | INT8_TO_BE(unsignedTemp);               


data->CANMsg.Dlc = rticanmmmaxsat(CANMMADAS_CAN_TXLEN[1], (uint8_T)8, (uint8_T)0);

data->CANMsg.Id = CANMMADAS_CAN_MIDRX[1];          
data->CANMsg.Format = (CanMM_Msg_Format) CANMMADAS_CAN_MIDFTX[1];  
CANMMADAS_CAN_TXsta[1] = 1;                                       
} /* TX */
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP1  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP1(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[2] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 5))[0] = CANMMADAS_CAN_RXt[2];   
    ((real_T*) ssGetOutputPortSignal(S, 6))[0] = CANMMADAS_CAN_RXdt[2];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[2] = data->CANMsg.Dlc;                                  
                                                                
/* ME_AEB_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_3_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_Warning_Protocol_Ver */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_3_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AEB_SetB_FCV */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_3_Sgn_3 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_AEB_SetA_FCW */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_3_Sgn_4 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 0))[0] = CANMMADAS_CAN_RX_Msg_3_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 1))[0] = CANMMADAS_CAN_RX_Msg_3_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 2))[0] = CANMMADAS_CAN_RX_Msg_3_Sgn_3;
((uint16_T*) ssGetOutputPortSignal(S, 3))[0] = CANMMADAS_CAN_RX_Msg_3_Sgn_4;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP10  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP10(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[11] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 16))[0] = CANMMADAS_CAN_RXt[11];   
    ((real_T*) ssGetOutputPortSignal(S, 17))[0] = CANMMADAS_CAN_RXdt[11];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[11] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LKA_Pre_Type_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_4_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnColor_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_4_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_MsgCnt_Right_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_4_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_WidthMark_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3F;                             
CANMMADAS_CAN_RX_Msg_4_Sgn_4 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_ViewEnd_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_4_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnCross_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_4_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_ViewStart_Right */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_4_Sgn_7 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_CurvDerv_Right */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_4_Sgn_8 = (double)3.73e-09 * (double)unsignedTemp + (double)(-0.000122);                    

((uint8_T*) ssGetOutputPortSignal(S, 7))[0] = CANMMADAS_CAN_RX_Msg_4_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 8))[0] = CANMMADAS_CAN_RX_Msg_4_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 9))[0] = CANMMADAS_CAN_RX_Msg_4_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 10))[0] = CANMMADAS_CAN_RX_Msg_4_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 11))[0] = CANMMADAS_CAN_RX_Msg_4_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 12))[0] = CANMMADAS_CAN_RX_Msg_4_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 13))[0] = CANMMADAS_CAN_RX_Msg_4_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 14))[0] = CANMMADAS_CAN_RX_Msg_4_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP11  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP11(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[12] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 25))[0] = CANMMADAS_CAN_RXt[12];   
    ((real_T*) ssGetOutputPortSignal(S, 26))[0] = CANMMADAS_CAN_RXdt[12];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[12] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LKA_MsgCnt_Left_2_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_5_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Qty_Left_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_5_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnType_Left_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_5_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Curv_Left_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_5_Sgn_4 = (double)9.769999999999999e-07 * (double)unsignedTemp + (double)(-0.032);                    

/* ME_LKA_HeadAng_Left_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_5_Sgn_5 = (double)0.000977 * (double)unsignedTemp + (double)(-0.357);                    

/* ME_LKA_Pos_Left_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_5_Sgn_6 = (double)0.01 * (double)unsignedTemp + (double)(-10);                    

((uint8_T*) ssGetOutputPortSignal(S, 18))[0] = CANMMADAS_CAN_RX_Msg_5_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 19))[0] = CANMMADAS_CAN_RX_Msg_5_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 20))[0] = CANMMADAS_CAN_RX_Msg_5_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 21))[0] = CANMMADAS_CAN_RX_Msg_5_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 22))[0] = CANMMADAS_CAN_RX_Msg_5_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 23))[0] = CANMMADAS_CAN_RX_Msg_5_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP12  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP12(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[13] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 34))[0] = CANMMADAS_CAN_RXt[13];   
    ((real_T*) ssGetOutputPortSignal(S, 35))[0] = CANMMADAS_CAN_RXdt[13];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[13] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LKA_MsgCnt_Right_2_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_6_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Qty_Right_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_6_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnType_Right_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_6_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Curv_Right_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_6_Sgn_4 = (double)9.769999999999999e-07 * (double)unsignedTemp + (double)(-0.032);                    

/* ME_LKA_HeadAng_Right_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_6_Sgn_5 = (double)0.000977 * (double)unsignedTemp + (double)(-0.357);                    

/* ME_LKA_Pos_Right_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_6_Sgn_6 = (double)0.01 * (double)unsignedTemp + (double)(-10);                    

((uint8_T*) ssGetOutputPortSignal(S, 27))[0] = CANMMADAS_CAN_RX_Msg_6_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 28))[0] = CANMMADAS_CAN_RX_Msg_6_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 29))[0] = CANMMADAS_CAN_RX_Msg_6_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 30))[0] = CANMMADAS_CAN_RX_Msg_6_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 31))[0] = CANMMADAS_CAN_RX_Msg_6_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 32))[0] = CANMMADAS_CAN_RX_Msg_6_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP13  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP13(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[14] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 44))[0] = CANMMADAS_CAN_RXt[14];   
    ((real_T*) ssGetOutputPortSignal(S, 45))[0] = CANMMADAS_CAN_RXdt[14];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[14] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LKA_Pred_Type_Left_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_7_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnColor_Left_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_7_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_MsgCnt_Left_2_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_7_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_WidthMark_Left_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3F;                             
CANMMADAS_CAN_RX_Msg_7_Sgn_4 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_ViewEnd_Left_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_7_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_ViewStart_Left_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_7_Sgn_6 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_CurvDerv_Left_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_7_Sgn_7 = (double)3.73e-09 * (double)unsignedTemp + (double)(-0.000122);                    

((uint8_T*) ssGetOutputPortSignal(S, 36))[0] = CANMMADAS_CAN_RX_Msg_7_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 37))[0] = CANMMADAS_CAN_RX_Msg_7_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 38))[0] = CANMMADAS_CAN_RX_Msg_7_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 39))[0] = CANMMADAS_CAN_RX_Msg_7_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 40))[0] = CANMMADAS_CAN_RX_Msg_7_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 41))[0] = CANMMADAS_CAN_RX_Msg_7_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 42))[0] = CANMMADAS_CAN_RX_Msg_7_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP14  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP14(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[15] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 54))[0] = CANMMADAS_CAN_RXt[15];   
    ((real_T*) ssGetOutputPortSignal(S, 55))[0] = CANMMADAS_CAN_RXdt[15];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[15] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LKA_Pred_Type_Right_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_8_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnColor_Right_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_8_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_MsgCnt_Right_2_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_8_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_WidthMark_Right_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3F;                             
CANMMADAS_CAN_RX_Msg_8_Sgn_4 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_ViewEnd_Right_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_8_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_ViewStart_Right_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_8_Sgn_6 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_CurvDerv_Right_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_8_Sgn_7 = (double)3.73e-09 * (double)unsignedTemp + (double)(-0.000122);                    

((uint8_T*) ssGetOutputPortSignal(S, 46))[0] = CANMMADAS_CAN_RX_Msg_8_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 47))[0] = CANMMADAS_CAN_RX_Msg_8_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 48))[0] = CANMMADAS_CAN_RX_Msg_8_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 49))[0] = CANMMADAS_CAN_RX_Msg_8_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 50))[0] = CANMMADAS_CAN_RX_Msg_8_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 51))[0] = CANMMADAS_CAN_RX_Msg_8_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 52))[0] = CANMMADAS_CAN_RX_Msg_8_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP15  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP15(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[16] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 65))[0] = CANMMADAS_CAN_RXt[16];   
    ((real_T*) ssGetOutputPortSignal(S, 66))[0] = CANMMADAS_CAN_RXdt[16];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[16] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_Header_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_9_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_HeadWay_Time */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1F;                             
CANMMADAS_CAN_RX_Msg_9_Sgn_2 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_NumObs */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1F;                             
CANMMADAS_CAN_RX_Msg_9_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Protocol_Ver */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_9_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_LeftCutIn */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_9_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_RightCutIn */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_9_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_HeadWay_Alert */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_9_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Obj_TTC */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_9_Sgn_8 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 56))[0] = CANMMADAS_CAN_RX_Msg_9_Sgn_1;
((real_T*) ssGetOutputPortSignal(S, 57))[0] = CANMMADAS_CAN_RX_Msg_9_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 58))[0] = CANMMADAS_CAN_RX_Msg_9_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 59))[0] = CANMMADAS_CAN_RX_Msg_9_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 60))[0] = CANMMADAS_CAN_RX_Msg_9_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 61))[0] = CANMMADAS_CAN_RX_Msg_9_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 62))[0] = CANMMADAS_CAN_RX_Msg_9_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 63))[0] = CANMMADAS_CAN_RX_Msg_9_Sgn_8;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP16  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP16(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[17] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 75))[0] = CANMMADAS_CAN_RXt[17];   
    ((real_T*) ssGetOutputPortSignal(S, 76))[0] = CANMMADAS_CAN_RXdt[17];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[17] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_10_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_10_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data1_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_10_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_10_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_10_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_10_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_10_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 67))[0] = CANMMADAS_CAN_RX_Msg_10_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 68))[0] = CANMMADAS_CAN_RX_Msg_10_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 69))[0] = CANMMADAS_CAN_RX_Msg_10_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 70))[0] = CANMMADAS_CAN_RX_Msg_10_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 71))[0] = CANMMADAS_CAN_RX_Msg_10_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 72))[0] = CANMMADAS_CAN_RX_Msg_10_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 73))[0] = CANMMADAS_CAN_RX_Msg_10_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP17  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP17(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[18] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 91))[0] = CANMMADAS_CAN_RXt[18];   
    ((real_T*) ssGetOutputPortSignal(S, 92))[0] = CANMMADAS_CAN_RXdt[18];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[18] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data1_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_11_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 77))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 78))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 79))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 80))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 81))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 82))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 83))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 84))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 85))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 86))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 87))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 88))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 89))[0] = CANMMADAS_CAN_RX_Msg_11_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP18  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP18(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[19] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 101))[0] = CANMMADAS_CAN_RXt[19];   
    ((real_T*) ssGetOutputPortSignal(S, 102))[0] = CANMMADAS_CAN_RXdt[19];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[19] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_12_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_12_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data2_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_12_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_12_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_12_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_12_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_12_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 93))[0] = CANMMADAS_CAN_RX_Msg_12_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 94))[0] = CANMMADAS_CAN_RX_Msg_12_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 95))[0] = CANMMADAS_CAN_RX_Msg_12_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 96))[0] = CANMMADAS_CAN_RX_Msg_12_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 97))[0] = CANMMADAS_CAN_RX_Msg_12_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 98))[0] = CANMMADAS_CAN_RX_Msg_12_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 99))[0] = CANMMADAS_CAN_RX_Msg_12_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP19  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP19(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[20] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 117))[0] = CANMMADAS_CAN_RXt[20];   
    ((real_T*) ssGetOutputPortSignal(S, 118))[0] = CANMMADAS_CAN_RXdt[20];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[20] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data2_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_13_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 103))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 104))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 105))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 106))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 107))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 108))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 109))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 110))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 111))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 112))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 113))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 114))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 115))[0] = CANMMADAS_CAN_RX_Msg_13_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP2  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP2(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[3] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 124))[0] = CANMMADAS_CAN_RXt[3];   
    ((real_T*) ssGetOutputPortSignal(S, 125))[0] = CANMMADAS_CAN_RXdt[3];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[3] = data->CANMsg.Dlc;                                  
                                                                
/* ME_PEDS_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_14_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_PEDS_L3_Braking */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_14_Sgn_2 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_PEDS_L2_Prefill */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_14_Sgn_3 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_PEDS_L1_FCW */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_14_Sgn_4 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 119))[0] = CANMMADAS_CAN_RX_Msg_14_Sgn_1;
((uint16_T*) ssGetOutputPortSignal(S, 120))[0] = CANMMADAS_CAN_RX_Msg_14_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 121))[0] = CANMMADAS_CAN_RX_Msg_14_Sgn_3;
((uint16_T*) ssGetOutputPortSignal(S, 122))[0] = CANMMADAS_CAN_RX_Msg_14_Sgn_4;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP20  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP20(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[21] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 134))[0] = CANMMADAS_CAN_RXt[21];   
    ((real_T*) ssGetOutputPortSignal(S, 135))[0] = CANMMADAS_CAN_RXdt[21];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[21] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_15_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_15_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data3_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_15_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_15_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_15_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_15_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_15_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 126))[0] = CANMMADAS_CAN_RX_Msg_15_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 127))[0] = CANMMADAS_CAN_RX_Msg_15_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 128))[0] = CANMMADAS_CAN_RX_Msg_15_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 129))[0] = CANMMADAS_CAN_RX_Msg_15_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 130))[0] = CANMMADAS_CAN_RX_Msg_15_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 131))[0] = CANMMADAS_CAN_RX_Msg_15_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 132))[0] = CANMMADAS_CAN_RX_Msg_15_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP21  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP21(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[22] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 150))[0] = CANMMADAS_CAN_RXt[22];   
    ((real_T*) ssGetOutputPortSignal(S, 151))[0] = CANMMADAS_CAN_RXdt[22];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[22] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data3_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_16_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 136))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 137))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 138))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 139))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 140))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 141))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 142))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 143))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 144))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 145))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 146))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 147))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 148))[0] = CANMMADAS_CAN_RX_Msg_16_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP22  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP22(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[23] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 160))[0] = CANMMADAS_CAN_RXt[23];   
    ((real_T*) ssGetOutputPortSignal(S, 161))[0] = CANMMADAS_CAN_RXdt[23];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[23] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_17_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_17_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data4_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_17_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_17_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_17_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_17_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_17_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 152))[0] = CANMMADAS_CAN_RX_Msg_17_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 153))[0] = CANMMADAS_CAN_RX_Msg_17_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 154))[0] = CANMMADAS_CAN_RX_Msg_17_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 155))[0] = CANMMADAS_CAN_RX_Msg_17_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 156))[0] = CANMMADAS_CAN_RX_Msg_17_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 157))[0] = CANMMADAS_CAN_RX_Msg_17_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 158))[0] = CANMMADAS_CAN_RX_Msg_17_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP23  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP23(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[24] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 176))[0] = CANMMADAS_CAN_RXt[24];   
    ((real_T*) ssGetOutputPortSignal(S, 177))[0] = CANMMADAS_CAN_RXdt[24];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[24] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data4_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_18_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 162))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 163))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 164))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 165))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 166))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 167))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 168))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 169))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 170))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 171))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 172))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 173))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 174))[0] = CANMMADAS_CAN_RX_Msg_18_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP24  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP24(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[25] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 186))[0] = CANMMADAS_CAN_RXt[25];   
    ((real_T*) ssGetOutputPortSignal(S, 187))[0] = CANMMADAS_CAN_RXdt[25];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[25] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_19_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_19_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data5_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_19_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_19_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_19_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_19_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_19_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 178))[0] = CANMMADAS_CAN_RX_Msg_19_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 179))[0] = CANMMADAS_CAN_RX_Msg_19_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 180))[0] = CANMMADAS_CAN_RX_Msg_19_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 181))[0] = CANMMADAS_CAN_RX_Msg_19_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 182))[0] = CANMMADAS_CAN_RX_Msg_19_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 183))[0] = CANMMADAS_CAN_RX_Msg_19_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 184))[0] = CANMMADAS_CAN_RX_Msg_19_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP25  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP25(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[26] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 202))[0] = CANMMADAS_CAN_RXt[26];   
    ((real_T*) ssGetOutputPortSignal(S, 203))[0] = CANMMADAS_CAN_RXdt[26];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[26] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data5_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_20_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 188))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 189))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 190))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 191))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 192))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 193))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 194))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 195))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 196))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 197))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 198))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 199))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 200))[0] = CANMMADAS_CAN_RX_Msg_20_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP26  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP26(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[27] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 212))[0] = CANMMADAS_CAN_RXt[27];   
    ((real_T*) ssGetOutputPortSignal(S, 213))[0] = CANMMADAS_CAN_RXdt[27];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[27] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_21_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_21_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data6_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_21_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_21_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_21_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_21_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_21_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 204))[0] = CANMMADAS_CAN_RX_Msg_21_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 205))[0] = CANMMADAS_CAN_RX_Msg_21_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 206))[0] = CANMMADAS_CAN_RX_Msg_21_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 207))[0] = CANMMADAS_CAN_RX_Msg_21_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 208))[0] = CANMMADAS_CAN_RX_Msg_21_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 209))[0] = CANMMADAS_CAN_RX_Msg_21_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 210))[0] = CANMMADAS_CAN_RX_Msg_21_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP27  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP27(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[28] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 228))[0] = CANMMADAS_CAN_RXt[28];   
    ((real_T*) ssGetOutputPortSignal(S, 229))[0] = CANMMADAS_CAN_RXdt[28];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[28] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data6_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_22_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 214))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 215))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 216))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 217))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 218))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 219))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 220))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 221))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 222))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 223))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 224))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 225))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 226))[0] = CANMMADAS_CAN_RX_Msg_22_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP28  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP28(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[29] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 238))[0] = CANMMADAS_CAN_RXt[29];   
    ((real_T*) ssGetOutputPortSignal(S, 239))[0] = CANMMADAS_CAN_RXdt[29];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[29] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_23_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_23_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data7_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_23_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_7 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_23_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_7 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_23_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_7 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_23_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_7 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_23_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 230))[0] = CANMMADAS_CAN_RX_Msg_23_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 231))[0] = CANMMADAS_CAN_RX_Msg_23_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 232))[0] = CANMMADAS_CAN_RX_Msg_23_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 233))[0] = CANMMADAS_CAN_RX_Msg_23_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 234))[0] = CANMMADAS_CAN_RX_Msg_23_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 235))[0] = CANMMADAS_CAN_RX_Msg_23_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 236))[0] = CANMMADAS_CAN_RX_Msg_23_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP29  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP29(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[30] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 254))[0] = CANMMADAS_CAN_RXt[30];   
    ((real_T*) ssGetOutputPortSignal(S, 255))[0] = CANMMADAS_CAN_RXdt[30];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[30] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data7_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_7 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_7 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_7 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_24_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 240))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 241))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 242))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 243))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 244))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 245))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 246))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 247))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 248))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 249))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 250))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 251))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 252))[0] = CANMMADAS_CAN_RX_Msg_24_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP3  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP3(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[4] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 268))[0] = CANMMADAS_CAN_RXt[4];   
    ((real_T*) ssGetOutputPortSignal(S, 269))[0] = CANMMADAS_CAN_RXdt[4];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[4] = data->CANMsg.Dlc;                                  
                                                                
/* ME_PED_SupFS_L3_Braking */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_SupRsn_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_PED_SupRsn_L3_Braking */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1F;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_PED_SupFS_L2_Prefill */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_PED_SupFS_L1_FCW */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AEB_SupFS_SetB_FCV */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_PED_SupRsn_L2_Prefill */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1F;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AEB_SupFS_SetA_FCW */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_PED_SupRsn_L1_FCW */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1F;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AEB_SupRsn_SetB_FCV */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_10 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_AEB_SupRsn_SetA_FCW */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_25_Sgn_11 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 256))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 257))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 258))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 259))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 260))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 261))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 262))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 263))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 264))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_9;
((uint16_T*) ssGetOutputPortSignal(S, 265))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_10;
((uint16_T*) ssGetOutputPortSignal(S, 266))[0] = CANMMADAS_CAN_RX_Msg_25_Sgn_11;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP30  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP30(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[31] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 278))[0] = CANMMADAS_CAN_RXt[31];   
    ((real_T*) ssGetOutputPortSignal(S, 279))[0] = CANMMADAS_CAN_RXdt[31];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[31] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_26_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_26_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data8_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_26_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_8 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_26_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_8 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_26_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_8 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_26_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_8 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_26_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 270))[0] = CANMMADAS_CAN_RX_Msg_26_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 271))[0] = CANMMADAS_CAN_RX_Msg_26_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 272))[0] = CANMMADAS_CAN_RX_Msg_26_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 273))[0] = CANMMADAS_CAN_RX_Msg_26_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 274))[0] = CANMMADAS_CAN_RX_Msg_26_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 275))[0] = CANMMADAS_CAN_RX_Msg_26_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 276))[0] = CANMMADAS_CAN_RX_Msg_26_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP31  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP31(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[32] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 294))[0] = CANMMADAS_CAN_RXt[32];   
    ((real_T*) ssGetOutputPortSignal(S, 295))[0] = CANMMADAS_CAN_RXdt[32];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[32] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data8_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_8 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_8 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_8 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_27_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 280))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 281))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 282))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 283))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 284))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 285))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 286))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 287))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 288))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 289))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 290))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 291))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 292))[0] = CANMMADAS_CAN_RX_Msg_27_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP32  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP32(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[33] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 304))[0] = CANMMADAS_CAN_RXt[33];   
    ((real_T*) ssGetOutputPortSignal(S, 305))[0] = CANMMADAS_CAN_RXdt[33];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[33] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_28_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_28_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data9_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_28_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_9 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_28_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_9 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_28_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_9 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_28_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_9 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_28_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 296))[0] = CANMMADAS_CAN_RX_Msg_28_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 297))[0] = CANMMADAS_CAN_RX_Msg_28_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 298))[0] = CANMMADAS_CAN_RX_Msg_28_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 299))[0] = CANMMADAS_CAN_RX_Msg_28_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 300))[0] = CANMMADAS_CAN_RX_Msg_28_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 301))[0] = CANMMADAS_CAN_RX_Msg_28_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 302))[0] = CANMMADAS_CAN_RX_Msg_28_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP33  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP33(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[34] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 320))[0] = CANMMADAS_CAN_RXt[34];   
    ((real_T*) ssGetOutputPortSignal(S, 321))[0] = CANMMADAS_CAN_RXdt[34];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[34] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data9_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_9 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_9 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_9 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_29_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 306))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 307))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 308))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 309))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 310))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 311))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 312))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 313))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 314))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 315))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 316))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 317))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 318))[0] = CANMMADAS_CAN_RX_Msg_29_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP34  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP34(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[35] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 330))[0] = CANMMADAS_CAN_RXt[35];   
    ((real_T*) ssGetOutputPortSignal(S, 331))[0] = CANMMADAS_CAN_RXdt[35];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[35] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_ObsID_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_30_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsValid_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_30_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data10_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_30_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsVelY_10 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_30_Sgn_4 = (double)0.05 * (double)unsignedTemp + (double)(-25);                    

/* ME_OBS_ObsVelX_10 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_30_Sgn_5 = (double)0.05 * (double)unsignedTemp + (double)(-100);                    

/* ME_OBS_ObsPosY_10 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_30_Sgn_6 = (double)0.05 * (double)unsignedTemp + (double)(-102.4);                    

/* ME_OBS_ObsPosX_10 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1FFF;                             
CANMMADAS_CAN_RX_Msg_30_Sgn_7 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 322))[0] = CANMMADAS_CAN_RX_Msg_30_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 323))[0] = CANMMADAS_CAN_RX_Msg_30_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 324))[0] = CANMMADAS_CAN_RX_Msg_30_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 325))[0] = CANMMADAS_CAN_RX_Msg_30_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 326))[0] = CANMMADAS_CAN_RX_Msg_30_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 327))[0] = CANMMADAS_CAN_RX_Msg_30_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 328))[0] = CANMMADAS_CAN_RX_Msg_30_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP35  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP35(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[36] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 346))[0] = CANMMADAS_CAN_RXt[36];   
    ((real_T*) ssGetOutputPortSignal(S, 347))[0] = CANMMADAS_CAN_RXdt[36];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[36] = data->CANMsg.Dlc;                                  
                                                                
/* ME_OBS_MCPFlag_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Data10_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsType_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_NIVFlag_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLane_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsBrkLights_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_BlinkInfo_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_Move_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_CIPVFlag_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsWidth_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7F;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_10 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_ObsSta_10 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_OBS_ObsLength_10 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_12 = (double)0.05 * (double)unsignedTemp + (double)(0);                    

/* ME_OBS_Obj_Accel_X_10 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_31_Sgn_13 = (double)0.05 * (double)unsignedTemp + (double)(-12.8);                    

((boolean_T*) ssGetOutputPortSignal(S, 332))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 333))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 334))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 335))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 336))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_5;
((uint8_T*) ssGetOutputPortSignal(S, 337))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_6;
((uint8_T*) ssGetOutputPortSignal(S, 338))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 339))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 340))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 341))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 342))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_11;
((real_T*) ssGetOutputPortSignal(S, 343))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_12;
((real_T*) ssGetOutputPortSignal(S, 344))[0] = CANMMADAS_CAN_RX_Msg_31_Sgn_13;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP36  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP36(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[37] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 352))[0] = CANMMADAS_CAN_RXt[37];   
    ((real_T*) ssGetOutputPortSignal(S, 353))[0] = CANMMADAS_CAN_RXdt[37];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[37] = data->CANMsg.Dlc;                                  
                                                                
/* ME_TSR_Header_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_32_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_NumObs */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_32_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_Protocol_Ver */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_32_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 348))[0] = CANMMADAS_CAN_RX_Msg_32_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 349))[0] = CANMMADAS_CAN_RX_Msg_32_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 350))[0] = CANMMADAS_CAN_RX_Msg_32_Sgn_3;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP37  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP37(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[38] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 361))[0] = CANMMADAS_CAN_RXt[38];   
    ((real_T*) ssGetOutputPortSignal(S, 362))[0] = CANMMADAS_CAN_RXdt[38];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[38] = data->CANMsg.Dlc;                                  
                                                                
/* ME_TSR_Supp_Sign_Type_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_33_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_MsgCnt_1 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_33_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_Sign_Type_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_33_Sgn_3 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_TSR_Sign_Pos_Z_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_33_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-25.5);                    

/* ME_TSR_Sign_Pos_X_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_33_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_TSR_Sign_Pos_Y_1 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_33_Sgn_6 = (double)0.1 * (double)unsignedTemp + (double)(-32);                    

((uint8_T*) ssGetOutputPortSignal(S, 354))[0] = CANMMADAS_CAN_RX_Msg_33_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 355))[0] = CANMMADAS_CAN_RX_Msg_33_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 356))[0] = CANMMADAS_CAN_RX_Msg_33_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 357))[0] = CANMMADAS_CAN_RX_Msg_33_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 358))[0] = CANMMADAS_CAN_RX_Msg_33_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 359))[0] = CANMMADAS_CAN_RX_Msg_33_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP38  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP38(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[39] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 370))[0] = CANMMADAS_CAN_RXt[39];   
    ((real_T*) ssGetOutputPortSignal(S, 371))[0] = CANMMADAS_CAN_RXdt[39];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[39] = data->CANMsg.Dlc;                                  
                                                                
/* ME_TSR_Supp_Sign_Type_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_34_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_MsgCnt_2 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_34_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_Sign_Type_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_34_Sgn_3 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_TSR_Sign_Pos_Z_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_34_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-25.5);                    

/* ME_TSR_Sign_Pos_X_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_34_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_TSR_Sign_Pos_Y_2 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_34_Sgn_6 = (double)0.1 * (double)unsignedTemp + (double)(-32);                    

((uint8_T*) ssGetOutputPortSignal(S, 363))[0] = CANMMADAS_CAN_RX_Msg_34_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 364))[0] = CANMMADAS_CAN_RX_Msg_34_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 365))[0] = CANMMADAS_CAN_RX_Msg_34_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 366))[0] = CANMMADAS_CAN_RX_Msg_34_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 367))[0] = CANMMADAS_CAN_RX_Msg_34_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 368))[0] = CANMMADAS_CAN_RX_Msg_34_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP39  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP39(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[40] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 379))[0] = CANMMADAS_CAN_RXt[40];   
    ((real_T*) ssGetOutputPortSignal(S, 380))[0] = CANMMADAS_CAN_RXdt[40];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[40] = data->CANMsg.Dlc;                                  
                                                                
/* ME_TSR_Supp_Sign_Type_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_35_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_MsgCnt_3 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_35_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_Sign_Type_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_35_Sgn_3 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_TSR_Sign_Pos_Z_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_35_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-25.5);                    

/* ME_TSR_Sign_Pos_X_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_35_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_TSR_Sign_Pos_Y_3 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_35_Sgn_6 = (double)0.1 * (double)unsignedTemp + (double)(-32);                    

((uint8_T*) ssGetOutputPortSignal(S, 372))[0] = CANMMADAS_CAN_RX_Msg_35_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 373))[0] = CANMMADAS_CAN_RX_Msg_35_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 374))[0] = CANMMADAS_CAN_RX_Msg_35_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 375))[0] = CANMMADAS_CAN_RX_Msg_35_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 376))[0] = CANMMADAS_CAN_RX_Msg_35_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 377))[0] = CANMMADAS_CAN_RX_Msg_35_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP4  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP4(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[5] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 401))[0] = CANMMADAS_CAN_RXt[5];   
    ((real_T*) ssGetOutputPortSignal(S, 402))[0] = CANMMADAS_CAN_RXdt[5];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[5] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LDW_Sta_R */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_Sta_L */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_TLC_R */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_4 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

/* ME_LDW_TLC_L */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_5 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

/* ME_LDW_Inh_Ren_Gen */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_Inh_Ren_Accel */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_Inh_Ren_Brake */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_Inh_Ren_Blink_L */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_Inh_Ren_Blink_R */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_LineDis_R */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_11 = (double)0.01 * (double)unsignedTemp + (double)(-2);                    

/* ME_LDW_Inh_Ren_Str */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_NRTA_Rsn_Narrow */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_NRTA_Rsn_Single */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_NRTA_Rsn_Speed */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_RTA */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_Right_Lane_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_17 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_Left_Lane_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_18 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LDW_LineDis_L */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_36_Sgn_19 = (double)0.01 * (double)unsignedTemp + (double)(-2);                    

((uint8_T*) ssGetOutputPortSignal(S, 381))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 382))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 383))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 384))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 385))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 386))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 387))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 388))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 389))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 390))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_10;
((real_T*) ssGetOutputPortSignal(S, 391))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_11;
((boolean_T*) ssGetOutputPortSignal(S, 392))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_12;
((boolean_T*) ssGetOutputPortSignal(S, 393))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_13;
((boolean_T*) ssGetOutputPortSignal(S, 394))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_14;
((boolean_T*) ssGetOutputPortSignal(S, 395))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_15;
((boolean_T*) ssGetOutputPortSignal(S, 396))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_16;
((boolean_T*) ssGetOutputPortSignal(S, 397))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_17;
((boolean_T*) ssGetOutputPortSignal(S, 398))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_18;
((real_T*) ssGetOutputPortSignal(S, 399))[0] = CANMMADAS_CAN_RX_Msg_36_Sgn_19;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP40  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP40(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[41] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 410))[0] = CANMMADAS_CAN_RXt[41];   
    ((real_T*) ssGetOutputPortSignal(S, 411))[0] = CANMMADAS_CAN_RXdt[41];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[41] = data->CANMsg.Dlc;                                  
                                                                
/* ME_TSR_Supp_Sign_Type_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_37_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_MsgCnt_4 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_37_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_Sign_Type_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_37_Sgn_3 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_TSR_Sign_Pos_Z_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_37_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-25.5);                    

/* ME_TSR_Sign_Pos_X_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_37_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_TSR_Sign_Pos_Y_4 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_37_Sgn_6 = (double)0.1 * (double)unsignedTemp + (double)(-32);                    

((uint8_T*) ssGetOutputPortSignal(S, 403))[0] = CANMMADAS_CAN_RX_Msg_37_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 404))[0] = CANMMADAS_CAN_RX_Msg_37_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 405))[0] = CANMMADAS_CAN_RX_Msg_37_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 406))[0] = CANMMADAS_CAN_RX_Msg_37_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 407))[0] = CANMMADAS_CAN_RX_Msg_37_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 408))[0] = CANMMADAS_CAN_RX_Msg_37_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP41  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP41(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[42] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 419))[0] = CANMMADAS_CAN_RXt[42];   
    ((real_T*) ssGetOutputPortSignal(S, 420))[0] = CANMMADAS_CAN_RXdt[42];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[42] = data->CANMsg.Dlc;                                  
                                                                
/* ME_TSR_Supp_Sign_Type_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_38_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_MsgCnt_5 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_38_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_Sign_Type_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_38_Sgn_3 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_TSR_Sign_Pos_Z_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_38_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-25.5);                    

/* ME_TSR_Sign_Pos_X_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_38_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_TSR_Sign_Pos_Y_5 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_38_Sgn_6 = (double)0.1 * (double)unsignedTemp + (double)(-32);                    

((uint8_T*) ssGetOutputPortSignal(S, 412))[0] = CANMMADAS_CAN_RX_Msg_38_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 413))[0] = CANMMADAS_CAN_RX_Msg_38_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 414))[0] = CANMMADAS_CAN_RX_Msg_38_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 415))[0] = CANMMADAS_CAN_RX_Msg_38_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 416))[0] = CANMMADAS_CAN_RX_Msg_38_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 417))[0] = CANMMADAS_CAN_RX_Msg_38_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP42  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP42(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[43] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 428))[0] = CANMMADAS_CAN_RXt[43];   
    ((real_T*) ssGetOutputPortSignal(S, 429))[0] = CANMMADAS_CAN_RXdt[43];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[43] = data->CANMsg.Dlc;                                  
                                                                
/* ME_TSR_Supp_Sign_Type_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_39_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_MsgCnt_6 */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_39_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_TSR_Sign_Type_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_39_Sgn_3 = (UInt16)1 * (UInt16)unsignedTemp + (UInt16)(0);                    

/* ME_TSR_Sign_Pos_Z_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1FF;                             
CANMMADAS_CAN_RX_Msg_39_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-25.5);                    

/* ME_TSR_Sign_Pos_X_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_39_Sgn_5 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_TSR_Sign_Pos_Y_6 */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_39_Sgn_6 = (double)0.1 * (double)unsignedTemp + (double)(-32);                    

((uint8_T*) ssGetOutputPortSignal(S, 421))[0] = CANMMADAS_CAN_RX_Msg_39_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 422))[0] = CANMMADAS_CAN_RX_Msg_39_Sgn_2;
((uint16_T*) ssGetOutputPortSignal(S, 423))[0] = CANMMADAS_CAN_RX_Msg_39_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 424))[0] = CANMMADAS_CAN_RX_Msg_39_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 425))[0] = CANMMADAS_CAN_RX_Msg_39_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 426))[0] = CANMMADAS_CAN_RX_Msg_39_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP43  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP43(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[44] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 445))[0] = CANMMADAS_CAN_RXt[44];   
    ((real_T*) ssGetOutputPortSignal(S, 446))[0] = CANMMADAS_CAN_RXdt[44];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[44] = data->CANMsg.Dlc;                                  
                                                                
/* ME_AHLB_Rsn_ShpCur */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Rsn_BrtSce */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Rsn_LowSpd */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Rsn_LitNt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Rsn_StrLt_G */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Rsn_StrLt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Rsn_On_G */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Rsn_On */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Rsn_Pre_G */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Rsn_Pre */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_decision */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Mode */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_AHLB_Protocol_Ver */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_40_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 430))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 431))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 432))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 433))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 434))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 435))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 436))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 437))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 438))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_9;
((boolean_T*) ssGetOutputPortSignal(S, 439))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_10;
((boolean_T*) ssGetOutputPortSignal(S, 440))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 441))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 442))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_13;
((uint8_T*) ssGetOutputPortSignal(S, 443))[0] = CANMMADAS_CAN_RX_Msg_40_Sgn_14;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP44  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP44(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[45] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 451))[0] = CANMMADAS_CAN_RXt[45];   
    ((real_T*) ssGetOutputPortSignal(S, 452))[0] = CANMMADAS_CAN_RXdt[45];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[45] = data->CANMsg.Dlc;                                  
                                                                
/* Sensor_Sta_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_41_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Radar_Sta */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_41_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Radar_Protocol_Ver */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_41_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 447))[0] = CANMMADAS_CAN_RX_Msg_41_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 448))[0] = CANMMADAS_CAN_RX_Msg_41_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 449))[0] = CANMMADAS_CAN_RX_Msg_41_Sgn_3;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP45  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP45(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[46] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 456))[0] = CANMMADAS_CAN_RXt[46];   
    ((real_T*) ssGetOutputPortSignal(S, 457))[0] = CANMMADAS_CAN_RXdt[46];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[46] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar_HeaderCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_42_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* Radar_NumTar */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xF;                             
CANMMADAS_CAN_RX_Msg_42_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 453))[0] = CANMMADAS_CAN_RX_Msg_42_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 454))[0] = CANMMADAS_CAN_RX_Msg_42_Sgn_2;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP46  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP46(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[47] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 465))[0] = CANMMADAS_CAN_RXt[47];   
    ((real_T*) ssGetOutputPortSignal(S, 466))[0] = CANMMADAS_CAN_RXdt[47];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[47] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar1_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_43_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar1_ID_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_43_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar1_Vel_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_43_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar1_Vel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_43_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar1_Pos_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_43_Sgn_5 = (double)0.125 * (double)unsignedTemp + (double)(-128);                    

/* RadarTar1_Pos_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_43_Sgn_6 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 458))[0] = CANMMADAS_CAN_RX_Msg_43_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 459))[0] = CANMMADAS_CAN_RX_Msg_43_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 460))[0] = CANMMADAS_CAN_RX_Msg_43_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 461))[0] = CANMMADAS_CAN_RX_Msg_43_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 462))[0] = CANMMADAS_CAN_RX_Msg_43_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 463))[0] = CANMMADAS_CAN_RX_Msg_43_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP47  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP47(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[48] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 473))[0] = CANMMADAS_CAN_RXt[48];   
    ((real_T*) ssGetOutputPortSignal(S, 474))[0] = CANMMADAS_CAN_RXdt[48];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[48] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar1_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_44_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar1_DynProp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_44_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar1_MeasStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_44_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar1_ID_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_44_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar1_Accel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_44_Sgn_5 = (double)0.04 * (double)unsignedTemp + (double)(-40);                    

((uint8_T*) ssGetOutputPortSignal(S, 467))[0] = CANMMADAS_CAN_RX_Msg_44_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 468))[0] = CANMMADAS_CAN_RX_Msg_44_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 469))[0] = CANMMADAS_CAN_RX_Msg_44_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 470))[0] = CANMMADAS_CAN_RX_Msg_44_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 471))[0] = CANMMADAS_CAN_RX_Msg_44_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP48  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP48(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[49] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 482))[0] = CANMMADAS_CAN_RXt[49];   
    ((real_T*) ssGetOutputPortSignal(S, 483))[0] = CANMMADAS_CAN_RXdt[49];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[49] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar2_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_45_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar2_ID_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_45_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar2_Vel_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_45_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar2_Vel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_45_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar2_Pos_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_45_Sgn_5 = (double)0.125 * (double)unsignedTemp + (double)(-128);                    

/* RadarTar2_Pos_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_45_Sgn_6 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 475))[0] = CANMMADAS_CAN_RX_Msg_45_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 476))[0] = CANMMADAS_CAN_RX_Msg_45_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 477))[0] = CANMMADAS_CAN_RX_Msg_45_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 478))[0] = CANMMADAS_CAN_RX_Msg_45_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 479))[0] = CANMMADAS_CAN_RX_Msg_45_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 480))[0] = CANMMADAS_CAN_RX_Msg_45_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP49  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP49(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[50] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 490))[0] = CANMMADAS_CAN_RXt[50];   
    ((real_T*) ssGetOutputPortSignal(S, 491))[0] = CANMMADAS_CAN_RXdt[50];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[50] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar2_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_46_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar2_DynProp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_46_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar2_MeasStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_46_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar2_ID_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_46_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar2_Accel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_46_Sgn_5 = (double)0.04 * (double)unsignedTemp + (double)(-40);                    

((uint8_T*) ssGetOutputPortSignal(S, 484))[0] = CANMMADAS_CAN_RX_Msg_46_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 485))[0] = CANMMADAS_CAN_RX_Msg_46_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 486))[0] = CANMMADAS_CAN_RX_Msg_46_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 487))[0] = CANMMADAS_CAN_RX_Msg_46_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 488))[0] = CANMMADAS_CAN_RX_Msg_46_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP5  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP5(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[6] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 511))[0] = CANMMADAS_CAN_RXt[6];   
    ((real_T*) ssGetOutputPortSignal(S, 512))[0] = CANMMADAS_CAN_RXdt[6];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[6] = data->CANMsg.Dlc;                                  
                                                                
/* ME_FS_TSR_OutOfCalib_pitch */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_TSR_OutOfCalib_yaw */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_OutOf_Calib_Hor */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp >> 7;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_OutOf_Calib_Yaw */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_outOfFocus */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_Failsafe */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_Maintenance */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Frozen_Windshield */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Self_Glare */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Sun_Ray */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_10 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Smear_Spot */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_11 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Splash */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_12 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Patial_Block */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_13 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Full_Block */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_14 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Blur_Image */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_15 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Low_Sun */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_16 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Info_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_17 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_FS_Protocol_Ver */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_47_Sgn_18 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 492))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_1;
((boolean_T*) ssGetOutputPortSignal(S, 493))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_2;
((boolean_T*) ssGetOutputPortSignal(S, 494))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 495))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 496))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 497))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 498))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_7;
((uint8_T*) ssGetOutputPortSignal(S, 499))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_8;
((uint8_T*) ssGetOutputPortSignal(S, 500))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_9;
((uint8_T*) ssGetOutputPortSignal(S, 501))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_10;
((uint8_T*) ssGetOutputPortSignal(S, 502))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_11;
((uint8_T*) ssGetOutputPortSignal(S, 503))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_12;
((uint8_T*) ssGetOutputPortSignal(S, 504))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_13;
((uint8_T*) ssGetOutputPortSignal(S, 505))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_14;
((uint8_T*) ssGetOutputPortSignal(S, 506))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_15;
((uint8_T*) ssGetOutputPortSignal(S, 507))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_16;
((uint8_T*) ssGetOutputPortSignal(S, 508))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_17;
((uint8_T*) ssGetOutputPortSignal(S, 509))[0] = CANMMADAS_CAN_RX_Msg_47_Sgn_18;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP50  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP50(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[51] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 520))[0] = CANMMADAS_CAN_RXt[51];   
    ((real_T*) ssGetOutputPortSignal(S, 521))[0] = CANMMADAS_CAN_RXdt[51];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[51] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar3_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_48_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar3_ID_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_48_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar3_Vel_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_48_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar3_Vel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_48_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar3_Pos_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_48_Sgn_5 = (double)0.125 * (double)unsignedTemp + (double)(-128);                    

/* RadarTar3_Pos_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_48_Sgn_6 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 513))[0] = CANMMADAS_CAN_RX_Msg_48_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 514))[0] = CANMMADAS_CAN_RX_Msg_48_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 515))[0] = CANMMADAS_CAN_RX_Msg_48_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 516))[0] = CANMMADAS_CAN_RX_Msg_48_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 517))[0] = CANMMADAS_CAN_RX_Msg_48_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 518))[0] = CANMMADAS_CAN_RX_Msg_48_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP51  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP51(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[52] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 528))[0] = CANMMADAS_CAN_RXt[52];   
    ((real_T*) ssGetOutputPortSignal(S, 529))[0] = CANMMADAS_CAN_RXdt[52];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[52] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar3_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_49_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar3_DynProp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_49_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar3_MeasStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_49_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar3_ID_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_49_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar3_Accel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_49_Sgn_5 = (double)0.04 * (double)unsignedTemp + (double)(-40);                    

((uint8_T*) ssGetOutputPortSignal(S, 522))[0] = CANMMADAS_CAN_RX_Msg_49_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 523))[0] = CANMMADAS_CAN_RX_Msg_49_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 524))[0] = CANMMADAS_CAN_RX_Msg_49_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 525))[0] = CANMMADAS_CAN_RX_Msg_49_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 526))[0] = CANMMADAS_CAN_RX_Msg_49_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP52  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP52(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[53] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 537))[0] = CANMMADAS_CAN_RXt[53];   
    ((real_T*) ssGetOutputPortSignal(S, 538))[0] = CANMMADAS_CAN_RXdt[53];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[53] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar4_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_50_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar4_ID_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_50_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar4_Vel_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_50_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar4_Vel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_50_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar4_Pos_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_50_Sgn_5 = (double)0.125 * (double)unsignedTemp + (double)(-128);                    

/* RadarTar4_Pos_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_50_Sgn_6 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 530))[0] = CANMMADAS_CAN_RX_Msg_50_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 531))[0] = CANMMADAS_CAN_RX_Msg_50_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 532))[0] = CANMMADAS_CAN_RX_Msg_50_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 533))[0] = CANMMADAS_CAN_RX_Msg_50_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 534))[0] = CANMMADAS_CAN_RX_Msg_50_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 535))[0] = CANMMADAS_CAN_RX_Msg_50_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP53  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP53(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[54] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 545))[0] = CANMMADAS_CAN_RXt[54];   
    ((real_T*) ssGetOutputPortSignal(S, 546))[0] = CANMMADAS_CAN_RXdt[54];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[54] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar4_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_51_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar4_DynProp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_51_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar4_MeasStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_51_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar4_ID_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_51_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar4_Accel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_51_Sgn_5 = (double)0.04 * (double)unsignedTemp + (double)(-40);                    

((uint8_T*) ssGetOutputPortSignal(S, 539))[0] = CANMMADAS_CAN_RX_Msg_51_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 540))[0] = CANMMADAS_CAN_RX_Msg_51_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 541))[0] = CANMMADAS_CAN_RX_Msg_51_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 542))[0] = CANMMADAS_CAN_RX_Msg_51_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 543))[0] = CANMMADAS_CAN_RX_Msg_51_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP54  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP54(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[55] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 554))[0] = CANMMADAS_CAN_RXt[55];   
    ((real_T*) ssGetOutputPortSignal(S, 555))[0] = CANMMADAS_CAN_RXdt[55];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[55] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar5_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_52_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar5_ID_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_52_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar5_Vel_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_52_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar5_Vel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_52_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar5_Pos_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_52_Sgn_5 = (double)0.125 * (double)unsignedTemp + (double)(-128);                    

/* RadarTar5_Pos_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_52_Sgn_6 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 547))[0] = CANMMADAS_CAN_RX_Msg_52_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 548))[0] = CANMMADAS_CAN_RX_Msg_52_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 549))[0] = CANMMADAS_CAN_RX_Msg_52_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 550))[0] = CANMMADAS_CAN_RX_Msg_52_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 551))[0] = CANMMADAS_CAN_RX_Msg_52_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 552))[0] = CANMMADAS_CAN_RX_Msg_52_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP55  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP55(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[56] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 562))[0] = CANMMADAS_CAN_RXt[56];   
    ((real_T*) ssGetOutputPortSignal(S, 563))[0] = CANMMADAS_CAN_RXdt[56];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[56] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar5_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_53_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar5_DynProp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_53_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar5_MeasStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_53_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar5_ID_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_53_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar5_Accel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_53_Sgn_5 = (double)0.04 * (double)unsignedTemp + (double)(-40);                    

((uint8_T*) ssGetOutputPortSignal(S, 556))[0] = CANMMADAS_CAN_RX_Msg_53_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 557))[0] = CANMMADAS_CAN_RX_Msg_53_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 558))[0] = CANMMADAS_CAN_RX_Msg_53_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 559))[0] = CANMMADAS_CAN_RX_Msg_53_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 560))[0] = CANMMADAS_CAN_RX_Msg_53_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP56  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP56(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[57] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 571))[0] = CANMMADAS_CAN_RXt[57];   
    ((real_T*) ssGetOutputPortSignal(S, 572))[0] = CANMMADAS_CAN_RXdt[57];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[57] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar6_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_54_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar6_ID_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_54_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar6_Vel_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_54_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar6_Vel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_54_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar6_Pos_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_54_Sgn_5 = (double)0.125 * (double)unsignedTemp + (double)(-128);                    

/* RadarTar6_Pos_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_54_Sgn_6 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 564))[0] = CANMMADAS_CAN_RX_Msg_54_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 565))[0] = CANMMADAS_CAN_RX_Msg_54_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 566))[0] = CANMMADAS_CAN_RX_Msg_54_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 567))[0] = CANMMADAS_CAN_RX_Msg_54_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 568))[0] = CANMMADAS_CAN_RX_Msg_54_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 569))[0] = CANMMADAS_CAN_RX_Msg_54_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP57  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP57(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[58] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 579))[0] = CANMMADAS_CAN_RXt[58];   
    ((real_T*) ssGetOutputPortSignal(S, 580))[0] = CANMMADAS_CAN_RXdt[58];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[58] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar6_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_55_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar6_DynProp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_55_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar6_MeasStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_55_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar6_ID_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_55_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar6_Accel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_55_Sgn_5 = (double)0.04 * (double)unsignedTemp + (double)(-40);                    

((uint8_T*) ssGetOutputPortSignal(S, 573))[0] = CANMMADAS_CAN_RX_Msg_55_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 574))[0] = CANMMADAS_CAN_RX_Msg_55_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 575))[0] = CANMMADAS_CAN_RX_Msg_55_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 576))[0] = CANMMADAS_CAN_RX_Msg_55_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 577))[0] = CANMMADAS_CAN_RX_Msg_55_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP58  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP58(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[59] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 588))[0] = CANMMADAS_CAN_RXt[59];   
    ((real_T*) ssGetOutputPortSignal(S, 589))[0] = CANMMADAS_CAN_RXdt[59];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[59] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar7_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_56_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar7_ID_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_56_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar7_Vel_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_56_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar7_Vel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_56_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar7_Pos_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_56_Sgn_5 = (double)0.125 * (double)unsignedTemp + (double)(-128);                    

/* RadarTar7_Pos_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_56_Sgn_6 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 581))[0] = CANMMADAS_CAN_RX_Msg_56_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 582))[0] = CANMMADAS_CAN_RX_Msg_56_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 583))[0] = CANMMADAS_CAN_RX_Msg_56_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 584))[0] = CANMMADAS_CAN_RX_Msg_56_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 585))[0] = CANMMADAS_CAN_RX_Msg_56_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 586))[0] = CANMMADAS_CAN_RX_Msg_56_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP59  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP59(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[60] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 596))[0] = CANMMADAS_CAN_RXt[60];   
    ((real_T*) ssGetOutputPortSignal(S, 597))[0] = CANMMADAS_CAN_RXdt[60];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[60] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar7_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_57_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar7_DynProp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_57_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar7_MeasStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_57_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar7_ID_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_57_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar7_Accel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_57_Sgn_5 = (double)0.04 * (double)unsignedTemp + (double)(-40);                    

((uint8_T*) ssGetOutputPortSignal(S, 590))[0] = CANMMADAS_CAN_RX_Msg_57_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 591))[0] = CANMMADAS_CAN_RX_Msg_57_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 592))[0] = CANMMADAS_CAN_RX_Msg_57_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 593))[0] = CANMMADAS_CAN_RX_Msg_57_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 594))[0] = CANMMADAS_CAN_RX_Msg_57_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP6  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP6(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[7] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 609))[0] = CANMMADAS_CAN_RXt[7];   
    ((real_T*) ssGetOutputPortSignal(S, 610))[0] = CANMMADAS_CAN_RXdt[7];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[7] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LKA_Merge_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Header_MsgCnt */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Protocol_Ver */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Merge_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_HwyExit_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_HwyExit_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Construct */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_7 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_RdType */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_8 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Host_Lane_Width_V */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (1)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_9 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Host_Lane_Width */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_58_Sgn_10 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

((boolean_T*) ssGetOutputPortSignal(S, 598))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 599))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 600))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_3;
((boolean_T*) ssGetOutputPortSignal(S, 601))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_4;
((boolean_T*) ssGetOutputPortSignal(S, 602))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 603))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_6;
((boolean_T*) ssGetOutputPortSignal(S, 604))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_7;
((boolean_T*) ssGetOutputPortSignal(S, 605))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_8;
((boolean_T*) ssGetOutputPortSignal(S, 606))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_9;
((real_T*) ssGetOutputPortSignal(S, 607))[0] = CANMMADAS_CAN_RX_Msg_58_Sgn_10;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP60  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP60(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[61] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 618))[0] = CANMMADAS_CAN_RXt[61];   
    ((real_T*) ssGetOutputPortSignal(S, 619))[0] = CANMMADAS_CAN_RXdt[61];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[61] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar8_MsgCnt_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_59_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar8_ID_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_59_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar8_Vel_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_59_Sgn_3 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar8_Vel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_59_Sgn_4 = (double)0.1 * (double)unsignedTemp + (double)(-102);                    

/* RadarTar8_Pos_Y */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (1)));           
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_59_Sgn_5 = (double)0.125 * (double)unsignedTemp + (double)(-128);                    

/* RadarTar8_Pos_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_59_Sgn_6 = (double)0.125 * (double)unsignedTemp + (double)(0);                    

((uint8_T*) ssGetOutputPortSignal(S, 611))[0] = CANMMADAS_CAN_RX_Msg_59_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 612))[0] = CANMMADAS_CAN_RX_Msg_59_Sgn_2;
((real_T*) ssGetOutputPortSignal(S, 613))[0] = CANMMADAS_CAN_RX_Msg_59_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 614))[0] = CANMMADAS_CAN_RX_Msg_59_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 615))[0] = CANMMADAS_CAN_RX_Msg_59_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 616))[0] = CANMMADAS_CAN_RX_Msg_59_Sgn_6;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP61  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP61(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[62] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 626))[0] = CANMMADAS_CAN_RXt[62];   
    ((real_T*) ssGetOutputPortSignal(S, 627))[0] = CANMMADAS_CAN_RXdt[62];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[62] = data->CANMsg.Dlc;                                  
                                                                
/* RadarTar8_MsgCnt_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_60_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar8_DynProp */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_60_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar8_MeasStat */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_60_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar8_ID_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (2)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_60_Sgn_4 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* RadarTar8_Accel_X */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 4;                        
unsignedTemp = unsignedTemp & 0xFFF;                             
CANMMADAS_CAN_RX_Msg_60_Sgn_5 = (double)0.04 * (double)unsignedTemp + (double)(-40);                    

((uint8_T*) ssGetOutputPortSignal(S, 620))[0] = CANMMADAS_CAN_RX_Msg_60_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 621))[0] = CANMMADAS_CAN_RX_Msg_60_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 622))[0] = CANMMADAS_CAN_RX_Msg_60_Sgn_3;
((uint8_T*) ssGetOutputPortSignal(S, 623))[0] = CANMMADAS_CAN_RX_Msg_60_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 624))[0] = CANMMADAS_CAN_RX_Msg_60_Sgn_5;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP7  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP7(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[8] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 636))[0] = CANMMADAS_CAN_RXt[8];   
    ((real_T*) ssGetOutputPortSignal(S, 637))[0] = CANMMADAS_CAN_RXdt[8];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[8] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LKA_MsgCnt_Left_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_61_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Qty_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_61_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnType_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_61_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_TLC_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_61_Sgn_4 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_Curv_Left */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_61_Sgn_5 = (double)9.769999999999999e-07 * (double)unsignedTemp + (double)(-0.032);                    

/* ME_LKA_HeadAng_Left */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_61_Sgn_6 = (double)0.000977 * (double)unsignedTemp + (double)(-0.357);                    

/* ME_LKA_Pos_Left */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_61_Sgn_7 = (double)0.01 * (double)unsignedTemp + (double)(-10);                    

((uint8_T*) ssGetOutputPortSignal(S, 628))[0] = CANMMADAS_CAN_RX_Msg_61_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 629))[0] = CANMMADAS_CAN_RX_Msg_61_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 630))[0] = CANMMADAS_CAN_RX_Msg_61_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 631))[0] = CANMMADAS_CAN_RX_Msg_61_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 632))[0] = CANMMADAS_CAN_RX_Msg_61_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 633))[0] = CANMMADAS_CAN_RX_Msg_61_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 634))[0] = CANMMADAS_CAN_RX_Msg_61_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP8  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP8(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[9] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 646))[0] = CANMMADAS_CAN_RXt[9];   
    ((real_T*) ssGetOutputPortSignal(S, 647))[0] = CANMMADAS_CAN_RXdt[9];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[9] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LKA_MsgCnt_Right_A */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 1;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_62_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_Qty_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 3;                        
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_62_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnType_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (7)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_62_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_TLC_Right */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_62_Sgn_4 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_Curv_Right */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_62_Sgn_5 = (double)9.769999999999999e-07 * (double)unsignedTemp + (double)(-0.032);                    

/* ME_LKA_HeadAng_Right */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_62_Sgn_6 = (double)0.000977 * (double)unsignedTemp + (double)(-0.357);                    

/* ME_LKA_Pos_Right */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7FF;                             
CANMMADAS_CAN_RX_Msg_62_Sgn_7 = (double)0.01 * (double)unsignedTemp + (double)(-10);                    

((uint8_T*) ssGetOutputPortSignal(S, 638))[0] = CANMMADAS_CAN_RX_Msg_62_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 639))[0] = CANMMADAS_CAN_RX_Msg_62_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 640))[0] = CANMMADAS_CAN_RX_Msg_62_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 641))[0] = CANMMADAS_CAN_RX_Msg_62_Sgn_4;
((real_T*) ssGetOutputPortSignal(S, 642))[0] = CANMMADAS_CAN_RX_Msg_62_Sgn_5;
((real_T*) ssGetOutputPortSignal(S, 643))[0] = CANMMADAS_CAN_RX_Msg_62_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 644))[0] = CANMMADAS_CAN_RX_Msg_62_Sgn_7;
}      
}


/*----------------------------------------------------------------------------------------------*/
/* ----- SENP9  -----*/  
void RTICANMM_MAIN_ADAS_CAN_copy_SENP9(MainSetupMsgData* data, int direction, SimStruct *S)
{
 
if (direction == RX) {                                          
  CANMMADAS_CAN_MIDFRX[10] = (int)data->CANMsg.Format;                            
  
                                                            
    ((real_T*) ssGetOutputPortSignal(S, 657))[0] = CANMMADAS_CAN_RXt[10];   
    ((real_T*) ssGetOutputPortSignal(S, 658))[0] = CANMMADAS_CAN_RXdt[10];   
                                                                
    /* Decode message data */                                   
    CANMMADAS_CAN_RXLEN[10] = data->CANMsg.Dlc;                                  
                                                                
/* ME_LKA_Pred_Type_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_63_Sgn_1 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnColor_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (6)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x7;                             
CANMMADAS_CAN_RX_Msg_63_Sgn_2 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_MsgCnt_Left_B */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp & 0x3;                             
CANMMADAS_CAN_RX_Msg_63_Sgn_3 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_WidthMark_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (5)));           
unsignedTemp = unsignedTemp >> 2;                        
unsignedTemp = unsignedTemp & 0x3F;                             
CANMMADAS_CAN_RX_Msg_63_Sgn_4 = (double)0.01 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_ViewEnd_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (4)));           
unsignedTemp = unsignedTemp & 0xFF;                             
CANMMADAS_CAN_RX_Msg_63_Sgn_5 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_LnCross_Left */ 
unsignedTemp = INT8_FROM_BE(*(UInt8*)(data->pData + (3)));           
unsignedTemp = unsignedTemp >> 5;                        
unsignedTemp = unsignedTemp & 0x1;                             
CANMMADAS_CAN_RX_Msg_63_Sgn_6 = (UInt8)1 * (UInt8)unsignedTemp + (UInt8)(0);                    

/* ME_LKA_ViewStart_Left */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (2)));           
unsignedTemp = unsignedTemp >> 6;                        
unsignedTemp = unsignedTemp & 0x3FF;                             
CANMMADAS_CAN_RX_Msg_63_Sgn_7 = (double)0.1 * (double)unsignedTemp + (double)(0);                    

/* ME_LKA_CurvDerv_Left */ 
unsignedTemp = INT16_FROM_BE(*(UInt16*)(data->pData + (0)));           
unsignedTemp = unsignedTemp & 0xFFFF;                             
CANMMADAS_CAN_RX_Msg_63_Sgn_8 = (double)3.73e-09 * (double)unsignedTemp + (double)(-0.000122);                    

((uint8_T*) ssGetOutputPortSignal(S, 648))[0] = CANMMADAS_CAN_RX_Msg_63_Sgn_1;
((uint8_T*) ssGetOutputPortSignal(S, 649))[0] = CANMMADAS_CAN_RX_Msg_63_Sgn_2;
((uint8_T*) ssGetOutputPortSignal(S, 650))[0] = CANMMADAS_CAN_RX_Msg_63_Sgn_3;
((real_T*) ssGetOutputPortSignal(S, 651))[0] = CANMMADAS_CAN_RX_Msg_63_Sgn_4;
((uint8_T*) ssGetOutputPortSignal(S, 652))[0] = CANMMADAS_CAN_RX_Msg_63_Sgn_5;
((boolean_T*) ssGetOutputPortSignal(S, 653))[0] = CANMMADAS_CAN_RX_Msg_63_Sgn_6;
((real_T*) ssGetOutputPortSignal(S, 654))[0] = CANMMADAS_CAN_RX_Msg_63_Sgn_7;
((real_T*) ssGetOutputPortSignal(S, 655))[0] = CANMMADAS_CAN_RX_Msg_63_Sgn_8;
}      
}


