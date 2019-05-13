% define training set input
x = [0 0 1 1; 0 1 0 1];


% define training set output (target) [OR PROBLEM]
t = [0 0 0 1 ];

net = perceptron;
net = train(net, x, t); %opens the training tool and trains the network

view(net); %plots the NN as diagrams

y = net(x);

% plot input and output (V)ectors
plotpv(x, t);
% plot (C)lassification line on previous vector plot
plotpc (net.iW{1}, net.b{1});