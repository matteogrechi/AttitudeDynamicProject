x = [0 0]';
P = 1e-2*eye(2);

f = @(x) exp(x);
h = @(x) atanh(sinh(x));

n = numel(x);
% Weights coefficient
Wm = 1/(2*numel(x))*ones(size(x));
Wc = Wm;
%% Time update
% Generating sigma points
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
%% Measurement update
% Computing Pyy
Pyy = Wc(1) * (Y(:,1)-yMinus)*(Y(:,1)-yMinus)';
for i=2:size(Y,2)
    Pyy = Wc(i) * (Y(:,1)-yMinus)*(Y(:,1)-yMinus)';
end
% Computing Pxy
Pxy = Wc(1) * (X(:,1)-xMinus)*(Y(:,1)-yMinus)';
for i=2:size(Y,2)
    Pyy = Wc(i) * (X(:,1)-xMinus)*(Y(:,1)-yMinus)';
end
% Computing Kalman gain
K = Pxy\Pyy;
% Update measurement
x = xMinus + K * (y-yMinus);
% Update covariance
P = PMinus - K * Pyy * K';