function y = simulateStarTracker(x,v,input)%,sunECI,earthECI)%,v)

R = @(q) [     1-2*q(3)^2-2*q(4)^2  2*q(2)*q(3)+2*q(1)*q(4) -2*q(1)*q(3)+2*q(2)*q(4) ;...
           2*q(2)*q(3)-2*q(1)*q(4)      1-2*q(2)^2-2*q(4)^2  2*q(1)*q(2)+2*q(3)*q(4) ;...
           2*q(1)*q(3)+2*q(2)*q(4) -2*q(1)*q(2)+2*q(3)*q(4)      1-2*q(2)^2-2*q(3)^2 ];

% Star sensor
qStarSensor = input(1:4);
starECI = zeros(3,(numel(input)-4)/3);
j = 1;
for i = 5:3:numel(input)
    starECI(:,j) = input(i:i+2);
    j = j+1;
end

starBF = R(qStarSensor)*R(x(1:4))*starECI;

j = 1;
for i=1:2:numel(v)
    starBF(:,j) = R([cos(v(i)/2) 0 0 sin(v(i)/2)])*starBF(:,j);
    e = cross(starBF(:,j),[0;0;1]);
    if norm(e) > 1e-8
        e = e / norm(e);
    else
        e = 0 * e;
    end
    starBF(:,j) = R([cos(v(i+1)/2) sin(v(i+1)/2)*e'])*starBF(:,j);
    j = j+1;
end

alphaStar = atan2(starBF(1,:),starBF(3,:));
betaStar  = atan2(starBF(2,:),starBF(3,:));

y = zeros(2*numel(alphaStar),1);
j = 1;
for i = 1:numel(alphaStar)
    y(j)   = alphaStar(i);
    y(j+1) = betaStar(i);
    j = j+2;
end

% sunECI = input(1:3);
% qSunSensor = input(4:7);
%  
% sunBF = R(qSunSensor)*R(x(1:4))*sunECI;
% alphaSun = atan2(sunBF(1),sunBF(3));
% betaSun = atan2(sunBF(2),sunBF(3));

% y = [alphaSun;betaSun];