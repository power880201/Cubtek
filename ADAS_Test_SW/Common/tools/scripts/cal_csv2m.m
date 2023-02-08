function cal_csv2m
path = dragon_flying('arch');
if ~isempty(path)
    path = strrep(path, '\sw_development\arch', '\calibration\calibration_data');
end

[FileName,PathName] = uigetfile('.csv', 'Select target calibration file',path);
a=fileread([PathName FileName]);
a=strrep(a,',','.');
a=strrep(a,';',',');
fid=fopen([PathName 'caltemp.csv'],'w');
fprintf(fid,'%s',a);
fclose(fid);

%% ----- Read New Calibration Data-----
[num,txt,raw]=xlsread([PathName 'caltemp.csv']);
delete([PathName 'caltemp.csv']);
[row col] = size(raw);
cal_row=1;
saveFileName = 'CalibrationData.m';
for i=1:row
    a =[];
    first_cell = cell2mat(raw(i,1));
    if (strcmp(first_cell,'AXIS_PTS') || strcmp(first_cell,'VALUE') || strcmp(first_cell,'CURVE'))
        signal_name = raw(i-2,2);
        if (strcmp(first_cell,'CURVE'))
            data_raw = raw(i+1,3:end);
        else
            data_raw = raw(i,3:end);
        end
        Cal_name_row(cal_row,:) = signal_name;
        Cal_data_row(cal_row,:) = {data_raw};
        cal_row = cal_row+1;
    end
end

%% ----- write CalibrationData.m -----
n = strfind(PathName,'\calibration\calibration_dat');
if ~isempty(n)
    PathName = [PathName(1:n) 'sw_development\arch\Cals'];
end
Calmfile = uigetdir(PathName, 'seclec cal file to save CalibrationData.m');

saveFileName = 'CalibrationData.m';
calfile = fopen([Calmfile '\' saveFileName],'w');
fprintf(calfile,' %%=========== $Id: cal_csv2m.m 2 2019-09-19 09:28:50Z JuneXmas $  =========\n', datestr(now));
fprintf(calfile,' %%-- $Update Time : %s from %s --\n', datestr(now),FileName);
fprintf(calfile,'disp(''Loading  $Id: cal_csv2m.m 2 2019-09-19 09:28:50Z JuneXmas $'')\n\n',saveFileName, FileName);

for i=1:numel(Cal_name_row)
    fprintf(calfile,'a2l_cal(''%s'',  ', char(Cal_name_row{i}));
    Cal_data = cellfun(@(x) [num2str(x) ','], Cal_data_row{i} ,'UniformOutput', 0);
    Cal_data = sprintf([strtok(cell2mat(Cal_data), 'NaN')]);
    Cal_data = Cal_data(1:end-1);
    if sum(not(cellfun(@isnan,Cal_data_row{i})))>1
        fprintf(calfile,'[%s]);\n', Cal_data);
    else
        fprintf(calfile,'%s);\n', Cal_data);
    end
end
fclose(calfile);
disp('cal_csv2m Done...');
end