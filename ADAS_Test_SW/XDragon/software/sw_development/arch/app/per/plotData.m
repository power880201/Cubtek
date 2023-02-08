function plotData(tracks, frontRadarFar, frontRadarNear, objects, obstacles, figureHandle)

subplot(figureHandle);

%delete old drawings
childs = findobj(figureHandle, 'tag', 'birdsEyePlot');
if ~isempty(childs)
    delete(childs);
end

convertedNearRadar = convertNearRadar(frontRadarNear);
N=size(frontRadarNear,1);
isNearTargetPresent = false;
for i=1:N
    if isnan(convertedNearRadar(i,1))
        break;
    end
    cnr(i) = plot(convertedNearRadar(i,1),convertedNearRadar(i,2), 'go', 'tag', 'birdsEyePlot');  
    isNearTargetPresent = true;
end
if(~isNearTargetPresent)
    cnr(1) = plot(0,0, 'go', 'tag', 'birdsEyePlot');
    set(cnr, 'Visible', 'off');
end
nr=hggroup;
set(cnr,'Parent',nr);
set(nr,'Displayname','Near Targets');

convertedFarRadar = convertFarRadar(frontRadarFar);
N=size(frontRadarFar,1);
isFarTargetPresent = false;
for i=1:N
    if isnan(convertedFarRadar(i,1))
        break;
    end
     cnf(i) = plot(convertedFarRadar(i,1),convertedFarRadar(i,2), 'yo', 'tag', 'birdsEyePlot');  
     isFarTargetPresent = true;
end
if(~isFarTargetPresent)
    cnf(1) = plot(0,0, 'yo', 'tag', 'birdsEyePlot');
    set(cnf, 'Visible', 'off');
end
nf=hggroup;
set(cnf,'Parent',nf);
set(nf,'Displayname','Far Targets');

convertedObjects = convertObjects(objects);
N=convertedObjects.count;
isObjectPresent = false;
for i=1:N
     o(i) = plot(convertedObjects.x(i),convertedObjects.y(i), 'm*', 'tag', 'birdsEyePlot');  
     isObjectPresent = true;
end
if(~isObjectPresent)
    o(1) = plot(0,0, 'm*', 'tag', 'birdsEyePlot');
    set(o, 'Visible', 'off');
end
ob=hggroup;
set(o,'Parent',ob);
set(ob,'Displayname','Objects');

convertedObstacles = convertObstacles(obstacles);
N=convertedObstacles.count;
isObstaclePresent = false;
for i=1:N
    obs(i) = plot(convertedObstacles.x(i),convertedObstacles.y(i), 'cx', 'tag', 'birdsEyePlot');  
    isObstaclePresent = true;
end
if(~isObstaclePresent)
    obs(1) = plot(0,0, 'cx', 'tag', 'birdsEyePlot');
    set(obs, 'Visible', 'off');
end
obst=hggroup;
set(obs,'Parent',obst);
set(obst,'Displayname','Obstacles');

N=tracks.count;
theta = linspace(0,2*pi,100);
isTrackPresent = false;
for i=1:N
    plot(tracks.x(i),tracks.y(i), 'bs', 'tag', 'birdsEyePlot');
        
    % -------------------------------------- cov ellipse
    a = tracks.majorAxis(i); %major semi axis
    b = tracks.minorAxis(i); %minor semi axis
    
    p(1,:) = a*cos(theta);
    p(2,:) = b*sin(theta);

    phi = tracks.angle(i);
    Q = [cos(phi) -sin(phi)
        sin(phi)  cos(phi)];
    p = Q*p;
    p(1,:) = p(1,:) + tracks.x(i);
    p(2,:) = p(2,:) + tracks.y(i);
    
    tr(i) = plot(p(1,:),p(2,:),'b', 'tag', 'birdsEyePlot');     
    isTrackPresent = true;
end
if(~isTrackPresent)
    tr(1) = plot(0,0, 'b', 'tag', 'birdsEyePlot');
    set(tr, 'Visible', 'off');
end
trc=hggroup;
set(tr,'Parent',trc);
set(trc,'Displayname','Tracks');

legend([nf, nr, ob, obst, trc],'Location', 'southwest')
end

