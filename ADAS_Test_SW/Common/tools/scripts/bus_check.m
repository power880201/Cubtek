function varargout = bus_check
% BUS_CHECK
%	To cross check all bus signals between features.
% 
% Usage:
% 	[varlist, features, crossref] = bus_check
%						  varlist = bus_check
%									bus_check
% Bug report: 
%	Wenchuan.Xia@ricardo.com
%

% $Id: bus_check.m 2 2019-09-19 09:28:50Z JuneXmas $

%% DEFINE BLOCKS
features = dragon_modules('bus');

buses = setxor(features, {'outp'});
N = length(buses);

block = setxor(features, {'hal'});
M = length(block);

%% READ BUS OBJECT & VARIABLES
varlist={}; n=0;
buses = upper(buses);
for i=1:N
	% elem = BINP_outputs.Elements;
	elem = evalin('base', ['B' buses{i} '_outputs.Elements']);
	for j=1:length(elem) 
		n=n+1;
		varlist{n,1} = buses{i};
		varlist{n,2} = elem(j).Name;
	end
end

varprop = cell(n,1);
for i=1:n
	varprop{i}=['<' varlist{i,2} '>'];
end

%% SEARCH MODEL LIBRARIES TO FIND BUS SELECTORS

crossref = cell(n,M);
for i=1:M
	reflist={}; m=0;
	mdl = block{i};
	load_system(mdl);
	bs = find_system(mdl, 'FollowLinks', 'on', 'BlockType', 'BusSelector');
	for j=1:length(bs)
		sg=get_param(find_system(bs{j}), 'OutputSignalNames');
		m=m+length(sg);
		reflist = [reflist{:} sg{:}];
	end
	reflist = reflist';
	used = ismember(varprop, reflist);
	crossref(:,i) = num2cell(used);
end

%% OUTPUT TO WORKSPACE
if nargout>3
	error('Too many output arguments.');
elseif nargout==3
	varargout = {varlist(:,2) block crossref};
	return;
elseif nargout==2
	varargout = {varlist(:,2) block};
	return;
elseif nargout==1
	varargout = {varlist(:,2)};
	return;
else % nargout==0
	% do nothing
end

%% WRITE XLS FILE
% prepare a tmp file
pathname = fileparts(mfilename('fullpath'));
srcfile = [pathname '\bus_check.xls'];
xlsfile = [tempname '.xls'];
copyfile(srcfile, xlsfile);

% write header
xlswrite( xlsfile, upper(block),		'BUS_CROSS_CHECK', 'C1')
xlswrite( xlsfile, block,				'BUS_CROSS_CHECK', 'C2')

% clear old contents
[r,c]=size(crossref);
empty_cell=cell(r+200, 2+c);
xlswrite( xlsfile, empty_cell,			'BUS_CROSS_CHECK', 'A3')

%write contents
xlswrite( xlsfile, [varlist crossref],	'BUS_CROSS_CHECK', 'A3')

%open the file
system(['start ' xlsfile]);

end
