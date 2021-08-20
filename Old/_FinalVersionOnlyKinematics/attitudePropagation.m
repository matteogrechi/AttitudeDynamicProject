function x = attitudePropagation(x,w,u)
dt = .01;
%J = [8.009;8.009;1.251];

q = x(1:4);
b = x(5:7);

omega = u+w(1:3)-b;

% Attitude propagation
Omega = [         0 -omega(1)  -omega(2) -omega(3) ;
                  0         0   omega(3) -omega(2) ;
                  0         0          0  omega(1) ;
                  0         0          0         0 ];
Omega = Omega - Omega';

qDot = 1/2*Omega*q;

q = q + dt * qDot;
q = q / norm(q);

% Bias propagation
b = b + w(4:6) * sqrt(dt);

% State propagation
% x = q;
x = [q;b];