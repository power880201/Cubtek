function haitec_export_businfo
% xxx.var and BXXX.outputs from DD_XXX.xls automatically.
%% 選擇 DD file %
clc
arch_path = dragon_flying('arch');
[file_name_tmp,PathName_tmp] = uigetfile({'*.xls;*.xlsx;', 'Excel Files (*.xls, *.xlsx)'; '*.*', 'All Files (*.*)'},...
'Select target DD file','MultiSelect', 'off');
%% 讀取所選擇的DD file %
if ~iscell(file_name_tmp)  % if you choose 0 or 1 file.
   if file_name_tmp == 0
       disp('You do not select any file.... ')
   else  % If DD file = 1
       file_name=file_name_tmp;
       PathName=PathName_tmp;
       disp('Please be patient!  Data is in converting.... ');disp('   ')
       export_businfo(file_name,PathName);
       disp(['The converted signals for ' file_name ' is ok.'])
   end
    
else % If DD files are more than 1.
    disp('Please be patient!  Data is in converting.... ');disp('   ')
    for i=1:length(file_name_tmp)
        file_name=char(file_name_tmp(i));
        PathName=PathName_tmp;
        export_businfo(file_name,PathName);
        disp(['The converted signals for ' file_name ' is ok'])
    end
end
 
end

function export_businfo(file_name,PathName)
C_SINGLE_MAX = 1e6;
C_SINGLE_MIN = -1e6; 
C_UINT8_MAX = 255;
C_UINT8_MIN = 0;
C_UINT16_MAX = 65535;
C_UINT16_MIN = 0;
C_UINT32_MAX = 4294967295;
C_UINT32_MIN = 0;
C_BOOL_MAX = 1;
C_BOOL_MIN = 0;
 
[num_s,txt_s,raw_s]=xlsread([PathName file_name],'Signals');
[num_c,txt_c,raw_c]=xlsread([PathName file_name],'Calibrations');
    
% 取得模組名稱 %
tmpname = strread(file_name,'%s','delimiter','_.');
module_name = tmpname(2);

% 取得模組所對應之資料夾名稱 %
dir_name=char(lower(module_name));

% % 將m-file存在對應的資料夾
% arch_path = dragon_flying('arch');
% dir_PathName=char([arch_path '\app\' dir_name]);
% cd(dir_PathName);

%% 創建 Bxxx_outputs.m 
Col_Direction = strmatch('Direction', txt_s(1,:));
tmpNode = txt_s(2:end, Col_Direction); % 選擇 direction column %
tmpOutputs = [];
tmpOutputs = union(tmpOutputs, strmatch('output', lower(tmpNode)));
tmplen = length(tmpOutputs);
saveFileName = cell2mat(['B' module_name '_outputs.m']);
saveModule = cell2mat(['B' module_name '_outputs']);

%% 搜尋是否有重複的檔案名稱
% isExist = exist(saveFileName,'file');
% if isExist == 2  % 檔案Bxxx_outputs.m已存在 %
%     saveFileName = [saveModule  '_' datestr(now,'yyyymmddTHHMMSS') '.m']; % 檔案名稱加上日期
% end
%%
  Col_Var = strmatch('Signal/Calibration Name', txt_s(1,:));
  Col_Direction = strmatch('Direction', txt_s(1,:));
  Col_Type = strmatch('Data Type', txt_s(1,:));
  Col_Min = strmatch('Min', txt_s(1,:));
  Col_Max = strmatch('Max', txt_s(1,:));
  Col_Unit = strmatch('Units', txt_s(1,:));
  Col_Description = strmatch('Description', txt_s(1,:));
  Col_Size = strmatch('Size', txt_s(1,:));
  

if tmplen == 0
  disp(['ZERO signals on creation for ' saveFileName]);
else
  % 產生Bxxx_outputs.m %  
  fileID = fopen(saveFileName,'w');
  % ---------------------------------- %
  fprintf(fileID,'%% =========== $Update Time : %s $  =========\n', datestr(now));
  fprintf(fileID,'function cellInfo = %s(varargin)\n', saveModule);
  fprintf(fileID,'%% %s returns a cell array containing bus object information\n',saveModule);
  fprintf(fileID,'\n');
  fprintf(fileID,'%% Optional Input: ''false'' will suppress a call to Simulink.Bus.cellToObject\n');
  fprintf(fileID,'%%                 when the m-file is executed.\n');
  fprintf(fileID,'%% The order of bus element attributes is as follows:\n'); 
  fprintf(fileID,'%%   ElementName, Dimensions, DataType, SampleTime, Complexity, SamplingMode\n');   
  fprintf(fileID,'\n');
  
  fprintf(fileID,'suppressObject = false;\n');  
  fprintf(fileID,'if nargin == 1 && islogical(varargin{1}) && varargin{1} == false\n');  
  fprintf(fileID,'    suppressObject = true;\n');    
  fprintf(fileID,'elseif nargin > 1\n');  
  fprintf(fileID,'    error(''Invalid input argument(s) encountered'');\n');    
  fprintf(fileID,'end\n');   
  fprintf(fileID,'\n'); 

  fprintf(fileID,'cellInfo = { ... \n');  
  fprintf(fileID,'  { ... \n');  
  fprintf(fileID,'    ''%s'', ... \n', saveModule);    
  fprintf(fileID,'    '''', ... \n');  
  fprintf(fileID,'    sprintf(''''), { ...\n');

  
  for i=1:tmplen
    tmpVar = txt_s(tmpOutputs(i)+1,Col_Var);
    tmpType = txt_s(tmpOutputs(i)+1,Col_Type);
    if (isempty(Col_Size))
        tmpSize = 1;
    else
        if (isnumeric(raw_s{(tmpOutputs(i)+1),Col_Size})) 
            if (~isnan(raw_s{(tmpOutputs(i)+1),Col_Size}))  
                tmpSize = raw_s(tmpOutputs(i)+1,Col_Size);
                tmpSize = tmpSize{1,1};
            else
                disp(['find NaN on size of (' tmpVar ')! Using the default value!']);
                tmpSize = 1;
            end
        else
            disp('Size value needs a numeric, not string!');
            tmpSize = 1;
        end  
    end
    fprintf(fileID,'      {''%s'', \t%s, ''%s'', -1, ''real'', ''Sample''}; ...\n',char(tmpVar),num2str(tmpSize),char(tmpType));     
  end
  fprintf(fileID,'    } ... \n'); 
  fprintf(fileID,'  } ...\n'); 
  fprintf(fileID,'}''; \n'); 
  fprintf(fileID,'\n'); 
  
  fprintf(fileID,'if ~suppressObject\n');
  fprintf(fileID,'    %% Create bus objects in the MATLAB base workspace \n'); 
  fprintf(fileID,'    Simulink.Bus.cellToObject(cellInfo) \n'); 
  fprintf(fileID,'end\n');   
  fprintf(fileID,'end\n'); 
  % ---------------------------------- %
  fclose(fileID);
end

%% 創建 xxx_var.m & xxx_cal.m
module_name = lower(module_name);
saveFileNameVar = cell2mat([module_name '_var.m']);
saveFileNameCal = cell2mat([module_name '_cal.m']);

%%
Col_Var_c = strmatch('Signal/Calibration Name', txt_c(1,:));
Col_Direction_c = strmatch('Direction', txt_c(1,:));
Col_Type_c = strmatch('Data Type', txt_c(1,:));
Col_Size_c = strmatch('Size', txt_c(1,:));
Col_Unit_c = strmatch('Units', txt_c(1,:));
Col_Min_c = strmatch('Min', txt_c(1,:));
Col_Max_c = strmatch('Max', txt_c(1,:));
Col_Description_c = strmatch('Description', txt_c(1,:));
Col_DefaultDR_c = strmatch('Default during Running', txt_c(1,:));

tmpNode = txt_c(2:end,Col_Direction_c); % 選擇 direction column 
tmpOutputs = [];
tmpOutputs = union(tmpOutputs, strmatch('internal', lower(tmpNode)));
tmplen = length(tmpOutputs);

fileID = fopen(saveFileNameVar,'w');
fileIDCal = fopen(saveFileNameCal,'w');
% xxx_var.m ------------------------ %
fprintf(fileID,'%% =========== $Update Time : %s $  =========\n', datestr(now));
fprintf(fileID,'disp(''Loading $Id: haitec_export_businfo.m 2 2019-09-19 09:28:50Z JuneXmas $'')\n', saveFileNameVar);
fprintf(fileID,'\n'); 
fprintf(fileID,'%%%% Calibration Name, Units, Min, Max, Data Type, Comment\n'); 
% ---------------------------------- %

% xxx_cal.m ------------------------ %
fprintf(fileIDCal,'%% =========== $Update Time : %s $  =========\n', datestr(now));
fprintf(fileIDCal,'disp(''Loading $Id: haitec_export_businfo.m 2 2019-09-19 09:28:50Z JuneXmas $'')\n', saveFileNameCal);
fprintf(fileIDCal,'\n'); 
% ---------------------------------- %

if tmplen == 0
  disp(['ZERO calibration for ' saveFileNameVar]);
else
   
    
  for i=1:tmplen
    tmpVar = char(txt_c(tmpOutputs(i)+1,Col_Var_c));
    tmpType = char(txt_c(tmpOutputs(i)+1,Col_Type_c));
    tmpUnit = char(txt_c(tmpOutputs(i)+1,Col_Unit_c));
    
    if (isnumeric(raw_c{(tmpOutputs(i)+1),Col_Min_c})) 
      if (~isnan(raw_c{(tmpOutputs(i)+1),Col_Min_c}))  
        tmpMin = raw_c(tmpOutputs(i)+1,Col_Min_c);
        tmpMin = tmpMin{1,1};
      else
        disp(['find NaN on Min value of (' tmpVar ')! Using the default value!']);
        
        switch tmpType
            case 'single'
                tmpMin = C_SINGLE_MIN;
            case 'uint8'
                tmpMin = C_UINT8_MIN;
            case 'uint16'
                tmpMin = C_UINT16_MIN; 
            case 'uint32'
                tmpMin = C_UINT32_MIN; 
            case 'boolean'
                tmpMin = C_BOOL_MIN; 
            otherwise
              disp('ERROR! Can not use the default value!'); 
              tmpMin = 0;
        end
      end
    else
      disp('Min value needs a numeric, not string!');
      tmpMin = 0;
    end

    if (isnumeric(raw_c{(tmpOutputs(i)+1),Col_Max_c})) 
      if (~isnan(raw_c{(tmpOutputs(i)+1),Col_Max_c}))  
        tmpMax = raw_c(tmpOutputs(i)+1,Col_Max_c);        
        tmpMax = tmpMax{1,1};
      else
        disp(['find NaN on Max value of (' tmpVar ')! Using the default value!']);
        
        switch tmpType
            case 'single'
                tmpMax = C_SINGLE_MAX;
            case 'uint8'
                tmpMax = C_UINT8_MAX;
            case 'uint16'
                tmpMax = C_UINT16_MAX; 
            case 'uint32'
                tmpMax = C_UINT32_MAX; 
            case 'boolean'
                tmpMax = C_BOOL_MAX; 
            otherwise
              disp('ERROR! Can not use the default value!');
              tmpMax = 0;
        end
      end
    else
      disp('Max value needs a numeric, not string!');
      tmpMax = 0;
    end    
    
    tmpCom = char(txt_c(tmpOutputs(i)+1,Col_Description_c));
    tmpCom = strrep(tmpCom,char(10),''); % 取消 0x0A字元 %
    tmpCom = strrep(tmpCom,char(13),''); % 取消 0x0D字元 %    
    fprintf(fileID,'a2l_par(''%s'', \t''%s'', \t%s, \t%s, \t''%s'', \t''%s'' );\n', tmpVar, tmpUnit, num2str(tmpMin), num2str(tmpMax), tmpType, tmpCom);  
   
    if ischar(cell2mat(raw_c(tmpOutputs(i)+1,Col_DefaultDR_c)))
      tmpValueStr = raw_c(tmpOutputs(i)+1,Col_DefaultDR_c);
      tmpValueStr = cell2mat(tmpValueStr);        
      % xxx_cal.m %
      fprintf(fileIDCal,'a2l_cal(''%s'', \t%s);\n', tmpVar, tmpValueStr);    
    else
      tmpValue = raw_c(tmpOutputs(i)+1,Col_DefaultDR_c); 
      tmpValue = tmpValue{1,1};
      % xxx_cal.m %
      fprintf(fileIDCal,'a2l_cal(''%s'', \t%g);\n', tmpVar, tmpValue);        
    end
  end    
  fprintf(fileID,'\n');
  
  % 關閉 xxx_cal.m %
  fclose(fileIDCal);
end

% xxx_var.m monitored signals %
fprintf(fileID,'%%%% Monitored Signals\n');
fprintf(fileID,'%% Module Signals %%\n');
tmpNode = txt_s(2:end,Col_Direction); % 選擇 direction column %
tmpOutputs = [];
tmpOutputs = union(tmpOutputs, strmatch('internal', lower(tmpNode)));
tmplen = length(tmpOutputs);

if tmplen == 0
  disp(['ZERO monitored signals for ' saveFileNameVar]);
else 
  for i=1:tmplen
    tmpVar = char(txt_s(tmpOutputs(i)+1,Col_Var));
    tmpUnit = char(txt_s(tmpOutputs(i)+1,Col_Unit));
    tmpType = char(txt_s(tmpOutputs(i)+1,Col_Type));
    
    if (isnumeric(raw_s{(tmpOutputs(i)+1),Col_Min})) 
      if (~isnan(raw_s{(tmpOutputs(i)+1),Col_Min}))  
        tmpMin = raw_s(tmpOutputs(i)+1,Col_Min);
        tmpMin = tmpMin{1,1};
      else
        disp(['find NaN on Min value of (' tmpVar ')! Using the default value!']);
        
        switch tmpType
            case 'single'
                tmpMin = C_SINGLE_MIN;
            case 'uint8'
                tmpMin = C_UINT8_MIN;
            case 'uint16'
                tmpMin = C_UINT16_MIN; 
            case 'uint32'
                tmpMin = C_UINT32_MIN; 
            case 'boolean'
                tmpMin = C_BOOL_MIN; 
            otherwise
              disp('ERROR! Can not use the default value!');  
              tmpMin = 0;
        end
      end
    else
      disp('Min value needs a numeric, not string!');
      tmpMin = 0;
    end

    if (isnumeric(raw_s{(tmpOutputs(i)+1),Col_Max})) 
      if (~isnan(raw_s{(tmpOutputs(i)+1),Col_Max}))  
        tmpMax = raw_s(tmpOutputs(i)+1,Col_Max);
        tmpMax = tmpMax{1,1};
      else
        disp(['find NaN on Max value of (' tmpVar ')! Using the default value!']);
        
        switch tmpType
            case 'single'
                tmpMax = C_SINGLE_MAX;
            case 'uint8'
                tmpMax = C_UINT8_MAX;
            case 'uint16'
                tmpMax = C_UINT16_MAX; 
            case 'uint32'
                tmpMax = C_UINT32_MAX; 
            case 'boolean'
                tmpMax = C_BOOL_MAX; 
            otherwise
              disp('ERROR! Can not use the default value!');
              tmpMax = 0;
        end
      end
    else
      disp('Max value needs a numeric, not string!');
      tmpMax = 0;
    end     
    if (isempty(Col_Size))
        tmpSize = 1;
    else
        if (isnumeric(raw_s{(tmpOutputs(i)+1),Col_Size})) 
            if (~isnan(raw_s{(tmpOutputs(i)+1),Col_Size}))  
                tmpSize = raw_s(tmpOutputs(i)+1,Col_Size);
                tmpSize = tmpSize{1,1};
            else
                disp(['find NaN on size of (' tmpVar ')! Using the default value!']);
                tmpSize = 1;
            end
        else
            disp('Size value needs a numeric, not string!');
            tmpSize = 1;
        end
    end
    
    tmpCom = char(txt_s(tmpOutputs(i)+1,Col_Description));
    tmpCom = strrep(tmpCom,char(10),''); % 取消 0x0A字元 %
    tmpCom = strrep(tmpCom,char(13),''); % 取消 0x0D字元 %    
    if strcmp(tmpVar(1),'V')
      fprintf(fileID,'a2l_mon(''%s'', \t''%s'', \t%s, \t%s, \t''%s'', \t''%s'',\t%s );\n', tmpVar, tmpUnit, num2str(tmpMin), num2str(tmpMax), tmpType, tmpCom, num2str(tmpSize));      
    end
  end      
end

fprintf(fileID,'\n%% Output Signals %%\n');
tmpNode = txt_s(2:end,Col_Direction); % 選擇 direction column %
tmpOutputs = [];
tmpOutputs = union(tmpOutputs, strmatch('output', lower(tmpNode)));
tmplen = length(tmpOutputs);

if tmplen == 0
  disp(['ZERO output signals for ' saveFileNameVar]);
else    
  for i=1:tmplen
    tmpVar = char(txt_s(tmpOutputs(i)+1,Col_Var));
    tmpUnit = char(txt_s(tmpOutputs(i)+1,Col_Unit));
    tmpType = char(txt_s(tmpOutputs(i)+1,Col_Type));

    if (isnumeric(raw_s{(tmpOutputs(i)+1),Col_Min})) 
      if (~isnan(raw_s{(tmpOutputs(i)+1),Col_Min}))  
        tmpMin = raw_s(tmpOutputs(i)+1,Col_Min);
        tmpMin = tmpMin{1,1};
      else
        disp(['find NaN on Min value of (' tmpVar ')! Using the default value!']);
        
        switch tmpType
            case 'single'
                tmpMin = C_SINGLE_MIN;
            case 'uint8'
                tmpMin = C_UINT8_MIN;
            case 'uint16'
                tmpMin = C_UINT16_MIN; 
            case 'uint32'
                tmpMin = C_UINT32_MIN; 
            case 'boolean'
                tmpMin = C_BOOL_MIN; 
            otherwise
              disp('ERROR! Can not use the default value!');  
              tmpMin = 0;
        end
      end
    else
      disp('Min value needs a numeric, not string!');
      tmpMin = 0;
    end

    if (isnumeric(raw_s{(tmpOutputs(i)+1),Col_Max})) 
      if (~isnan(raw_s{(tmpOutputs(i)+1),Col_Max}))  
        tmpMax = raw_s(tmpOutputs(i)+1,Col_Max);
        tmpMax = tmpMax{1,1};
      else
        disp(['find NaN on Max value of (' tmpVar ')! Using the default value!']);
        
        switch tmpType
            case 'single'
                tmpMax = C_SINGLE_MAX;
            case 'uint8'
                tmpMax = C_UINT8_MAX;
            case 'uint16'
                tmpMax = C_UINT16_MAX; 
            case 'uint32'
                tmpMax = C_UINT32_MAX; 
            case 'boolean'
                tmpMax = C_BOOL_MAX; 
            otherwise
              disp('ERROR! Can not use the default value!');
              tmpMax = 0;
        end
      end
    else
      disp('Max value needs a numeric, not string!');
      tmpMax = 0;
    end     
    
    if (isempty(Col_Size))
        tmpSize = 1;
    else
        if (isnumeric(raw_s{(tmpOutputs(i)+1),Col_Size})) 
            if (~isnan(raw_s{(tmpOutputs(i)+1),Col_Size}))  
                tmpSize = raw_s(tmpOutputs(i)+1,Col_Size);
                tmpSize = tmpSize{1,1};
            else
                disp(['find NaN on size of (' tmpVar ')! Using the default value!']);
                tmpSize = 1;
            end
        else
            disp('Size value needs a numeric, not string!');
            tmpSize = 1;
        end   
    end
    tmpCom = char(txt_s(tmpOutputs(i)+1,Col_Description));
    tmpCom = strrep(tmpCom,char(10),''); % 取消 0x0A字元 %
    tmpCom = strrep(tmpCom,char(13),''); % 取消 0x0D字元 %
    fprintf(fileID,'a2l_mon(''%s'', \t''%s'', \t%s, \t%s, \t''%s'', \t''%s'',\t%s );\n', tmpVar, tmpUnit, num2str(tmpMin), num2str(tmpMax), tmpType, tmpCom, num2str(tmpSize));      
  end      
end

fclose(fileID);

end

%%
% 2016/05/31
% 簡略變動，程式會自己判斷所需值在哪列，而非直接輸入固定數值


