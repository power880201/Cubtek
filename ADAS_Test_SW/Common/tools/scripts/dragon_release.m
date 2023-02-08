function dragon_release(varargin)
% DRAGON_RELEASE:  To release dragon projects.
%
% $Id: dragon_release.m 2 2019-09-19 09:28:50Z JuneXmas $
%
% Syntax:
%       dragon_release  [options]
% 
% Options:
%       build   - to release c code
%       hex     - to release hex to calibration
%
% Example:
%       dragon_release  hex  build
%

if nargin ==0
    release_list = {'hex'};
else
    release_list = varargin;
end

dragon_root = dragon_flying('droot');


if ismember({'conti_bsw'}, release_list)
	dir_build    = [dragon_root '\software\sw_development\build\conti_bsw' ];
end

if ismember({'delphi_bsw'}, release_list)
	dir_build    = [dragon_root '\software\sw_development\build\delphi_bsw' ];
end

if ismember({'no_bsw_build'}, release_list)
	dir_build    = [dragon_root '\software\sw_development\build' ];  
end

dir_cal      = [dragon_root '\software\calibration\calibration_data'  ];
dir_release  = [dragon_root '\releases'  ];

exclude_list = [dir_release '\exclude.list'];

[e, username] = system('echo %USERNAME%');
release_postfix = [ '_' datestr(now, 30) '_'  username(1:end-1) ];

cd(dir_build)

find_elf_file = dir('*.elf');
if isempty(find_elf_file)
    disp('No successful build. Stop.')
    return;
end

[foo, idx] = max([find_elf_file.datenum]);      % find latest elf file for model name
model_name = strrep(find_elf_file(idx).name, '.elf', '');

if ismember({'hex'}, release_list)
    
    copy_list = { '.s19', '.elf', '.a2l', '.map' };
    fprintf('release HEX of %s for calibration...\n', model_name);
    
    target_dir = [ dir_cal  filesep model_name  release_postfix ];
    mkdir(target_dir);
    
    for i=1:length(copy_list)
        source_file = [                        model_name                   copy_list{i}];
        target_file = [target_dir   filesep    model_name  release_postfix  copy_list{i}];

        copyfile(source_file, target_file);
    end
	
	source_file = [target_dir   filesep    model_name  release_postfix '.s19'];
	target_file = [target_dir   filesep    'flash.s19'];
    copyfile(source_file, target_file);
	
    zip([target_dir '.zip'], target_dir );
    system(['start ' target_dir]);
    
end

if ismember({'build'}, release_list) && exist(exclude_list, 'file')

    fprintf('release C code for %s ...\n', model_name);
    
    target_dir = [dir_release filesep 'build' release_postfix];
    mkdir(target_dir);
    
    cmd = sprintf('!xcopy /i/s %s %s /exclude:%s', dir_build,  target_dir, exclude_list  );
    eval(cmd);

    curr_dir = cd(target_dir);
    cmd = sprintf('!gmake SIMULINK_MODEL=%s clean', model_name);
    eval(cmd);
    
    cd(curr_dir);
    zip([target_dir '.zip'], target_dir );
    system(['start ' target_dir ]);

end

