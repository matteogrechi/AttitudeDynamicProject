dGammaId = rand(3,1)*1e-3;
dGammaId_x(:,1) = cross(dGammaId,[1 0 0]');
dGammaId_x(:,2) = cross(dGammaId,[0 1 0]');
dGammaId_x(:,3) = cross(dGammaId,[0 0 1]');

A = dGammaId_x * cgt.torque;
u = null(A);
U = u'*u;
n = size(U);
% xOpt = fmincon(@(x) -x'*U*x, ones(size(u,2),1), -u, zeros(size(u,1),1));
xOpt = quadprog(eye(n) + 5 * U,[],-u,zeros(size(u,1),1));

uReal = u * xOpt;

dt = norm(dGammaId) / norm(cgt.torque*uReal);
uTimes = dt * uReal;

norm(cgt.torque*uTimes - dGammaId)
