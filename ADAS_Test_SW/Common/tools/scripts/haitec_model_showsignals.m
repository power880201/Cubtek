function haitec_model_showsignals(system)
% Set model to show propagated signals after the block of Inpot, From and specific
% subsystem.
%
%
%Examples:
%	haitec_model_showsignals fun 
%

if nargin<1
    disp('** Error: no enough arguments.');
    help(mfilename)
    return
end
open_system(system)
set_param(system, 'Lock', 'off') 

qstring=['Do do you want to Show Propagated Signals?'];
choice = questdlg(qstring,'Action Menu', ...
    'yes','no','no');
switch choice
    case 'yes'
        action='on';
    case 'no'
        action='off';
end
blk_lines=find_system(system,'FindAll','on','FollowLinks','on','type','line');
for i = 1:length(blk_lines)
    SrcPortHandle=get_param(blk_lines(i),'SrcPortHandle');
    SrcBlockHandle=get_param(blk_lines(i),'SrcBlockHandle');
    Src_Blk=get_param(SrcBlockHandle,'BlockType');
    Src_Mask=get_param(SrcBlockHandle,'Mask');
    Src_LinkSta=get_param(SrcBlockHandle,'LinkStatus');
    if strcmp(Src_Blk,'Inport') || ...
            (strcmp(Src_Blk,'SubSystem') && strcmp(Src_Mask,'off') && strcmp(Src_LinkSta,'none')) ||...
            strcmp(Src_Blk,'From')
        set(SrcPortHandle,'ShowPropagatedSignals','off');
        set(SrcPortHandle,'ShowPropagatedSignals',action);
    end
end
end