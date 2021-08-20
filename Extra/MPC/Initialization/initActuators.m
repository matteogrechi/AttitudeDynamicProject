T = 25e-3;

xT = 77.12/2 *1e-3;
yT = 65.12/2 *1e-3;
zT = 30e-2/2;

xN = sin(deg2rad(30)) * cos(deg2rad(45));
yN = sin(deg2rad(30)) * sin(deg2rad(45));
zN = cos(deg2rad(30));

nozzlePosition  = [[-xT  yT  zT];...
                   [ xT  yT  zT];...
                   [ xT -yT  zT];...
                   [-xT -yT  zT]];
nozzlePosition = nozzlePosition - Spacecraft.str.com;

thrustDirection = - [[-xN -yN  zN];...
                     [ xN -yN  zN];...
                     [ xN  yN  zN];...
                     [-xN  yN  zN]];
                   
thrustersTorque = T*cross(nozzlePosition',thrustDirection')';