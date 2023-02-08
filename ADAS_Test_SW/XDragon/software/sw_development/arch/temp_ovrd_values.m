% =========== $Update Time : 29-Sep-2015 16:57:25 $  =========
disp('Loading $Id: temp_ovrd_values.m 1605 2017-08-14 07:10:19Z HUNG $')

C_TASK_1MS_S                     = double(	0.001                  )	;

a2l_cal('KINP_LKAEnableH_flg_ovrdflg', 	1);
a2l_cal('KINP_LKAEnableH_flg_ovrdval', 	1);
a2l_cal('KINP_ESCFault_flg_ovrdflg', 	1);
a2l_cal('KINP_ESCFault_flg_ovrdval', 	0);



%% by BCL

a2l_cal('KJUD_EPSLimition_kph', 	0);
a2l_cal('KIFO_C2Max4Act_rat', 	1);
a2l_cal('KIFO_C2Max4Disable_rat', 	1);
a2l_cal('KIFO_C1Max4Act_rad', 	1);
a2l_cal('KIFO_LaneWidthUpThr_m', 	5);
a2l_cal('KIFO_LaneWidthLowThr_m', 	2);
a2l_cal('KIFO_DriverStrStrongThres_Nm', 	1.5);
a2l_cal('KIFO_LFCVehSpdMimLimition_kph', 	0);


%% Demo CAR use

a2l_cal('KINP_CANMsgCheckedVCU1_flg_ovrdflg', 	1);
a2l_cal('KINP_CANMsgCheckedVCU1_flg_ovrdval', 	1);
a2l_cal('KINP_CANMsgCheckedVCU2_flg_ovrdflg', 	1);
a2l_cal('KINP_CANMsgCheckedVCU2_flg_ovrdval', 	1);

a2l_cal('KINP_CANMsgUpdatedVCU1_flg_ovrdflg', 	1);
a2l_cal('KINP_CANMsgUpdatedVCU1_flg_ovrdval', 	1);
a2l_cal('KINP_CANMsgUpdatedVCU2_flg_ovrdflg', 	1);
a2l_cal('KINP_CANMsgUpdatedVCU2_flg_ovrdval', 	1);

a2l_cal('KINP_CANMsgValidVCU1_flg_ovrdflg', 	1);
a2l_cal('KINP_CANMsgValidVCU1_flg_ovrdval', 	1);
a2l_cal('KINP_CANMsgValidVCU2_flg_ovrdflg', 	1);
a2l_cal('KINP_CANMsgValidVCU2_flg_ovrdval', 	1);

a2l_cal('KINP_AEBEnableH_flg_ovrdflg', 	1);
a2l_cal('KINP_AEBEnableH_flg_ovrdval', 	1);

a2l_cal('KINP_FCWEnableH_flg_ovrdflg', 	1);
a2l_cal('KINP_FCWEnableH_flg_ovrdval', 	1);


