%-所需檔案----------------------------------------------------------------%
%Dragon\software\sw_development\arch\hcu_enum_info.txt
%Appcode\ app_def_enum.h
%Appcode\hcu_main_XXX.a2l (model轉出來a2l的名稱)
%\ASW_Core1\PRJ\objs\blank\ asw_core1.map
%\build\nidec_bsw\nidec_a2l\RH850_a2l_part.a2l
%-------------------------------------------------------------------------%
%First version, Data: 2018/09/14, Tina
%Modifed date: 2018/09/28, Tina
%              dragon_start後，可自動讀檔
%-------------------------------------------------------------------------%
function a2l_create

    arch_path = dragon_flying('arch');
    fine_model = dir([arch_path '\hcu_main_*']);
    if ~isempty(fine_model)
        model_list = {fine_model.name};
        modelfilenum = listdlg('ListString', model_list, 'Name', 'Select A Model', ...
        'ListSize', [300 100], 'SelectionMode', 'single', 'CancelString', 'Cancel_Default' );
        if isempty(modelfilenum)
            error('Please selected Model');
        else
            model_name = regexp(model_list{modelfilenum},'\.','split');
            model_name = model_name{1};
            model_short_name = regexp(model_name,'hcu_main_(\w+)','tokens');
            fprintf('The selected Model is: %s\n',model_name);
        end
    else
    end
  
    map_dir = [fileparts(arch_path) '\build\nidec_bsw\' char(model_short_name{1}) '\ASW_Core1\PRJ\objs\blank\'];
    map = fileread([map_dir 'asw_core1.map']);
    MapAddress = regexp(map,'\n*\s([a-fA-F0-9]+)\D\w+\s_([VAMK]\w+)','tokens');
    appcode_dir = [fileparts(arch_path) '\build\conti_bsw\appcode\'];
    ASAP2FileString = fileread([appcode_dir model_name '.a2l']); 

    MAPFileHash = containers.Map;
     for i = 1:length(MapAddress)
         MAPFileHash(MapAddress{i}{2}) = MapAddress{i}{1};
     end     

    addrPrefix = '0000 \/\* @ECU_Address@';
    addrSuffix = '@ \*\/';
    hcu_a2l = regexprep(ASAP2FileString,[addrPrefix '(\w+)' addrSuffix], '${MAPFileHash($1)}');
    
    enum_info = fileread([arch_path '\' 'hcu_enum_info.txt']);
    enum_def = fileread([appcode_dir 'app_def_enum.h']);
    hw_a2l = fileread([fileparts(arch_path) '\build\nidec_bsw\nidec_a2l\' 'RH850_a2l_part.a2l']);
    enuinfo_name = regexp(enum_info, '\n*(\S+)\s+(\S+)','tokens');
    enumdef_name = regexp(enum_def, '#define ', 'split');
    
    vtab = '';
    method = '';
    for i = 1: size(enuinfo_name,2)
        enum_type = enuinfo_name{i}{2};
        if (isempty(strfind(vtab, ['VTAB_FOR_COMPU_METHOD_ENUM_' enum_type])))
            compum_name = enuinfo_name{i}{1};
            enu_loc = strfind(enumdef_name,['ENUM_' enum_type '_']);
            enu_index = find(~cellfun(@isempty,enu_loc));
            enum_table = regexp(enumdef_name(enu_index), ['\n*ENUM_' enum_type '_(\S+)\s+(\d+)'],'tokens');    
            % print VTAB
            vtable='';
            for j = 1 :size(enum_table,2)
                etable = sprintf('%-4s "%s"',enum_table{j}{1}{2}, enum_table{j}{1}{1});
                vtable = sort([vtable; cellstr(etable)]);
            end

            temp_vtab1 = sprintf('\t/begin COMPU_VTAB\n\t\t/* Name of Table          */\tVTAB_FOR_COMPU_METHOD_ENUM_%s\n\t\t/* Long identifier        */\t"%s%s"\n',enum_type, 'VTAB for Enumeration ',enum_type);
            temp_vtab2 = sprintf('\t\t/* Conversion Type        */\tTAB_VERB\n\t\t/* Number of Elements     */\t%d\n',size(enum_table,2));
            temp_vtab3 = sprintf('\t\t/* Table Element          */\t%s\n',vtable{:});
            temp_vtab = sprintf('%s%s%s\t/end COMPU_VTAB\n\r', temp_vtab1, temp_vtab2, temp_vtab3);
            vtab = [vtab temp_vtab];

            %Print enumeration compute method
            temp_method1 = sprintf('\t/begin COMPU_METHOD\n\t\t/* Name of CompuMethod    */\tCOMPU_METHOD_ENUM_%s\n\t\t/* Long identifier        */\t"%s%s"\n',enum_type,'VTAB for Enumeration ',enum_type);
            temp_method2 = sprintf('\t\t/* Conversion Type        */\tTAB_VERB\n\t\t/* Format                 */\t"%%0.2"\n\t\t/* Units                  */\t"enum"\n');
            temp_method3 = sprintf('\t\t/* Conversion Table       */\tCOMPU_TAB_REF VTAB_FOR_COMPU_METHOD_ENUM_%s\n', enum_type);
            temp_method = sprintf('%s%s%s\t/end COMPU_METHOD\n\r', temp_method1, temp_method2, temp_method3);
            method = [method temp_method];
        end
    end

    % Add boolean tyep enumeration
    boolean_cm = ['\t/begin COMPU_METHOD\n',...
            '\t\t/* Name of CompuMethod    */\tCOMPU_METHOD_BOOLEAN_TYPE\n',...
            '\t\t/* Long identifier        */\t"VTAB for Boolean Type"\n',...
            '\t\t/* Conversion Type        */\tTAB_VERB\n',...
            '\t\t/* Format                 */\t"%%6.3"\n',...
            '\t\t/* Units                  */\t"Boolean"\n',...
            '\t\t/* Conversion Table       */\tCOMPU_TAB_REF VTAB_FOR_COMPU_METHOD_BOOLEAN_TYPE\n',...
            '\t/end COMPU_METHOD\n\r'];

    boolean_vtab = ['\t/begin COMPU_VTAB\n',...
            '\t\t/* Name of Table          */\tVTAB_FOR_COMPU_METHOD_BOOLEAN_TYPE\n',...
            '\t\t/* Long identifier        */\t"VTAB for Boolean Type"\n',...
            '\t\t/* Conversion Type        */\tTAB_VERB\n',...
            '\t\t/* Number of Elements     */\t2\n',...
            '\t\t/* Table Element          */\t0 "FALSE"\n',...
            '\t\t/* Table Element          */\t1 "TRUE"\n',...
            '\t/end COMPU_VTAB\n\r'];    

    vtab = [vtab sprintf(boolean_vtab)];
    method = [method sprintf(boolean_cm)];
    
     a2l_sig_pat = ['[A-Z]+_([a-zA-Z0-9]+)_enum\w*\n*'];
     a2l_pairs = regexp(hcu_a2l, a2l_sig_pat, 'tokens');
     tt='';
     aa='';
     for i = 1:size(enuinfo_name,2)
         tt = [tt; enuinfo_name{i}(1)];
     end
     for j = 1:size(a2l_pairs,2)
         aa = [aa; a2l_pairs{j}(1)];
     end
     diff_str = setdiff(unique(aa), tt);
 
     a2lFileHash = containers.Map;
     for i = 1:length(enuinfo_name)
         a2lFileHash(enuinfo_name{i}{1}) = ['ENUM_' enuinfo_name{i}{2}];
     end
     for j= 1:size(diff_str,1)
         a2lFileHash(diff_str{j}) = 'uint8_enum';
     end
     if (size(diff_str,1)>0)
         disp('undefind:');
         disp(diff_str);
     end

     % add by JuneXmas 20191114
     hcu_a2l = regexprep(hcu_a2l, '(hcu_main_GP(K|M)_CM_)', 'COMPU_METHOD_');
     % *************
     
    enum_expr =['([A-Z]+_)([a-zA-Z0-9]+)(_enum\w*\n*',...
        '\s*/**\s+Long Identifier\s+**/\s+\S+\n*',...
        '\s*/**\s+Type\s+**/\s+VALUE\n*',...
        '\s*/**\s+ECU Address\s+**/\s+0x\S+\n*',...
        '\s*/**\s+Record Layout\s+**/\s+Scalar_UBYTE+\n*',...
        '\s*/**\s+Maximum Difference\s+**/\s+0\n*',...
        '\s+/**\s+Conversion Method\s+**/\s+COMPU_METHOD_)(\w+)\n*'];
    enum_expr1 =['([A-Z]+_)([a-zA-Z0-9]+)(_enum\s+',...
        '\/\*\s+Long identifier\s+\*\/\s+\S+\s+',...
        '\/\*\s+Data type\s+\*\/\s+\S+\s+',...
        '\/\*\s+Conversion method\s+\*\/\s+COMPU_METHOD_)(\w+)'];

    newa2lFileString = regexprep(hcu_a2l,enum_expr, '$1$2$3${a2lFileHash($2)}');
    newa2lFileString = regexprep(newa2lFileString,enum_expr1, '$1$2$3${a2lFileHash($2)}');
    newa2lFileString = regexprep(newa2lFileString, '(\/\*\s+Conversion (M|m)ethod\s+\*\/\s+)(COMPU_METHOD_boolean_(flg|flag))', '$1COMPU_METHOD_BOOLEAN_TYPE');
    begin_module = strfind(newa2lFileString, '/begin MOD_PAR');
    end_modcom =regexp(newa2lFileString,'/end MOD_COMMON\r','end');
    end_module = strfind(newa2lFileString, '/end MODULE');

    cd([fileparts(arch_path) '\build\nidec_bsw\nidec_a2l\' ]);
    fid = fopen(['ADAS_' char(model_short_name{1}) '_A2l_' datestr(now,'yyyymmddHHMMSS') '.a2l'], 'w');
    fprintf(fid,'%s',newa2lFileString(1:begin_module-4));
    fprintf(fid,'%s\n\r',hw_a2l);
    fprintf(fid,'%s\n',newa2lFileString(end_modcom+1:end_module-3));
    fprintf(fid,'%s\n\r',method);
    fprintf(fid,'%s\n\r',vtab);
    fprintf(fid,'%s\n',newa2lFileString(end_module-3:end));
    fclose(fid);

    disp('QQ_a2l done...');
end

