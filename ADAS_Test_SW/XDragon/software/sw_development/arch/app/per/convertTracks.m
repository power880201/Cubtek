function convertedTracks = convertTracks( dotNetTracks )
% converts tracks to matrix representation

MinExistenceProbability = 0.99;

convertedTracks = struct('count', uint8(0), 'id', uint32(zeros(30,1)), 'x',zeros(30,1),...
    'y', zeros(30,1), 'g', zeros(30,1), 'v', zeros(30,1),...
    'angle', zeros(30,1), 'majorAxis', zeros(30,1), 'minorAxis', zeros(30,1));
convertedTracksCount = uint8(1);

for i = 1 : dotNetTracks.Count
    track = dotNetTracks.Item(i-1);  

    if (track.Existence.ExistenceProbability < MinExistenceProbability)
        continue; 
    end
    convertedTracks.count = convertedTracksCount;
    convertedTracks.id(convertedTracksCount) = track.ID;
    convertedTracks.x(convertedTracksCount) = track.State.Expectation.X;
    convertedTracks.y(convertedTracksCount) = track.State.Expectation.Y;
    convertedTracks.g(convertedTracksCount) = track.State.Expectation.G;
    convertedTracks.v(convertedTracksCount) = track.State.Expectation.V;

    ellipseParameters = getCovarianceEllipseParameters(track.State.Covariance);
  
    convertedTracks.angle(convertedTracksCount) = ellipseParameters(1); %angle
    convertedTracks.majorAxis(convertedTracksCount) = ellipseParameters(2); %major semi axis
    convertedTracks.minorAxis(convertedTracksCount) = ellipseParameters(3); %minor semi axis
    convertedTracksCount = convertedTracksCount + 1;
end

end

