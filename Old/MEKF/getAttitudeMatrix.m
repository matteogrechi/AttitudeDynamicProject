function A = getAttitudeMatrix(q)
%GETATTITUDEMATRIX Summary of this function goes here
%   Detailed explanation goes here

% q = [qReal qVec(1) qVec(2) qVec(3)];
A = [ q(1)^2-q(2)^2-q(3)^2-q(4)^2         2*(q(2)*q(3)+q(4)*q(1))         2*(q(2)*q(4)-q(3)*q(1));...
          2*(q(2)*q(3)-q(4)*q(1))     q(1)^2-q(2)^2+q(3)^2-q(4)^2         2*(q(3)*q(4)+q(2)*q(1));...
          2*(q(2)*q(4)+q(3)*q(1))         2*(q(3)*q(4)-q(2)*q(1))     q(1)^2-q(2)^2-q(3)^2+q(4)^2];
end

