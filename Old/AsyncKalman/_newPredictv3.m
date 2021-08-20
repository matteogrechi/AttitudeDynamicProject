% P,Q,R,x,z,f,h
clear
close all
clc

%% Pendulum
T = 1000;
dt = .01;
g = @(t,x) [x(2) -9.81/10*sin(x(1))]';
f = @(x) rk4step(g,x,dt);
h1 = @(z) z(1);
h2 = @(z) z(2);


%%
P = [.01 .01]'*[.01 .01];
Q = zeros(2);
R = 1e-4*eye(2);
x0 = [.4 1]';
z0 = [.4 1]';

x = x0;
z = z0;


%% Real solution
opt = odeset("RelTol",1e-13,"AbsTol",1e-14);
[tReal,xReal] = ode113(g,[0 T],x0,opt);

%% Kalman filter
xts = timeseries();
zts = timeseries();

jGyro = 10;
jAngle = 10;

for j=1:T/dt
%% State prediction
n = numel(x);
W0 = .25;
Wj = (1 - W0)/(2*n+1);
X = getSigmaPoints(x,P,W0);

Xf = zeros(size(X));
for i = 1:2*n+1
    Xf(:,i) = f(X(:,i));
end
xf = W0 * Xf(:,1) + Wj * sum(Xf(:,2:end),2);

Pf = W0 * (Xf(:,1) - xf)*(Xf(:,1) - xf)';
for i = 2:2*n+1
    Pf = Pf + Wj * (Xf(:,i) - xf)*(Xf(:,i) - xf)';
end
Pf = Pf + Q;

x = xf;
P = Pf;

%% State correction sensor 1

% Acquiring measurement
% Problema con acquisiszione dati...
z = h1(interp1(tReal,xReal,dt*j)') + 1e-2 * randn(1,1);

% Only one sensor
for i=1:2*n+1
    Zf(:,i) = h1(X(:,i));
end
zf = W0 * Zf(:,1) + Wj * sum(Zf(:,2:end),2);

Covzf = W0 * (Zf(:,1) - zf)*(Zf(:,1) - zf)';
for i = 2:2*n+1
    Covzf = Covzf + Wj * (Zf(:,i) - zf)*(Zf(:,i) - zf)';
end
Covzf = Covzf + R(1,1);

Covxfzf = W0 * (Xf(:,1) - xf)*(Zf(:,1) - zf)';
for i=2:2*n+1
    Covxfzf = W0 * (Xf(:,i) - xf)*(Zf(:,i) - zf)';
end

K = Covxfzf / Covzf;

% Applying correction
x = x + K*(z - zf);
P = P - K*Covzf*K';

%% Adding samples to the time series
xts = addsample(xts,'Data',x,'Time',j*dt);
%     zts = addsample(zts,'Data',z,'Time',j*dt);
end





plot(xts);
hold on
plot(tReal,xReal);
hold on
plot(zts);
legend("Angle","Velocity","Ode angle","Ode velocity","Measured angle","Measured velocity");