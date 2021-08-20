clear;
clc;
close all;

%% Initial condition, data and real dynamic
Q = 1e-4*eye(2);
R = 1e-4*eye(2);
x0Real = [-0.5 0]';
P0 = 1e-4*eye(2);
x0 = x0Real + chol(P0)*randn(size(x0Real));

% Time vector
dt = 0.01;
t = 0:dt:100;

% Real dynamic
[~,xReal] = ode113(@(t,x) [-x(2); -9.81*sin(x(1))], t, x0Real);
xReal = xReal';
yReal = xReal + chol(R) * randn(size(xReal));

%% UKF
srukf.X = x0;
srukf.L = size(srukf.X, 1);
srukf.O = 2;
%srukf.S = eye(srukf.L);
srukf.S = chol(P0);
srukf.Qs = chol(Q);
srukf.Rs = chol(R);
srukf.alpha = 0.1;
srukf.beta = 2.0;
srukf.kappa = 0;
srukf.time = 0.0;
srukf.errCnt = 0;
srukf.f = @f;
srukf.h = @(x) x;
[srukf.Wm,srukf.Wc] = srukf_ut_weights(srukf.L,srukf.alpha, srukf.beta, srukf.kappa);

hasError = 0;
for i = 1 : numel(t)
    [Xpre, Spre, sigmax] = srukf_predict( ....
        srukf.X,...
        srukf.S,...
        srukf.f,...
        srukf.Qs,...
        t(i) - srukf.time,...
        srukf.Wm,...
        srukf.Wc,...
        srukf.alpha,...
        srukf.beta,...
        srukf.kappa);
    raPre = srukf.h(Xpre);
    
    [srukf.X, srukf.S] = srufk_update(Xpre, Spre,yReal(:,i),srukf.h,srukf.Rs,[],sigmax,srukf.Wm,srukf.Wc);
    
    srukf.time = t(i);
    xyOut(:, i) = srukf.X;
    raOut(:, i) = srukf.h(srukf.X);
end

plot(t,xyOut)
hold on
plot(t,xReal)

figure
plot(t,xReal - xyOut)