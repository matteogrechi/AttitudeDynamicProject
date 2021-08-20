function y = simulateGyroscope(x)%,sunECI,earthECI)%,v)

% Gyro
omega = x(5:7);

y = omega;