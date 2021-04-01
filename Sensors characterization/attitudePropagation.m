function x = attitudePropagation(x,u)%,w)
w = [0 0 0];
dt = .01;
J = [1.009;0.251;0.916];

q = x(1:4);
omega = x(5:7);

omegaDot = [0;0;0];
% Angular velocity
omegaDot(1) = ((J(2)-J(3)) * omega(2) * omega(3) + u(1) + w(1)) / J(1);
omegaDot(2) = ((J(3)-J(1)) * omega(3) * omega(1) + u(2) + w(2)) / J(2);
omegaDot(3) = ((J(1)-J(2)) * omega(1) * omega(2) + u(3) + w(3)) / J(3);

 
% Attitude propagation
Omega = [         0 -omega(1)  -omega(2) -omega(3) ;
                  0         0   omega(3) -omega(2) ;
                  0         0          0  omega(1) ;
                  0         0          0         0 ];
Omega = Omega - Omega';

qDot = 1/2*Omega*q;

q = q + dt * qDot;
q = q / norm(q);
q = sign(q(1)) * q;
omega = omega + dt * omegaDot;

x = [q;omega];

% A = z(1:9);
% A = reshape(A,3,3);
% omega = z(10:12);
% 
% % Angular velocity
% omegaDot = [0 0 0]';
% omegaDot(1) = ((J(2)-J(3)) * omega(2) * omega(3) + u(1)) / J(1);
% omegaDot(2) = ((J(3)-J(1)) * omega(3) * omega(1) + u(2)) / J(2);
% omegaDot(3) = ((J(1)-J(2)) * omega(1) * omega(2) + u(3)) / J(3);
% 
% % Attitude
% omegaCross = zeros(3);
% omegaCross(1,2) = -omega(3);
% omegaCross(1,3) = omega(2);
% omegaCross(2,3) = -omega(1);
% omegaCross = omegaCross - omegaCross';
% 
% ADot = -omegaCross * A;
% 
% % Integration
% A = A + dt * ADot;
% A = 1.5*A - 0.5*A*A'*A;
% omega = omega + dt * omegaDot;
% 
% % Output
% z = [reshape(A,9,1);omega];