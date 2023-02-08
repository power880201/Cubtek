
%%
CAN_flag=1;
Ts_figure=0.5;
Ts_CANbus=single(0.005);
Ts_lowpass=-1;

%% unit conversion
% ZERO_FLOAT=0;
C_FALSE=boolean(0);
deg2rad=pi/180;
kph2mps=1/3.6;
mpa2bar=10;
bar2pa=1e5;
g2mps2=9.81;
rad2deg=180/pi;
mps2kph=3.6;

%% vehicle
TrackWidthF_m=1.550;
TrackWidthR_m=1.550;
WheelBase_m=2.780;
SteerRatio=1/17.5;
inv_SteerRatio=1/SteerRatio;
K_ay=0.1221*deg2rad;
Gear_ratio_final=4.1;
Gear_ratio_1=3.538*Gear_ratio_final;
Gear_ratio_2=2.06*Gear_ratio_final;
Gear_ratio_3=1.404*Gear_ratio_final;
Gear_ratio_4=1*Gear_ratio_final;
Gear_ratio_5=0.713*Gear_ratio_final;
Gear_ratio_6=0.582*Gear_ratio_final;
BrkPressure2BrkTorque_F_Nmppa=250/mpa2bar/bar2pa;
BrkPressure2BrkTorque_R_Nmppa=150/mpa2bar/bar2pa;

%% operating range
VehSpeed_lower_bound_mps=20*kph2mps;
SteerAng_operating_range_rad=450*deg2rad;
BrkPressure_upper_bound_pa=1*mpa2bar*bar2pa;
Max_Wheel_torque_F_Nm=400;
Min_Wheel_torque_F_Nm=-600;
Min_Wheel_torque_R_Nm=-240;

%% CANbus


Range_max_VehSpeed=255.875;
Range_min_VehSpeed=0;
Bit_resolution_VehSpeed=0.125;

Range_max_WhlSpeed=255.875;
Range_min_WhlSpeed=0;
Bit_resolution_WhlSpeed=0.015625;

Range_max_YawRate=100;
Range_min_YawRate=-100;
Bit_resolution_YawRate=0.1;

Range_max_LatAccel=1.27;
Range_min_LatAccel=-1.27;
Bit_resolution_LatAccel=0.01;

Range_max_LonAccel=1.27;
Range_min_LonAccel=-1.27;
Bit_resolution_LonAccel=0.01;

Range_max_SteerAng=720;
Range_min_SteerAng=-720;
Bit_resolution_SteerAng=0.25;

Range_max_EngTorque=720;
Range_min_EngTorque=-720;
Bit_resolution_EngTorque=1.96;

Range_max_BrkPressure=720;
Range_min_BrkPressure=-720;
Bit_resolution_BrkPressure=0.1;

Range_max_ShifterPosn=10;
Range_min_ShifterPosn=0;
Bit_resolution_ShifterPosn=1;

%%
T_speed_est=0.005;

Q_element_spd=[1 100 1 1 1 1];
R_element_spd=[1 1 1];

speed_est_matrix=[1 T_speed_est T_speed_est^2/2;0 1 T_speed_est;0 0 1];
Phi_kalman_spd=[speed_est_matrix zeros(3,3);zeros(3,3) speed_est_matrix];
Gamma_kalman_spd=[0;0;0;0;0;0];
H_kalman_spd=[0 0 0 1 0 0;1 0 0 -TrackWidthR_m/2 0 0;1 0 0 TrackWidthR_m/2 0 0];
%H_kalman_spd=[0 0 0 -TrackWidthR_m/2 0 0;0 0 0 TrackWidthR_m/2 0 0];

Q_kalman_spd=zeros(size(Phi_kalman_spd));
for i=1:size(Q_kalman_spd,1)
    Q_kalman_spd(i,i)=Q_element_spd(i);
end
R_kalman_spd=zeros(size(H_kalman_spd,1),size(H_kalman_spd,1))
for i=1:size(R_kalman_spd,1)
    R_kalman_spd(i,i)=R_element_spd(i);
end

%%
Q_element_spd_new=[1 100];
R_element_spd_new=[1];


Phi_kalman_spd_new=[1 T_speed_est ;0 1 ];
Gamma_kalman_spd_new=[0;0];
H_kalman_spd_new=[1 0];
%H_kalman_spd=[0 0 0 -TrackWidthR_m/2 0 0;0 0 0 TrackWidthR_m/2 0 0];

Q_kalman_spd_new=zeros(size(Phi_kalman_spd_new));
for i=1:size(Q_kalman_spd_new,1)
    Q_kalman_spd_new(i,i)=Q_element_spd_new(i);
end
R_kalman_spd_new=zeros(size(H_kalman_spd_new,1),size(H_kalman_spd_new,1))
for i=1:size(R_kalman_spd_new,1)
    R_kalman_spd_new(i,i)=R_element_spd_new(i);
end
T_speed_est=-1;


%%
if CAN_flag==0
    Bit_resolution_VehSpeed=0.0001;
    Bit_resolution_wheelspeed=0.0001;
    Bit_resolution_YawRate=0.0001;
    Bit_resolution_LatAccel=0.0001;
    Bit_resolution_LonAccel=0.0001;
    Bit_resolution_SteerAng=0.0001;
end

%% Adaptive th
C_WhlTorqueF_YawRate_F=0.0001349;
C_LatAccel_YawRate_F=0.01175;
C_SteerAng_YawRate_F=0.07296;
C_offset_YawRate_F=0.005;

C_WhlTorqueF_LatAccel_F=0.003344;
C_LatAccel_LatAccel_F=0.2552;
C_SteerAng_LatAccel_F=0.02016;
C_offset_LatAccel_F=0.25;

C_WhlTorqueF_SteerAng_F=0.0005464;
C_LatAccel_SteerAng_F=0.03013;
C_SteerAng_SteerAng_F=0.003676;
C_offset_SteerAng_F=0.05;

%%
C_WhlTorqueF_YawRate_R=0.0001635;
C_LatAccel_YawRate_R=0.00234;
C_SteerAng_YawRate_R=0.001145;
C_offset_YawRate_R=0.005;

C_WhlTorqueF_LatAccel_R=0.006805;
C_LatAccel_LatAccel_R=0.148;
C_SteerAng_LatAccel_R=0.09176;
C_offset_LatAccel_R=0.25;

C_WhlTorqueF_SteerAng_R=0.0005464;
C_LatAccel_SteerAng_R=0.03013;
C_SteerAng_SteerAng_R=0.003676;
C_offset_SteerAng_R=0.05;

test_gain=2;
C1=0.0008429*test_gain;
C2=0.2438*test_gain;
C3=0.2177*test_gain;
C4=0.2;
    

yaw_acc_est;