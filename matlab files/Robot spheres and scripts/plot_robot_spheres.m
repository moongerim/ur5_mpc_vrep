% load('exampleHelperKINOVAGen3GripperColl.mat');
close all
clear all
clc
robot = loadrobot('universalUR5','DataFormat','row','Gravity',[0 0 -9.81]);
currentRobotJConfig = homeConfiguration(robot);
my_figure = show(robot,currentRobotJConfig,'PreservePlot',false,'Frames','off');

xlim([-1.5, 1.5])
zlim([0, 1.4])

set(gca,'View',[180, 0])

for i=1:10
    transform = getTransform(robot,currentRobotJConfig,robot.BodyNames{i});
    disp(robot.BodyNames{i})
    disp(transform(1:3,4)')
end
hold on
%% plot spheres
my_radius = [0.29, 0.13, 0.13, 0.13, 0.13, 0.15, 0.12, 0.18];

% my_y = [-0.0054, -0.0118, -0.0181, -0.0245, -0.0247,-0.0249,-0.0249];
% my_z = [0.2848, 0.4952, 0.7056, 0.9140, 1.0199, 1.1259,1.1259+0.0615+0.07];

my_y = [0, 0, 0, 0, 0, -0.10915, -0.10915, -0.19145];
my_x = [-0.425, -0.81725, -0.81725, -0.81725, -0.81725, -0.81725,-0.81725,-0.81725]
my_z = [0.08915, 0.08915, 0.08915, 0.08915, 0.08915, 0.08915, 0.08915, -0.00549];

[x,y,z] = sphere;
lightGrey = 0.8*[1 1 1]; % It looks better if the lines are lighter
for i=1:7
    r=my_radius(i);a=0;b=my_y(i);c=my_z(i);surf(x*r+a, y*r+b, z*r+c,'FaceColor', 'none','EdgeColor',lightGrey);
end




% test point 1:-0.425, 0, 0.089159000000000002139621813057602
%  
% test point 2:-0.81725, 0,0.089159000000000002139621813057602
%  
% test point 3:-0.81725,0,0.089159000000000002139621813057602
%  
% test point 4:-0.81725,0,0.089159000000000002139621813057602
%  
% test point 5:-0.81725,0,0.089159000000000002139621813057602
%  
% test point 6:-0.81725,-0.10915,0.089159000000000002139621813057602
%  
% test point 7: -0.81725,-0.10915, 0.0891509999999999958841812031096197
%  
% test point 8: -0.81725,-0.19145, -0.0054909999999999958841812031096197

% vpa(subs(T6,[q1 q2 q3 q4 q5 q6], [ 0 0 0 0 0 0]))
