% Useful quantities
n = 4; % Order
R = 6378.137; % Earth radius [ km ]

% IGRF 1995
G = 1e-9 * [-29682 -1789    0    0   0;...
             -2197  3074 1685    0   0;...
              1329 -2268 1249  769   0;...
               941   782  291 -421 116];
    
H = 1e-9 * [0  5318    0    0    0
            0 -2356 -425    0    0
            0  -263  302 -406    0
            0   262 -232   98 -301];

g = @(i,j) G(i,j+1);
h = @(i,j) H(i,j+1);

% Generating potential
syms r th ph x
V = 0;
for i=1:n
    appo = 0;
    for j=0:i
        P(x) = 1/(2^i*factorial(i)) * sqrt(2*factorial(i-j)/factorial(i+j)*(1-x^2)^j) * diff((x^2-1)^i,x,i+j);
        appo = appo + (g(i,j)*cos(j*ph)+h(i,j)*sin(i*ph)) * P(cos(th));
    end
    V = V + (R/r)^(i+1) * appo;
end
V = R * V;

% Magnetic field components
Br = -diff(V,r);
Bth = -1/r*diff(V,th);
Bph = -1/r/sin(th)*diff(V,ph);

% Convert to matlab function
Br  = matlabFunction(simplify(vpa(Br)));
Bth = matlabFunction(simplify(vpa(Bth)));
Bph = matlabFunction(simplify(vpa(Bph)));