function [ showMsg ] = underscoreToSlashUnderscore( ipMsg )
%UNDERSCORETOSLASHUNDERSCORE Summary of this function goes here
%   Detailed explanation goes here
m = ipMsg; 
o = ipMsg; % output; 
oc = 1; 
for n = 1:length(m)
    if (m(n) == '_')
        o(oc:oc+1) = '\_';
        oc = oc + 2; 
    elseif (m(n) == '^')
        o(oc:oc+1) = '\^';
        oc = oc + 2; 
    else
        o(oc) = m(n); 
        oc = oc + 1; 
    end
end
showMsg = o; 

end
