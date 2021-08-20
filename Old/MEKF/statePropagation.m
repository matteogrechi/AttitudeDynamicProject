function [xNew,Pnew] = statePropagation(x,P,omega)
%STATEPROPAGATION Summary of this function goes here
%   Detailed explanation goes here
dt = 0.01;


q = x(1:4);
%omegaHat = x(5:7);
beta = x(5:7);

% Estimating ω
omegaHat = omega - beta;

% Propagating q
appo = 0.5*norm(omegaHat)*dt;
appoVec = omegaHat'/norm(omegaHat);
Theta = [cos(appo)         sin(appo)*appoVec;...
         sin(appo)*appoVec cos(appo)*eye(3)-crossOperator(sin(appo)*appoVec)];
qNew = Theta * omegaHat;
qNew = qNew / norm(qNew);

%
xNew = [qNew;beta];

% Propagating P
Pnew = P + dt * (F*P+P*F'+G*Q*G');
end

