% Load calibration items for epss
%
% =========== $Id: epss_var.m 1301 2016-01-20 10:54:07Z chimotsai $
disp('Loading $Id: epss_var.m 1301 2016-01-20 10:54:07Z chimotsai $')

a2l_par('AISP_EPSCurrent_pct',      'pct', 	0, 	100, 	'double', 	'' );
a2l_par('MISP_EPSCurrent_A',        'A', 	-100, 	100, 	'double', 	'' );

a2l_par('AISP_TqASensorDelta_pct',	'pct', 	-100, 	100, 	'double', 	'' );
a2l_par('MISP_TqAOnShaft_Nm',        'Nm', 	-100, 	100, 	'double', 	'' );
a2l_par('AISP_TqBSensorDelta_pct',	'pct', 	-100, 	100, 	'double', 	'' );
a2l_par('MISP_TqBOnShaft_Nm',        'Nm', 	-100, 	100, 	'double', 	'' );

a2l_par('AAPP_TqOnShaft_Nm',        'Nm', 	-100, 	100, 	'double', 	'' );
a2l_par('MAPP_EPSCurrentCmd_A',        'A', 	-100, 	100, 	'double', 	'' );

%% Auto Steering Control
a2l_par('AEPSS_SteerAngErrorP_deg',	'deg', 	-100000, 	10000, 	'double', 	'' );
a2l_par('MEPSS_PGainTable_rat',	'rat', 	-100000, 	10000, 	'double', 	'' );
a2l_par('AEPSS_SteerAngErrorI_deg',	'deg', 	-100000, 	10000, 	'double', 	'' );
a2l_par('MEPSS_IGainTable_rat',	'rat', 	-100000, 	10000, 	'double', 	'' );

%% Assist Steering Control
% a2l_par('AAPP_AssistTqIFall_Nm',	'Nm', 	-100000, 	10000, 	'double', 	'' );
% a2l_par('MAPP_AssistIFall_rat',	'rat', 	-100000, 	10000, 	'double', 	'' );

a2l_par('AEPSS_PWMRaw_pct',	'pct', 	-100, 	100, 	'double', 	'' );
a2l_par('MEPSS_PWMRescaling_pct',	'pct', 	-100, 	100, 	'double', 	'' );