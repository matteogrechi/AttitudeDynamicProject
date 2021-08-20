function [xHat,P] = predict(fun,xHat,P,dt)
    sqrtP = sqrtm(P);
    % Sigma points
    % W0 = 0, W(j) == 1 fa j
    n = size(xHat,1);
    X = zeros(n,2*n);
    X(:,1:n) = xHat + sqrt(n) * sqrtP;
    X(:,n+1:2*n) = xHat - sqrt(n) * sqrtP;
    
    % Propagate sigma points (FWD Euler)
    for i=1:n
        X(:,i) = X(:,i) + dt * fun(X(:,i));
    end
    
    % New state
    xHat = mean(X,2);
    
    % New covariance
    P = zeros(n);
    for i=1:n
        P = P + (X(:,i) - xHat)*(X(:,i) - xHat)';
    end
end