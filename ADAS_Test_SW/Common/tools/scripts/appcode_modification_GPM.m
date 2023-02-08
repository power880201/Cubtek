function appcode_modification_GPM
clc;
disp('$Id: appcode_modification_GPM.m 2 2019-09-19 09:28:50Z JuneXmas $');
%% Change the current path into the path to modify the specific file 
Path_list=regexp(path,';','split')';
match_name=regexpi(Path_list{1},'\w*Dragon\w*','match');
HeadPartPath=strrep(Path_list{1},[match_name{1},'\software\sw_development\arch\Cals\Cal_GPM'],'');
%% Copy the files in the folder called "conti_bsw" to the folder called "nidec_bsw"
cd([HeadPartPath,match_name{1},'\software\sw_development\build\conti_bsw']);
copyfile('appcode',[HeadPartPath,match_name{1},'\software\sw_development\build\nidec_bsw\GPM\ASW_Core1\ASW\appcode']);
%% The specific file modification
cd([HeadPartPath,match_name{1},'\software\sw_development\build\nidec_bsw\GPM\ASW_Core1\ASW\appcode']);
num_file=5;
for num_file_con=1:num_file
filename_matrix={['app_data_const.c'];['app_data_const.h'];['hcu_main_GPM.c'];['app_data_var.c'];['SSDF.c']};
filename=filename_matrix{num_file_con,1};
List=textread(filename,'%s','whitespace','\b\t');
fid=fopen(filename,'w');% Delete the existing content and start overwriting
%% Overwrite the specific files
%---------------------for hcu_main.c and app_data_var.c--------------------------------
Target1='#include "hcu_main_GPM_private.h"';
Target2='#include "hcu_main_GPM_types.h"';
Target3='#include "hcu_main_GPM_types.h"';
Target4='SDF_sfunction_Outputs_wrapper';
Replace8='SDF_Wrapper_Main';
Replace1='#pragma ghs section bss = ".asw_gram_bss_section"';
Replace2='#pragma ghs section data = ".asw_gram_data_section"';
%----------------------------for app_data_const.c--------------------------------------
Replace3='#pragma ghs section bss = ".asw_gram_bss_section_cw"';
Replace4='#pragma ghs section data = ".asw_gram_data_section_cw"';
Replace5='#pragma ghs section rodata = ".asw_calib_time_section"';
Replace6='typedef struct {uint8_T day[11];uint8_T time[8];}asw_cal_time_table_type;';
Replace7='const asw_cal_time_table_type asw_cal_time_table = {__DATE__,__TIME__};';
%-------------------for app_data_const.c and app_data_const.h--------------------------
Target='const ';
Replace='';
%------------------------------------------------------------------------------------
if (strcmp(filename,'app_data_const.c'))||(strcmp(filename,'app_data_const.h'))
    for con=1:length(List)% for app_data_const.c and app_data_const.h
        if isempty(strfind(List{con,1},Target))~=1% find "const "
            List{con,1}=strrep(List{con,1},Target,Replace);% replace "const " into ""
        end 
    end
end
for con=1:length(List)
    if isempty(strfind(List{con,1},Target4))~=1&&...for SSDF.c
        (strcmp(filename,'SSDF.c')==1)
        List{con,1}=strrep(List{con,1},Target4,Replace8);% replace "SDF_sfunction_Outputs_wrapper" into "SDF_Wrapper_Main"
    end
end
%------------------------------------------------------------------------------------
for con=1:length(List)
    if (isempty(strfind(List{con,1},Target1))~=1 && (strcmp(filename,'hcu_main_GPM.c')==1))||...% for hcu_main.c
       (isempty(strfind(List{con,1},Target2))~=1 && (strcmp(filename,'app_data_var.c')==1))% for hcu_main.c and app_data_var.c
        fprintf(fid,'%s\n%s\n%s\n',List{con,1},Replace1,Replace2);% write the new string into the file 
    elseif isempty(strfind(List{con,1},Target3))~=1 &&...for app_data_const.c
            (strcmp(filename,'app_data_const.c')==1)% for app_data_const.c
        fprintf(fid,'%s\n%s\n%s\n%s\n%s\n%s\n\n',...
            List{con,1},Replace3,Replace4,Replace5,Replace6,Replace7);% write the new string into the file
    else
        fprintf(fid,'%s\n',List{con,1});% write the new string into the file 
    end
end
fclose(fid);% close the file identifier
display(['The modification is doing for ',filename]);
end
display('#~~~The modification is done for all specific files.~~~#');
end