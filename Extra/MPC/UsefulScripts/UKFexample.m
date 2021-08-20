clear;
clc;
close all;

%% Initialization
% Time vector
dt = 0.01;
t = 0:dt:6*3600;
% Initial position
x0Real = [-0.5 0]';
% Initial covariance matrix
P0 = 1e-4*eye(2);
% Process noise covariance matrix
% NOTE: even if there is no process noise, the following term Qs cannot be 
%       =0. In this case the process noise is determined by the numerical
%       error of the FWD Euler method used to update the state.
Q = dt^2*eye(2);
% Measurement noise covariance matrix
R = 1e-4*eye(2);

% 
S0 = chol(P0);
Qs = chol(Q);
Rs = chol(R);
x0 = x0Real + S0 * randn(size(x0Real));
%% Real dynamic
odeOptions = odeset('RelTol',1e-13,'AbsTol',1e-14);
[~,xReal] = ode113(@(t,x) [x(2); -9.81*sin(x(1))], t, x0Real, odeOptions);
xReal = xReal';
yReal = xReal + 1e-1*Rs * randn(size(xReal));

%% SR - UKF
% State update equation
f = @(x) x + dt * [x(2); -9.81*sin(x(1))];
% Sensor reading
h = @(x) x;

% Weights and coefficients
L = numel(x0);
alpha = 0.1;
beta = 2;
kappa = 0;

lambda = alpha^2 * (L + kappa) - L;
Wc = [lambda/(L+lambda)+1-alpha^2+beta^2 0.5/(L+lambda)];
Wm = [lambda/(L+lambda)                  0.5/(L+lambda)];

gamma = sqrt(L+lambda);

% Actual filter
xUKF = zeros(size(xReal));
xUKF(:,1) = x0;
Sxx = S0;
for j=2:numel(t)
    x = xUKF(:,j-1);
    % Compute sigma points
    X = [x, x+gamma*Sxx, x-gamma*Sxx];
    
    % State propagation
    % Propagate sigma points
    for i=1:2*L+1
        X(:,i) = f(X(:,i));
    end
    % Compute propagated state mean value
    xHat = Wm(1) * X(:,1) + Wm(2) * sum(X(:,2:end),2);
    % Compute propagated state S matrix (chol(P))
    [~,SxxHat] = qr([sqrt(Wc(2))*(X(:,2:end)-xHat), Qs]',0);
    SxxHat = cholupdate(SxxHat,sqrt(Wc(1))*(X(:,1)-xHat));
    
    % State correction
    % Compute sensor reading
    Y = zeros(numel(yReal(:,j)),2*L+1);
    for i=1:size(X,2)
        Y(:,i) = h(X(:,i));
    end
    % Compute sensor reading mean value
    yHat = Wm(1) * Y(:,1) + Wm(2) * sum(Y(:,2:end),2);
    % Compute sensor reading S matrix
    [~,SyyHat] = qr([sqrt(Wc(2))*(Y(:,2:end)-yHat), Rs]',0);
    SyyHat = cholupdate(SyyHat,sqrt(Wc(1))*(Y(:,1)-yHat));
    
    % Compute cross covariance
    PxyHat = Wc(1) * (X(:,1)-xHat)*(Y(:,1)-yHat)';
    for i=2:size(X,2)
        PxyHat = PxyHat + Wc(2) * (X(:,i)-xHat) * (Y(:,i)-yHat)';
    end
    
    % Kalman gain and state/S matrix correction
    K = PxyHat/SyyHat/SyyHat';
    U = K*SyyHat';
    for i=1:size(U,2)
        SxxHat = cholupdate(SxxHat,U(:,i),'-');
    end
    
    x = xHat + K * (yReal(:,j)-yHat);
    Sxx = SxxHat;
    
    xUKF(:,j) = x;
end

%%
err = xReal - xUKF;

tiledlayout(1,2);
nexttile
plot(t,xReal);
hold on
plot(t,xUKF);
legend("\theta","\omega","\theta_{UKF}","\omega_{UKF}");
nexttile
plot(t,err);
legend("e_{\theta}","e_{\omega}");
