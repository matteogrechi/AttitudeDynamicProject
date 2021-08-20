clear;
clc;
close all;

%% Initial condition and data
S0 = chol(1e-4*eye(2));
Qs = chol(1e-4*eye(2)); % Va messo nonostante ci sia un disturbo esterno nullo ==> credo serva per tenere conto dell'errore dell'integratore numerico %zeros(2);%chol(1e-3*eye(2));
Rs = chol(1e-4*eye(2));
x0Real = [-0.5 0]';

x0 = x0Real + S0 * randn(size(x0Real));

% Time vector
dt = 0.01;
t = 0:dt:4000;

%% Real dynamics
odeOptions = odeset('RelTol',1e-13,'AbsTol',1e-14);
[~,xReal] = ode113(@(t,x) [x(2); -9.81*sin(x(1))], t, x0Real, odeOptions);
xReal = xReal';
yReal = xReal + 1e-1*Rs * randn(size(xReal));

%% UKF
% State update equation
%f = @(x) x + dt * [x(2); -9.81*sin(x(1))];
%f = @(x) ode113(@(t,x) [-x(2); -9.81*sin(x(1))], [0 dt], x);
% Sensor reading
h = @(x) x;

% n = numel(x0);
% % Weights coefficient
% Wm = 1/(2*n)*ones(1,2*n);
% Wc = Wm;
% 
% % X = zeros(size(xReal));
% % X(:,1) = x0Real;
% % for i=2:size(X,2)
% %     X(:,i) = f( X(:,i-1) );
% % end
% 
% xUKF = zeros(size(xReal));
% xUKF(:,1) = x0;
% P = P0;
% for j=2:size(xUKF,2)
%     x = xUKF(:,j-1);
%     % State propagation
%     % Generating sigma points
%     X = [x+sqrtm(n*P), x-sqrtm(n*P)];
%     %X = 0.5*(X + conj(X));
%     
%     % Propagating sigma points
%     for i=1:size(X,2)
%         X(:,i) = f(X(:,i));
%     end
%     % Status estimate
%     xHat = sum(Wm.*X,2);
%     % Compute covariance matrix
%     PxxHat = avgCov(Wc,X-xHat,0.5,Q);
%     
%     % State correction
%     % Compute sigma points sensor readings
%     Y = zeros(size(X));
%     for i=1:size(X,2)
%         Y(:,i) = h(X(:,i));
%     end
%     % Sensor reading estimate
%     yHat = sum(Wm.*Y,2);
%     % Computing Pyy
%     PyyHat = avgCov(Wc,Y-yHat,0.5,R);
%     
%     % Computing Pxy
%     PxyHat = avgCrossCov(Wc,X-xHat,Y-yHat,0.5);
%     
%     % Computing Kalman gain
%     K = PxyHat\PyyHat;
%     % Update measurement
%     x = xHat + K * (yReal(:,j)-yHat);
%     % Update covariance
%     P = PxxHat - K * PyyHat * K';
%     
%     xUKF(:,j) = x;
% end

%% SR - UKF 
xUKF = zeros(size(xReal));
xUKF(:,1) = x0;

L = numel(x0);
alpha = 0.1;
beta = 2;
kappa = 0;

lambda = alpha^2 * (L + kappa) - L;
Wc = [lambda/(L+lambda)+1-alpha^2+beta^2 0.5/(L+lambda)];
Wm = [lambda/(L+lambda)                  0.5/(L+lambda)];

gamma = sqrt(L+lambda);
Sxx = S0;
for j=2:size(xUKF,2)
    x = xUKF(:,j-1);
    % Compute sigma points
    X = [x, x+gamma*Sxx, x-gamma*Sxx];
    
    % Propagation
    % Propagate sigma points
    for i=1:2*L+1
        X(:,i) = f(X(:,i),dt);
    end
    % Compute state mean value
    xHat = Wm(1) * X(:,1) + Wm(2) * sum(X(:,2:end),2);
    % Compute xHat xHat "covariance"
    [~,SxxHat] = qr([sqrt(Wc(2))*(X(:,2:end)-xHat), Qs]',0);
    SxxHat = cholupdate(SxxHat,sqrt(Wc(1))*(X(:,1)-xHat));
    
    % Correction
    % Compute sensor reading
    Y = zeros(numel(yReal(:,j)),2*L+1);
    for i=1:size(X,2)
        Y(:,i) = h(X(:,i));
    end
    % Compute reading mean value
    yHat = Wm(1) * Y(:,1) + Wm(2) * sum(Y(:,2:end),2);
    % Compute yHat yHat "covariance"
    [~,SyyHat] = qr([sqrt(Wc(2))*(Y(:,2:end)-yHat), Rs]',0);
    SyyHat = cholupdate(SyyHat,sqrt(Wc(1))*(Y(:,1)-yHat));
    
    % Compute cross covariance
    PxyHat = Wc(1) * (X(:,1)-xHat)*(Y(:,1)-yHat)';
    for i=2:size(X,2)
        PxyHat = PxyHat + Wc(2) * (X(:,i)-xHat) * (Y(:,i)-yHat)';
    end
    
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
