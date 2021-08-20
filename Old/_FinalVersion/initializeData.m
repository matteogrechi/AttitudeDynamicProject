clear

%% Constants
% Speed of light [ m/s ]
Const_1.c = Simulink.Parameter;
Const_1.c.Value = 299792458;
Const_1.c.Unit = 'm/s';
% 1 astronomical unit [ km ]
Const_1.AU_1 = Simulink.Parameter;
Const_1.AU_1.Value = 149597900;
Const_1.AU_1.Unit = 'km';
% Solar radiation intensity at 1AU [ W/m² ]
Const_1.Fe = Simulink.Parameter;
Const_1.Fe.Value = 1361;
Const_1.Fe.Unit = 'W/m^2';

%% Earth data
% Planetary constant μ of the Earth [ km³/s² ]
Earth_1.mu = Simulink.Parameter;
Earth_1.mu.Value = 398600;
Earth_1.mu.Unit = 'km^3/s^2';
% Radius of the Earth along the equator [ km ]
Earth_1.equatorialRadius = Simulink.Parameter;
Earth_1.equatorialRadius.Value = 6378.137;
Earth_1.equatorialRadius.Unit = 'km';
% J2 coefficient of the earth [ # ]
Earth_1.J2 = Simulink.Parameter;
Earth_1.J2.Value = 0.00108263;
Earth_1.J2.Unit = '1';
% Duration of a sidereal day [ s ]
Earth_1.siderealDay = Simulink.Parameter;
Earth_1.siderealDay.Value = 86164.27788;
Earth_1.siderealDay.Unit = 's';
% Atmospheric model reference height
Earth_1.atm_referenceHeight = Simulink.Parameter;
Earth_1.atm_referenceHeight.Value = 500:100:1000;
Earth_1.atm_referenceHeight.Unit = 'km';
% Atmospheric model nominal density
Earth_1.atm_nominalDensity = Simulink.Parameter;
Earth_1.atm_nominalDensity.Value = [6.967e-13 1.454e-13 3.614e-14 1.170e-14 5.245e-15 3.019e-15];
Earth_1.atm_nominalDensity.Unit = 'kg/m^3';
% Atmospheric model scaling height
Earth_1.atm_scaleHeight = Simulink.Parameter;
Earth_1.atm_scaleHeight.Value = [63.822 71.835 88.667 124.64 181.05 268.00];
Earth_1.atm_scaleHeight.Unit = 'km';

%% Spacecraft data
% Initial body frame attitude [ECI]
Spacecraft_1.initialAttitude = Simulink.Parameter;
Spacecraft_1.initialAttitude.Value = 1/2*[1 -1 -1 1]';
Spacecraft_1.initialAttitude.Unit = 'none';
% Initial angular speed [body frame][rad/s]
Spacecraft_1.initialAngularSpeed = Simulink.Parameter;
Spacecraft_1.initialAngularSpeed.Value = [0 0 7.478/7128.137]';
Spacecraft_1.initialAngularSpeed.Unit = 'rad/s';

% Inertia in the main body reference frame [ kg*m² ]
Spacecraft_1.baricentricInertia = Simulink.Parameter;
Spacecraft_1.baricentricInertia.Value = [8.009;8.009;1.251];
Spacecraft_1.baricentricInertia.Unit = 'kg*m^2';
% Distance from G of the geometric center of the s/c [ m ]
Spacecraft_1.geometricCenter = Simulink.Parameter;
Spacecraft_1.geometricCenter.Value = mvnrnd([0 0 0],.018*eye(3))';
Spacecraft_1.geometricCenter.Unit = 'm';

% Surface area of the various surfaces [ m² ]
Spacecraft_1.surfaces_area = Simulink.Parameter;
Spacecraft_1.surfaces_area.Value = [ .06,...
                                     .04,...
                                     .04,...
                                     .06,...
                                     .06,...
                                     .04,...
                                     .01,...
                                     .01,...
                                     .01,...
                                     .01 ];
Spacecraft_1.surfaces_area.Unit = 'm^2';
% Position from G of the geometric center of the various surfaces [ m ]
Spacecraft_1.surfaces_position = Simulink.Parameter;
Spacecraft_1.surfaces_position.Value = [ .15*[ 1; 0; 0],...
                                          .1*[ 0; 1; 0],...
                                          .1*[ 0; 0; 1],...
                                         .15*[-1; 0; 0],...
                                             [ 0;-1; 0],...
                                             [ 0; 0;-1],...
                                         .35*[ 1; 0; 0],...
                                         .35*[-1; 0; 0],...
                                         .35*[ 1; 0; 0],...
                                         .35*[-1; 0; 0] ];
Spacecraft_1.surfaces_position.Unit = 'm';
% Normal to the surface [ # ]
Spacecraft_1.surfaces_normalToSurface = Simulink.Parameter;
Spacecraft_1.surfaces_normalToSurface.Value = [ [ 1; 0; 0],...
                                                [ 0; 1; 0],...
                                                [ 0; 0; 1],...
                                                [-1; 0; 0],...
                                                [ 0;-1; 0],...
                                                [ 0; 0;-1],...
                                                [ 1; 0; 0],...
                                                [-1; 0; 0],...
                                                [ 1; 0; 0],...
                                                [-1; 0; 0] ];
Spacecraft_1.surfaces_normalToSurface.Unit = '1';

% Aerodinamic drag coefficient of the various surfaces [ # ]
Spacecraft_1.surfaces_Cd = Simulink.Parameter;
Spacecraft_1.surfaces_Cd.Value = [ 1,...
                                   1,...
                                   1,...
                                   1,...
                                   1,...
                                   1,...
                                   1,...
                                   1,...
                                   1,...
                                   1 ];
Spacecraft_1.surfaces_Cd.Unit = '1';

%% Sensors data
Sensors_1.sunSensorSamplingFreq = Simulink.Parameter;
Sensors_1.sunSensorSamplingFreq.Value = 1;
Sensors_1.sunSensorSamplingFreq.Unit = 'Hz';


%% Simulink useless complications for creating a struct
% Look at: https://mathworks.com/help/simulink/ug/using-structure-parameters.html
% in the section "Combine Existing Parameter Objects Into a Structure"

% Contsants bus
Const = createSimulinkBus(Const_1);
ConstDT = copy(slBus1);
Const.DataType = 'Bus: ConstDT';

ConstDT = putBackPhisicalUnits(ConstDT, Const_1);
Const.StorageClass = 'ExportedGlobal';
clear slBus1


% Earth bus
Earth = createSimulinkBus(Earth_1);
EarthDT = copy(slBus1);
Earth.DataType = 'Bus: EarthDT';

EarthDT = putBackPhisicalUnits(EarthDT, Earth_1);
Earth.StorageClass = 'ExportedGlobal';
clear slBus1

% Spacecraft bus
Spacecraft = createSimulinkBus(Spacecraft_1);
SpacecraftDT = copy(slBus1);
Spacecraft.DataType = 'Bus: SpacecraftDT';

SpacecraftDT = putBackPhisicalUnits(SpacecraftDT, Spacecraft_1);
Spacecraft.StorageClass = 'ExportedGlobal';
clear slBus1

% Sensors bus
Sensors = createSimulinkBus(Sensors_1);
SensorsDT = copy(slBus1);
Sensors.DataType = 'Bus: SensorsDT';

SensorsDT = putBackPhisicalUnits(SensorsDT, Sensors_1);
Sensors.StorageClass = 'ExportedGlobal';
clear slBus1

% To avoid boilerplate code
function Var = createSimulinkBus(Var_1)
    VarFields = fieldnames(Var_1);
    Var = struct();
    for i = 1:numel(VarFields)
        currentField = VarFields{i};
        value = getfield(Var_1,currentField);
        value = value.Value;
        Var = setfield(Var,currentField,value);
    end

    Var = Simulink.Parameter(Var);

    Simulink.Bus.createObject(Var.Value);
end

function VarDT = putBackPhisicalUnits(VarDT, Var_1)
    VarFields = fieldnames(Var_1);
    for i = 1:numel(VarFields)
        currentField = VarFields{i};

        unit = getfield(Var_1,currentField);
        unit = unit.Unit;
        VarDT.Elements(i).Unit = unit;
    end
end