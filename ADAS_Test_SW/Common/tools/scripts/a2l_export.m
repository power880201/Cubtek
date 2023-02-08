function a2l_export(sys)

excel_template = which(mfilename);
excel_template = strrep(excel_template, '.m', '.xls');

dest_file = [tempname '.xls'];
copyfile(excel_template, dest_file);

%%
c_all = evalin('base', sprintf('who(''[AKM]%s_\\w+'', ''-regexp'')', upper(sys)));
c_cells = cell(length(c_all), 9);
for i=1:length(c_all)
	v = evalin('base', c_all{i});
	c_cells{i,1} = c_all{i};
	c_cells{i,2} = 'Internal';
	c_cells{i,3} = v.DataType;
	c_cells{i,4} = v.Min;
	c_cells{i,5} = v.Max;
	c_cells{i,6} = v.DocUnit;
	c_cells{i,7} = 'N/A';
	c_cells{i,8} = mat2str(v.Value);
	c_cells{i,9} = v.Description;
end

% Signal/Calibration Name	Direction	Data Type	Min	Max	Units	Enum Table	Default during Running	Description
xlswrite(dest_file, c_cells, 'Calibrations', 'A2');

%%
v_all = evalin('base', sprintf('who(''V%s_\\w+'', ''-regexp'')', upper(sys)));
v_cells = cell(length(v_all), 10);
for i=1:length(v_all)
	v = evalin('base', v_all{i});
	v_cells{i,1} = v_all{i};
	v_cells{i,2} = 'Internal';
	v_cells{i,3} = v.DataType;
	v_cells{i,4} = v.Min;
	v_cells{i,5} = v.Max;
	v_cells{i,6} = v.DocUnit;
	v_cells{i,7} = 'N/A';
	v_cells{i,8} = '';
	v_cells{i,9} = '';
	v_cells{i,10} = v.Description;
end

% Signal/Calibration Name	Direction	Data Type	Min	Max	Units	Enum Table	Default before and during POWER-UP	Default value during POWER-DOWN	Description
xlswrite(dest_file, v_cells, 'Signals', 'A2');

%%
system(dest_file);

