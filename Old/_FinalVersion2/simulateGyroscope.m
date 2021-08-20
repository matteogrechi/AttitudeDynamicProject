function y = simulateGyroscope(x)%,sunECI,earthECI)%,v)

% Gyro
omega = x(5:7);
b = x(8:10);

y = omega;% + b;