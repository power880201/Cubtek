function blkStruct = slblocks
%SLBLOCKS Defines the Simulink library for the siltestlib.

% ****************************************************************************
% $Id: slblocks.m 2 2019-09-19 09:28:50Z JuneXmas $
% ****************************************************************************

blkStruct.Name    = 'SiL test blockset';
blkStruct.OpenFcn = 'siltestlib';
blkStruct.MaskInitialization = '';
blkStruct.MaskDisplay = ['disp(''SiL test blockset'');'];
Browser(1).Library = 'siltestlib';
Browser(1).Name    = 'SiL test blockset';
Browser(1).IsFlat  = 1;
blkStruct.Browser  = Browser;

