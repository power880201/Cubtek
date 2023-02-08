function dragon_tag(tag_name, rev_opt)
% This function is used to create s/w tags for dragon projects.
% For adminstration use only.
%
% Syntax:
%   dragon_tag <TagName> [@Rev]
%
% TagName:
%	(branches|tags)/(blue|red|...)_v(x).(y)_(name)
%
% Example:
%   dragon_tag tags/blue_v2.0  @1200
%   dragon_tag branches/red_v12.99
%

dry_run = 0;
server_root = 'http://192.168.144.254/repos/Dragon';
tag_contents = {
        '%DRAGONNAME%/software', ...
        'Common/tools', ...
        'dragon_start.m', ...
};

if nargin == 0
    help(mfilename);
    return
end

%% Argument check
tag_info = regexp(tag_name, '(\w+)\/(\w+)(_v\d+\.\d+)(.*)', 'tokens');
if isempty(tag_info)
    fprintf('Incorrect Tag Format. Stop.\n');
    fprintf('\n');
    fprintf('TagName: (branches|tags)/(blue|red|...)_v(x).(y)_(name)');
    fprintf('\n');
    fprintf('\n');
    return;
end

[loc, rgb, ver, rev] = tag_info{1}{:};

if exist('rev_opt', 'var')
    at_rev = rev_opt;
else
    at_rev = '';
end

%% Check Tag Location
if ~strcmp(loc, 'tags') && ~strcmp(loc, 'branches')
    error('Tag neither branches or tags');
end

%% Check Dragon Color
if ~strcmp(rgb, 'blue') && ~strcmp(rgb, 'red')
    error('Unknown dragon: %s', upper(rgb));
end

%% Check if the tag is for correct Dragon
dragon_root = dragon_flying('droot');
[p, dragon_name]=fileparts(dragon_root);
if isempty(strmatch(rgb, lower(dragon_name)))
    fprintf('Unable to create tag for %s Dragon when %s is loaded. Stop.\n', upper(rgb), dragon_name);
    return;
end

%% Prepare Tag Directories
svn_root = dragon_flying('root');

tag_root = fullfile(svn_root, loc, [rgb ver rev]);
if exist(tag_root, 'dir')
    fprintf('Tag already exist. Stop.\n');
    return;
end
mkdir(fullfile(tag_root, 'Common'));
mkdir(fullfile(tag_root, dragon_name));

%% Commit Tag Directories
old_dir = chdir(svn_root);

try %#ok<TRYNC>
	cmd = sprintf('svn add %s', tag_name);									look(cmd);
	if ~dry_run
		[e, m] = system(cmd);	disp(m);
	end
end

try %#ok<TRYNC>
	commit_log = sprintf('[AUTO-TAG] create tag directory %s', tag_name);
	cmd = sprintf('svn commit %s -m "%s"', tag_name, commit_log);			look(cmd);
	if ~dry_run
		[e, m] = system(cmd);	disp(m);
	end	
end

chdir(old_dir);

%% Server side copy
for i=1:length(tag_contents)
    tag_content = strrep(tag_contents{i}, '%DRAGONNAME%', dragon_name);

	trunk_url = sprintf('%s/trunk/%s%s', server_root, tag_content, at_rev);
	tag_url   = sprintf('%s/%s/%s', server_root, tag_name, tag_content);
	
	commit_log = sprintf('[AUTO-TAG] tag %s', tag_content);
	
	cmd = sprintf('svn copy %s %s -m "%s"', trunk_url, tag_url, commit_log); look(cmd);

	if ~dry_run
        [e, m] = system(cmd);	disp(m);
	end
end


%%
function look(str)
disp(' ');
disp(['### ' str]);
disp(' ');

