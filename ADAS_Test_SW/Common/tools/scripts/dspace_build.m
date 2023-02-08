function dspace_build

[p,dragon_name] = fileparts(dragon_flying('droot'));
arch_dir = dragon_flying('arch');
build_dir = [fileparts(arch_dir) filesep 'build'];
old_dir = cd(arch_dir);

cd(arch_dir)
dspace_clear;
open('hcu_main_ADASDemoCAR');
commandwindow;
[errorFlag, errorMsg]=rti_build('hcu_main_ADASDemoCAR', 'Command', 'CM');
bdclose('hcu_main_ADASDemoCAR');
if errorFlag>=1
    warning('There is at least a fault during build process');
    return;
end

dragon_start(dragon_name, 'data');


