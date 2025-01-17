% Decompose signal using the MODWT

% Generated by MATLAB(R) 24.2 and Wavelet Toolbox 24.2.
% Generated on: 14-Nov-2024 10:32:18

% Logical array for selecting reconstruction elements
levelForReconstruction = [true,false,false,false,true];

% Perform the decomposition using modwt
wt = modwt(signal,'db1',4);

% Construct MRA matrix using modwtmra
mra = modwtmra(wt,'db1');

% Sum down the rows of the selected multiresolution signals
signal1 = sum(mra(levelForReconstruction,:),1);
