% Load calibration items for epss
%
% =========== $Id: epss_cal.m 1301 2016-01-20 10:54:07Z chimotsai $
disp('Loading $Id: epss_cal.m 1301 2016-01-20 10:54:07Z chimotsai $')

a2l_cal('AISP_EPSCurrent_pct',  [18.1	48.1	78.1]);
a2l_cal('MISP_EPSCurrent_A',    [0   0   100]);

a2l_cal('AISP_TqASensorDelta_pct', [-35 -30 -21 -19 -13 -7 0 8 16 20 24 30 33.5]); % over 10 = 33.5 %
a2l_cal('MISP_TqAOnShaft_Nm', [-10 -8 -6 -5 -4 -2 0 2 4 5 6 8 10]);
a2l_cal('AISP_TqBSensorDelta_pct', [-33.5 -30 -24 -20 -16 -8 0 7 13 19 21 30 35]); % over 10 = 33.5 %
a2l_cal('MISP_TqBOnShaft_Nm', -[-10 -8 -6 -5 -4 -2 0 2 4 5 6 8 10]);

a2l_cal('AAPP_TqOnShaft_Nm', [-10 -8 -1 -0.5 0 0.5 1 8 10]);
a2l_cal('MAPP_EPSCurrentCmd_A', [-20 -16 -1.3 -0.3 0 0.3 1.3 16 20]);   % 20141218

%% Auto Steering Control
a2l_cal('AEPSS_SteerAngErrorP_deg', [-180.00	-90.00	-60.00	-30.00	-20.00	-10.00	-7.00	-5.00	-4.00	-3.00	-2.00	-0.20	0.00	0.20	2.00	3.00	4.00	5.00	7.00	10.00	20.00	30.00	60.00	90.00	180.00]);
a2l_cal('MEPSS_PGainTable_rat', [0.8	0.8	0.8	0.8	0.8	0.8	0.8	0.8   0.8   0.8 0.8	0.8 1	0.8	0.8	0.8	0.8	0.8	0.8	0.8	0.8	0.8	0.8	0.8	0.8]);
a2l_cal('AEPSS_SteerAngErrorI_deg', [-180.00	-90.00	-60.00	-30.00	-20.00	-10.00	-7.00	-5.00	-4.00	-3.00	-2.00	-1.00	-0.50	0.00	0.50	1.00	2.00	3.00	4.00	5.00	7.00	10.00	20.00	30.00	60.00	90.00	180.00]);
a2l_cal('MEPSS_IGainTable_rat', [1	1	1	1	1	1	1	1	1	1	1	1	3	8	3	1	1	1	1	1	1	1	1	1	1	1	1]);

%% Assist Steering Control
% a2l_cal('AAPP_AssistTqIFall_Nm', [-180.00	-90.00	-60.00	-30.00	-20.00	-10.00	-7.00	-5.00	-4.00	-3.00	-2.00	-1.00	-0.50	0.00	0.50	1.00	2.00	3.00	4.00	5.00	7.00	10.00	20.00	30.00	60.00	90.00	180.00]);
% a2l_cal('MAPP_AssistIFall_rat', [0.1 0.1111 0.1250 0.1429 0.1667 0.2000 0.2500 0.3333 0.5 1 2.5 1 0.5 0.3333 0.25 0.2 0.1667 0.1429 0.1250 0.1111 0.1]);

a2l_cal('AEPSS_PWMRaw_pct',	[-100 -0.1 0 0.1 100]);
a2l_cal('MEPSS_PWMRescaling_pct',	[-100 -2.2 0 2.6 100]);