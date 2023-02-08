function feature_list = dragon_modules(type)

if nargin==0
	type = 'ut';
end

arch_path = dragon_flying('arch');

switch type
	case 'ut'
		identifier = 'Test_Case';
		cmd = sprintf('dir %s\\%s /b/s', arch_path, identifier);
	case 'bus'
		identifier = 'B*_outputs.m';
		cmd = sprintf('dir %s\\%s /b/s', arch_path, identifier);
	case 'dir'
		cmd = sprintf('dir %s\\ /b/s/ad', arch_path);
	otherwise
		error('unknown type: %s', type);
end


[err,m] = system(cmd);

if err
	feature_list = {};
	return
end

id_file_list = regexp(m, '\n', 'split');
id_file_list = setdiff(id_file_list, {''});
feature_list = unique(id_file_list);

for i = 1:length(id_file_list)
	[p, f, x] = fileparts(fileparts(id_file_list{i}));
	feature_list{i} = f;
end

feature_list = unique(feature_list);

