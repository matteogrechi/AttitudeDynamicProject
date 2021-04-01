function y = attitudeMeasurement(x)%,v)
% r = r3*r2*r1 where
% r1 = [cos(w(1)/2) 0 0 sin(w(1)/2)]';
% r2 = [cos(w(2)/2) sin(w(2)/2) 0 0]';
% r3 = [cos(w(3)/2) 0 0 sin(w(3)/2)]';
% CODE USED:
%   w = sym('w',[1 4],'real');
%   r1 = [cos(w(1)/2) 0 0 sin(w(1)/2)];
%   r2 = [cos(w(2)/2) sin(w(2)/2) 0 0];
%   r3 = [cos(w(2)/2) 0 0 sin(w(2)/2)];
%   r = quatmultiply(r2,r1);
%   r = quatmultiply(r3,r);

% r = [ cos(v(1)/2)^2*cos(v(2)/2) - cos(v(2)/2)*sin(v(1)/2)*sin(v(3)/2),...
%       cos(v(1)/2)^2*sin(v(2)/2) + sin(v(1)/2)*sin(v(2)/2)*sin(v(3)/2),...
%       cos(v(1)/2)*sin(v(2)/2)*sin(v(3)/2) - cos(v(1)/2)*sin(v(1)/2)*sin(v(2)/2),...
%       cos(v(1)/2)*cos(v(2)/2)*sin(v(1)/2) + cos(v(1)/2)*cos(v(2)/2)*sin(v(3)/2) ];
% 
% q = quatmultiply(r,x(1:4)');
q = x(1:4);
omega = x(5:7);% + v(4:6);
q = sign(q(1))*q;

y = [q;omega];