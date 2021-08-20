function x = attitudePropagationPF(x,u)

for i = 1:size(x,2)
    dt = .01;
    J = [1.009;0.251;0.916];

    q = x(1:4,i);
    omega = x(5:7,i);

    omegaDot = [0;0;0];
    % Angular velocity
    omegaDot(1) = ((J(2)-J(3)) * omega(2) * omega(3) + u(1)) / J(1);
    omegaDot(2) = ((J(3)-J(1)) * omega(3) * omega(1) + u(2)) / J(2);
    omegaDot(3) = ((J(1)-J(2)) * omega(1) * omega(2) + u(3)) / J(3);


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

    x(:,i) = [q;omega];
end