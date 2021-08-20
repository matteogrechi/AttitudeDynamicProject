clear
clc
close all

%% Initialization
dt = 1/128;
T = 128;
fc = @(t,x) [x(2) -9.81/8*sin(x(1))]';
f = @(x) rk4step(fc,x,dt);%x + dt * fc(0,x);
h = @(x) x;

x = [1 .1]';
R = 1e-4*eye(2);
Px = 1e-8*eye(2);


W0 = 0;
%% Simulation
opt = odeset("RelTol",1e-13,"AbsTol",1e-14);
[~,y] = ode113(fc,[0:dt:T],x,opt);
y = y';

%% UKF
%X = getSigmaPoints(x,Px,W0);

z(:,1) = x;
for j=1:T/dt
    X = getSigmaPoints(x,Px,W0);

    [x,Px,X] = forecast(f,X,0,W0);
    
    % X = getSigmaPoints(x,Px,W0);
    yErr(:,j) = y(:,j) + 1e-2*randn(2,1);
    [x,Px] = correct(h,yErr(:,j),x,X,Px,R,W0); 
    z(:,j+1) = x;
    %X = getSigmaPoints(x,Px,W0);
end

%% Plot
plot(0:dt:T,y);
hold on;
plot(0:dt:T,z);
hold on;
plot(0:dt:T-dt,yErr);
legend("True angle","True speed","Estimated angle","Estimated speed","Measured angle","Measured speed");