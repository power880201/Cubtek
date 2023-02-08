function appDir = getapplicationdatadir(appicationName, local)
%GETAPPLICATIONDATADIR   return the application data directory.
%   APPDIR = GETAPPLICATIONDATADIR(APPICATIONNAME, DOCREATE, LOCAL) returns
%   the application's data directory using the registry on windows systems
%   or using Java on non windows systems as a string 
%   APPICATIONNAME  should be a worldwide unique application name - using
%                   the web domain name as part of the name is a
%                   appropriate method, hierarchical naming is possible cf.
%                   examples
%   LOCAL           boolean, if true the local, i.e. the machine related,
%                   application data directory is returned 
%                   - this argument is ignored on non windows
%                   operating systems
%
%   Examples:
%       getapplicationdatadir('Test', false)
%   returns on windows
%       C:\Documents and Settings\MYNAME\Application Data\Test
%
%       getapplicationdatadir(...
%           fullfile('com','mathworks','companyUnique1',''), true)
%   returns on windows
%       C:\Documents and Settings\MYNAME\Local Settings\Application
%       Data\com\mathworks\companyUnique1
if ispc
    if local
        allAppDir = winqueryreg('HKEY_CURRENT_USER',...
            ['Software\Microsoft\Windows\CurrentVersion\' ...
            'Explorer\Shell Folders'],'Local AppData');
    else
        allAppDir = winqueryreg('HKEY_CURRENT_USER',...
            ['Software\Microsoft\Windows\CurrentVersion\' ...
            'Explorer\Shell Folders'],'AppData');
    end
    appDir = fullfile(allAppDir, appicationName,[]);
else
    allAppDir = char(java.lang.System.getProperty('user.home'));
    appDir = fullfile(allAppDir, ['~' appicationName],[]);
end
