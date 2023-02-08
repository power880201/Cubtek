function bsw_name = haitec_bsw_select();
%

% === $Id: haitec_bsw_select.m 2 2019-09-19 09:28:50Z JuneXmas $
disp('$Id: haitec_bsw_select.m 2 2019-09-19 09:28:50Z JuneXmas $');

arch_dir = dragon_flying('arch');
bsw_dir = [fileparts(arch_dir) filesep 'build'];
cd(bsw_dir)

find_bsw = dir([bsw_dir filesep '*bsw']);
    if isempty(find_bsw)                        % no bsw found
%         error('no bsw found. stop.')
        bsw_name = 'no_bsw_build';
    elseif length(find_bsw)==1                  % one bsw found
        bsw_name = find_bsw.name;
    else                                            % more than one bsw found
        dragon_list = {find_bsw.name};      
        q = listdlg('ListString', dragon_list, ...
					 'Name', 'Select A BSW', ...
					 'ListSize', [200 100], ...
					 'SelectionMode', 'single' ...
					 );
        if isempty(q)
            disp('No bsw selected.');
            return;
        end
        bsw_name = dragon_list{q};
    end

end