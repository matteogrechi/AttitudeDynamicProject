function y = simulateEarthHorizonSensor(x,input)%,sunECI,earthECI)%,v)

R = @(q) [     1-2*q(3)^2-2*q(4)^2  2*q(2)*q(3)+2*q(1)*q(4) -2*q(1)*q(3)+2*q(2)*q(4) ;...
           2*q(2)*q(3)-2*q(1)*q(4)      1-2*q(2)^2-2*q(4)^2  2*q(1)*q(2)+2*q(3)*q(4) ;...
           2*q(1)*q(3)+2*q(2)*q(4) -2*q(1)*q(2)+2*q(3)*q(4)      1-2*q(2)^2-2*q(3)^2 ];

% Earth horizon sensor
earthECI = input(8:10);
qEarthHorSensor = input(11:14);

earthBF = R(qEarthHorSensor)*R(x(1:4))*earthECI;
alphaEarth = atan2(earthBF(1),earthBF(3));
betaEarth = atan2(earthBF(2),earthBF(3));

y = [alphaEarth;betaEarth];