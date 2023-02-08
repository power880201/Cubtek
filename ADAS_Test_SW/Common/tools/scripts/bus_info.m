
function bus_info = bus_info(bus)
N = length(bus.Elements);
var = cell(N, 1);
sig = var;
unit = var;
dt = var;

for i=1:N
	var{i} = bus.Elements(i).Name;
	fields = regexp(var{i}, '_', 'split');
	
	sig{i} = fields{2};
	try
		dt{i} = fields{3};
	catch
		dt{i} = '';
	end
	
	unit{i} = bus.Elements(i).DataType;
	
end

bus_info = [ var sig unit dt ];