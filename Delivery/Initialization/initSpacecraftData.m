%% Initial keplerian elements
% Semi-major axis [ km ]
Spacecraft.initialKepElm.a = 8000;

% Eccentricity [ - ]
Spacecraft.initialKepElm.e = 0.05;

% Inclination [ rad ]
Spacecraft.initialKepElm.i = deg2rad(102.63);

% RAAN [ rad ]
Spacecraft.initialKepElm.Omega = deg2rad(90);

% Anomaly of pericenter [ rad ]
Spacecraft.initialKepElm.omega = deg2rad(0);

% True anomaly [ rad ]
Spacecraft.initialKepElm.f = deg2rad(0);

%% Initial attitude and angular speed
% Initial BF attitude wrt to NF (q_B/N)
theta_2 = deg2rad(30/2)*randn();
e = rand(1,3);
e = e / norm(e);
Spacecraft.initialAttitude = [cos(theta_2) sin(theta_2)*e];%1/2*[1 -1 -1 1]'; % [1 0 0 0]';%

% Initial angular speed [ BF ][ rad/s ]
omega0 = deg2rad(0.1); %2*pi/3;
e = rand(1,3);
e = e / norm(e);
Spacecraft.initialAngularSpeed = omega0 * e; %[0 0 7.478/7128.137];

%% Spacecraft structure
a = 0.1; % [ m ]
b = 0.1; % [ m ]
c = 0.1; % [ m ]

% Mass [ kg ]
Spacecraft.str.mass = 3;

% Inertia matrix [ IF ][ kg m² ]
Spacecraft.str.inertia = [0.2 0.2 0.04];

% CoM position wrt to geometric center [ BF ][ m ]
delta = 0.01 * randn();
e = rand(1,3);
e = e / norm(e);
Spacecraft.str.com = delta * e;%mvnrnd([0 0 0],(2e-2)^2*eye(3));

% q_I/B 
theta_2 = deg2rad(3/2)*randn();
e = rand(1,3);
e = e / norm(e);
Spacecraft.str.qIB = [cos(theta_2) sin(theta_2)*e];

% Spacecraft magnetic dipole
Spacecraft.str.magDip = 0.02 * randn(3,1);

% Surface area of the various surfaces [ m² ]
Spacecraft.str.surfaces.area = [ a*b b*c a*b b*c a*c a*c ];

% Surface center wrt to geometric center [ BF ][ m ]
Spacecraft.str.surfaces.position = [[0 0 c/2];[a/2 0 0];[0 0 -c/2];[-a/2 0 0];[0 b/2 0];[0 -b/2 0]]; 

% Normal to the surface [ BF ][ - ]
Spacecraft.str.surfaces.normal = [[0 0 1];[1 0 0];[0 0 -1];[-1 0 0];[0 1 0];[0 -1 0]];

% Surfaces aerodinamic drag coefficient [ - ]
Spacecraft.str.surfaces.Cd = [ 1 1 1 1 1 1 ];

% Surfaces specular reflectivity [ - ]
Spacecraft.str.surfaces.rhos = [ .5 .5 .5 .5 .5 .5 ];

% Surfaces diffusive reflectivity [ - ]
Spacecraft.str.surfaces.rhod = [ .1 .1 .1 .1 .1 .1 ];