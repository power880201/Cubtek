% =========== $Update Time : 13-Dec-2016 14:53:00 $  =========
disp('Loading $Id: str_var.m 1545 2017-01-16 03:43:29Z bcluan $')

%% Calibration Name, Units, Min, Max, Data Type, Comment
a2l_par('KSTR_StrAngComdGain_rat', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_StrAngGain_rat', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_StrSpdGain_rat', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_AngSvoFFVal_degps', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_AngSvoKGain_rat', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_AngSvoErrGain_rat', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_AngSvoPGain_rat', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_AngSvoIGain_rat', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_AngSvoIC_degps', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_AngSvoIMin_degps', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_AngSvoIMax_degps', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('ASTR_LFCTransGainIPTq_X_Nm', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MSTR_LFCTransGainIP_rat', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('ASTR_LFCTransGainOPTq_X_Nm', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('MSTR_LFCTransGainOP_rat', 	'', 	-10000, 	10000, 	'single', 	'' );
a2l_par('KSTR_ForceAngleServoOn_flg', 	'', 	0, 	1, 	'boolean', 	'' );
a2l_par('KSTR_UseFakeStrAngReq_flg', 	'', 	0, 	1, 	'boolean', 	'' );

%% Monitored Signals
% Module Signals %
a2l_mon('VSTR_AngleContErr_deg', 	'deg', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_AngSvoPTerm_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_AngSvoITerm_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_AngSvoContErr_degps', 	'degps', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_AngSvoContPOut_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_AngSvoContIOut_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_AngSvoStrMotTqReq_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_AngSvoStrWhlTqReq_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_EPSModeReqLFC_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VSTR_StrTqApplLFC_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VSTR_EPSModeReqLKA_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VSTR_StrTqApplLKA_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VSTR_DriverStrMotTqReq_Nm', 	'Nm', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_SteeringInPhase_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VSTR_LFCTransGain4Servo_rat', 	'rat', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_StrAngReq_deg', 	'deg', 	-10000, 	10000, 	'single', 	'',	1 );

% Output Signals %
a2l_mon('VSTR_EPSModeReq_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VSTR_StrTqReq_Nm', 	'Nm', 	-1000000, 	1000000, 	'single', 	'',	1 );
a2l_mon('VSTR_StrTqAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VSTR_LFCTransGain_rat', 	'rat', 	-10000, 	10000, 	'single', 	'',	1 );
a2l_mon('VSTR_LFCTransGainAppl_flg', 	'flg', 	0, 	1, 	'boolean', 	'',	1 );
a2l_mon('VSTR_ADASLFCStatus_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
a2l_mon('VSTR_ADASLKAStatus_enum', 	'enum', 	0, 	255, 	'uint8', 	'',	1 );
