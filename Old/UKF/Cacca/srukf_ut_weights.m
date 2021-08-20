function [WM, WC] = srukf_ut_weights(n, alpha, beta, kappa)
    lambda = alpha^2 * (n + kappa) - n;
    WM = [ lambda / (n + lambda), 1 / (2 * (n + lambda)) * ones(1,2*n) ]';
    WC = WM;
    WC(1) = lambda / (n + lambda) + (1 - alpha^2 + beta);
%     WM = zeros(2*n+1,1);
%     WC = zeros(2*n+1,1);
%     for j=1:2*n+1
%         if j==1
%             WM(j) = lambda / (n + lambda);
%             WC(j) = lambda / (n + lambda) + (1 - alpha^2 + beta);
%         else
%             WM(j) = 1 / (2 * (n + lambda));
%             WC(j) = WM(j);
%         end
%     end
end