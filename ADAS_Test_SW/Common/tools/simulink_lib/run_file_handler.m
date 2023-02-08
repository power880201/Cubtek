% $Id: run_file_handler.m 2 2019-09-19 09:28:50Z JuneXmas $ 

function run_file_handler(callback_str)

    switch callback_str
        case 'OpenFcn',
            run_file;
        case 'InitFcn',
            if get_param(gcb,'run_on_init')
                run_file;
            end
        case 'LoadFcn',
            if get_param(gcb,'run_on_load')
                run_file;
            end
        otherwise
            % no op
    end

function run_file()

    fname = get_param(gcb,'filename');
    if ~strcmp(fname,'')
        if exist(fname,'file') 
            evalin('base',fname);
        else 
            txt = ['File not found. To specify which file this block opens, right-click on it ' ...
                   'and select Mask Parameters, then enter the name of the m-file without the .m extension'];
            title = 'Run M-FIle block error';
            msgbox(txt,title,'error');
        end  
    end

