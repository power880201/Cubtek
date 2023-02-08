function bus_create(funcname)
% Creates a bus object in the workspace and corresponding m-file.
%
% usage:
%     bus_create(function)
% example:
%     bus_create 'TQD'
%
% The script should be run at the top level of the function, and assumes
% an outport with the correct bus name exists at this level, i.e. within
% function <FUN> assumes an outport <BFUN_outputs> is present. This port
% name is used as the name of the bus created.
%

portid = sprintf('%s/B%s_outputs',gcs,funcname);
fprintf('Attempting to create bus object for port: %s\n',portid);

if isempty(find_system(portid,'BlockType','Outport'))
    disp(['can''t find outport ' portid]);
    return;
end

busname = get_param(portid,'Name');
evalin('base',['clear ' busname]);
if exist([busname '.m'],'file')
    resp = questdlg([busname '.m already exists - replace it?'],'Yes','No');
    if strcmp(resp,'Yes')
        delete([busname '.m']);
    else
        return;
    end
end

Simulink.Bus.createObject(bdroot,portid,busname,'cell');
disp('Done.');

