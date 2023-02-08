function hal_create_halbus()
%
% 在 hal 中自動產生 HAL bus creator，同時包含訊號名稱及型態轉換 %
% blockName 是在 hal 中所看到的 subsystem name % 
% Block-Specific Parameters %
%
%% 讀取 BHAL_outputs 訊號 %
busName = 'BHAL_outputs';
x = bus_info(evalin('base',busName));
[xrow, xcol] = size(x); % xcol(1)=name, xcol(2)=description, xcol(3)=data type, xcol(4)=unit %

%% 解除鎖定 %
curr_sys = 'hal';
target_subsystem = 'tempBus';
load_system(curr_sys);
set_param(curr_sys , 'Lock', 'off');

%% 檢查block是否已存在，若是，先移除後再新增 %
curr_subsys = [curr_sys,'/',target_subsystem];
answer1 = find_system(curr_sys,'Name',target_subsystem);
[anLen anNone] = size(answer1);
if anLen ~= 0
  delete_block(curr_subsys);  
end

add_block('built-in/SubSystem',curr_subsys) ;

%%
% hal_path = fileparts(mfilename('fullpath'));
% xls_file = [hal_path '\..\..\doc\BlueDragon_Variable Name Mapping.xls' ];
% [num, txt, raw] = xlsread(xls_file, 'INP');
% %txt = sortrows(txt); % 重新 sort 一次，避免有不連續的問題 %
% % excel file 一定要確保每個模組訊號是連續的 %
% [xls_row, xls_col] = size(txt);
% old_block_name = '';
% new_block_name = '';
% pos_left = 10;
% pos_top = 10;
% pos_right = pos_left;
% pos_bottom = pos_top; 
% hal_block_width = 300;
% hal_block_height = 20;
% hal_block_Vertical = 10;
% sub_block_name = '';
% isFirstBlock = 1; % 是否是第1個block, 1:yes, 0:no %
% port_number = 0; % 輸出 port 有幾個，要重新設定 block height %
% hsub = 0;
% for i = 2 : xls_row % 忽略第一 row 的 transmitter, HAL Variables 等資訊 %
%   new_block_name = txt(i,1);
%   if ~strcmp(new_block_name, old_block_name)
%     if isFirstBlock ~= 1
%       [subl,subt,subr,subb] = get_param(hsub,'posistion');
%       subb = port_number * 30;
%       set_param(hsub,'position',[subl,subt,subr,subb]); 
%       
%       pos_top = subb + blockVertical;
%       pos_bottom = pos_top;  
%     end
%     
%     if ~isempty(strfind(upper(new_block_name),'HARDWARE')) % 找到 hardware input 內容 %
%       add_block('built-in/subsystem',[curr_subsys '/' 'HAL_IN_HWIO'],'position',[pos_left, pos_top, pos_right+hal_block_width, pos_bottom+hal_block_height]);
%       sub_block_name = [curr_subsys '/' 'HAL_IN_HWIO'];  
%       
%       pos_top = pos_top + hal_block_height + blockVertical;
%       pos_bottom = pos_top;        
%     elseif ~isempty(strfind(upper(new_block_name),'HCU')) % 找到 HCU low level SW 內容 %
%       add_block('built-in/subsystem',[curr_subsys '/' 'HAL_IN_LLSW'],'position',[pos_left, pos_top, pos_right+hal_block_width, pos_bottom+hal_block_height]);
%       sub_block_name = [curr_subsys '/' 'HAL_IN_LLSW'];    
% 
%       pos_top = pos_top + hal_block_height + blockVertical;
%       pos_bottom = pos_top;      
%     end
%   else % 設定每個 module 的輸出訊號，hardware 及 llsw 要直接設定 input block %
%       
%   end
% end

%% 創建 bus creator %
buspos_offset = 500;

xLeft = buspos_offset + 1000; % 從10開始才會對齊 %
yTop = 23;  
xRight = xLeft; % 初始設定值 %
yBottom = yTop; % 初始設定值 %
blockWidth = 5;
blockHight = xrow*30; % 30是訊號間隔的距離 %

busname = 'halbus';
h = add_block('built-in/buscreator',[curr_subsys '/' busname],'position',[xLeft, yTop, xRight+blockWidth, yBottom+blockHight]);
set_param(h,'showname','off','inputs',num2str(xrow),'usebusobject','on','busobject',busName);

%% 創建 goto, from block and data type converstion block %
xLeft = buspos_offset + 100;
yTop = 30;  
xRight = xLeft; % 初始設定值 %
yBottom = yTop; % 初始設定值 %
blockFromWidth = 200;
blockFromHight = 20;
blockVertical = 10; % 10是block的間隔距離 %
blockHorizontal = 100;
blockCvtWidth = 50;
blockCvtHight = 20;

for i = 1 : xrow
  % goto block %
  hgo = add_block('built-in/goto',[curr_subsys, '/', [char(x(i,2)) 'Go']],'position',[xLeft, yTop, xRight+blockFromWidth, yBottom+blockFromHight]);
  set_param(hgo,'showname','off', 'GotoTag',char(x(i,1)));    
  
  % from block %
  xfLeft = xLeft + blockFromWidth + blockHorizontal;
  xfRight = xfLeft;  
    
  ha = add_block('built-in/from',[curr_subsys, '/', [char(x(i,2)) 'F']],'position',[xfLeft, yTop, xfRight+blockFromWidth, yBottom+blockFromHight]);
  set_param(ha,'showname','off', 'GotoTag',char(x(i,1)));
  
  % data conversion block %
  xbLeft = xfLeft + blockFromWidth + blockHorizontal;
  xbRight = xbLeft;
  
  hb = add_block('built-in/DataTypeConversion',[curr_subsys, '/', char(x(i,2)), 'Cvt'],'position',[xbLeft, yTop, xbRight+blockCvtWidth, yBottom+blockCvtHight]);
  set_param(hb,'showname','off', 'OutDataTypeStr',char(x(i,3)));  
  
  yTop = yTop + blockFromHight + blockVertical;
  yBottom = yTop;  
  
  % add line and set the property %
  add_line(curr_subsys,[char(x(i,2)) 'F/1'],[char(x(i,2)), 'Cvt','/1']); % from block to convertion block %
  hl = add_line(curr_subsys,[char(x(i,2)), 'Cvt','/1'], [busname, '/', num2str(i)]); % convertion block to bus creator %
  set_param(hl,'name',char(x(i,1)));

  hObject = get(hl, 'object');
  set(hObject, 'MustResolveToSignalObject', 1);
end

%% 恢復鎖定 %
set_param(curr_sys , 'Lock', 'on');

close_system(curr_sys,1);
disp('OK');
disp('Need to add output port, trigger block, interface block and set property of blocks individually by manual!');
end
