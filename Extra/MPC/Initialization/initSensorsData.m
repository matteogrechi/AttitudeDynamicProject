%% Sun sensor
% Sampling frequency [ Hz ]
Sensors.sunSensor.freq = 50;

% Sensor field of view [ rad ]
Sensors.sunSensor.fow = deg2rad(60);

% About boresight covariance [ rad² ]
Sensors.sunSensor.aboutBoresight = deg2rad(0.2/3)^2;

% Cross boresight covariance [ rad² ]
Sensors.sunSensor.crossBoresight = deg2rad(0.2/3)^2;

% White noise covariance [ rad² ]
Sensors.sunSensor.acc = (deg2rad(0.2/3))^2;

% %% Earth horizon sensor
% % Sampling frequency [ Hz ]
% Sensors.sunSensor.freq = 1;
% 
% % Sensor field of view [ rad ]
% Sensors.sunSensor.fow = [deg2rad(60) deg2rad(60)];
% 
% % White noise covariance [ rad² ]
% Sensors.sunSensor.acc = (deg2rad(0.2/3))^2;

%% Star tracker
% Sampling frequency [ Hz ]
Sensors.starTracker.freq = 2;

% Sensor field of view [ rad ]
Sensors.starTracker.fow = deg2rad(60);

% About boresight covariance [ rad² ]
Sensors.starTracker.aboutBoresight = deg2rad(120/3600)^2;

% Cross boresight covariance [ rad² ]
Sensors.starTracker.crossBoresight = deg2rad(20/3600)^2;

% White noise covariance [ rad² ]
Sensors.starTracker.acc = (deg2rad(20/3600))^2;

%% Gyroscope
% Sampling frequency [ Hz ]
Sensors.gyro.freq = 250;

% White noise covariance [ rad²/s² ]
% σn = ARW * √f with [ARW] = [°/√h]
Sensors.gyro.acc = ( deg2rad(0.17)/60 * sqrt(Sensors.gyro.freq) )^2;

% Bias stability covariance [ (rad/s^(3/2))² ]
% σb = RRW * √f with [RRW] = [°/h]
Sensors.gyro.biasInstability = ( deg2rad(0.4)/3600 * sqrt(Sensors.gyro.freq) )^2;