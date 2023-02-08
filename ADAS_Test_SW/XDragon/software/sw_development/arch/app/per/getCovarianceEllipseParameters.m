function CovarianceEllipseParameters = getCovarianceEllipseParameters( covariance )
% getCovarianceEllipseParameters gets the covariance ellipse of a given covariance
% CovarianceEllipseParameters is row vector of [angle, major semi axis, minor semi axis]

MahalanobisDistance = 10;
d1 = covariance.Item(0,0); %TODO should be done via indices of CVSpace
d2 = covariance.Item(1,1);
num1 = sqrt(d1);
num2 = sqrt(d2);
num3 = covariance.Item(0,1) / (num1 * num2);
num4 = atan2(2.0 * num3 * num1 * num2, d1 - d2) / 2.0;
num5 = cos(num4) * cos(num4);
num6 = sin(num4) * sin(num4);
num7 = 1.0 - num3 * num3;
num8 = 2.0 * num3 * sin(num4) * cos(num4) / (num1 * num2);

angle = num4;
majorAxis = MahalanobisDistance * sqrt(num7 / (num5 / d1 - num8 + num6 / d2));
minorAxis = MahalanobisDistance * sqrt(num7 / (num6 / d1 + num8 + num5 / d2));

CovarianceEllipseParameters = [angle,majorAxis,minorAxis];

end
