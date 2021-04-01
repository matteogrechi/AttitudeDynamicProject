function y = attitudeMeasurementNA(x,input)%,sunECI,earthECI)%,v)
% r = r3*r2*r1 where
% r1 = [cos(w(1)/2) 0 0 sin(w(1)/2)]';
% r2 = [cos(w(2)/2) sin(w(2)/2) 0 0]';
% r3 = [cos(w(3)/2) 0 0 sin(w(3)/2)]';
% CODE USED:
%   w = sym('w',[1 4],'real');
%   r1 = [cos(w(1)/2) 0 0 sin(w(1)/2)];
%   r2 = [cos(w(2)/2) sin(w(2)/2) 0 0];
%   r3 = [cos(w(3)/2) 0 0 sin(w(3)/2)];
%   r = quatmultiply(r2,r1);
%   r = quatmultiply(r3,r);

R = @(q) [     1-2*q(3)^2-2*q(4)^2  2*q(2)*q(3)+2*q(1)*q(4) -2*q(1)*q(3)+2*q(2)*q(4) ;...
           2*q(2)*q(3)-2*q(1)*q(4)      1-2*q(2)^2-2*q(4)^2  2*q(1)*q(2)+2*q(3)*q(4) ;...
           2*q(1)*q(3)+2*q(2)*q(4) -2*q(1)*q(2)+2*q(3)*q(4)      1-2*q(2)^2-2*q(3)^2 ];
       
% R313 = @(psi,theta,phi) [  cos(psi)*cos(theta)   cos(psi)*sin(theta)*sin(phi)+sin(psi)*cos(phi)  -cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi) ;
%                           -sin(psi)*cos(theta)  -sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi)   sin(psi)*sin(theta)*cos(phi)+cos(psi)*sin(phi) ;
%                                     sin(theta)                             -cos(theta)*sin(phi)                              cos(theta)*cos(phi) ];

% 
% q = quatmultiply(r,x(1:4)');

% Sun sensor
sunECI = input(1:3);
qSunSensor = [cos(pi/4) 0 sin(pi/4) 0];
 
sunBF = R(qSunSensor)*R(x(1:4))*sunECI;
alphaSun = atan2(sunBF(1),sunBF(3));% + v(1);
betaSun = atan2(sunBF(2),sunBF(3));% + v(2);

% Earth horizon sensor
earthECI = input(4:6);
qEarthHorSensor = [cos(pi/4) -sin(pi/4) 0 0];

earthBF = R(qEarthHorSensor)*R(x(1:4))*earthECI;
alphaEarth = atan2(earthBF(1),earthBF(3));% + v(3);
betaEarth = atan2(earthBF(2),earthBF(3));% + v(4);

% Gyro
omega = x(5:7);% + v(5:7);

y = [alphaSun;betaSun;alphaEarth;betaEarth;omega];