%% True reference
r = randn(3,4);
r = r ./ vecnorm(r);

%% True evolution
dt = 0.005;
t = 0:dt:500;
x0 = [0.1 0.2 -0.1 1 0 0 0]';

% Dynamic
J = [1 2 3]';
K = [(J(2)-J(3))/J(1) (J(3)-J(2))/J(1) (J(1)-J(2))/J(3)]';
omegaDot = @(t,omega,M) [K(1)*omega(2)*omega(3) K(2)*omega(1)*omega(3) K(3)*omega(1)*omega(2)]' + J.*M;
% Kinematic
qDot = @(t,q,omega) 0.5*XiMatrix(q)*omega;

[~,x] = ode113(@(t,x) [omegaDot([],x(1:3),0);qDot([],x(4:7),x(1:3))],t,x0);
x = x';
omegaReal = x(1:3,:);
qReal = x(4:7,:);

%% Simulate readings
omegaMeas = omegaReal + 1e-5*randn(size(omegaReal)) + 0.1;
yMeas = zeros(numel(r),size(qReal,2));
for i=1:size(qReal,2)
    for j=1:size(r,2)
        nu = deg2rad(2) * randn(3,1);
%         theta = deg2rad(2) * randn();
%         e = rand(1,3);
%         e = e / norm(e);
%         appo = quatmultiply([cos(theta) sin(theta)*e],qReal(:,i)');
        yMeas(3*(j-1)+1:3*(j-1)+3,i) = quatrotate(qReal(:,i)',r(:,j)')' + nu;
    end
end

%%
sigman = 1e-5;
sigmar = 1e-9;
Q = [sigman^2*dt * eye(3) + 1/3*sigmar^2*dt^3 * eye(3), -0.5*sigmar^2*dt^2 * eye(3);...
                           -0.5*sigmar^2*dt^2 * eye(3),        sigmar^2*dt * eye(3)];
R = deg2rad(2)^2 * eye(18);

x = [x0(4:7);0;0;0];
P = 1e-2*eye(6);
for i=2:numel(t)
    [x,P] = MEKF_propagate(dt,x,P,Q,omegaMeas(:,i));
    [x,P] = MEKF_update_Murrell(x,P,yMeas(1:3,i),r(:,1),deg2rad(2));
    [x,P] = MEKF_update_Murrell(x,P,yMeas(4:6,i),r(:,2),deg2rad(2));
    [x,P] = MEKF_update_Murrell(x,P,yMeas(7:9,i),r(:,3),deg2rad(2));
    [x,P] = MEKF_update_Murrell(x,P,yMeas(10:12,i),r(:,3),deg2rad(2));
    %[x,P] = MEKF_update(x,P,yMeas(:,i),R,r);
    xHat(:,i) = x;
    PHat(:,:,i) = P;
end

%%
err = quatdivide(xHat(1:4,:)',qReal')';
errAbs = vecnorm(err(2:4,:))*180/pi*2;
plot(errAbs);
figure
plot(xHat(5:7,:)');

%% MEKF
% State propagation
function [x,P] = MEKF_propagate(dt,x,P,Q,omegaMeas)
    
%     Omega = [0 -omega(1) -omega(2) -omega(3);...
%              0 0 omega(3) -omega(2);...
%              0 0 0 omega(1);...
%              0 0 0 0];
%     Omega = Omega - Omega';
    q = x(1:4);
    bias = x(5:7);

    omega = omegaMeas - bias;
    q = q + 0.5*XiMatrix(q) * omega*dt;
    
    x = [q;bias];
    
    Phi = eye(6) + dt * [-crossOperator(omega) -eye(3); zeros(3) zeros(3)];
    P = Phi*P*Phi'+ Q;
end

% State update
function [x,P] = MEKF_update(x,P,y,R,r)
    q = x(1:4);
    bias = x(5:7);
    
    A = getAttitudeMatrix(q);
    b = A*r;
    
    h = [];
    H = [];
    for i = 1:size(b,2)
        h = [h; b(:,i)];
        H = [H; crossOperator(b(:,i)) zeros(3)];
    end
    
    K = P*H'/(H*P*H'+R);
    P = P-K*H*P;
    
    %dx = zero[zeros(3,1);bias];
    dx = K*(y-h);
    dtheta = dx(1:3);
    dbias = dx(4:6);
    
    q = q + 0.5*XiMatrix(q)*dtheta;
    q = q / norm(q);
    bias = bias + dbias;
    
    x = [q;bias]; 
end

% State update Murrell's version
function [x,P] = MEKF_update_Murrell(x,P,y,r,sigma)
    q = x(1:4);
    b = x(5:7);

    A = getAttitudeMatrix(x(1:4));
    H = [crossOperator(A*r) zeros(3)];
    K = P*H'/(H*P*H'+sigma^2*eye(3));
    P = P - K*H*P;
    eps = y - A*r;
    dx = K*eps;
    
    q = q + 0.5*XiMatrix(q)*dx(1:3);
    q = q / norm(q);
    b = b + dx(4:6);
    
    x = [q;b];
end