function fx = rk4step(f,x,dt)
    [~,fx] = ode113(f,[0 dt],x);
    fx = fx';
    fx = fx(:,end);
end

% function fx = rk4step(f,x,dt)
%     fx = x + dt * f(0,x);
% end
% function fx = rk4step(f,x,dt)
%     k1 = f(0, x);
%     k2 = f(0, x+dt/2*k1);
%     k3 = f(0, x+dt/2*k2);
%     k4 = f(0, x+dt*k3);
%     fx = x + 1/6*dt*(k1+2*k2+2*k3+k4);
% end







