function convertedObjects = convertObjects(objects)

persistent objectSensorParameters;
persistent rotZ;
persistent posX;
persistent posY;

if isempty(objectSensorParameters)
    objectSensorParameters = createObjectSensorParameters();
    rotZ = objectSensorParameters.RotationZ;
    posX =  objectSensorParameters.PositionX;
    posY =  objectSensorParameters.PositionY;
end

timestampCount = objects.timestampCount;
if(timestampCount>0)
    count = objects.objectCount(timestampCount);
    convertedObjects = struct('count', count, 'x', zeros(count,1), 'y', zeros(count,1));

    for index = 1 : count
        convertedObjects.x(index) = objects.x(timestampCount, index) + posX;
        convertedObjects.y(index) = objects.y(timestampCount, index) + posY;
    end
else
    convertedObjects = struct('count', 0, 'x', zeros(1,1), 'y', zeros(1,1));
end

end

