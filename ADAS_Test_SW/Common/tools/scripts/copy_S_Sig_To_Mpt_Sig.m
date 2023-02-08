function [ms] = copy_S_Sig_To_Mpt_Sig(ss, hFileNm, cFileNm)
    flag = 0;
    if ( strcmp(cFileNm, 'none') )
        flag = 1;               
    end
    
    ms = mpt.Signal;
    ms.DataType = ss.DataType; 
    ms.InitialValue = ss.InitialValue;
    ms.Min = ss.Min;
    ms.Max = ss.Max;
    ms.DocUnits = ss.DocUnits;
    ms.Dimensions = ss.Dimensions;
    ms.Complexity = ss.Complexity;    
    ms.SampleTime = ss.SampleTime;
    ms.SamplingMode = ss.SamplingMode;  
    ms.Description = ss.Description;    
    
    if flag == 0    
        if nargin < 3, cFileNm = 'app_data_var.c'; end;        
        if nargin < 2, hFileNm = 'app_data_var.h'; end;
    
        ms.RTWInfo.StorageClass = 'Custom';
        ms.RTWInfo.CustomStorageClass = 'ExportToFile';
    
        ms.RTWInfo.CustomAttributes.HeaderFile = hFileNm;
        ms.RTWInfo.CustomAttributes.DefinitionFile = cFileNm;
    else 
        if nargin < 2, hFileNm = '../diag/obd_interface_in.h'; end;
        
        ms.RTWInfo.StorageClass = 'Custom';
        ms.RTWInfo.CustomStorageClass = 'ImportFromFile';
    
        ms.RTWInfo.CustomAttributes.DataAccess = 'Direct';  
        ms.RTWInfo.CustomAttributes.HeaderFile = hFileNm;            
    end
end