function x = attitudePropagationNA(x,u)
dt = .01;

q = x(1:4);
% b = x(5:7);

% Attitude propagation
omega = u;% - b;
Omega = [         0 -omega(1)  -omega(2) -omega(3) ;
                  0         0   omega(3) -omega(2) ;
                  0         0          0  omega(1) ;
                  0         0          0         0 ];
Omega = Omega - Omega';

qDot = 1/2*Omega*q;

q = q + dt * qDot;
q = q / norm(q);

% % Bias propagation
% bDot = -2e-3*pi/180*b;
% 
% b = b + dt * bDot;

x = [q];