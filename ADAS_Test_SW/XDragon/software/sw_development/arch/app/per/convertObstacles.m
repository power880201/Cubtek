function convertedObstacles = convertObstacles(obstacles)
persistent mobilEyeParameters;
persistent rotZ;
persistent posX;
persistent posY;

if isempty(mobilEyeParameters)
    mobilEyeParameters = createMobilEyeParameters();
    rotZ = mobilEyeParameters.RotationZ;
    posX =  mobilEyeParameters.PositionX;
    posY =  mobilEyeParameters.PositionY;
end

timestampCount = obstacles.timestampCount;
if(timestampCount>0)
    count = obstacles.obstacleCount(timestampCount);
    convertedObstacles = struct('count', count, 'x', zeros(count,1), 'y', zeros(count,1));

    for index = 1 : count
        convertedObstacles.x(index) = obstacles.x(timestampCount, index) + posX;
        convertedObstacles.y(index) = obstacles.y(timestampCount, index) + posY;
    end

else
    convertedObstacles = struct('count', 0, 'x', zeros(1,1), 'y', zeros(1,1));
end

end