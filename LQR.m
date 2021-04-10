J = [8.009 8.009 1.251];
omegaRef = [0 0 7.478/7128.137];

A = [ (J(2)-J(3))/J(1)*[0 omegaRef(3) omegaRef(2)];...
      (J(3)-J(1))/J(2)*[omegaRef(3) 0 omegaRef(1)];...
      (J(1)-J(2))/J(3)*[omegaRef(2) omegaRef(1) 0] ];
  
B = eye(3);

K = lqr(A,B,eye(3),eye(3),zeros(3));