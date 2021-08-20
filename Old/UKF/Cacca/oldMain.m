%% Initial condition and data
Q = zeros(2);
R = 1e-4*eye(2);
x0Real = [-0.5 0]';
P0 = 1e-4*eye(numel(x0Real));
x0 = x0Real + P0*randn(size(x0Real));

%% Equations
% Pendulum dynamics
dt = .01;
%f = @(x) ode113(@(t,x) [-x(2); -9.81*sin(x(1))], [0 dt], x); % x + dt * [x(2); -9.81*sin(x(1))];
% Sensor reading
h = @(x) x;

n = numel(x0);
% Weights coefficient
Wm = 1/(2*n)*ones(1,2*n);
Wc = Wm;

%% Real dynamics
[~,xReal] = ode113(@(t,x) [-x(2); -9.81*sin(x(1))], [0:dt:360000*dt], x0Real);
xReal = xReal';
y = xReal + R * randn(size(xReal));

%%
% X = zeros(size(xReal));
% X(:,1) = x0Real;
% for i=2:size(X,2)
%     X(:,i) = f( X(:,i-1) );
% end

%% Kalman
xSol = zeros(size(y));
xSol(:,1) = x0;
P = P0;
for j=2:size(y,2)
    x = xSol(:,j-1);
    %% Time update
    % Generating sigma points
    X = x + sqrtm(n*P);
    X = [X x-sqrtm(n*P)];
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
    %% Measurement update
    % Computing Pyy
    Pyy = avgCov(Wc,Y-yMinus,0.5,R);
    
    % Computing Pxy
    Pxy = avgCrossCov(Wc,X-xMinus,Y-yMinus,0.5);
    
    % Computing Kalman gain
    K = Pxy\Pyy;
    % Update measurement
    x = xMinus + K * (y(:,j)-yMinus);
    % Update covariance
    P = PMinus - K * Pyy * K';
    
    xSol(:,j) = x;
end

errReal = max(vecnorm(xSol - real(xSol))./vecnorm(real(xSol)));
xSol = real(xSol);
errSol = vecnorm(xSol-xReal);