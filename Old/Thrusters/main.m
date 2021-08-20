clear;
clc;

cgt.thrust = 1e-1;
a = 30e-2;
b = 20e-2;
c = 10e-2;
cgt.position =  {[a -b -c],[a -b -c],[a -b -c],[a b -c],[a b -c],[a b -c],[a b c],[a b c],[a b c],[a -b c],[a -b c],[a -b c]}; %m
cgt.direction = {  [1 0 0], [0 -1 0], [0 0 -1], [1 0 0], [0 1 0],[0 0 -1],[1 0 0],[0 1 0],[0 0 1], [1 0 0],[0 -1 0], [0 0 1]}; %m

% Consider a geometric center != center of mass (RG-RO)
com.position = [1 1 1]*1e-1; % m

% T = F x (R-RG) = F x (R-RO) + F x (RO-RG)
cgt.torque = cellfun(@(x,n) cross(x-com.position,-n)',cgt.position,cgt.direction,'UniformOutput',false);
cgt.torque = cgt.thrust * cell2mat(cgt.torque);

% Assembly all possible activation schemes torques
N = 2^(numel(cgt.direction))-1;
possibleTorque = zeros(3,N+1);
for i = 1:N
    idx = de2bi(i,numel(cgt.direction));
    possibleTorque(:,i+1) = sum(cgt.torque .* idx,2);
end

% Find duplicates
possibleTorque = [ possibleTorque; zeros(1,N+1); 0:N ];
for i=0:N
    possibleTorque(4,i+1) = sum(de2bi(i));
end
possibleTorque(1:3,:) = round(possibleTorque(1:3,:),2,'significant');
possibleTorque = sortrows(possibleTorque','ascend')';

% Dropping duplicates
reducedControlSet = possibleTorque(:,1);
appo = possibleTorque(:,1);
for i = 2:N+1
    if ~isequal(possibleTorque(1:3,i),appo(1:3))
        appo = possibleTorque(:,i);
        reducedControlSet = [reducedControlSet appo];
    end
end

% Lookup table generation
torqueLookUpTable = reducedControlSet';
torqueLookUpTable = [de2bi(torqueLookUpTable(:,5)) torqueLookUpTable(:,1) torqueLookUpTable(:,2) torqueLookUpTable(:,3)];

appo = possibleTorque(1:3,:) == [0;0;0];
% [0 0 0]
C1 = find( prod(appo) );
% [0 0 *]
C2 = find( prod([appo(1:2,:); ~appo(3,:)]) );
% [0 * 0]
C3 = find( prod([appo(1,:); ~appo(2,:); appo(3,:)]) );
% [* 0 0]
C4 = find( prod([~appo(1,:); appo(2,:); appo(3,:)]) );

possibleTorque(:,C1)
possibleTorque(:,C2)
possibleTorque(:,C3)
C2 = possibleTorque(:,C2);
[~,idx] = max(C2(1,:)./C2(4,:));
C1(:,idx)