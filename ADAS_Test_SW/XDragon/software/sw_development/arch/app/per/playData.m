function [img, velocity, yawRate, frontRadarFar, frontRadarNear, objects, obstacles] = playData(time, filepath)
persistent reader;
persistent indexEnumerator;
persistent globalFirstTime;
persistent elementPresent;

persistent obstacleId;
persistent imageId;
persistent velocityId;
persistent yawRateId;
persistent nearTargetId;
persistent farTargetId;
persistent objectId;

persistent cameraImageId;
persistent sensorObstacleId;
persistent sensorVelocityId;
persistent sensorYawRateId;
persistent sensorNearTargetId;
persistent sensorFarTargetId;
persistent sensorObjectId;

if isempty(indexEnumerator)
    path = char(filepath);
    LoadAssembly('BASELABS Assemblies\Baselabs.Data.Imaging.dll'); 
    LoadAssembly('BASELABS Assemblies\HAITEC.MOT.Sensors.dll'); 
    LoadAssembly('BASELABS Assemblies\HAITEC.MOT.EnumeratorWrapper.dll');
        
    reader = Baselabs.Streaming.Binary.StreamReader(path);
    assert(~isempty(reader))
    reader.Open();
    indexEnumerator = HAITEC.MOT.EnumeratorWrapper.EnumeratorWrapper(reader.Index.GetEnumerator());
     if(indexEnumerator.MoveNext())
        globalFirstTime = indexEnumerator.Current.AbsoluteMeasurementTime.Ticks;
        elementPresent = true;                
    else
        img=uint8(zeros(1200,1600,3));
        velocity = struct('count', uint8(0), 'timestamp', uint32(zeros(30,1)), 'velocity', zeros(30,1)); 
        yawRate = struct('count', uint8(0), 'timestamp', uint32(zeros(30,1)), 'yawRate', zeros(30,1));
        objects = struct('timestampCount', uint8(0), 'timestamp', uint32(zeros(60,1)),...
            'objectCount', uint8(zeros(60,1)),'x', zeros(60,40), 'y', zeros(60,40),...
            'vx', zeros(60,40), 'vy', zeros(60,40), 'rollingCounter', uint8(zeros(60,40)),...
            'id', uint8(zeros(60,40)), 'ax', zeros(60,40), 'existenceProbability', zeros(60,40),...
            'dynamicProperty', uint8(zeros(60,40)), 'length', zeros(60,40), 'width', zeros(60,40),...
            'measurementStatus', uint8(zeros(60,40)) , 'rcsValue', zeros(60,40),...
            'obstacleProbability', zeros(60,40));
        obstacles = struct('timestampCount', uint8(0), 'timestamp', uint32(zeros(60,1)),...
            'obstacleCount', uint8(zeros(60,1)), 'x', zeros(60,10), 'y', zeros(60,10),...
            'vx', zeros(60,10), 'vy', zeros(60,10), 'id', uint8(zeros(60,10)),...
            'obstacleType', uint8(zeros(60,10)),'obstacleStatus', uint8(zeros(60,10)),...
            'length', zeros(60,10), 'width', zeros(60,10),'angleRate', zeros(60,10),...
            'ax', zeros(60,10), 'angle', zeros(60,10), 'obstacleTimestamp', uint8(zeros(60,10)),...
            'cipvFlag', false(60,10));
        frontRadarFar = NaN(90,4);
        frontRadarNear = NaN(90,4);
        return;
     end
    
    obstacleId = -1;
    imageId = -1;
    velocityId = -1;
    yawRateId = -1;
    nearTargetId = -1;
    farTargetId = -1;
    objectId = -1;

    cameraImageId = -1;
    sensorObstacleId = -1;
    sensorVelocityId = -1;
    sensorYawRateId = -1;
    sensorNearTargetId = -1;
    sensorFarTargetId = -1;
    sensorObjectId = -1;

    dataChannels = NET.invokeGenericMethod('System.Linq.Enumerable', 'ToArray', {'Baselabs.Components.DataChannel'}, reader.Channels);
    for index = 1 : dataChannels.Length
        dataChannel = dataChannels(index);
        if(dataChannel.Name.Contains('HAITEC.MOT.App.ImageCompressor, {none}, Image') || ...
             dataChannel.Name.Contains('HAITEC.MOT.App.Player, {none}, Image')   )
            imageId = dataChannel.Id;
        elseif(dataChannel.Name.Contains('Baselabs.Components.Acquisition.Camera.Generic.Camera, {none}, Image'))
            cameraImageId = dataChannel.Id;
        elseif(dataChannel.Name.Contains('HAITEC.MOT.EgoMotion.Parser, EgoMotion Parser, Velocity'))
            velocityId = dataChannel.Id;   
        elseif(dataChannel.Name.Contains('HAITEC.MOT.EgoMotion.Sensor, EgoMotion, Velocity'))
            sensorVelocityId = dataChannel.Id;   
        elseif(dataChannel.Name.Contains('HAITEC.MOT.EgoMotion.Parser, EgoMotion Parser, Yawrate'))
           yawRateId = dataChannel.Id; 
        elseif(dataChannel.Name.Contains('HAITEC.MOT.EgoMotion.Sensor, EgoMotion, Yawrate'))
           sensorYawRateId = dataChannel.Id; 
        elseif(dataChannel.Name.Contains('HAITEC.MOT.ARS308.Targets.Parser, Target Parser, Far Targets'))
           farTargetId = dataChannel.Id;   
        elseif(dataChannel.Name.Contains('HAITEC.MOT.ARS308.Sensor, ARS 308, Far Targets'))
           sensorFarTargetId = dataChannel.Id;
        elseif(dataChannel.Name.Contains('HAITEC.MOT.ARS308.Targets.Parser, Target Parser, Near Targets'))
           nearTargetId = dataChannel.Id;
        elseif(dataChannel.Name.Contains('HAITEC.MOT.ARS308.Sensor, ARS 308, Near Targets'))
           sensorNearTargetId = dataChannel.Id;
        elseif(dataChannel.Name.Contains('HAITEC.MOT.ARS308.Objects.Parser, Object Parser, Objects'))
           objectId = dataChannel.Id;
        elseif(dataChannel.Name.Contains('HAITEC.MOT.ARS308.Sensor, ARS 308, Objects'))
           sensorObjectId = dataChannel.Id;
        elseif(dataChannel.Name.Contains('HAITEC.MOT.MobilEye.Parser, MobilEye Parser, Obstacles'))
           obstacleId = dataChannel.Id; 
        elseif(dataChannel.Name.Contains('HAITEC.MOT.MobilEye.Sensor, MobilEye, Obstacles'))
           sensorObstacleId = dataChannel.Id; 
        end
    end
end

currentTime = globalFirstTime + (time * 10000 * 1000);
imageElement ='';
frontRadarFar = NaN(90,4);
frontRadarFarCount = 1;
frontRadarNear = NaN(90,4);
frontRadarNearCount = 1;

velocityCount = uint8(1);
yawRateCount=uint8(1);
objectsRowCount = 0;
obstaclesRowCount = 0;

velocity = struct('count', uint8(0), 'timestamp', uint32(zeros(30,1)), 'velocity', zeros(30,1)); 
yawRate = struct('count', uint8(0), 'timestamp', uint32(zeros(30,1)), 'yawRate', zeros(30,1));
objects = struct('timestampCount', uint8(0), 'timestamp', uint32(zeros(60,1)),...
    'objectCount', uint8(zeros(60,1)),'x', zeros(60,40), 'y', zeros(60,40),...
    'vx', zeros(60,40), 'vy', zeros(60,40), 'rollingCounter', uint8(zeros(60,40)),...
    'id', uint8(zeros(60,40)), 'ax', zeros(60,40), 'existenceProbability', zeros(60,40),...
    'dynamicProperty', uint8(zeros(60,40)), 'length', zeros(60,40), 'width', zeros(60,40),...
    'measurementStatus', uint8(zeros(60,40)) , 'rcsValue', zeros(60,40),...
    'obstacleProbability', zeros(60,40));
obstacles = struct('timestampCount', uint8(0), 'timestamp', uint32(zeros(60,1)),...
    'obstacleCount', uint8(zeros(60,1)), 'x', zeros(60,10), 'y', zeros(60,10),...
    'vx', zeros(60,10), 'vy', zeros(60,10), 'id', uint8(zeros(60,10)),...
    'obstacleType', uint8(zeros(60,10)),'obstacleStatus', uint8(zeros(60,10)),...
    'length', zeros(60,10), 'width', zeros(60,10),'angleRate', zeros(60,10),...
    'ax', zeros(60,10), 'angle', zeros(60,10), 'obstacleTimestamp', uint8(zeros(60,10)),...
    'cipvFlag', false(60,10));


while (elementPresent)
    currentDataKey = indexEnumerator.Current;
    if(currentDataKey.AbsoluteMeasurementTime.Ticks > currentTime)
        break;
    end
    if(currentDataKey.ChannelId == imageId || currentDataKey.ChannelId == cameraImageId)
        imageElement = reader.GetData(currentDataKey);
        
    elseif(currentDataKey.ChannelId == velocityId || currentDataKey.ChannelId == sensorVelocityId)
        velocity.count = velocityCount;
        velocity.timestamp(velocityCount) = uint32(currentDataKey.AbsoluteMeasurementTime.Ticks - globalFirstTime);
        velocity.velocity(velocityCount) = reader.GetData(currentDataKey).Value;
        velocityCount = velocityCount + 1;
    
    elseif(currentDataKey.ChannelId == yawRateId || currentDataKey.ChannelId == sensorYawRateId)
        yawRate.count = yawRateCount;
        yawRate.timestamp(yawRateCount) =  uint32(currentDataKey.AbsoluteMeasurementTime.Ticks - globalFirstTime);
        yawRate.yawRate(yawRateCount) = reader.GetData(currentDataKey).Value;
        yawRateCount = yawRateCount + 1;
        
    elseif(currentDataKey.ChannelId == farTargetId || currentDataKey.ChannelId == sensorFarTargetId)
        farTargetTime = currentDataKey.AbsoluteMeasurementTime.Ticks;
        farTargets = reader.GetData(currentDataKey);
        for index = 0 : farTargets.Count-1
            frontRadarFar(frontRadarFarCount,1) = farTargetTime - globalFirstTime;
            frontRadarFar(frontRadarFarCount,2) = farTargets.Item(index).Range;
            frontRadarFar(frontRadarFarCount,3) = farTargets.Item(index).Angle;
            frontRadarFar(frontRadarFarCount,4) = farTargets.Item(index).RelativeVelocity;
            frontRadarFarCount = frontRadarFarCount + 1;
        end
            
    elseif(currentDataKey.ChannelId == nearTargetId || currentDataKey.ChannelId == sensorNearTargetId)
        nearTargetTime = currentDataKey.AbsoluteMeasurementTime.Ticks;
        nearTargets = reader.GetData(currentDataKey);
        for index = 0 : nearTargets.Count-1
            frontRadarNear(frontRadarNearCount,1) = nearTargetTime - globalFirstTime;
            frontRadarNear(frontRadarNearCount,2) = nearTargets.Item(index).Range;
            frontRadarNear(frontRadarNearCount,3) = nearTargets.Item(index).Angle;
            frontRadarNear(frontRadarNearCount,4) = nearTargets.Item(index).RelativeVelocity;
            frontRadarNearCount = frontRadarNearCount + 1;
        end
            
     elseif(currentDataKey.ChannelId == objectId || currentDataKey.ChannelId == sensorObjectId)
        objectsTime = currentDataKey.AbsoluteMeasurementTime.Ticks;
        currentObjects = reader.GetData(currentDataKey);
        if(currentObjects.Count >0)
            objectsRowCount = objectsRowCount + 1;
            objects.timestampCount = uint8(objectsRowCount);
            objects.timestamp(objectsRowCount) = uint32(objectsTime - globalFirstTime);
            objects.objectCount(objectsRowCount) = currentObjects.Count;
            for index = 0 : currentObjects.Count-1
                objects.x(objectsRowCount, index+1) = currentObjects.Item(index).LongitudinalDisplacement;
                objects.y(objectsRowCount, index+1) = currentObjects.Item(index).LateralDisplacement;
                objects.vx(objectsRowCount, index+1) = currentObjects.Item(index).RelativeLongitudinalVelocity;
                objects.vy(objectsRowCount, index+1) = currentObjects.Item(index).LateralSpeed;    
                objects.rollingCounter(objectsRowCount, index+1) = uint8(currentObjects.Item(index).RollingCounter);
                objects.id(objectsRowCount, index+1) = uint8(currentObjects.Item(index).ID);
                objects.ax(objectsRowCount, index+1) = currentObjects.Item(index).AccelerationLongitudinal;
                objects.existenceProbability(objectsRowCount, index+1) = currentObjects.Item(index).ProbabilityOfExistance;
                objects.dynamicProperty(objectsRowCount, index+1) = uint8(double(currentObjects.Item(index).DynamicProperty));
                objects.length(objectsRowCount, index+1) = currentObjects.Item(index).Length;
                objects.width(objectsRowCount, index+1) = currentObjects.Item(index).Width;
                objects.measurementStatus(objectsRowCount, index+1) = uint8(double(currentObjects.Item(index).MeasurementStatus));
                objects.rcsValue(objectsRowCount, index+1) = currentObjects.Item(index).RCSValue;
                objects.obstacleProbability(objectsRowCount, index+1) = currentObjects.Item(index).ObstacleProbability;
            end
        end
            
     elseif(currentDataKey.ChannelId == obstacleId || currentDataKey.ChannelId == sensorObstacleId)
        obstaclesTime = currentDataKey.AbsoluteMeasurementTime.Ticks;
        currentObstacles = reader.GetData(currentDataKey);
        if(currentObstacles.Length >0)
            obstaclesRowCount = obstaclesRowCount + 1;
            obstacles.timestampCount = uint8(obstaclesRowCount);
            obstacles.timestamp(obstaclesRowCount) = uint32(obstaclesTime-globalFirstTime);
            obstacles.obstacleCount(obstaclesRowCount) = currentObstacles.Length;
            for index = 1 : currentObstacles.Length                        
                obstacles.x(obstaclesRowCount, index)=currentObstacles(index).PositionX;
                obstacles.y(obstaclesRowCount, index)=currentObstacles(index).PositionY;
                obstacles.vx(obstaclesRowCount, index)=currentObstacles(index).VelocityX;
                obstacles.vy(obstaclesRowCount, index)=currentObstacles(index).VelocityY;
                obstacles.id(obstaclesRowCount, index)=uint8(currentObstacles(index).Id);
                obstacles.obstacleType(obstaclesRowCount, index) ...
                    = uint8(double(currentObstacles(index).ObstacleType));
                obstacles.obstacleStatus(obstaclesRowCount, index)...
                    = uint8(double(currentObstacles(index).ObstacleStatus));
                obstacles.length(obstaclesRowCount, index)=currentObstacles(index).Length;
                obstacles.width(obstaclesRowCount, index)=currentObstacles(index).Width;
                obstacles.angleRate(obstaclesRowCount, index)= currentObstacles(index).AngleRate;
                obstacles.ax(obstaclesRowCount, index)=currentObstacles(index).AccelerationX;
                obstacles.angle(obstaclesRowCount, index)=currentObstacles(index).Angle;
                obstacles.obstacleTimestamp(obstaclesRowCount, index)=uint8(currentObstacles(index).Timestamp);
                obstacles.cipvFlag(obstaclesRowCount, index)=currentObstacles(index).CIPVFlag;
            end
        end
    end
    elementPresent = indexEnumerator.MoveNext();
end

if(isempty(imageElement))
    img = uint8(zeros(1200,1600,3));
    return;
end

img = imageElement.PixelData();
img = uint8(img);
w = imageElement.Width;
h = imageElement.Height;         

b = reshape(img(1:3:end), [w,h])';
g = reshape(img(2:3:end), [w,h])';
r = reshape(img(3:3:end), [w,h])';
img = cat(3, r,g,b);

end

