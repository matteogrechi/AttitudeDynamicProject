function P = avgCov(w,dX,w0,Q)
    wTot = sum(w) + w0;
    w = w / wTot;
    
    P = zeros(size(dX*dX'));
    for i=1:size(dX,2)
        P = P + w(i) * dX(:,i)*dX(:,i)';
    end
    P = P + Q;
end