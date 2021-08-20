dt = [.1 .2 .3 .4 .5]; % s
thrust = 1e-3; % N
nThrusters = 12; % -
thrustersPosition = [ -25e-2  10e-2 -10e-2; 
                      -25e-2  10e-2 -10e-2;
                      -25e-2  10e-2 -10e-2;
                      -25e-2  10e-2  10e-2;
                      -25e-2  10e-2  10e-2;
                      -25e-2  10e-2  10e-2;
                      -25e-2 -10e-2  10e-2;
                      -25e-2 -10e-2  10e-2;
                      -25e-2 -10e-2  10e-2;
                      -25e-2 -10e-2 -10e-2;
                      -25e-2 -10e-2 -10e-2;
                      -25e-2 -10e-2 -10e-2  ]'; % m

thrustersDirection = [ -1  0  0;
                        0  1  0;
                        0  0 -1;
                       -1  0  0;
                        0  1  0;
                        0  0  1;
                       -1  0  0;
                        0 -1  0;
                        0  0  1;
                       -1  0  0;
                        0 -1  0;
                        0  0 -1  ]'; % -
thrustersDirection = thrustersDirection./vecnorm(thrustersDirection);


thrustersTorque = cross(thrustersPosition,-thrust * thrustersDirection);

DeltaGammaX = zeros(2^nThrusters,numel(dt));
DeltaGammaY = zeros(2^nThrusters,numel(dt));
DeltaGammaZ = zeros(2^nThrusters,numel(dt));
for i = 1:2^nThrusters-1
    usedThrusters = find(de2bi(i));
    applyedTorque = sum(thrustersTorque(:,usedThrusters),2);
    DeltaGammaX(i,:) = applyedTorque(1) * dt;
    DeltaGammaY(i,:) = applyedTorque(2) * dt;
    DeltaGammaZ(i,:) = applyedTorque(3) * dt;
end