%%
%version V01:released by ricardo
%version V02:modify by chouwuliu on 2014/09/10
%            (load hcu_cal_vehicle.m automatically)
%version V03:modify by chouwuliu on 2014/11/07
%            (Select target data to be load)
function dragon_build(method)

if nargin == 0
	method = 'brandnew';
end


[p,dragon_name] = fileparts(dragon_flying('droot'));
arch_dir = dragon_flying('arch');

build_name = haitec_bsw_select;
switch build_name
    case 'delphi_bsw'
          build_dir = [fileparts(arch_dir) filesep 'build\delphi_bsw'];
    case 'conti_bsw'
          build_dir = [fileparts(arch_dir) filesep 'build\conti_bsw'];
	case 'no_bsw_build'
          build_dir = [fileparts(arch_dir) filesep 'build'];	  
end

old_dir = cd(arch_dir);

if strcmp(method, 'brandnew')
	dragon_start(dragon_name, 'clean');
	cd(build_dir)
	eval('!gmake distclean');
elseif strcmp(method, 'incremental')
	warning('ID:Whatever', 'performing incremental build...');
else
	error('incorrect argument. should be "incremental" or "brandnew".' );
end

convert_llddm_variables; % This is for converting the variables of low level SW DDM (by Chimo)

cd(arch_dir)
switch build_name
    case 'delphi_bsw'
            asap2_build('hcu_main', '../build/delphi_bsw');
    case 'conti_bsw'
            asap2_build('hcu_main', '../build/conti_bsw');
	case 'no_bsw_build'
            asap2_build('hcu_main', '../build');		
end

cd(build_dir)
if ~exist('hcu_main.elf', 'file')
    cd(old_dir)
    return
end

switch build_name
        case 'delphi_bsw'
                asap2_a2l_maker('hcu_main', './delphi/scg2_a2l_part.txt');
        case 'conti_bsw'
                asap2_a2l_maker('hcu_main', './conti/h500_a2l_part.txt');
		case 'no_bsw_build'
                asap2_a2l_maker('hcu_main', './delphi/scg2_a2l_part.txt');		
end

dragon_start(dragon_name, 'data');
cd(build_dir)

switch build_name
        case 'delphi_bsw'
                asap2_vtab('hcu_main.a2l', '../../arch/hcu_enum_info.txt');
        case 'conti_bsw'
                asap2_vtab('hcu_main.a2l', '../../arch/hcu_enum_info.txt');
		case 'no_bsw_build'
                asap2_vtab('hcu_main.a2l', '../arch/hcu_enum_info.txt');		
end

dragon_release(build_name, 'hex', 'build');

