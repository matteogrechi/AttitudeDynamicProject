T = 25e-3;
xT = 77.12/2 *1e-3;
yT = 65.12/2 *1e-3;
zT = 0;
xN = sin(deg2rad(30)) * cos(deg2rad(45));
yN = sin(deg2rad(30)) * sin(deg2rad(45));
zN = cos(deg2rad(30));

nozzlePosition  = [[-xT  yT  zT];...
                   [ xT  yT  zT];...
                   [ xT -yT  zT];...
                   [-xT -yT  zT]];
                  
thrustDirection = - [[-xN -yN  zN];...
                     [ xN -yN  zN];...
                     [ xN  yN  zN];...
                     [-xN  yN  zN]];
                   
thrustersTorque = T*cross(nozzlePosition',thrustDirection')';

n = size(nozzlePosition,1);
combinations = zeros(n,2^n);
for i=0:size(combinations,2)-1
    combinations(:,i+1) = de2bi(i,n);
end

totalTorque = thrustersTorque'*combinations;