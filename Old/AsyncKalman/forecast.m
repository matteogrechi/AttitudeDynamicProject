function [x,Px,X] = forecast(f,X,Q,W0)
    n = size(X,1);
    Wi = (1 - W0)/(2*n);
    
    % Propagating sigma points
    for i = size(X,2)
        X(:,i) = f(X(:,i));
    end
    
    % New state estimate
    x = W0 * X(:,1) + Wi * sum(X(:,2:end),2);
    
    % New covariance estimate
    Px = W0 * (X(:,1) - x)*(X(:,1) - x)';
    for i = 2:size(X,2)
        Px = Px + Wi * (X(:,i) - x)*(X(:,i) - x)';
    end
    Px = Px + Q;
end