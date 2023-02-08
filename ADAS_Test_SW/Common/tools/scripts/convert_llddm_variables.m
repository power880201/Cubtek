%% Required function: 
% underscoreToSlashUnderscore();
% copy_S_Sig_To_Mpt_Sig();

%% Functional Description
% This is used to switch the variables of low level DDM SW (VDDML_xxx) to mpt variables

% This function was created by David
% Revised for converting the variables of low level DDM SW to mpt variables by Chimo @ 20140926
 

%% Read variables:
fList = evalin('base','whos');

% waitbar: 
nbar = 50; % number of bars could be 100, or more, length(fList);  
ttlNum = length(fList); 
barSkp = floor(ttlNum./nbar);  % bar intervals. 
barCur = barSkp; 
h_wb = waitbar(0, 'Starting Converting DDM Variables'); 

for ctr = 1:length(fList)
    varNm = fList(ctr).name;

%     For progress bar: 
    if (ctr >= barCur)
        msg = underscoreToSlashUnderscore(varNm);
        h_wb = waitbar(ctr./ttlNum, h_wb, msg);
        barCur = barCur + barSkp; 
    end

    ip = evalin('base', varNm); %input
    if ( isnumeric(ip) )
        continue;
    end
    
    if ( ischar(ip) )
        continue; % /*David*/ No need to process character paths; 
    end
    if ( ( strcmp(varNm, 'FALSE') ) || ( strcmp(varNm, 'TRUE') ) ) 
        continue; % ignore TRUE and FALSE on purpose.  It is defined somewhere else; 
    end
    if ( iscell(ip) )
        continue; % For the 'ans' item.  Avoid cells alltogether.  
    end

    ipC = ip.getDisplayClass; % input class
    
    if (strcmp(ipC, 'Simulink.Signal'))
        if ( strcmp(varNm(1:5), 'VDDML') )
          hName = '../diag/obd_interface_in.h';
          cName = 'none'; 
          op = copy_S_Sig_To_Mpt_Sig(ip, hName, cName);
        else
            continue;
        end
        cmd = sprintf('%s = %s;', varNm, 'op');
        assignin('base','op',op);
        evalin('base',cmd);   
    else
        continue; % do nothing. 
    end
end

close(h_wb); 