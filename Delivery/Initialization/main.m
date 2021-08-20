clear;
clc;

run('initEarthData.m');
run('initSensorsData.m');
run('initSpacecraftData.m');
run('initActuators.m');

save('../workspace.mat','Earth','Sensors','Spacecraft','thrustersTorque');