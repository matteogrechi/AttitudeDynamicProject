function y = simulateSunSensor(x,v,input)%,sunECI,earthECI)%,v)

R = @(q) [     1-2*q(3)^2-2*q(4)^2  2*q(2)*q(3)+2*q(1)*q(4) -2*q(1)*q(3)+2*q(2)*q(4) ;...
           2*q(2)*q(3)-2*q(1)*q(4)      1-2*q(2)^2-2*q(4)^2  2*q(1)*q(2)+2*q(3)*q(4) ;...
           2*q(1)*q(3)+2*q(2)*q(4) -2*q(1)*q(2)+2*q(3)*q(4)      1-2*q(2)^2-2*q(3)^2 ];

% Sun sensor
sunDir_NF = input(1:3);
q_SB = input(4:7);

sunDir_BF = R(q_SB)*R(x(1:4))*sunDir_NF;

% Rotate sunDir_BF
sunDir_BF = R([cos(v(1)/2) 0 0 sin(v(1)/2)])*sunDir_BF;
e = cross(sunDir_BF,[0;0;1]);
if norm(e) > 1e-8
    e = e / norm(e);
else
    e = 0 * e;
end
sunDir_BF = R([cos(v(2)/2) sin(v(2)/2)*e'])*sunDir_BF;

alphaSun = atan2(sunDir_BF(1),sunDir_BF(3));
betaSun = atan2(sunDir_BF(2),sunDir_BF(3));

y = [alphaSun;betaSun];