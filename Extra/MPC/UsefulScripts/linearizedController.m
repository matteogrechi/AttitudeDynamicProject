%% Linearized equations
J = Spacecraft.str.inertia;
omegaRef = [0 1/3600 0];

A1 = [(J(2)-J(3))/J(1) * [0 omegaRef(3) omegaRef(2)];...
      (J(3)-J(1))/J(2) * [omegaRef(3) 0 omegaRef(1)];...
      (J(1)-J(2))/J(3) * [omegaRef(2) omegaRef(1) 0]];
A3 = eye(3);

A = [A1 zeros(3); A3 zeros(3)];
B = [eye(3); zeros(3)];

K = lqr(A,B,eye(6),eye(3),zeros(6,3));