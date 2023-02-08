A_yaw=[0 1;0 0];
B_yaw=[0;0];
C_yaw=[1 0];
D_yaw=0;
dT=0.005;
sys=ss(A_yaw,B_yaw,C_yaw,D_yaw);
sys_yaw=c2d(sys,dT);

m_s=1370;
m_us=180;
m_total=m_s+m_us;
L=2.780;
a=1.110;
b_m=L-a;
Iz=2315.3;