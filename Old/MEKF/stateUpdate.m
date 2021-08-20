function [xNew,Pnew] = stateUpdate(x,P,y,R)
%STATEUPDATE Summary of this function goes here
%   Detailed explanation goes here

r1 = []
r2 = []
r3 = []



q = x(1:4);
b = x(5:7);

% Computing Kalman gain
A = getAttitudeMatrix(q);
H = [crossOperator(A*r1) zeros(3);...
     crossOperator(A*r2) zeros(3);...
     crossOperator(A*r3) zeros(3)];
K = P*H'\(H*P*H'+R);

% Update
Pnew = K*H;
Pnew = (eye(size(Pnew)) - Pnew)*P;

dx = [zeros(3,1);b];
h = [A*r1;...
     A*r2;...
     A*r3];
dxNew = dx + K*(y-h);

% Updating quaternion
qNew = q + 0.5*XiMatrix(q)*dxNew(1:3);
qNew = qNew / norm(qNew);

% Updating bias
bNew = dxNew(4:6);

% Function return 
xNew = [qNew;bNew];
end

