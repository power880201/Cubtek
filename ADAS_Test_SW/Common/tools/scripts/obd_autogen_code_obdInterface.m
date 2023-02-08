function obd_autogen_code_obdInterface(faultListFileName)
%obd_autogen_code_freezeFrame
% to generate obd_ddm_ff.c, obd_types_ff.h in current folder. 
% input is the excel file that including the snapshot definition
% issues for the format of the excel spreadsheet, contact jay.wu@ricardo
if nargin<1
faultListFileName='..\..\arch\Red Dragon Fault List demo.xls';
end

%% get fault list
[a,b,c]=xlsread(faultListFileName,'Export to csv');
num=size(c,1)-1;
while isnan(c{num+1,1})
    num=num-1;
end
faultList=c(2:end,:);
clear c;

%% header
cfile='obd_interface.c';
cFileHeader=obd_autogen_global_header(cfile);
%% include
fileList={'obd_comm.h';'obd_interface.h';'obd_service.h';'obd_ddm.h';'obd_interface_in.h'};
cFileInclude=obd_autogen_include(fileList);
%% declare
%none
cFileDeclare='';
%% timeMark
timeMark=autogen_timeMark(faultListFileName);
%%
cFile_1=create_ddm_run(faultList);
cFile_2=create_ddm_start;
cFile_3=create_ddm_stop;

%% generate c file
disp(['gen ' cfile '...']);
fileID=fopen(cfile,'w');
fprintf(fileID,'%s%s%s%s%s%s%s',cFileHeader,cFileInclude,cFileDeclare,timeMark, cFile_1, cFile_2, cFile_3);
fclose(fileID);
msg=sprintf('================%s ok',cfile);
disp(msg);
end

%%


%%
function out=create_ddm_run(in)
x0=createFunctionRemark('obd_ddm_run',...
    'update fault structure based on diagnostic variables',...
    'None',...
    'None',...
    'called in glue code by 5ms');
x1=lineJoin('void obd_ddm_run(void)',...
    '{',...
    'if (obd_initialised && VINP_IgnitionActive_flg)',...
    '{',...
    '');

for i=1:size(in,1)
    faultEn=in{i,4};
    faultVar=in{i,22};
    faultIndex=sprintf('DTC_%s',in{i,2});
    
    temp2=sprintf('\tobd_update_diagnostics(%s%s,%s);\n',faultIndex,blanks(40-length(faultIndex)),faultVar);
    if isempty(faultEn)
        temp=temp2;
    else
        temp1=sprintf('if(0==(%s))',faultEn);
        temp=sprintf('%s\n{\n%s}\n',temp1,temp2);
    end
    x1=[x1 temp];
end
x2=sprintf('}\n}\n');
out=[x0 x1 x2];

end
%%
function out=create_ddm_start
x0=createFunctionRemark('obd_ddm_start',...
    'special requirement to do during up',...
    'None',...
    'None',...
    'called in glue code in system up function');
x1=lineJoin('void obd_ddm_start(void)',...
    '{',...
    'if (obd_initialised)',...
    '{',...
    '}',...
    '}');
out=[x0 x1];
end
%%
function out=create_ddm_stop
x0=createFunctionRemark('obd_ddm_stop',...
    'special requirement to do during down',...
    'None',...
    'None',...
    'called in glue code in system down function');
x1=lineJoin('void obd_ddm_stop(void)',...
    '{',...
    'if (obd_initialised)',...
    '{',...
    '}',...
    '}');
out=[x0 x1];
end
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out=lineJoin(varargin)
out=sprintf('%s\n',varargin{:});
out(end)=[];
end
%%
function out=createFunctionRemark(name,purpose,parameters,returns,desc)
x1=sprintf('\n/*****************************************************************************\n');
x2=sprintf('*Function: %s\n*\n',name);
x3=sprintf('*Purpose: %s\n*\n',purpose);
x4=sprintf('*Parameters: %s\n*\n',parameters);
x5=sprintf('*Returns: %s\n*\n',returns);
x6=sprintf('*Description: %s\n',desc);
x7=sprintf('*****************************************************************************/\n');
out=[x1 x2 x3 x4 x5 x6 x7];
end

function out=obd_autogen_include(fileList)
%generate include file line with filelist input
%eg:
% fileList={'obd_comm.h';'obd_interface.h';'obd_service.h';'obd_ddm.h'}
% ...
% #include "obd_comm.h"
% #include "obd_interface.h"
% #include "obd_service.h"
% #include "obd_ddm.h"
if nargin<1
    eval(['help ' mfilename]);
    return;
end

if ~iscell(fileList)
    fileList={fileList};
end
out=sprintf('#include "%s"\n',fileList{:});
end

function out=obd_autogen_global_header(fileName,version,Author)
%generate standard Ricardo header of file(not header file, .h)
%eg:
% /************************************************************
% *
% *The module is for Blue Dragon OBD
% *
% *Copyright (c) Ricardo plc 2012- All rights reserved
% *
% *File:               obd_xxx.c
% *Author:             Jay Wu
% *Date:               11-Oct-2012 11:39:15
% *Version:            1.0
% ************************************************************/
if nargin<3
    Author='Jay Wu';
end

if nargin<2
    version='1.0';
end

if nargin<1
    fileName='obd_xxx.c';
end
sep=repmat('*',1,60);
x={...
    'The module is for Dragon OBD';...
    'Copyright (c) Ricardo plc 2012- All rights reserved';...
    'File:';...
    'Author:';...
    'Date:';...
    'Version:'};
out=sprintf('/%s\n*\n*%s\n*\n*%s\n*\n*%s%s%s\n*%s%s%s\n*%s%s%s\n*%s%s%s\n%s/\n',sep,x{1},x{2},...
    x{3},blanks(20-length(x{3})),fileName,...
    x{4},blanks(20-length(x{4})),Author,...
    x{5},blanks(20-length(x{5})),datestr(now()),...
    x{6},blanks(20-length(x{6})),version,...
    sep);
   
end

function out=autogen_timeMark(fileName)
%out=autogen_timeMark(fileName)
% generate remark based on time mark
% e.g
% /*************auto-generated*************/
% /*************Source: None*************/
% /*************Modified: 11-Oct-2012 11:45:19*************/
% /*************Generated: 11-Oct-2012 11:45:19**************/
if nargin==1
    fileInfo=dir(fileName);
    timestr=fileInfo.datenum;
else
    fileName='None';
    timestr=now();
end

sep=repmat('*',1,13);
x1=sprintf('\n/%sauto-generated%s/\n',sep,sep);
x2=sprintf('/%sSource: %s%s/\n',sep,fileName,sep);
x3=sprintf('/%sModified: %s%s/\n',sep,datestr(timestr),sep);
x4=sprintf('/%sGenerated: %s%s*/\n',sep,datestr(now()),sep);
out=[x1 x2 x3 x4];
end