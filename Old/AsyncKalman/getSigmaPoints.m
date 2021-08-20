function X = getSigmaPoints(x,P,W0)
%     assert(W0 > -1 && W0 < 1,"W0 must be > -1 and < 1");
%     assert(isequal(P,P'),"P must be symmetric");
    
    S = real(sqrtm(P));
    n = numel(x);
    
    X = zeros(n,2*n+1);
    
    X(:,1) = x;
    S = sqrt(n/(1-W0))*S;
    for i=1:n
        X(:,1+i)   = x + S(:,i);
        X(:,n+1+i) = x - S(:,i);
    end
end