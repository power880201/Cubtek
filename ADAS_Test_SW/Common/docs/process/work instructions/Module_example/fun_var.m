% Load in calibration items and constants for FUN component model

% $Id: fun_var.m 2 2019-09-19 09:28:50Z JuneXmas $
 
disp('Loading FUN data dictionary .........')
 
%% ----------------
%EBoost available
a2l_par('KFUN_EBoostHVBattSOCMinEntry_pct',			'%',   0, 100, 	'single', 	'Min SOC level to allow eboost' );
a2l_par('KFUN_EBoostHVBattSOCMinExit_pct',			'%',   0, 100, 	'single', 	'Min SOC level to exit eboost' );

%% ------------------------------
%disp('Done.')
