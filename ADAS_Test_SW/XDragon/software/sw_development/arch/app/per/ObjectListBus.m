function ObjectListBus() 
% OBJECTLISTBUS initializes a set of bus objects in the MATLAB base workspace 

% Bus object: ObjectList 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'timestampCount';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'uint8';
elems(1).SampleTime = -1;
elems(1).Complexity = 'real';
elems(1).SamplingMode = 'Sample based';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = '';

elems(2) = Simulink.BusElement;
elems(2).Name = 'timestamp';
elems(2).Dimensions = 60;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'uint32';
elems(2).SampleTime = -1;
elems(2).Complexity = 'real';
elems(2).SamplingMode = 'Sample based';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = '';

elems(3) = Simulink.BusElement;
elems(3).Name = 'objectCount';
elems(3).Dimensions = 60;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'uint8';
elems(3).SampleTime = -1;
elems(3).Complexity = 'real';
elems(3).SamplingMode = 'Sample based';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = '';

elems(4) = Simulink.BusElement;
elems(4).Name = 'x';
elems(4).Dimensions = [60 40];
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'double';
elems(4).SampleTime = -1;
elems(4).Complexity = 'real';
elems(4).SamplingMode = 'Sample based';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = '';

elems(5) = Simulink.BusElement;
elems(5).Name = 'y';
elems(5).Dimensions = [60 40];
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'double';
elems(5).SampleTime = -1;
elems(5).Complexity = 'real';
elems(5).SamplingMode = 'Sample based';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = '';

elems(6) = Simulink.BusElement;
elems(6).Name = 'vx';
elems(6).Dimensions = [60 40];
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'double';
elems(6).SampleTime = -1;
elems(6).Complexity = 'real';
elems(6).SamplingMode = 'Sample based';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = '';

elems(7) = Simulink.BusElement;
elems(7).Name = 'vy';
elems(7).Dimensions = [60 40];
elems(7).DimensionsMode = 'Fixed';
elems(7).DataType = 'double';
elems(7).SampleTime = -1;
elems(7).Complexity = 'real';
elems(7).SamplingMode = 'Sample based';
elems(7).Min = [];
elems(7).Max = [];
elems(7).DocUnits = '';
elems(7).Description = '';

elems(8) = Simulink.BusElement;
elems(8).Name = 'rollingCounter';
elems(8).Dimensions = [60 40];
elems(8).DimensionsMode = 'Fixed';
elems(8).DataType = 'uint8';
elems(8).SampleTime = -1;
elems(8).Complexity = 'real';
elems(8).SamplingMode = 'Sample based';
elems(8).Min = [];
elems(8).Max = [];
elems(8).DocUnits = '';
elems(8).Description = '';

elems(9) = Simulink.BusElement;
elems(9).Name = 'id';
elems(9).Dimensions = [60 40];
elems(9).DimensionsMode = 'Fixed';
elems(9).DataType = 'uint8';
elems(9).SampleTime = -1;
elems(9).Complexity = 'real';
elems(9).SamplingMode = 'Sample based';
elems(9).Min = [];
elems(9).Max = [];
elems(9).DocUnits = '';
elems(9).Description = '';

elems(10) = Simulink.BusElement;
elems(10).Name = 'ax';
elems(10).Dimensions = [60 40];
elems(10).DimensionsMode = 'Fixed';
elems(10).DataType = 'double';
elems(10).SampleTime = -1;
elems(10).Complexity = 'real';
elems(10).SamplingMode = 'Sample based';
elems(10).Min = [];
elems(10).Max = [];
elems(10).DocUnits = '';
elems(10).Description = '';

elems(11) = Simulink.BusElement;
elems(11).Name = 'existenceProbability';
elems(11).Dimensions = [60 40];
elems(11).DimensionsMode = 'Fixed';
elems(11).DataType = 'double';
elems(11).SampleTime = -1;
elems(11).Complexity = 'real';
elems(11).SamplingMode = 'Sample based';
elems(11).Min = [];
elems(11).Max = [];
elems(11).DocUnits = '';
elems(11).Description = '';

elems(12) = Simulink.BusElement;
elems(12).Name = 'dynamicProperty';
elems(12).Dimensions = [60 40];
elems(12).DimensionsMode = 'Fixed';
elems(12).DataType = 'uint8';
elems(12).SampleTime = -1;
elems(12).Complexity = 'real';
elems(12).SamplingMode = 'Sample based';
elems(12).Min = [];
elems(12).Max = [];
elems(12).DocUnits = '';
elems(12).Description = '';

elems(13) = Simulink.BusElement;
elems(13).Name = 'length';
elems(13).Dimensions = [60 40];
elems(13).DimensionsMode = 'Fixed';
elems(13).DataType = 'double';
elems(13).SampleTime = -1;
elems(13).Complexity = 'real';
elems(13).SamplingMode = 'Sample based';
elems(13).Min = [];
elems(13).Max = [];
elems(13).DocUnits = '';
elems(13).Description = '';

elems(14) = Simulink.BusElement;
elems(14).Name = 'width';
elems(14).Dimensions = [60 40];
elems(14).DimensionsMode = 'Fixed';
elems(14).DataType = 'double';
elems(14).SampleTime = -1;
elems(14).Complexity = 'real';
elems(14).SamplingMode = 'Sample based';
elems(14).Min = [];
elems(14).Max = [];
elems(14).DocUnits = '';
elems(14).Description = '';

elems(15) = Simulink.BusElement;
elems(15).Name = 'measurementStatus';
elems(15).Dimensions = [60 40];
elems(15).DimensionsMode = 'Fixed';
elems(15).DataType = 'uint8';
elems(15).SampleTime = -1;
elems(15).Complexity = 'real';
elems(15).SamplingMode = 'Sample based';
elems(15).Min = [];
elems(15).Max = [];
elems(15).DocUnits = '';
elems(15).Description = '';

elems(16) = Simulink.BusElement;
elems(16).Name = 'rcsValue';
elems(16).Dimensions = [60 40];
elems(16).DimensionsMode = 'Fixed';
elems(16).DataType = 'double';
elems(16).SampleTime = -1;
elems(16).Complexity = 'real';
elems(16).SamplingMode = 'Sample based';
elems(16).Min = [];
elems(16).Max = [];
elems(16).DocUnits = '';
elems(16).Description = '';

elems(17) = Simulink.BusElement;
elems(17).Name = 'obstacleProbability';
elems(17).Dimensions = [60 40];
elems(17).DimensionsMode = 'Fixed';
elems(17).DataType = 'double';
elems(17).SampleTime = -1;
elems(17).Complexity = 'real';
elems(17).SamplingMode = 'Sample based';
elems(17).Min = [];
elems(17).Max = [];
elems(17).DocUnits = '';
elems(17).Description = '';

ObjectList = Simulink.Bus;
ObjectList.HeaderFile = '';
ObjectList.Description = '';
ObjectList.DataScope = 'Auto';
ObjectList.Alignment = -1;
ObjectList.Elements = elems;
clear elems;
assignin('base','ObjectList', ObjectList);

