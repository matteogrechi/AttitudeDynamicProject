function y = simulateSunSensor(x,input)%,sunECI,earthECI)%,v)

R = @(q) [     1-2*q(3)^2-2*q(4)^2  2*q(2)*q(3)+2*q(1)*q(4) -2*q(1)*q(3)+2*q(2)*q(4) ;...
           2*q(2)*q(3)-2*q(1)*q(4)      1-2*q(2)^2-2*q(4)^2  2*q(1)*q(2)+2*q(3)*q(4) ;...
           2*q(1)*q(3)+2*q(2)*q(4) -2*q(1)*q(2)+2*q(3)*q(4)      1-2*q(2)^2-2*q(3)^2 ];

% Sun sensor
sunECI = input(1:3);
qSunSensor = input(4:7);
 
sunBF = R(qSunSensor)*R(x(1:4))*sunECI;
alphaSun = atan2(sunBF(1),sunBF(3));
betaSun = atan2(sunBF(2),sunBF(3));

y = [alphaSun;betaSun];