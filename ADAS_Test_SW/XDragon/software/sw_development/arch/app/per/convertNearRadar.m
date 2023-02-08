function convertedNearRadar = convertNearRadar(radar)
persistent frontRadarNearParameters;
persistent rotZ;
persistent posX;
persistent posY;

if isempty(frontRadarNearParameters)
    frontRadarNearParameters = createFrontRadarNearParameters();
    rotZ = frontRadarNearParameters.RotationZ;
    posX =  frontRadarNearParameters.PositionX;
    posY =  frontRadarNearParameters.PositionY;
end

convertedNearRadar = NaN(90, 3);
for index = 1 : 90
    if isnan(radar(index, 1))
        break;
    end
    range = radar(index,2);
    angle = radar(index,3);
    rangeRate = radar(index,4);
     %polar to cartesian
    radarX = range * cos(angle);
    radarY = range * sin(angle);
    %sensor to vehicle coordinate system
    x = radarX * cos(rotZ) - radarY * sin(rotZ) + posX;
    y = radarX * sin(rotZ) + radarY * cos(rotZ) + posY;
    convertedNearRadar(index,:) = [x,y,rangeRate];
end
end

