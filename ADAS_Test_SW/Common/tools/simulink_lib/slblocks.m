function blkStruct = slblocks
%SLBLOCKS Defines the Simulink library for the HCU reusable block library.

% ****************************************************************************
% $Id: slblocks.m 2 2019-09-19 09:28:50Z JuneXmas $
% ****************************************************************************

blkStruct.Name    = 'ADAS Reusable Library';
blkStruct.OpenFcn = 'hcu_lib';
blkStruct.MaskInitialization = '';
blkStruct.MaskDisplay = ['disp(''ADAS Reusable Library'');'];
Browser(1).Library = 'hcu_lib';
Browser(1).Name    = 'ADAS Reusable Library';
Browser(1).IsFlat  = 1;
blkStruct.Browser  = Browser;

