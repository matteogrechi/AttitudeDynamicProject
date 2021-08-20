function x = attitudePropagationNA(x,u)
dt = .01;
J = [8.009;8.009;1.251];

q = x(1:4);
omega = x(5:7);

% Attitude propagation
Omega = [         0 -omega(1)  -omega(2) -omega(3) ;
                  0         0   omega(3) -omega(2) ;
                  0         0          0  omega(1) ;
                  0         0          0         0 ];
Omega = Omega - Omega';

qDot = 1/2*Omega*q;

q = q + dt * qDot;
q = q / norm(q);

% Angular velocity
omegaDot = zeros(3,1);
omegaDot(1) = ((J(2)-J(3)) * omega(2) * omega(3) + u(1)) / J(1);
omegaDot(2) = ((J(3)-J(1)) * omega(3) * omega(1) + u(2)) / J(2);
omegaDot(3) = ((J(1)-J(2)) * omega(1) * omega(2) + u(3)) / J(3);

omega = omega + dt * omegaDot;

x = [q;omega];