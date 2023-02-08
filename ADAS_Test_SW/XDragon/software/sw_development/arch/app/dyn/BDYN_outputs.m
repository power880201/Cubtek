% =========== $Update Time : 04-Nov-2016 16:59:36 $  =========
function cellInfo = BDYN_outputs(varargin)
% BDYN_outputs returns a cell array containing bus object information

% Optional Input: 'false' will suppress a call to Simulink.Bus.cellToObject
%                 when the m-file is executed.
% The order of bus element attributes is as follows:
%   ElementName, Dimensions, DataType, SampleTime, Complexity, SamplingMode

suppressObject = false;
if nargin == 1 && islogical(varargin{1}) && varargin{1} == false
    suppressObject = true;
elseif nargin > 1
    error('Invalid input argument(s) encountered');
end

cellInfo = { ... 
  { ... 
    'BDYN_outputs', ... 
    '', ... 
    sprintf(''), { ...
      {'VVSE_VehSpdEst_kph', 	1, 'single', -1, 'real', 'Sample'}; ...
    } ... 
  } ...
}'; 

if ~suppressObject
    % Create bus objects in the MATLAB base workspace 
    Simulink.Bus.cellToObject(cellInfo) 
end
end
