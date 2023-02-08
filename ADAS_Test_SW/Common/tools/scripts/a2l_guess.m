function [data_type, unit, min_str, max_str ] = a2l_guess(var_name)

fields = regexp(var_name, '_', 'split');

switch lower(fields{end})
	case    'debdec'
		unit = 'count';
		data_type = 'uint8';
	case    'debinc'
		unit = 'count';
		data_type = 'uint8';
	case    'deblim'
		unit = 'count';
		data_type = 'uint8';
	case    'defval'
		unit = fields{end-1};
		data_type = data_type_from_unit(unit);
	case    'fftdec'
		unit = 'count';
		data_type = 'uint8';
	case    'fftinc'
		unit = 'count';
		data_type = 'uint8';
	case    'fftlim'
		unit = 'count';
		data_type = 'uint8';
	case    'gain'
		unit = 'rat';
		data_type = 'single';
	case    'offset'
		unit = fields{end-1};
		data_type = 'single';
	case    'inverse'
		unit = 'flg';
		data_type = 'boolean';
	case    'invalid'
		unit = 'flg';
		data_type = 'boolean';
	case    'setvalid'
		unit = 'flg';
		data_type = 'boolean';
	case    'limlow'
		unit = fields{end-1};
		data_type = 'single';
	case    'limupr'
		unit = fields{end-1};
		data_type = 'single';
	case    'ovrdflg'
		unit = 'flg';
		data_type = 'boolean';
	case    'ovrdval'
		unit = fields{end-1};
		data_type = data_type_from_unit(unit);
	case    'srvcflg'
		unit = 'flg';
		data_type = 'boolean';
	case    'srvcval'
		unit = fields{end-1};
		data_type = data_type_from_unit(unit);
	case    'minval'
		unit = fields{end-1};
		data_type = data_type_from_unit(unit);
	case    'maxval'
		unit = fields{end-1};
		data_type = data_type_from_unit(unit);
	case    'tcfilt'
		unit = 's';
		data_type = 'single';
	case    'inhal'
		unit = fields{end-1};
		data_type = data_type_from_unit(unit);
	otherwise
		unit = fields{end};
		data_type = data_type_from_unit(unit);
end


switch data_type
case 'boolean'
		min_str=' 0  ';
		max_str='1  ';
case 'uint8',
		min_str=' 0  ';
		max_str='255';
case 'uint16'
		min_str=' 0  ';
		max_str='65535';
case 'uint32'
		min_str=' 0  ';
		max_str='4294967295';
otherwise
		min_str= '-1e6';
		max_str= '1e6';

end


function data_type = data_type_from_unit(unit)
switch lower(unit)
	case 'flg'
		data_type = 'boolean';
	case {'enum',  'raw8' , 'cnt'}
		data_type = 'uint8';
	case {'bf', 'raw16' }
		data_type = 'uint16';
	case {'raw32' }
		data_type = 'uint32';
	otherwise
		data_type = 'single';
end

