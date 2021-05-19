function [outputArg1,outputArg2] = timeUpdate(f,h,x,P)
%TIMEUPDATE Summary of this function goes here
%   Detailed explanation goes here


Wm = 1/(2*numel(x))*ones(size(x));
Wc = Wm;


% Calculate sigma points
X = x + sqrtm(n*P);
X = [X x-sqrtm(n*P)];
% Propagating sigma points
for i=1:size(X,2)
	X(:,i) = f(X(:,i));
end
% Status estimate
xMinus = sum(diag(Wm)*X,2);
% Compute covariance matrix
PMinus = Wc(1) * (X(:,1)-xMinus)*(X(:,1)-xMinus)';
for i=2:numel(x)
    PMinus = PMinus + Wc(i) * (X(:,i)-xMinus)*(X(:,i)-xMinus)';
end
% Compute sigma points sensor readings
Y = zeros(size(X));
for i=1:size(X,2)
    Y(:,i) = h(X(:,i));
end
% Sensor reading estimate
yMinus = sum(diag(Wm)*Y,2);
end

