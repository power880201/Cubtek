function dragon_scg2(use_lib_name)
%
% To setup delphi SCG2 for dragon build environment.
%
% Example: 
%   dragon_scg2   libbsw_1_0_8
%   dragon_scg2   1_0_8
%

if nargin<1
    error('No BSW lib assigned.');
end

arch_path = dragon_flying('arch');
build_path = strrep(arch_path, '\software\sw_development\arch', '\software\sw_development\build');
delphi_path = [ build_path '\delphi' ];
disp([ 'Found Delphi Path: ' delphi_path ]);

trunk_path = dragon_flying('trunk');
scg2_path = [ trunk_path '\Common\scg2\Delphi_SCG2' ];
disp([ 'Found SCG2 Path: ' scg2_path ]);

curr_dir = cd(delphi_path);

%%
lib_list = dir([scg2_path '\HAL_SCG2\lib\*' use_lib_name '*' ]);

if isempty(lib_list)
    error('No BSW lib found.');
end

if length(lib_list)>1
    error('More than one BSW lib found.');
end

file_lib = lib_list.name;     % use latest file  libbsw_1_0_xx.a
disp([ 'Found SCG2 Library: ' file_lib ]);

if ~exist(file_lib, 'file')
    eval(['!del ' 'libbsw*.a']);
    cmd = sprintf('!copy %s\\%s\\%s*  .', scg2_path, 'HAL_SCG2\lib',  file_lib);
    eval(cmd);
    
%   eval(['!svn add ' file_lib ]);
end

%%
file_headers = '*.h';
cmd = sprintf('!copy /y %s\\%s\\%s*  .', scg2_path, 'HAL_SCG2\include',  file_headers);
eval(cmd);

%%
file_dld = 'scg2.dld';
cmd = sprintf('!copy /y %s\\%s\\%s*  .', scg2_path, 'Build',  file_dld);
eval(cmd);

%%
rep_txt = strrep(file_lib, '.a', '');
rep_txt = regexprep(rep_txt, '^lib', '-l');

cmd = '!sed -i "/#include.*haldef\.h.*/d" hal_types.h';
eval(cmd);

cmd = '!sed -i "s/sample_cal\.o/app_data_const.o/g" scg2.dld';
eval(cmd);

%%
cd(build_path);

cmd = [ '!sed -i -r "s/-lbsw_[0-9][A-Za-z_0-9]+/' rep_txt '/g" Makefile' ];
eval(cmd);


%%
cd(curr_dir);

