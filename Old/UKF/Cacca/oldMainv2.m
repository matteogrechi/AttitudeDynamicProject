%% Initial condition and data
Q = 1e-4*eye(2);
R = 1e-4*eye(2);
x0Real = [-0.5 0]';
P0 = 1e-4*eye(2);
x0 = x0Real + sqrtm(P0)*randn(size(x0Real));

dt = 0.01;
t = 0:dt:3600;
%% Real dynamics
[~,xReal] = ode113(@(t,x) [-x(2); -9.81*sin(x(1))], t, x0Real);
xReal = xReal';
yReal = xReal + sqrtm(R) * randn(size(xReal));

%% UKF
% Pendulum dynamics
%dt = .01;
%f = @(x) ode113(@(t,x) [-x(2); -9.81*sin(x(1))], [0 dt], x); % x + dt * [x(2); -9.81*sin(x(1))];
% Sensor reading
h = @(x) x;

n = numel(x0);
% Weights coefficient
Wm = 1/(2*n)*ones(1,2*n);
Wc = Wm;

xUKF = zeros(size(xReal));
xUKF(:,1) = x0;
P = P0;
for j=2:numel(t)
    x = xUKF(:,j-1);
    % Time update
    % Generating sigma points
    X = [x + sqrtm(n*P), x-sqrtm(n*P)];
    % Propagating sigma points
    for i=1:size(X,2)
        X(:,i) = f(X(:,i));
    end
    % Status estimate
    xMinus = sum(Wm.*X,2);
    % Compute covariance matrix
    PMinus = avgCov(Wc,X-xMinus,0.5,Q);
    
    % Compute sigma points sensor readings
    Y = zeros(size(X));
    for i=1:size(X,2)
        Y(:,i) = h(X(:,i));
    end
    % Sensor reading estimate
    yMinus = sum(Wm.*Y,2);
    % Correction step
    % Computing Pyy
    Pyy = avgCov(Wc,Y-yMinus,0.5,R);
    
    % Computing Pxy
    Pxy = avgCrossCov(Wc,X-xMinus,Y-yMinus,0.5);
    
    % Computing Kalman gain
    K = Pxy\Pyy;
    % Update measurement
    x = xMinus + K * (yReal(:,j)-yMinus);
    % Update covariance
    P = PMinus - K * Pyy * K';
    
    xUKF(:,j) = x;
end

errReal = max(vecnorm(xUKF - real(xUKF))./vecnorm(real(xUKF)));
xUKF = real(xUKF);
errSol = vecnorm(xUKF-xReal);