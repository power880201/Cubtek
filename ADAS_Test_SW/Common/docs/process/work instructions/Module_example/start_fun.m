
% Startup script to begin development of FUN component model

% $Id: start_fun.m 2 2019-09-19 09:28:50Z JuneXmas $

function start(method)
% Startup script to begin development of fun component model
%

disp('Running start script for FUN');

%% find trunk path

%disp(['proj path is:',trunkpath]);
addpath([ trunkpath '\BlueDragon\software\sw_development\arch']);	
addpath([ trunkpath '\BlueDragon\software\tools']);	
addpath([ trunkpath '\CommonDragon\software\tools\scripts']);	
addpath([ trunkpath '\CommonDragon\software\tools\unit_test']);	

% types
evalin('base', 'hcu_local_hdr');

% interfaces
BINP_outputs; 
BFUN_outputs; 

% calibration
fun_var;
fun_cal;

% test overrides


% launch model
open_system('fun_ut');

disp('FUN start script complete.');
end

function the_path = trunkpath
curr_path = pwd;
sw_idx = strfind(curr_path, 'CommonDragon');
if isempty(sw_idx)
	the_path = '.';
else
	the_path = curr_path(1:sw_idx(1)-2);
end
end
    
