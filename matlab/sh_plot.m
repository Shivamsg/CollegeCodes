clc
clear all
close all

%plot

x=1:5;
y=3:7;
plot(x,y)
hold on
plot(y,x,'*m')

xlabel('x-axis --->')
ylabel('y-axis --->')
title('First plot in MATLAB')

axis([0 7 0 7])

grid on


