n = 1024;
r = randn(6,n);

[x,y,z] = sphere(4);
x = reshape(x,numel(x),1);
y = reshape(y,numel(y),1);
z = reshape(z,numel(z),1);

meanq = cell(numel(x),numel(x),numel(x),numel(x));
varq = cell(numel(x),numel(x),numel(x),numel(x));

for l = 1:numel(x)
for m = 1:numel(x)
for n = 1:numel(x)
for o = 1:numel(x)
    sunBF = [x(l) y(l) z(l)];
    earthBF = [x(m) y(m) z(m)];
    sunECI = [x(n) y(n) z(n)];
    earthECI = [x(o) y(o) z(o)];
    q = zeros(n,4);
    for i=1:n
        Rsun = [  cos(r(1,i))*cos(r(2,i))   cos(r(1,i))*sin(r(2,i))*sin(r(3,i))+sin(r(1,i))*cos(r(3,i))  -cos(r(1,i))*sin(r(2,i))*cos(r(3,i))+sin(r(1,i))*sin(r(3,i));
                 -sin(r(1,i))*cos(r(2,i))  -sin(r(1,i))*sin(r(2,i))*sin(r(3,i))+cos(r(1,i))*cos(r(3,i))   sin(r(1,i))*sin(r(2,i))*cos(r(3,i))+cos(r(1,i))*sin(r(3,i));
                              sin(r(2,i))                                      -cos(r(2,i))*sin(r(3,i))                                       cos(r(2,i))*cos(r(3,i)) ];

        Rearth = [  cos(r(4,i))*cos(r(5,i))   cos(r(4,i))*sin(r(5,i))*sin(r(6,i))+sin(r(4,i))*cos(r(6,i))  -cos(r(4,i))*sin(r(5,i))*cos(r(6,i))+sin(r(4,i))*sin(r(6,i));
                   -sin(r(4,i))*cos(r(5,i))  -sin(r(4,i))*sin(r(5,i))*sin(r(6,i))+cos(r(4,i))*cos(r(6,i))   sin(r(4,i))*sin(r(5,i))*cos(r(6,i))+cos(r(4,i))*sin(r(6,i));
                                sin(r(5,i))                                      -cos(r(5,i))*sin(r(6,i))                                       cos(r(5,i))*cos(r(6,i)) ];

        s1 = earthBF;
        s2 = cross(earthBF,sunBF);
        s2 = s2 / norm(s2);
        s3 = cross(earthBF,s2);

        v1 = earthECI;
        v2 = cross(earthECI,sunECI);
        v2 = v2 / norm(v2);
        v3 = cross(earthECI,v2);

        A = [s1 s2 s3]*[v1 v2 v3]';

        q(i,:) = dcm2quat(A);
    end
    meanq{l,m,n,o} = mean(q);
    varq{l,m,n,o} = var(q);
end
end
end
end