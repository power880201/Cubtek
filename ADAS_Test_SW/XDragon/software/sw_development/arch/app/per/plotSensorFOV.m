function plotSensorFOV()

% Vehicle dimensions
EGO_LENGTH = 3.928; % [m] Axle distance + axle to front. TODO fix length
EGO_WIDTH = 2.029; % [m] Vehicle width.

% Camera
CAMERA_RANGE = 80; % [m] camera radial range.
CAMERA_HORIZONTALFOV = 50; % [deg] camera lobe horizontal width.
% [m] Sensor position relative to center of vehicle front bumper.
CAMERA_POS = [0 0 0]; % [X Y Z] in vehicle coordinate system. %TODO get position from sensor properties
CAMERA_ANGLE = 0; % [deg] Sensor boresight angle relative to vehicle boresight.

% Front radar
LR_RANGE = 200; % [m] ESR mid range radial range.
LR_HORIZONTALFOV = 18; % [deg] ESR mid range lobe horizontal width.
% [m] Sensor position relative to center of vehicle front bumper.
LR_POS = [0 0 0]; % [X Y Z] in vehicle coordinate system. %TODO get position from sensor properties
LR_ANGLE = 0; % [deg] Sensor boresight angle relative to vehicle boresight.

% Front radar ESR
plotfovtopview(CAMERA_POS, CAMERA_ANGLE, CAMERA_RANGE, CAMERA_HORIZONTALFOV, [181, 188, 191]/255);
plotfovtopview(LR_POS, LR_ANGLE, LR_RANGE, LR_HORIZONTALFOV, [ 192, 0, 25]/255);

% Plot car
patch([0 0 -EGO_LENGTH -EGO_LENGTH], [-EGO_WIDTH/2 EGO_WIDTH/2 EGO_WIDTH/2 -EGO_WIDTH/2],  [0, 0, 0], 'facealpha',0.19);

end


function plotfovtopview(sensorpos, direction, range, openingangle, color)

sensorx = sensorpos(1);
sensory = sensorpos(2);
direction = direction + 90;

plotfov(sensorx, sensory, direction, range, openingangle, color)

end

function plotfov(sensorx, sensory, direction, range, openingangle, color)

% Mark sensor position.
plot(sensorx, sensory, '+g');
% Plot sensor FOV.
angles = (direction -openingangle/2):0.1:(direction + openingangle/2);
arcx = sensorx + range * sind(angles);
arcy = sensory + range * cosd(angles);
patch([sensorx arcx sensorx], [sensory arcy sensory], color, 'facealpha',0.5, 'EdgeColor','None');
end

