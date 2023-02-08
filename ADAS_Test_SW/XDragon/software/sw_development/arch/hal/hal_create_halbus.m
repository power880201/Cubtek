function hal_create_halbus()
%
% �b hal ���۰ʲ��� HAL bus creator�A�P�ɥ]�t�T���W�٤Ϋ��A�ഫ %
% blockName �O�b hal ���Ҭݨ쪺 subsystem name % 
% Block-Specific Parameters %
%
%% Ū�� BHAL_outputs �T�� %
busName = 'BHAL_outputs';
x = bus_info(evalin('base',busName));
[xrow, xcol] = size(x); % xcol(1)=name, xcol(2)=description, xcol(3)=data type, xcol(4)=unit %

%% �Ѱ���w %
curr_sys = 'hal';
target_subsystem = 'tempBus';
load_system(curr_sys);
set_param(curr_sys , 'Lock', 'off');

%% �ˬdblock�O�_�w�s�b�A�Y�O�A��������A�s�W %
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
% %txt = sortrows(txt); % ���s sort �@���A�קK�����s�򪺰��D %
% % excel file �@�w�n�T�O�C�ӼҲհT���O�s�� %
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
% isFirstBlock = 1; % �O�_�O��1��block, 1:yes, 0:no %
% port_number = 0; % ��X port ���X�ӡA�n���s�]�w block height %
% hsub = 0;
% for i = 2 : xls_row % �����Ĥ@ row �� transmitter, HAL Variables ����T %
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
%     if ~isempty(strfind(upper(new_block_name),'HARDWARE')) % ��� hardware input ���e %
%       add_block('built-in/subsystem',[curr_subsys '/' 'HAL_IN_HWIO'],'position',[pos_left, pos_top, pos_right+hal_block_width, pos_bottom+hal_block_height]);
%       sub_block_name = [curr_subsys '/' 'HAL_IN_HWIO'];  
%       
%       pos_top = pos_top + hal_block_height + blockVertical;
%       pos_bottom = pos_top;        
%     elseif ~isempty(strfind(upper(new_block_name),'HCU')) % ��� HCU low level SW ���e %
%       add_block('built-in/subsystem',[curr_subsys '/' 'HAL_IN_LLSW'],'position',[pos_left, pos_top, pos_right+hal_block_width, pos_bottom+hal_block_height]);
%       sub_block_name = [curr_subsys '/' 'HAL_IN_LLSW'];    
% 
%       pos_top = pos_top + hal_block_height + blockVertical;
%       pos_bottom = pos_top;      
%     end
%   else % �]�w�C�� module ����X�T���Ahardware �� llsw �n�����]�w input block %
%       
%   end
% end

%% �Ы� bus creator %
buspos_offset = 500;

xLeft = buspos_offset + 1000; % �q10�}�l�~�|��� %
yTop = 23;  
xRight = xLeft; % ��l�]�w�� %
yBottom = yTop; % ��l�]�w�� %
blockWidth = 5;
blockHight = xrow*30; % 30�O�T�����j���Z�� %

busname = 'halbus';
h = add_block('built-in/buscreator',[curr_subsys '/' busname],'position',[xLeft, yTop, xRight+blockWidth, yBottom+blockHight]);
set_param(h,'showname','off','inputs',num2str(xrow),'usebusobject','on','busobject',busName);

%% �Ы� goto, from block and data type converstion block %
xLeft = buspos_offset + 100;
yTop = 30;  
xRight = xLeft; % ��l�]�w�� %
yBottom = yTop; % ��l�]�w�� %
blockFromWidth = 200;
blockFromHight = 20;
blockVertical = 10; % 10�Oblock�����j�Z�� %
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

%% ��_��w %
set_param(curr_sys , 'Lock', 'on');

close_system(curr_sys,1);
disp('OK');
disp('Need to add output port, trigger block, interface block and set property of blocks individually by manual!');
end
