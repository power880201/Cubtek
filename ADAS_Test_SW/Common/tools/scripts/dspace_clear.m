function dspace_clear

arch_dir = dragon_flying('arch');
cd(arch_dir)
if 7 == exist('slprj', 'dir')
    rmdir('slprj', 's');
end
if 7 == exist('sfprj', 'dir')
    rmdir('sfprj', 's');
end
if 7 == exist('hcu_main_ADASwEPS_rti1401', 'dir')
    rmdir('hcu_main_ADASwEPS_rti1401', 's');
end
if 2 == exist('hcu_main_ADASwEPS_RTICANMM.cancfg', 'file')
    delete hcu_main_ADASwEPS_RTICANMM.cancfg;
end
if 2 == exist('hcu_main_ADASwEPS_usr.c', 'file')
    delete hcu_main_ADASwEPS_usr.c;
end
if 2 == exist('hcu_main_ADASwEPS_usr.mk', 'file')
    delete hcu_main_ADASwEPS_usr.mk;
end
if 2 == exist('hcu_main_ADASwEPS.trc', 'file')
    delete hcu_main_ADASwEPS.trc;
end
if 2 == exist('hcu_main_ADASwEPS.map', 'file')
    delete hcu_main_ADASwEPS.map;
end
if 2 == exist('hcu_main_ADASwEPS.ppc', 'file')
    delete hcu_main_ADASwEPS.ppc;
end
if 2 == exist('hcu_main_ADASwEPS.sdf', 'file')
    delete hcu_main_ADASwEPS.sdf;
end
if 2 == exist('hcu_main_ADASwEPS.trz', 'file')
    delete hcu_main_ADASwEPS.trz;
end
if 2 == exist('hcu_main_ADASwEPS.dsbuildinfo', 'file')
    delete hcu_main_ADASwEPS.dsbuildinfo;
end
if 2 == exist('hcu_main_ADASwEPS.ppc.hex', 'file')
    delete hcu_main_ADASwEPS.ppc.hex;
end
if 2 == exist('hcu_main_ADASwEPS.ppc.srec', 'file')
    delete hcu_main_ADASwEPS.ppc.srec;
end
