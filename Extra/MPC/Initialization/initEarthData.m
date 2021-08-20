% Planetary constant μ of the Earth [ km³/s² ]
Earth.mu = 398600;

% Radius of the Earth along the equator [ km ]
Earth.equatorialRadius = 6378.137;

% Duration of a sidereal day [ s ]
Earth.siderealDay = 86164.27788;

% Radiation pressure [ Pa ]
Earth.radiationPressure = 1358 / 299792458;

% Atmospheric model reference height [ km ]
Earth.atm.referenceHeight = 500:100:1000;

% Atmospheric model nominal density [ kg/m³ ]
Earth.atm.nominalDensity = [6.967e-13 1.454e-13 3.614e-14 1.170e-14 5.245e-15 3.019e-15];

% Atmospheric model scaling height [ km ]
Earth.atm.scaleHeight = [63.822 71.835 88.667 124.64 181.05 268.00];