%%
%version:V01 (copy dragon_build, add select model of dragon)
% Modifed date: 2018/04/19, Goody
%
% Modifed date: 2018/09/25, Tina, delete select bsw
%%
function m2c(method)

if nargin == 0
	method = 'brandnew';
end

[p,dragon_name] = fileparts(dragon_flying('droot'));
arch_dir = dragon_flying('arch');

% build_name = haitec_bsw_select;
% switch build_name
%     case 'delphi_bsw'
%         build_dir = [fileparts(arch_dir) filesep 'build\delphi_bsw'];
%     case 'conti_bsw'
%         build_dir = [fileparts(arch_dir) filesep 'build\conti_bsw'];
%     case 'no_bsw_build'
%         build_dir = [fileparts(arch_dir) filesep 'build'];
% end

build_dir = [fileparts(arch_dir) filesep 'build\conti_bsw'];

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
find_module=dir;
idx=[];
setnum=1;
for i=1:numel(find_module)
    tempnm = regexp(find_module(i).name, 'hcu_main.*.mdl$', 'match');
    if ~isempty(tempnm)
        tempnm=strrep(cell2mat(tempnm),'.mdl','');
        idx{setnum}=tempnm;
        setnum=setnum+1;
    end
end

if setnum>1
r = listdlg('ListString', idx, ...
        'Name', 'Select main model', ...
        'ListSize', [200 100], ...
        'SelectionMode', 'single' ...
        );
    if isempty(r)
        disp(' - Canceled...')
        return
    end
else 
    disp('unfound hcu_main')
    return
end

% switch build_name
%     case 'delphi_bsw'
%             asap2_build(idx{r}, '../build/delphi_bsw');
%     case 'conti_bsw'
%             asap2_build(idx{r}, '../build/conti_bsw');
% 	case 'no_bsw_build'
%             asap2_build(idx{r}, '../build');		
% end

asap2_build(idx{r}, '../build/conti_bsw');

end

% cd(build_dir)
% if ~exist('hcu_main.elf', 'file')
%     cd(old_dir)
%     return
% end
% 
% switch build_name
%         case 'delphi_bsw'
%                 asap2_a2l_maker('hcu_main', './delphi/scg2_a2l_part.txt');
%         case 'conti_bsw'
%                 asap2_a2l_maker('hcu_main', './conti/h500_a2l_part.txt');
% 		case 'no_bsw_build'
%                 asap2_a2l_maker('hcu_main', './delphi/scg2_a2l_part.txt');		
% end
% 
% dragon_start(dragon_name, 'data');
% cd(build_dir)
% 
% switch build_name
%         case 'delphi_bsw'
%                 asap2_vtab('hcu_main.a2l', '../../arch/hcu_enum_info.txt');
%         case 'conti_bsw'
%                 asap2_vtab('hcu_main.a2l', '../../arch/hcu_enum_info.txt');
% 		case 'no_bsw_build'
%                 asap2_vtab('hcu_main.a2l', '../arch/hcu_enum_info.txt');		
% end
% 
% dragon_release(build_name, 'hex', 'build');

