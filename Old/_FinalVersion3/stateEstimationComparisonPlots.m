Cov = diag([1e-4*ones(1,4) 1e-8*ones(1,3)]);
%%
Cov = [ 0.6875   -0.1598   -0.0099    0.0077          0          0          0 ;...
       -0.1598    0.8544    0.0143    0.0072          0          0          0 ;...
       -0.0099    0.0143    0.0031    0.0000          0          0          0 ;...
        0.0077    0.0072    0.0000    0.0026          0          0          0 ;...
             0         0         0         0       1e-8          0          0 ;...
             0         0         0         0          0       1e-8          0 ;...
             0         0         0         0          0          0       1e-8 ];

%%
plot(out.simpleReadingAttitudeErr)
hold on
plot(out.additiveUKFAttitudeErr)
hold on
plot(out.nonAdditiveUKFAttitudeErr)
hold on
plot(out.lpfAttitudeErr)
legend("sr1","sr2","sr3","a1","a2","a3","n1","n2","n3","lpf1","lpf2","lpf3");

%%
w = sym('w',[1 4],'real');
r1 = [cos(w(1)/2) 0 0 sin(w(1)/2)];
r2 = [cos(w(2)/2) sin(w(2)/2) 0 0];
r3 = [cos(w(3)/2) 0 0 sin(w(3)/2)];
r = quatmultiply(r2,r1);
r = quatmultiply(r3,r);

r = matlabFunction(r);