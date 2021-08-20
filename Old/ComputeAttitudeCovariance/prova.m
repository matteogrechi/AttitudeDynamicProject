clear
clc
close all


y = randn(1,1000000);

muY = mean(y);
varY = var(y);

% f = @(x) (x.*exp(-x.^2)/sqrt(pi)).^2;
% q = integral(f,-1000,1000);

x = -6:.01:6;
p = zeros(size(x));
for i=1:numel(p)-1
    p(i) = sum(x(i)<y & y<x(i+1)) / numel(y) / (x(i+1)-x(i));
end

plot(x,p)
grid on

hold on

mu = zeros(2,1);
var = rand(2);
varInv = inv(var);
sqrtDetVarInv = sqrt(det(varInv));
normalize = 1/sqrt(2*pi)^(numel(mu)/2);
N = @(x) normalize * sqrtDetVarInv * exp(-0.5*(x-mu)'*varInv*(x-mu));

[X,Y] = meshgrid([-10:.01:10],[-10:.01:10]);
X = reshape(X,1,numel(X));
Y = reshape(Y,1,numel(Y));
x = [X;Y];
z = arrayfun(@(x) N(x), x, 'UniformOutput', false);
z = cell2mat(z);
%plot(x,exp(-1/2*((x - muY)/varY).^2)/varY/sqrt(2*pi));