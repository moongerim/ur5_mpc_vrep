clear all
close all
clc
cd /home/robot/workspaces/ur5_mpc_vrep
low = load('data_low.csv');

%% Plot cposes
s = 10;
[e,mm] = size(low);
formula_cposes = low(s:e,1:24);
vrep_cposes =  low(s:e,25:48);


% x_shift = -1;
% y_shift = -0.5;
% z_shift = 1.2;

% 
x_shift = 0;
y_shift = 0;
z_shift = 0;
formula_cposes(:,1) = formula_cposes(:,1)+x_shift;
formula_cposes(:,2) = formula_cposes(:,2)+y_shift;
formula_cposes(:,3) = formula_cposes(:,3)+z_shift;
formula_cposes(:,4) = formula_cposes(:,4)+x_shift;
formula_cposes(:,5) = formula_cposes(:,5)+y_shift;
formula_cposes(:,6) = formula_cposes(:,6)+z_shift;
formula_cposes(:,7) = formula_cposes(:,7)+x_shift;
formula_cposes(:,8) = formula_cposes(:,8)+y_shift;
formula_cposes(:,9) = formula_cposes(:,9)+z_shift;
formula_cposes(:,10) = formula_cposes(:,10)+x_shift;
formula_cposes(:,11) = formula_cposes(:,11)+y_shift;
formula_cposes(:,12) = formula_cposes(:,12)+z_shift;
formula_cposes(:,13) = formula_cposes(:,13)+x_shift;
formula_cposes(:,14) = formula_cposes(:,14)+y_shift;
formula_cposes(:,15) = formula_cposes(:,15)+z_shift;
formula_cposes(:,16) = formula_cposes(:,16)+x_shift;
formula_cposes(:,17) = formula_cposes(:,17)+y_shift;
formula_cposes(:,18) = formula_cposes(:,18)+z_shift;
formula_cposes(:,19) = formula_cposes(:,19)+x_shift;
formula_cposes(:,20) = formula_cposes(:,20)+y_shift;
formula_cposes(:,21) = formula_cposes(:,21)+z_shift;
formula_cposes(:,22) = formula_cposes(:,22)+x_shift;
formula_cposes(:,23) = formula_cposes(:,23)+y_shift;
formula_cposes(:,24) = formula_cposes(:,24)+z_shift;

% diff  = formula_cposes-vrep_cposes;
% diff = max(abs(diff))

diff = formula_cposes-vrep_cposes
for i=1:24
    max_diff(i) = max(diff(:,i))
end
len = 100;
fig_1 = figure('Name', '1-4')


a=1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 1 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=2;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 1 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=3;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 1 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=4;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 2 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=5;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 2 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=6;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 2 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=7;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 3 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=8;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 3 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=9;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 3 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=10;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 4 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=11;
subplot(4,3,a);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 4 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=12;
subplot(4,3,a);
grid on;
hold on;
l1 = plot(formula_cposes(:,a));
l2 = plot(vrep_cposes(:,a));
title('test point 4 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],{"formula", "vrep"});
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_2 = figure('Name', '5-8')

a=13;

subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 5 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=14;
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 5 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=15;
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 5 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=16;
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 6 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=17;
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 6 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=18;
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 6 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=19;
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 7 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=20;
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 7 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=21;
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 7 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=22;
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,22));
title('test point 8 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=23
subplot(4,3,a-12);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,23));
title('test point 8 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=24;
subplot(4,3,a-12);
grid on;
hold on;
l1 = plot(formula_cposes(:,a));
l2 = plot(vrep_cposes(:,24))
title('test point 8 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],{"formula", "vrep"});
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

%%     Plot positions vs target
% joint_positions = data_low_2505(:,1:6);
% goal_positions =  data_low_2505(:,7:12);
% q_dot_real = data_low_2505(:,12:18);
% q_dot =  data_low_2505(:,19:24);
% len = 100;
% fig_1 = figure('Name', 'Joint positions')
% subplot(3,2,1);
% grid on;
% hold on;
% plot(joint_positions(:,1))
% plot(goal_positions(:,1))
% title('joint_{1}')
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% 
% subplot(3,2,2);
% grid on
% hold on;
% plot(joint_positions(:,2));
% plot(goal_positions(:,2));
% title('joint_{2}')
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% 
% subplot(3,2,3);
% hold on;
% grid on;
% plot(joint_positions(:,3));
% plot(goal_positions(:,3));
% title('joint_{3}')
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% 
% subplot(3,2,4);
% grid on;
% hold on;
% plot(joint_positions(:,4));
% plot(goal_positions(:,4));
% title('joint_{4}')
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% 
% subplot(3,2,5);
% grid on;
% hold on;
% plot(joint_positions(:,5));
% plot(goal_positions(:,5));
% title('joint_{5}')
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% 
% subplot(3,2,6);
% hold on;
% grid on;
% l1 = plot(joint_positions(:,6));
% l2 = plot(goal_positions(:,6));
% title('joint_{6}')
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% xlabel('time, seconds')
% 
% % Construct a Legend with the data from the sub-plots
% hL = legend([l1,l2],{"q", "q goal"});
% % Programatically move the Legend
% newPosition = [0.6 0.1 0.1 0.1];
% newUnits = 'normalized';
% set(hL,'Position', newPosition,'Units', newUnits);
% filename = sprintf('%s_%d.png', 'jp', i);
% saveas(fig_1, filename);
% 
% fig_2 = figure('Name','velocities')
% 
% subplot(3,2,1);
% grid on;
% hold on;
% plot(q_dot_real(:,1));
% plot(q_dot(:,1));
% title('joint_{1}');
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% 
% subplot(3,2,2);
% grid on
% hold on;
% plot(q_dot_real(:,2));
% plot(q_dot(:,2));
% title('joint_{2}');
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% subplot(3,2,3);
% hold on;
% grid on;
% plot(q_dot_real(:,3));
% plot(q_dot(:,3));
% title('joint_{3}');
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% 
% subplot(3,2,4);
% grid on;
% hold on;
% plot(q_dot_real(:,4));
% plot(q_dot(:,4));
% title('joint_{4}');
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% 
% subplot(3,2,5);
% grid on;
% hold on;
% plot(q_dot_real(:,5));
% plot(q_dot(:,5));
% title('joint_{5}');
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% 
% subplot(3,2,6);
% hold on;
% grid on;
% l1 = plot(q_dot_real(:,6));
% l2 = plot(q_dot(:,6));
% title('joint_{6}');
% set(gca,'XTick',0:100:100*len);
% set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
% xlabel('time, seconds')
% 
% hL = legend([l1,l2],{"real velocity", "MPC solutions"});
% newPosition = [0.6 0.1 0.1 0.1];
% newUnits = 'normalized';
% set(hL,'Position', newPosition,'Units', newUnits);
% filename = sprintf('%s_%d.png', 'vel_i', i);
% saveas(fig_2, filename);
