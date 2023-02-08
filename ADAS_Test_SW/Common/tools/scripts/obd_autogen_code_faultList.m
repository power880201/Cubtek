function obd_autogen_code_faultList(faultListFileName)
% this is to create the auto gen code for dragon obd.
% the marker in the oringal .h .c shall not be changed or moved
if nargin<1
    faultListFileName='..\..\arch\Red Dragon Fault List demo.xls';
end


%% global def
mark1='/*****************************start********************************/';
mark2='/*****************************end********************************/';

% fault list file
fileInfo=dir(faultListFileName);
[a,b,c]=xlsread(faultListFileName,'Export to csv');
num=size(c,1)-1;
while isnan(c{num+1,1})
    num=num-1;
end
faultList=c(2:num+1,2)';


%%
%remarks
x1=sprintf('\n/************auto-generated*************/\n');
x2=sprintf('/************Source: %s*************/\n',faultListFileName);
x3=sprintf('/************Modified: %s*************/\n',datestr(fileInfo.datenum));
x4=sprintf('/************Generated: %s*************/\n\n',datestr(now()));
remark=[x1 x2 x3 x4];

%% obd_config1.h
cfile='obd_config_1.h';
%*****start of DTC index *************
data=[remark];
prefix1='#define DTC_';
for i=1:length(faultList)
    x7=sprintf('%s%s%s(%dU)\n',prefix1,faultList{i}, blanks(40-length(faultList{i})),i-1);
    data=[data x7];
end
%*********end of DTC index **********

prefix1='#define OBD_MAX_NO_FAULT';
x9=sprintf('%s%s(%dU)\n',prefix1, blanks(40-length(faultList{i})),i);
data=[data x9];

disp(['gen ' cfile '...']);
[tmp1,msg]=obd_autogen_fileReplace(cfile,data,mark1,mark2);
disp(msg);

%% obd_config_2.h

cfile='obd_config_2.h';%---------------------------------------------------------------- to change
data=[remark];

%**************start of obd_xxx_array elements***********************/\n');
prefix1='extern const OBD_CONST_STRUCT_T  KDDM_';
prefix2='extern       OBD_DIAG_STRUCT_T   VDDM_';
for i=1:length(faultList)
    x2=sprintf('%s%s;\n',prefix1,faultList{i});
    x3=sprintf('%s%s;\n',prefix2,faultList{i});
    data=[data x2 x3];
end
%************end of obd_xxx_array elements***********************/\n\n');


disp(['gen ' cfile '...']);
[temp1,msg]=obd_autogen_fileReplace(cfile,data,mark1,mark2);
disp(msg);
%% obd_data_nvm.c
cfile='obd_data_nvm.c';%---------------------------------------------------------------- to change
data=[remark];

prefix1='OBD_DIAG_STRUCT_T  VDDM_';
for i=1:length(faultList)
    x1=sprintf('%s%s;\n',prefix1,faultList{i});
    data=[data x1];
end

disp(['gen ' cfile '...']);
[temp1,msg]=obd_autogen_fileReplace(cfile,data,mark1,mark2);
disp(msg);

%% obd_data_const.c
cfile='obd_data_const.c';%---------------------------------------------------------------- to change
data=[remark];

%***************start of obd_const_array elements*****************
prefix1='const OBD_CONST_STRUCT_T  KDDM_';
for i=1:length(faultList)
    x1=sprintf('%s%s%s={%3dU,%3dU,%3dU,%3dU,%3dU,%3dU,%3dU,%3dU,%18s,%6sU,%3dU,%5s,%5s,%5s,%3dU,%15s,%1dU};\n',prefix1,c{i+1,2},blanks(35-length(faultList{i})),c{i+1,5},c{i+1,6},c{i+1,7},c{i+1,8},c{i+1,9},c{i+1,10},c{i+1,11},c{i+1,12},c{i+1,14},c{i+1,13},c{i+1,15},tobool(c{i+1,16}),tobool(c{i+1,17}),tobool(c{i+1,18}),c{i+1,20},c{i+1,19},0);
    data=[data x1];
end
%***************end of obd_const_array elements********************



% const output
x2=sprintf('const OBD_CONST_STRUCT_T * const obd_const_array[OBD_MAX_NO_FAULT] =\n{\n');
data=[data x2];
%*************start of obd_diag_array***************
prefix1='(OBD_CONST_STRUCT_T *) &KDDM_';
for i=1:length(faultList)-1
    x3=sprintf('%s%s,\n',prefix1,faultList{i});
    data=[data x3];
end
x4=sprintf('%s%s\n};\n',prefix1,faultList{length(faultList)});
data=[data x4];
%*************end of obd_diag_array***************

% var output
x7=sprintf('OBD_DIAG_STRUCT_T * const obd_diag_array[OBD_MAX_NO_FAULT] =\n{\n');
data=[data x7];

prefix1='(OBD_DIAG_STRUCT_T *) &VDDM_';
for i=1:length(faultList)-1
    x5=sprintf('%s%s,\n',prefix1,faultList{i});
    data=[data x5];
end
x6=sprintf('%s%s\n};\n',prefix1,faultList{length(faultList)});
data=[data x6];

disp(['gen ' cfile '...']);
[temp1,msg]=obd_autogen_fileReplace(cfile,data,mark1,mark2);
disp(msg);
end


%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function out=tobool(in)

if isequal(in,1)
    out='TRUE';
elseif isequal(in,0)
    out='FALSE';
else
    out=in;
end


end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out=preComplieMark(in)
out.header='';
out.footer='';
[temp1,temp2,c]=fileparts(in);
if ~strcmpi(c,'.h')
    return;
end
name=['_' strrep(upper(in),'.','_') '_'];
out.header=sprintf('\n#ifndef %s\n#define %s\n\n',name,name);
out.footer=sprintf('\n#endif\n');
end
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [out msg]=obd_autogen_fileReplace(cfile,str,mark1,mark2)
%[out msg]=fileReplace(cfile,str,mark1,mark2)
%     replace content in mark1 and mark2 with str
%     return value:
%     out=0; ok
%     out=2;no mark1 found
%     out=1;no mark2 found
if nargin<4
    eval(['help ' mfilename]);
    return;
end

fid=fopen(cfile,'r');
data=[];
try
    %-------------------------------------
    hitMark1=0;
    hitMark2=0;
    hitEnd=0;
    while ~hitMark1 && ~hitEnd
        currentLine=fgetl(fid);

        hitEnd=~ischar(currentLine);
        if ~hitEnd
            hitMark1=strcmp(strtrim(currentLine),mark1);
        end
        data=[data;{currentLine}];
    end
    %--------------------------------------
    data=[data;str;mark2];

    %-------------------------------------

    while hitMark1 && ~hitMark2 && ~hitEnd
        currentLine=fgetl(fid);
        hitEnd=~ischar(currentLine);
        if ~hitEnd
            hitMark2=strcmp(strtrim(currentLine),mark2);
        end

    end

    %-------------------------------------
    while hitMark1 && hitMark2 && ~hitEnd
        currentLine=fgetl(fid);

        hitEnd=~ischar(currentLine);
        if ~hitEnd
            data=[data;{currentLine}];
        end
    end
    fclose(fid);

    if hitMark1 && hitMark2 && hitEnd
        %back up current file
        newName=sprintf('%s_%sbak',cfile,datestr(now,'yyyymmdd_HH_MM_SS_'));
        eval(sprintf('!copy "%s" "%s"',cfile,newName));
        fid=fopen(cfile,'w');
        fprintf(fid, '%s\n', data{:});
        fclose(fid);
        out=0;
        msg=sprintf('================%s ok',cfile);
    else
        out=~hitMark1+~hitMark2;
        if ~hitMark1
            msg=sprintf('================cannot find %s in file: %s',mark1,cfile);
        else
            msg=sprintf('================cannot find %s in file: %s',mark2,cfile);
        end
    end

catch
    fclose(fid);
    warning('error to replace');
end
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%