function [x,Px] = correct(h,y,x,X,Px,R,W0)
    n = numel(x);
    Wi = (1 - W0)/(2*n);
    
    % Sigma points in predicted measurement
    Y = h(X);
    
    % Predicted measurement
    yHat = W0 * Y(:,1) + Wi * sum(Y(:,2:end),2);
    
    % Predicted measurement covariance
    Py = W0 * (Y(:,1) - yHat)*(Y(:,1) - yHat)';
    for i=2:2*n+1
        Py = Py + Wi * (Y(:,i) - yHat)*(Y(:,i) - yHat)';
    end
    Py = Py + R;
    
    % Cross covariance between predicted state and measurement
    Pxy = W0 * (X(:,1) - x)*(Y(:,1) - yHat)';
    for i=2:2*n+1
       Pxy = Pxy + Wi * (X(:,i) - x)*(Y(:,i) - yHat)';
    end
    
    % Kalman gain
    K = Pxy / Py;

    % Applying correction
    x = x + K * (y - yHat);
    Px = Px - K*Py*K';
end