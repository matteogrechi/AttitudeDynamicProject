function P = avgCrossCov(w,dX,dY,w0)
    wTot = sum(w) + w0;
    w = w / wTot;
    
    P = zeros(size(dX*dY'));
    for i=1:size(dX,2)
        P = P + w(i) * dX(:,i)*dY(:,i)';
    end
end