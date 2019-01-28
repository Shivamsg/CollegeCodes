clc
close all
clear all

%sin cos plot

t= 0:pi/5000:2*pi;

y= sin(t);
plot(t,y)
grid on
hold on
y1= cos(t);
plot(t,y1)
