function likelihood = attitudeMeasurementPF(particles,measurement)

% Predicted measurement
yHat = particles(:,1);

% Calculate likelihood of each particle based on the error between actual
% and predicted measurement
%
% Assume error is distributed per multivariate normal distribution with
% mean value of zero, variance 1. Evaluate the corresponding probability
% density function
e = bsxfun(@minus, yHat, measurement(:)'); % Error
numberOfMeasurements = 1;
mu = 0; % Mean
Sigma = eye(numberOfMeasurements); % Variance
measurementErrorProd = dot((e-mu), Sigma \ (e-mu), 1);
c = 1/sqrt((2*pi)^numberOfMeasurements * det(Sigma));
likelihood = c * exp(-0.5 * measurementErrorProd);
end