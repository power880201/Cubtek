% =========== $Update Time : 27-Sep-2015 08:56:05 $  =========
disp('Loading $Id: epss_def.m 1281 2015-12-16 08:16:20Z chimotsai $')


%#########################################################################
% Kalman Filter
%#########################################################################
% Define system parameters
Bv=single(0.01);    % N-s/m
Jv=single(0.025);   % kg-m2
K=single(100);      % N-m
N1=single(16.92);   % N/A
N2=single(20.5);    % N/A
Bmot=single(0.003);   % 0.003 N-s/m
Jm=single(0.00033); % kg-m2
JT=N2*N2*Jm;        % Kg-m2
Ts=0.001;           % Sample Time of controller (s)
Kt=0.0577;          % Motor Torque Constant (N-m/A)

% % Define State-space vectors
% A=[-Bv/Jv 0 -K/Jv 1/Jv 0;0 -N2*N2*Bmot/JT K/JT 0 1/JT/N1;1 -1 0 0 0;0 0 0 0 0;0 0 0 0 0];
% B=[0;N2/JT;0;0;0];
% C=[0 1 0 0 0;0 0 K 0 0];
% D=single(0);
% Sys_continue=ss(A,B,C,D);
% Sys_Discrete=c2d(Sys_continue,Ts);
% A_Dis=Sys_Discrete.a;
% B_Dis=Sys_Discrete.b;
% C_Dis=Sys_Discrete.c;
% D_Dis=Sys_Discrete.d;