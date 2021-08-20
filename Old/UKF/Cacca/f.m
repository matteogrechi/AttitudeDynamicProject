function x = f(x,dt)
    %dt = 0.01;
    g = @(x) [x(2); -9.81*sin(x(1))];
    
    % RK4 method
    k1 = g(x);
    k2 = g(x+dt*0.5*k1);
    k3 = g(x+dt*0.5*k2);
    k4 = g(x+dt*k3);
    
    x = x + dt * g(x); % (k1+2*k2+2*k3+k4)/6;% % % 
    
%     [~,xx] = ode113(@(t,x) [-x(2); -9.81*sin(x(1))], [0 dt], x);
%     xx = xx';
%     x = xx(:,end);
end