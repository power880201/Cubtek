function plotTracksInImage( tracks, figureHandle)
persistent TrackWidth;
persistent TrackHeight;
persistent videoParameters;


if isempty(videoParameters) 
    TrackWidth = 1.7;
    TrackHeight = 1.6; 
    matrix = NET.createArray('System.Double', 12);
    matrixtemp = [-390.962537433366 641.918125065502 -39.0087097144271 709.475429232936...
            -350.927092806253 -5.51844640889026 577.221602005213 -213.863037502177...
            -0.471712238054036 -0.0132585098166 -0.0434444421454742 1];
    
    for i = 1:size(matrixtemp, 2);
        matrix(i) = matrixtemp(i);
    end;
    matrixName = System.String('Camera');
    videoParameters = Baselabs.Algorithms.CameraCalibration.CameraCalibration(Baselabs.Algorithms.CameraCalibration.CameraCalibrationMatrix(matrix, matrixName));
%     resolutionX = videoParameters.ResolutionX;
%     resolutionY = videoParameters.ResolutionY;
end

subplot(figureHandle);

%delete old rectangles
axesHandlesToChildObjects = findobj(figureHandle, 'Type', 'rectangle');
if ~isempty(axesHandlesToChildObjects)
	delete(axesHandlesToChildObjects);
end

N=tracks.count;
for i=1:N
    topLeft = videoParameters.WorldToImage(tracks.x(i),...
                tracks.y(i) + TrackWidth / 2.0,...
                TrackHeight);
    bottomRight = videoParameters.WorldToImage(tracks.x(i),...
                tracks.y(i) - TrackWidth / 2.0,...
                0);
    width = bottomRight.X-topLeft.X;
    height = bottomRight.Y-topLeft.Y;
    if(width>0 && height >0)
        rectangle('Position',[topLeft.X topLeft.Y (bottomRight.X-topLeft.X) (bottomRight.Y-topLeft.Y)], 'LineWidth',2, 'EdgeColor','r');
    end
end
            
end