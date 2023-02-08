% =========== $Update Time : 07-Nov-2016 12:32:06 $  =========
function cellInfo = BPMM_outputs(varargin)
% BPMM_outputs returns a cell array containing bus object information

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
    'BPMM_outputs', ... 
    '', ... 
    sprintf(''), { ...
      {'VPMM_SysPowerModeOut_enum', 	1, 'uint8', -1, 'real', 'Sample'}; ...
      {'VPMM_SysPowerDownCmd_flg', 	1, 'boolean', -1, 'real', 'Sample'}; ...
    } ... 
  } ...
}'; 

if ~suppressObject
    % Create bus objects in the MATLAB base workspace 
    Simulink.Bus.cellToObject(cellInfo) 
end
end
