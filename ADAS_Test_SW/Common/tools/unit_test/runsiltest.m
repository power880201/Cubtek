function runsiltest(xlsfile,model,resfile,verbose_flag)
% RUNSILTEST(XLSFILE,MODEL,RESFILE,VERBOSE_FLAG)
%
% Read the tests from an Excel spreadsheet, run them on the model
% and then generate a test report.
%
% Arguments:
%
% xlsfile:	Excel file containing test spreadsheets.           [Required]
% model:	The Simulink model that the tests will be run on.  [Required]
% resfile:	The output file containing the test report.        [Optional]
% verbose_flag: If 1 then print additional info messages.      [Optional]
%
% Note: The xlsfile input can contain the sheet delimiter character '#' to
%       just run particular sheets in the file. 
%
%       For example:
%           runsiltest('testfile001',... 
%         will run all the tests in testfile001 
%       Whereas:
%           runsiltest('testfile001#t001#t006#t009',... 
%         will only run tests t001, t006 and t009 
% 
% $Id: runsiltest.m 2 2019-09-19 09:28:50Z JuneXmas $
%

version=1.0;
funcname='runsiltest';

sheets_to_run=[];

if nargin < 2
	fprintf(['The arguments ''xlsfile'' and ''model'' are required. ' ...
		'Type "help ' funcname '" for more info.\n']);
    return;
elseif nargin > 4
	fprintf(['\nToo many input arguments. ' ...
		'Type "help ' funcname '" for more info.\n']);
    return;
else
	sheet_delims = findstr(xlsfile,'#');
	if ~isempty(sheet_delims)
        lastend=length(xlsfile);
        nsheet=1;
        for i=length(sheet_delims):-1:1
            sheetname=xlsfile(sheet_delims(i)+1:lastend);
            lastend=sheet_delims(i)-1;
            sheets_to_run{nsheet}=sheetname;
            nsheet=nsheet+1;
            % fprintf('**** Run sheet "%s"\n',sheetname);
        end
        sheets_to_run=fliplr(sheets_to_run);
        xlsfile = xlsfile(1:sheet_delims(1)-1);
	end
    
    if nargin < 4
        verbose_flag = 0;
    end
    if nargin < 3
		[pathstr,name,ext] = fileparts(xlsfile);
		resfile = [pwd '\' name '_results.xls'];
    end
end

global run_verbose;
run_verbose = verbose_flag; 

if run_verbose
	fprintf('%s version %g\n',funcname,version);
end

[test_struct,readfailed] = read_xls_sheets(xlsfile);
if readfailed
    return;
elseif isempty(test_struct)
    fprintf('ERROR: Failed to read any test data from the xlsfile.\n');
    return;
end

sheetnames = fields(test_struct);

if ~isempty(sheets_to_run)
    % sheet delimeters where set in the xlsfile argument so 
    % restrict the tests to the named sheets.
	for i=1:length(sheetnames)
        runsheet=0;
        for k=1:length(sheets_to_run)
            if strcmp(sheets_to_run{k},sheetnames{i})
                runsheet=1;
                break;
            end
        end
        if ~runsheet
            test_struct=rmfield(test_struct,sheetnames{i});
        end
	end
	sheetnames = fields(test_struct);
end

if run_verbose
	fprintf('Parsing test input data...\n');
end

% Read the data from each sheet into a test structure.
for i=1:length(sheetnames)
    sheetdata=getfield(test_struct,sheetnames{i},'sheetdata');
	[input_struct,test_header_rows,failed]=create_test_structure(sheetdata);
    if failed
        return;
    end
    test_struct=setfield(test_struct,sheetnames{i},'input_struct',input_struct);
    test_struct=setfield(test_struct,sheetnames{i},'test_header_rows',test_header_rows);
end

% Run each test structure on the model.
for i=1:length(sheetnames)
    [p f x]=fileparts(xlsfile);
	fprintf('Running %s/%s\n',f,sheetnames{i});
    input_struct=getfield(test_struct,sheetnames{i},'input_struct');
    input_struct.xlsfile = xlsfile;
    input_struct.sheetname = sheetnames{i};
    input_struct.sheetnum = i;
	[result_struct,failed_to_run] = run_test_on_model(model,input_struct);
    if failed_to_run
        return;
    end
    test_struct=setfield(test_struct,sheetnames{i},'result_struct',result_struct);
end

if run_verbose
    fprintf('Generating test results...');
end

assignin('base','test_struct',test_struct);

[summary_sheet_struct,test_struct] = create_test_report(test_struct,model,xlsfile);
result_summary = summary_sheet_struct.rowdata{6};
[path,fname,ext]=fileparts(xlsfile);
if run_verbose
    fprintf('Done.\n');
end

fprintf('Summary for %s: %s',fname,result_summary{end});

[written,resfile] = print_test_report(test_struct,summary_sheet_struct,resfile,xlsfile);
if written
    [fpath, f, x]=fileparts(resfile);
	hyperlink = sprintf('<a href="matlab:system(''start %s'');">%s%s</a>', resfile, f, x);
    fprintf('  (Results have been written to %s)\n',hyperlink);
else
    fprintf('  (Failed to write a results file)\n');
end

% *** DEBUG ONLY ***
% assignin('base','test_struct',test_struct);

%============================================================================= 
% function [written,resfile] = print_test_report(test_struct,summary_sheet_struct,resfile,xlsfile)
% 
% Generate a test report from the test results.
%============================================================================= 
function [written,resfile] = print_test_report(test_struct,summary_sheet_struct,resfile,xlsfile)

    written=1;
	[pathstr,name,ext] = fileparts(resfile);
	if isempty(ext)
		resfile = [resfile '.xls'];
	end
	if isempty(pathstr)
		resfile = [pwd '\' resfile];
	end
    
	Excel = actxserver('Excel.Application');
	Excel.Visible = 0; 
	try
        set(Excel, 'DisplayAlerts', 0);
		FileArchive = invoke(Excel.Workbooks, 'Add');
        invoke(FileArchive, 'SaveAs', resfile);
        set(Excel, 'DisplayAlerts', 1);
	catch
		invoke(Excel, 'quit'); 
		delete(Excel);
        written=0;
        return;
	end

	if ~isempty(test_struct) && isstruct(test_struct)

		Sheets = Excel.ActiveWorkBook.Sheets;
		nSheetsAvailable = Sheets.Count;

		ddfields = fields(test_struct);
        nSheetsRequired = length(ddfields) + 1; % test results plus a summary sheet.
        
        if nSheetsRequired < nSheetsAvailable % Need to delete some sheets.
            
            while nSheetsRequired < nSheetsAvailable
                % select the last sheet and delete it.
				eLastSheet = Sheets.Item(nSheetsAvailable);
                Excel.DisplayAlerts = 0;
                eLastSheet.Delete;
                Excel.DisplayAlerts = 1;
                nSheetsAvailable = nSheetsAvailable - 1;
            end
            
        elseif nSheetsRequired > nSheetsAvailable % Need to add some sheets.
            
			eLastSheet = Sheets.Item(nSheetsAvailable);
            for i = nSheetsAvailable+1:nSheetsRequired
				eLastSheet = Sheets.Add([], eLastSheet);
			end
            
        end

		% Activate the first sheet and call a function to create a summary report.
		target_sheet = Sheets.Item(1);
		target_sheet.Activate;
        Activesheet = Excel.Activesheet;
        
        % Write a summary to the spreadsheet.
        create_test_summary_sheet(Activesheet,summary_sheet_struct,test_struct);
        
		% Write the test result sheets.
		for i = 1:length(ddfields)
			target_sheet = Sheets.Item(i+1);
			target_sheet.Activate;
			Activesheet = Excel.Activesheet;
			create_test_result_sheet(Activesheet,ddfields{i},getfield(test_struct,ddfields{i}));
		end
		% Activate the First sheet before saving.
		eFirstSheet = Sheets.Item(1);
		eFirstSheet.Activate;
	end
	invoke(FileArchive,'save');
	invoke(Excel, 'quit'); 
	release(FileArchive); 
	delete(Excel);
	return;
    
%============================================================================= 
% function [passed] = check_within_tolerance(expval,actval)
%============================================================================= 
function [passed] = check_within_tolerance(expval,actval)
    % Set the tolerance to 0.01% of the expected value.
    % Considering the expect value is zero.
    passed = (abs(expval - actval) <= (abs(expval)*0.0001))|((abs(expval - actval) <= 1e-4)&(expval == 0));
    return;

%============================================================================= 
% function [summary_sheet_struct,test_struct] = create_test_report(test_struct,model,xlsfile)
%============================================================================= 
function [summary_sheet_struct,test_struct] = create_test_report(test_struct,model,xlsfile)

	% couple of blank lines.
	rowdata{1}={''};
    rowdata{2}={''};
	rowdata{3}={'','Model Name',model};
    [p f x]=fileparts(xlsfile);
	rowdata{4}={'','XLS Input File',f};
    nowtime=now;
	rowdata{5}={'','Test Executed At', [datestr(nowtime,'HH:MM:SS') ' on ' datestr(nowtime,'dd-mmm-yyyy')]};
    % row 6 is a placeholder for the test summary.
    rowdata{7}={''};
    irow=8;

	testnames = fields(test_struct);
    ntests = length(testnames);
    ntests_failed = 0;
    
    for i=1:ntests
        
        result_struct = getfield(test_struct, testnames{i}, 'result_struct');
        timesteps = result_struct.t;
        ntimesteps = length(timesteps);
        
        nfailed_outputs=0;
        
        has_outputs = isfield(result_struct,'output');
        if has_outputs
            output_array = result_struct.output;
            for k=1:length(output_array)
                
                tfailed=0;
                
                if length(output_array(k).min > 0)
                    % variable has defined min/max values so must be a range
                    for l=1:ntimesteps
                        if (output_array(k).min(l) > output_array(k).values(l)) || ...
                                (output_array(k).max(l) < output_array(k).values(l))
                            tfailed=tfailed+1;
                        end
                    end
                else % no min/max so require exact match to expected value
                    
                    % determine if the output was just for display.
                    if output_array(k).display == 1
                        % just for display so skip.
                    else
                        for l=1:ntimesteps
                            if(~isnan(output_array(k).expected(l))) 
                                if check_within_tolerance(output_array(k).expected(l),output_array(k).values(l)) == 0
                                    tfailed = tfailed + 1;
                                end
                            end
                        end
                    end
                end
	
                if tfailed > 0
                    nfailed_outputs = nfailed_outputs+1;
                end
            end % for k
        end
        
        % check other valid output types that 'might' exist in the test.
        nfailed = check_output_type(result_struct,ntimesteps,'ifault_out');
        nfailed_outputs = nfailed_outputs + nfailed;
        nfailed = check_output_type(result_struct,ntimesteps,'cfault_out');
        nfailed_outputs = nfailed_outputs + nfailed;
        nfailed = check_output_type(result_struct,ntimesteps,'afl_count_out');
        nfailed_outputs = nfailed_outputs + nfailed;
                
        if nfailed_outputs == 0
            summary_str = 'PASSED';
        else
            summary_str = sprintf('FAILED');
            ntests_failed = ntests_failed + 1;
        end
    	rowdata{irow}={'',testnames{i},summary_str};
        irow = irow + 1;
    end % for i
    
    if ntests_failed == 0
        rowdata{6}={'','Summary','All Tests Passed'};
    else
        rowdata{6}={'','Summary',sprintf('%g tests out of %g Failed',ntests_failed,ntests)};
    end
        
    summary_sheet_struct.rowdata = rowdata;
    assignin('base','summary_row_data',rowdata);
    
    return;

    
%============================================================================= 
% function [nfailed] = check_output_type(result_struct, ntimesteps, optype)
% 
% Check that an output type 'optype' has actual values as expected.
%============================================================================= 
function [nfailed] = check_output_type(result_struct, ntimesteps, optype)

    nfailed = 0;
    has_optype = isfield(result_struct,optype);
    if has_optype
        op_array = getfield(result_struct,optype);
        for k=1:length(op_array)
            tfailed=0;
            for l=1:ntimesteps
                if(~isnan(op_array(k).expected(l)))
                    if op_array(k).expected(l) ~= op_array(k).values(l)
                        tfailed=tfailed+1;
                    end
                end
            end
            if tfailed > 0
                nfailed = nfailed+1;
            end
        end
    end
    return;
    
    
    
%============================================================================= 
% function [cellid] = xlscellid(row,col)
% 
% Given a row and col in an xls sheet convert it to a cellid of the form AA1.
%============================================================================= 
function [cellid] = xlscellid(row,col)
%% function [cellid] = xlscellid(row,col)
% 
% Given a row and col in an xls sheet convert it to a cellid of the form AA1.

	acol='ABCDEFGHIJKLMNOPQRSTUVWXYZ90123456789';

	if col < 1 || col > 256
		cellid=sprintf('??%d',row);
	elseif col < 27
		cellid=sprintf('%s%d',acol(col),row);
    else
        x1=floor(col/26);
        x2=mod(col,26);
        if x2==0
            x2=26;
            x1=x1-1;
        end
		l1=acol(x1);
   		l2=acol(x2);

		cellid=sprintf('%s%s%d',l1,l2,row);
	end
	return;

%============================================================================= 
% function create_test_summary_sheet(Activesheet,summary_sheet_struct,test_struct)
% 
% Create a summary sheet for the test.
%============================================================================= 
function create_test_summary_sheet(Activesheet,summary_sheet_struct,test_struct)

    rowdata = summary_sheet_struct.rowdata;
    
    set(Activesheet, 'Name', 'Summary');

    ncolmax=0;
	for i=1:length(rowdata)
        ncols = size(rowdata{i},2);
        if ncols > ncolmax
            ncolmax = ncols;
        end
		startcell=xlscellid(i,1);
		endcell=xlscellid(i,ncols);
		ActivesheetRange = get(Activesheet,'Range', startcell, endcell);
		set(ActivesheetRange, 'Value', rowdata{i});
	end
	% Now resize everything that's been added.
	ActivesheetRange = get(Activesheet,'Range', 'A1', endcell);
	invoke(ActivesheetRange.Columns, 'Autofit');
    return;

%============================================================================= 
% function [col, titlerow, typerow] = ...
%   add_title_row(col,titlerow,typerow,test_struct,iotype)
% 
% Add a title row to the results spreadsheet containing an iotype name.
%============================================================================= 
function [col, titlerow, typerow] = ...
    add_title_row(col,titlerow,typerow,test_struct,iotype)

    if isfield(test_struct.result_struct,iotype)
        result_struct = test_struct.result_struct;
        iotype_array = getfield(result_struct,iotype);
        for i=1:length(iotype_array)
            titlerow{col}=iotype_array(i).name; 
            typerow{col}=iotype; 
            col=col+1;
        end
    end
    return;
    
%============================================================================= 
% function [col, datarow] = add_in_data_row(col,datarow,test_struct,nstep,iotype)
% 
% Add an input value row for iotype in the results spreadsheet.
%============================================================================= 
function [col, datarow] = add_in_data_row(col,datarow,test_struct,nstep,iotype)

    if isfield(test_struct.result_struct,iotype)
        result_struct = test_struct.result_struct;
        iotype_array = getfield(result_struct,iotype);
        for i=1:length(iotype_array)
            datarow{col}=iotype_array(i).values(nstep);
            col=col+1;
        end
    end
    return;

%============================================================================= 
% function [col,datarow,failed,failed_cellids,nfcells] = ...
%    add_out_data_row(col,row,datarow,test_struct, ...
%    ntstep,failed_cellids,nfcells,iotype)
% 
% Add an output value row for iotype in the results spreadsheet.
%============================================================================= 
function [col,datarow,failed,failed_cellids,nfcells] = ...
    add_out_data_row(col,row,datarow,test_struct,...
        ntstep,failed_cellids,nfcells,iotype)

    failed=0;
    if isfield(test_struct.result_struct,iotype)
        result_struct = test_struct.result_struct;
        iotype_array = getfield(result_struct,iotype);
        for k=1:length(iotype_array)
            datarow{col}=sprintf('%g   (exp=%g)',...
                iotype_array(k).values(ntstep),...
                iotype_array(k).expected(ntstep));
            if iotype_array(k).values(ntstep) ~= iotype_array(k).expected(ntstep)
                failed=1;
                failed_cellids{nfcells}=xlscellid(row,col); 
                nfcells=nfcells+1;
            end
            col=col+1;
        end
    end
    return;    
    
    
%============================================================================= 
% function create_test_result_sheet(Activesheet,sheetname,test_struct)
% 
% Create an individual test result sheet.
%============================================================================= 
function create_test_result_sheet(Activesheet,sheetname,test_struct)

    result_struct=test_struct.result_struct;
    
    tsteps=test_struct.result_struct.t;
    ntsteps=length(tsteps);

	sheetdata{1}={''};
    
    test_header_rows = test_struct.test_header_rows;
    for row = 1:length(test_header_rows)
        sheetdata{row} = test_header_rows{row};
    end
    row=row+1;
	sheetdata{row}={''}; row=row+1;
    sheetdata{row}={''}; row=row+1;
    
    titlerow{1}='test_sequence';
    titlerow{2}=''; 
    titlerow{3}='t'; 
    
    typerow{1}='';
    typerow{2}=''; 
    typerow{3}='time'; 
    
    col=4;
    
    % Note: the add_title_row function will worry about whether there 
    %       are instances of each type in the test spreadsheet.
    
    [col, titlerow, typerow] = ...
        add_title_row(col,titlerow,typerow,test_struct,'input');
    [col, titlerow, typerow] = ...
        add_title_row(col,titlerow,typerow,test_struct,'ifault_in');
    [col, titlerow, typerow] = ...
        add_title_row(col,titlerow,typerow,test_struct,'cfault_in');
    [col, titlerow, typerow] = ...
        add_title_row(col,titlerow,typerow,test_struct,'wsdata_in');
    [col, titlerow, typerow] = ...
        add_title_row(col,titlerow,typerow,test_struct,'afl_count_out');
    [col, titlerow, typerow] = ...
        add_title_row(col,titlerow,typerow,test_struct,'ifault_out');
    [col, titlerow, typerow] = ...
        add_title_row(col,titlerow,typerow,test_struct,'cfault_out');

    % **********************************************************
    % TREATED DIFFERENTLY AT THE MOMENT. NEED TO RESOLVE THIS.
    % **********************************************************
    has_outputs = isfield(test_struct.result_struct,'output');
    if has_outputs
        outputs=test_struct.result_struct.output;
        noutputs=length(outputs);
        for i=1:noutputs
            titlerow{col}=outputs(i).name;
            if outputs(i).display == 1
                typerow{col}='display';
            else
                typerow{col}='output'; 
            end
            col=col+1;
        end
    end
    
    test_row_start = row;
    sheetdata{row}=titlerow;row=row+1;
    sheetdata{row}=typerow;row=row+1;
    
    failrow(1,4)=0;
    
    nfcells=1;
    failed_cellids=[];
    
    for i=1:ntsteps
        
        failed=0;
        datarow{1}=test_struct.input_struct.testsequence.desc{i};
        datarow{2}='';
        datarow{3}=tsteps(i); 
        
        col=4;
        
        % Note: the add_in_data_row function will worry about whether there 
        %       are instances of each type in the test spreadsheet.
        [col, datarow] = add_in_data_row(col,datarow,test_struct,i,'input');
        [col, datarow] = add_in_data_row(col,datarow,test_struct,i,'ifault_in');
        [col, datarow] = add_in_data_row(col,datarow,test_struct,i,'cfault_in');
        [col, datarow] = add_in_data_row(col,datarow,test_struct,i,'wsdata_in');
        
        % Note: the add_out_data_row function will worry about whether there 
        %       are instances of each type in the test spreadsheet.
        [col,datarow,failed,failed_cellids,nfcells] = ...
            add_out_data_row(col,row,datarow,test_struct,...
                i,failed_cellids,nfcells,'afl_count_out');
        [col,datarow,failed,failed_cellids,nfcells] = ...
            add_out_data_row(col,row,datarow,test_struct,...
                i,failed_cellids,nfcells,'ifault_out');
        [col,datarow,failed,failed_cellids,nfcells] = ...
            add_out_data_row(col,row,datarow,test_struct,...
                i,failed_cellids,nfcells,'cfault_out');

        % **********************************************************
        % TREATED DIFFERENTLY AT THE MOMENT. NEED TO RESOLVE THIS.
        % **********************************************************
        has_outputs = isfield(test_struct.result_struct,'output');
        if has_outputs
            noutputs=length(outputs);
            for k=1:noutputs
                if ~isempty(outputs(k).min) & ~isempty(outputs(k).max)
                    datarow{col}=sprintf('%g   (min=%g, max=%g)',...
                        outputs(k).values(i),...
                        outputs(k).min(i),...
                        outputs(k).max(i));
                    if outputs(k).values(i) < outputs(k).min(i) ...
                            | outputs(k).values(i) > outputs(k).max(i)
                        failed=1;
                        failed_cellids{nfcells}=xlscellid(row,col); nfcells=nfcells+1;
                    end
                else
                    % determine if the output was just for display.
                    if ((outputs(k).display == 1) || (isnan(outputs(k).expected(i))))
                        % just for display so print the value from the test.
                        datarow{col}=sprintf('%g',outputs(k).values(i));
                    else
                        datarow{col}=sprintf('%g   (exp=%g)',...
                            outputs(k).values(i),...
                            outputs(k).expected(i));
                        if check_within_tolerance(outputs(k).expected(i),outputs(k).values(i)) == 0
                            failed = 1;
                            failed_cellids{nfcells}=xlscellid(row,col); nfcells=nfcells+1;
                        end
                    end
                end
                col=col+1;
            end            
        end
        
        if failed
            datarow{2}='FAIL';
            failrow(row)=1;
            % colour the status column and also the timestep.
            failed_cellids{nfcells}=xlscellid(row,2); nfcells=nfcells+1;
            failed_cellids{nfcells}=xlscellid(row,3); nfcells=nfcells+1;
        else
            datarow{2}='PASS';
            failrow(row)=0;
        end
        sheetdata{row}=datarow; row=row+1;
    end
    test_row_end = row;
    
    if ~isempty(failed_cellids)
        set(Activesheet, 'Name', [sheetname ' (FAILED)']);
    else
        set(Activesheet, 'Name', [sheetname ' (PASSED)']);
    end

    ncolmax=0;
	for i=1:length(sheetdata)
        ncols=size(sheetdata{i},2);
        if ncols > ncolmax
            ncolmax = ncols;
        end
		startcell=xlscellid(i,1);
		endcell=xlscellid(i,ncols);
		ActivesheetRange = get(Activesheet,'Range', startcell, endcell);
		set(ActivesheetRange, 'Value', sheetdata{i});
    end
    
    % step through the sheet and colour all failed cells.
    for i=1:length(failed_cellids)
		ActivesheetRange = get(Activesheet,'Range', ...
            failed_cellids{i}, failed_cellids{i});
		ActivesheetRange.Font.Bold=1;
		ActivesheetRange.Interior.ColorIndex = 6; % YELLOW
    end
    
	% Now resize everything that's been added.
    startcell=xlscellid(1,1);
	endcell=xlscellid(test_row_end,1);
	ActivesheetRange = get(Activesheet,'Range', startcell, endcell);
	invoke(ActivesheetRange.Columns, 'Autofit');
    
    startcell=xlscellid(test_row_start,2);
	endcell=xlscellid(test_row_end,ncolmax);
	ActivesheetRange = get(Activesheet,'Range', startcell, endcell);
	invoke(ActivesheetRange.Columns, 'Autofit');
    
    return;

    
%========================================================================== 
% function add_testframe_input(intype,nitem,var_struct,ntimesteps)
% 
% Add an input type (intype) to the testframe with name and values.
%==========================================================================
function add_testframe_input(intype,nitem,var_struct,ntimesteps)
	evalin('base',sprintf('testframe.%s(%d).name=''%s'';',intype,nitem,var_struct.name));
	valstr='';
	for k=1:ntimesteps
		valstr=[valstr sprintf('%g ',var_struct.values(k))];
	end
	evalin('base',sprintf('testframe.%s(%d).values=[%s];',intype,nitem,valstr));
    return;

%========================================================================== 
% function add_testframe_output(outtype,nitem,var_struct,ntimesteps)
% 
% Add an output type (outtype) to the testframe with name and exp values.
%==========================================================================
function add_testframe_output(outtype,nitem,var_struct,ntimesteps)
	evalin('base',sprintf('testframe.%s(%d).name=''%s'';',outtype,nitem,var_struct.name));
	actvalstr='';
	expvalstr='';
	for k=1:ntimesteps
		actvalstr=[actvalstr 'nan '];
		expvalstr=[expvalstr sprintf('%g ',var_struct.values(k))];
	end
	evalin('base',sprintf('testframe.%s(%d).values=[%s];',outtype,nitem,actvalstr));
	evalin('base',sprintf('testframe.%s(%d).expected=[%s];',outtype,nitem,expvalstr));
    return;    
        
%========================================================================== 
% function [tframe,failed_to_run] = run_test_on_model(model,test_structure)
%==========================================================================
function [tframe,failed_to_run] = run_test_on_model(model,test_structure)

    failed_to_run=0;
    tframe=[];
    global run_verbose;
    
	evalin('base','clear testframe;');

    % load plant calibration
    plantcal = test_structure.plantcal.name;
    if ~isempty(plantcal)
        if exist(plantcal)==2
            evalin('base',plantcal);
            if run_verbose
                fprintf('loaded the plant calibration %s...\n',plantcal);
            end
        else
            fprintf(['ERROR: couldn''t find the calibration file "%s"' ...
                ' on the matlab path'],plantcal);
            failed_to_run=1;
            return
        end
    end
    
    % load strategy calibration
    basecal=test_structure.basecal.name;
	if and(~isempty(basecal), ~isnan(basecal))
		if exist(basecal)==2
			evalin('base',basecal);
            if run_verbose
    			fprintf('loaded the base calibration %s...\n',basecal);
            end
		else
			fprintf(['ERROR: couldn''t find the calibration file "%s"'...
				' on the matlab path'],basecal);
            failed_to_run=1;
            return;
		end
	end

    % apply test-specific calibration changes from worksheet
    calchanges=test_structure.calchanges;
	if ~isempty(calchanges)
        if run_verbose
        	fprintf('applying local calibration changes...\n');
        end
		for i=1:length(calchanges)
            exist_status = evalin('base',sprintf('exist(''%s'')',calchanges(i).name));
            if exist_status == 1
                % the variable is already in the workspace so must be in
                % the plant or strategy cal that's been loaded.
                fprintf('    %s\n',calchanges(i).evalstr);
        		evalin('base',calchanges(i).evalstr);
            else
                fprintf('ERROR: couldn''t apply local calibration change. %s is not in the workspace\n',calchanges(i).name);
                failed_to_run=1;
                return;
            end
		end
	end

	% Add the timesteps to the testframe.

    str='';
    timesteps=test_structure.testsequence.vars(1).values;
    for i=1:length(timesteps)
		str=[str sprintf('%g ',timesteps(i))];
    end
   	evalin('base',['testframe.t=[' str '];']);

    vars=test_structure.testsequence.vars;
    
    % store test file/sheet info 
    evalin('base', sprintf('testframe.xlsfile= ''%s'';', test_structure.xlsfile));
    evalin('base', sprintf('testframe.sheetnum= %d;',    test_structure.sheetnum));
    evalin('base', sprintf('testframe.sheetname= ''%s'';',    test_structure.sheetname));
    
    % Process the output_min and output_max columns ready to add to the
    % testframe.
    
    noutmin=0;
    noutmax=0;
    outminvars=[];
    outmaxvars=[];
    
    for i=2:length(vars)
        if strcmp(vars(i).type,'output_min')
            noutmin=noutmin+1;
			valstr='';
			for k=1:length(timesteps)
				valstr=[valstr sprintf('%g ',vars(i).values(k))];
			end
            outminvars(noutmin).name=vars(i).name;
            outminvars(noutmin).valstr=valstr;
        elseif strcmp(vars(i).type,'output_max')
            noutmax=noutmax+1;
			valstr='';
			for k=1:length(timesteps)
				valstr=[valstr sprintf('%g ',vars(i).values(k))];
			end
            outmaxvars(noutmax).name=vars(i).name;
            outmaxvars(noutmax).valstr=valstr;
        end
    end
    
    % Add the Input and Output variables to the testframe
    
    % get a list of test blocks in the model
    output_blocks = find_system(model, ...
        'lookundermasks','all','followlinks','on', ...
        'masktype','Test Output');
    output_vars = get_param(output_blocks,'varname');
    
    input_blocks = find_system(model, ... 
        'lookundermasks','all','followlinks','on','regexp','on', ...
        'masktype','Test Input');
    input_vars = get_param(input_blocks,'varname');
   
    nin=1;
    nout=1;
    
    n_ifault_in=1;
    n_cfault_in=1;
    n_wsdata_in=1;
    n_afl_count_out=1;
    n_ifault_out=1;
    n_cfault_out=1;
    
    outputs_added = {};

    for i=2:length(vars)
        if strcmp(vars(i).type,'input')
            
            %first check that the model contains a 'test input' or 'test
            %input (with override)' block for this variable
            if ~ismember(vars(i).name, input_vars)
                fprintf(['ERROR: input ''%s'' does not have a corresponding ''Test Input'' block\n' ...
                    ' or ''Test Input (with override)'' block in the model.\n'], vars(i).name);
                failed_to_run = 1;
                return;
            end
            
        	evalin('base',sprintf('testframe.input(%d).name=''%s'';',nin,vars(i).name));
			valstr='';
			for k=1:length(timesteps)
				valstr=[valstr sprintf('%g ',vars(i).values(k))];
			end
   			evalin('base',sprintf('testframe.input(%d).values=[%s];',nin,valstr));
            nin=nin+1;

        elseif strcmp(vars(i).type,'ifault_in')
            add_testframe_input('ifault_in',n_ifault_in,vars(i),length(timesteps));
            n_ifault_in=n_ifault_in+1;
            
        elseif strcmp(vars(i).type,'cfault_in')
            add_testframe_input('cfault_in',n_cfault_in,vars(i),length(timesteps));
            n_cfault_in=n_cfault_in+1;
            
        elseif strcmp(vars(i).type,'wsdata_in')
            add_testframe_input('wsdata_in',n_wsdata_in,vars(i),length(timesteps));
            n_wsdata_in=n_wsdata_in+1;
            
        elseif strcmp(vars(i).type,'ifault_out')
            add_testframe_output('ifault_out',n_ifault_out,vars(i),length(timesteps));
            n_ifault_out=n_ifault_out+1;
        
        elseif strcmp(vars(i).type,'cfault_out')
            add_testframe_output('cfault_out',n_cfault_out,vars(i),length(timesteps));
            n_cfault_out=n_cfault_out+1;
            
        elseif strcmp(vars(i).type,'afl_count_out')
            add_testframe_output('afl_count_out',n_afl_count_out,vars(i),length(timesteps));
            n_afl_count_out=n_afl_count_out+1;
            
        elseif strcmp(vars(i).type,'output') || strcmp(vars(i).type,'output_min')
            
            %Check that we haven't already assigned this in the workspace
            %if we've encountered an 'output' column already and now found
            %'output_min' too. However, we need to process both so that the
            %spreadsheet can have 'output_min'/'output_max' but not bother
            %with 'output' and still get the right structure format in the
            %workspace.
            if ismember(vars(i).name, outputs_added)
                continue;
            end
            
            % first check that the model contains a test output block for
            % this variable
            if ~ismember(vars(i).name,output_vars)
                fprintf('ERROR: output ''%s'' does not have a corresponding ''Test Output'' block in the model\n', vars(i).name);
                failed_to_run = 1;
                return;
            end
            
        	evalin('base',sprintf('testframe.output(%d).name=''%s'';',nout,vars(i).name));
        	evalin('base',sprintf('testframe.output(%d).display=%d;',nout,vars(i).display));
			actvalstr='';
			expvalstr='';
			for k=1:length(timesteps)
				actvalstr=[actvalstr 'nan '];
				expvalstr=[expvalstr sprintf('%g ',vars(i).values(k))];
			end
   			evalin('base',sprintf('testframe.output(%d).values=[%s];',nout,actvalstr));
   			evalin('base',sprintf('testframe.output(%d).expected=[%s];',nout,expvalstr));
            
            hasmin=0;
            hasmax=0;
            
            for k=1:length(outminvars)
                if strcmp(outminvars(k).name,vars(i).name)
           			evalin('base',sprintf('testframe.output(%d).min=[%s];',nout,outminvars(k).valstr));
                    hasmin=1;
                end
            end
            for k=1:length(outmaxvars)
                if strcmp(outmaxvars(k).name,vars(i).name)
           			evalin('base',sprintf('testframe.output(%d).max=[%s];',nout,outmaxvars(k).valstr));
                    hasmax=1;
                end
            end
            
            if hasmin ~= hasmax % must have matching min and max columns.
				fprintf(['ERROR: mismatched min and max columns for output %s' ...
                    ' Must have either both output_min and output_max columns or none.'],vars(i).name);
                failed_to_run=1;
                return;
            elseif hasmin == 0
       			evalin('base',sprintf('testframe.output(%d).max=[];',nout));
       			evalin('base',sprintf('testframe.output(%d).min=[];',nout));
            end
            
            outputs_added = { outputs_added{:} vars(i).name }; % log that we've processed this variable 
            nout=nout+1;
        end
    end

    % Run the Simulation.
    if run_verbose
    	fprintf('Running the test sequence...\n');
    end
    simOut = sim(model,...
		[test_structure.testsequence.vars(1).values(1) test_structure.testsequence.vars(1).values(end)]);

%   [t,x,y] = simOut;
    
    % Pass back the test frame following the simulation.
	[tframe] = evalin('base','testframe;');

	return;

%============================================================================= 
% function [test_structure] = create_test_structure(sheetdata)
% 
% Create a test structure from the information in the xls sheetdata.
%============================================================================= 
function [test_structure,test_header_rows,failed] = create_test_structure(sheetdata)

    failed=0;
	nrows=size(sheetdata,1);
	ncols=size(sheetdata,2);
    test_structure.plantcal.name='';
    test_sequence_row = 1;
    test_header_rows = [];

	for row=1:nrows
		if strcmp(sheetdata{row,1},'id')

			test_structure.id.name=sheetdata{row,2};

			if ~isnan(sheetdata{row,3})
				test_structure.id.notes=sheetdata{row,3};
			else
				test_structure.id.notes='';
			end

		elseif strcmp(sheetdata{row,1},'description')
			test_structure.desc.name=sheetdata{row,2};

			if ~isnan(sheetdata{row,3})
				test_structure.desc.notes=sheetdata{row,3};
			else
				test_structure.desc.notes='';
			end

        elseif strcmp(sheetdata{row,1},'basecal')
			test_structure.basecal.name=sheetdata{row,2};

			if ~isnan(sheetdata{row,3})
				test_structure.basecal.notes=sheetdata{row,3};
			else
				test_structure.basecal.notes='';
			end

        elseif strcmp(sheetdata{row,1},'plantcal')
            test_structure.plantcal.name=sheetdata{row,2};

            if ~isnan(sheetdata{row,3})
                test_structure.plantcal.notes=sheetdata{row,3};
            else
                test_structure.plantcal.notes='';
            end
        

		elseif strcmp(sheetdata{row,1},'dependencies')
			if ~isnan(sheetdata{row,2})
				test_structure.dependencies.name=sheetdata{row,2};
			else
				test_structure.dependencies.name='';
			end

			if ~isnan(sheetdata{row,3})
				test_structure.dependencies.notes=sheetdata{row,2};
			else
				test_structure.dependencies.notes='';
			end

		elseif strcmp(sheetdata{row,1},'calchanges')

			[test_structure.calchanges,row] = read_calchanges(sheetdata,nrows,ncols,row+1);

		elseif strcmp(sheetdata{row,1},'test_sequence')
            
            test_sequence_row = row;
			[test_structure.testsequence,row,failed] = read_test_sequence(sheetdata,nrows,ncols,row);
            if failed
                return;
            end
            
		end
	end

    % only treat first 3 cols as carry over info.
	for row=1:test_sequence_row-1
        coldata{1}=sheetdata{row,1};
        coldata{2}=sheetdata{row,2};
        coldata{3}=sheetdata{row,3};
        test_header_rows{row} = coldata;
    end
    return;
   
%============================================================================= 
% function [testsequence,row] = read_test_sequence(xlsdata,nrows,ncols,startrow)
% 
% Read the calibration changes from the spreadsheet and return in an array
% of name,value structures.
%============================================================================= 
function [testsequence,row,failed] = read_test_sequence(xlsdata,nrows,ncols,startrow)

    failed=0;
    row=startrow;

    if ~strcmp(xlsdata{startrow,2},'t')
        fprintf('ERROR in XLS format. Cell(B,%d) must be the ''t'' variable',startrow);
        failed=1;
        return;
    end
   
    testsequence.vars(1).name='t';
    i=2;
    % read the variable names.
    for col=3:ncols
		if isnan(xlsdata{row,col})
			break; % end of the variable columns.
        else
            testsequence.vars(i).name=strtrim(xlsdata{row,col});
            i = i + 1;
        end
    end
    
    row=row+1;

    testsequence.vars(1).type='time';
    i=2;
    % read the variable types.
    for col=3:ncols
		if isnan(xlsdata{row,col})
			break; % end of the types.
        else
            vartype=strtrim(xlsdata{row,col});
            if strcmp(vartype,'display')
                testsequence.vars(i).type='output';
                testsequence.vars(i).display=1;
            else
                testsequence.vars(i).type=strtrim(xlsdata{row,col});
                testsequence.vars(i).display=0;
            end
            testsequence.vars(i).values=[];
            i = i + 1;
        end
    end
    
    testsequence.desc = {};
    % read the variable names.
	for row=row+1:nrows
        i=1;
        testsequence.desc = {testsequence.desc{:} xlsdata{row,1}}; % grab descriptions too
        for col=2:ncols
			if isnan(xlsdata{row,col})
				break; % end of the calchanges.
            else
                if isnumeric(xlsdata{row,col})
                    testsequence.vars(i).values = [testsequence.vars(i).values xlsdata{row,col}];
                elseif ischar(xlsdata{row,col})
                    if(strcmpi(xlsdata{row,col}, 'x'))
                        testsequence.vars(i).values = [testsequence.vars(i).values NaN];
                    else
                        testsequence.vars(i).values = [testsequence.vars(i).values evalin('base', xlsdata{row,col})];
                    end
                elseif islogical(xlsdata{row,col})
                    testsequence.vars(i).values = [testsequence.vars(i).values xlsdata{row,col}];
                else
                    t = xlsdata{row,col};
                    fprintf('ERROR in XLS format. Cell(%d,%d) must be numeric or character.',row,col);
                    failed=1;
                    return;
                end
                i = i + 1;
            end
        end
    end
    
%============================================================================= 
% function [calchanges,row] = read_calchanges(xlsdata,nrows,ncols,startrow)
% 
% Read the calibration changes from the spreadsheet and return in an array
% of name,value structures.
%============================================================================= 
function [calchanges,row] = read_calchanges(xlsdata,nrows,ncols,startrow)

	row=1;
	calchanges=[];
	i=1;
	for row=startrow:nrows
		if isnan(xlsdata{row,1})
			break; % end of the calchanges.
        elseif isempty(xlsdata{row,1})
            break;
		else
			calchanges(i).name=strtrim(xlsdata{row,1});
            if isnumeric(xlsdata{row,2})
                value=num2str(xlsdata{row,2});
            else
                value=char(xlsdata{row,2});
            end
			eval(['calchanges(' num2str(i) ').value=' value ';']);
			
			% wxia: CHANGE BEGIN: we now have to assign a value with correct data type.
			
			% calchanges(i).evalstr=[calchanges(i).name '=' value ';'];
			
			datatype = evalin('base', sprintf('class(%s)', calchanges(i).name) );
			
			if	strcmp(datatype, 'Simulink.Parameter') ||...
				strcmp(datatype, 'ASAP2.Parameter') ||...
				strcmp(datatype, 'mpt.Parameter')
			
				calchanges(i).evalstr = [calchanges(i).name '.Value=' value ';'];
				
			elseif	strcmp(datatype, 'double') ||...
					strcmp(datatype, 'single') ||...
					strcmp(datatype, 'boolean') ||...
					strcmp(datatype, 'logical') ||...
					strcmp(datatype, 'int8') ||...
					strcmp(datatype, 'int16') ||...
					strcmp(datatype, 'int32') ||...
					strcmp(datatype, 'int64') ||...
					strcmp(datatype, 'uint8') ||...
					strcmp(datatype, 'uint16') ||...
					strcmp(datatype, 'uint32') ||...
					strcmp(datatype, 'uint64')
					
				calchanges(i).evalstr = [calchanges(i).name '=' datatype '(' value ');'];
			
			else
				calchanges(i).evalstr=[calchanges(i).name '=' value ';'];
			end
			
			% wxia: CHANGE END
			
			i = i + 1;
		end
	end

%============================================================================= 
% function [xlsdata] = read_xls_sheets(xlsfile)
% 
% Read the data out of all of the sheets in the xlsfile.
%============================================================================= 
function [xlsdata,readfailed] = read_xls_sheets(xlsfile)

    readfailed=0;
	xlsdata=[];

	[pathstr,name,ext] = fileparts(xlsfile);
	if isempty(ext)
		xlsfile = [xlsfile,'.xls'];
	end
	if isempty(pathstr)
		xlsfile = which(xlsfile,'-all');
		if size(xlsfile,1) ~= 1
			fprintf(['File was either not located, or multiple locations were found.\n'...
				'Run xlstest_to_mtest again with the absolute path to the xlsfile.\n']);
            readfailed=1;
            return;
		end
	end

	Excel = actxserver('Excel.Application'); 
	Excel.Visible = 0; 

	try
		FileArchive = invoke(Excel.Workbooks, 'open', xlsfile);
	catch
		invoke(Excel, 'quit'); 
		delete(Excel);
		fprintf(['Failed to open the XLS file %s.\n'...
            'Make sure the file is in the current directory '...
            'or that the full filename (including path) is specified.'],xlsfile);
        readfailed=1;
        return;
	end

	Sheets = Excel.ActiveWorkBook.Sheets;

	nSheets = Sheets.Count;

	for i = 1:nSheets

		target_sheet = Sheets.Item(i);
		target_sheet.Activate;
		Activesheet = Excel.Activesheet;
		sheetname=Activesheet.Name;

		try
			initval = get(Activesheet,'Index');
			UsedRange = get(Activesheet,'UsedRange');
   			sheetdata = UsedRange.value;
			release(UsedRange); 
		catch
			invoke(FileArchive,'save');
			invoke(Excel, 'quit'); 
			release(FileArchive); 
			delete(Excel);
			fprintf('Error reading XLS Sheet: %s.',sheetname);
            readfailed=1;
            return;
		end
        
		if ~isempty(sheetdata)
			nrows=size(sheetdata,1);
			ncols=size(sheetdata,2);
            for r=1:nrows
                for c=1:ncols
                    if iscellstr(sheetdata{r,c})
                        disp(sprintf('%s', sheetdata{r,c}));
                    end
%                     if isnan(sheetdata{r,c})
%                         sheetdata{r,c}=[];
%                     end
                end
            end
			eval(sprintf('xlsdata.%s.sheetdata=sheetdata;',sheetname));
		end
	end

	invoke(FileArchive,'close');
	invoke(Excel, 'quit'); 
	release(FileArchive); 
	delete(Excel);
	return;
