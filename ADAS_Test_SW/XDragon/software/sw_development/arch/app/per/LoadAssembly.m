function loadedAssemblies = LoadAssembly(assemblyName)
% LOADASSEMBLY  Loads the specified .NET assembly and all
% its referenced assemblies recursively into MATLAB.
%
%   LOADASSEMBLY(ASSEMBLYNAME) loads the assembly
%   specified by the string ASSEMBLYNAME and its
%   referenced assemblies recursively.
%
%   LOADEDASSEMBLIES = LOADASSEMBLY(ASSEMBLYNAME) loads
%   the assembly specified by the string ASSEMBLYNAME and
%   its referenced assemblies recursively and returns a
%   character array containing the paths of the assemblies
%   that where loaded.
%
%   If the ASSEMBLYNAME is without an extension, it is
%   assumed to specify an assembly from the GAC. If it has
%   an extension, a full path is optional. If the full
%   path is not specified, it must be located in the
%   current directory.
%
%   The referenced assemblies are searched for in the
%   following directories and order:
%   1. the path in ASSEMBLYNAME (if specified),
%   2. the current directory,
%   3. the BASELABS installation path,
%   4. the code base of the assembly,
%   5. the GAC.
%
%   NOTES:
%       In the case of no extension specified, the
%       behavior is similar to NET.addAssembly.
%
%       Baselabs.Core.dll is loaded by default. Its
%       location is determined by the rules mentioned
%       above.
%
%   See also NET.addAssembly

% Copyright 2013 BASELABS GmbH
% $Revision: 1.0.0.0 $ $Date: 2013/08/08 $

filePath = fileparts(assemblyName);
loadCore = true;

if ~isempty(filePath) && exist([filePath '/Baselabs.Core.dll'], 'file') == 2
    coreAssembly = System.Reflection.Assembly.ReflectionOnlyLoadFrom([filePath '/Baselabs.Core.dll']);
elseif exist([pwd '/Baselabs.Core.dll'], 'file') == 2
    coreAssembly = System.Reflection.Assembly.ReflectionOnlyLoadFrom([pwd '/Baselabs.Core.dll']);
else
    loadCore = false;
end

if loadCore 
    corePath = char(coreAssembly.GetName().CodeBase);
    NET.addAssembly(corePath(9:end));
    loadedAssemblyPaths = {corePath(9:end)};
else
    loadedAssemblyPaths = {};
end

try %#ok<TRYNC>
    assembly = System.Reflection.Assembly.ReflectionOnlyLoad(assemblyName);
    if assembly.GlobalAssemblyCache
        NET.addAssembly(assemblyName)
    end
    loadedAssemblies = assembly.CodeBase;
    return;
end

if exist(assemblyName, 'file') == 2
    assembly = System.Reflection.Assembly.ReflectionOnlyLoadFrom(assemblyName);
else
    throw(MException(...
        'Baselabs:LoadAssembly',...
        'The assembly %s could not be found.',...
        assemblyName));
end

[loadedAssemblyNames, loadedAssemblyPaths] = LoadWithReferencedAssemblies(...
    assembly.GetName(),...
    filePath,...
    {char(coreAssembly.FullName)},...
    loadedAssemblyPaths);

loadedAssemblies = char(loadedAssemblyPaths);

end

function [loadedAssemblyNames, loadedAssemblies] = LoadWithReferencedAssemblies(assemblyName, filePath, loadedAssemblyNames, loadedAssemblies)

fullName = char(assemblyName.FullName);
if ~isempty(assemblyName.CodeBase)
    [path, name, ext] = fileparts(char(assemblyName.CodeBase));
    fileName = [name ext];
else
    fileName = [strtok(fullName, ',') '.dll'];
end

if any(strcmp(loadedAssemblyNames, fullName))
    return
end

if ~isempty(filePath) && exist([filePath '/' fileName], 'file') == 2
    assemblyFileName = [filePath '/' fileName];
    assembly = System.Reflection.Assembly.ReflectionOnlyLoadFrom(assemblyFileName);
    
elseif exist([pwd '/' fileName], 'file') == 2
    assemblyFileName = [pwd '/' fileName];
    assembly = System.Reflection.Assembly.ReflectionOnlyLoadFrom(assemblyFileName);
    
elseif ~isempty(assemblyName.CodeBase)
    assembly = System.Reflection.Assembly.ReflectionOnlyLoadFrom(assemblyName.CodeBase);
    
else
    assembly = System.Reflection.Assembly.ReflectionOnlyLoad(assemblyName.FullName);
end
    
loadedAssemblyNames{end+1,1} = fullName;

if(assembly.GlobalAssemblyCache)
    return
end

referencedAssemblyNames = assembly.GetReferencedAssemblies();
for i = 0 : referencedAssemblyNames.Length-1
    [loadedAssemblyNames, loadedAssemblies] = LoadWithReferencedAssemblies(...
        referencedAssemblyNames.Get(i),...
        filePath,...
        loadedAssemblyNames,...
        loadedAssemblies);
end

path = char(assembly.GetName().CodeBase);
try
    NET.addAssembly(path(9:end));
catch exception
    if(isa(exception, 'NET.NetException'))
        if(isa(exception.ExceptionObject, 'System.Reflection.ReflectionTypeLoadException'))
            msg = sprintf('A type load exception occured on loading of %s. Loader exceptions:\n', path(9:end));
            for iException = 0 : exception.ExceptionObject.LoaderExceptions.Length - 1
                msg = [msg char(exception.ExceptionObject.LoaderExceptions.Get(iException).Message) '\n'];
            end
            throw(MException(...
                'Baselabs:LoadAssembly',...
                msg));
        else
            throw(MException(...
                'Baselabs:LoadAssembly',...
                'An exception occured on loading of %s: %s',...
                path(9:end),...
                error.ExceptionObject.Message));
        end
    else
        rethrow(exception);
    end
end

loadedAssemblies{end+1,1} = path(9:end);

end
