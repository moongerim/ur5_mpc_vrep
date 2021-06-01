clear all
close all
clc
cd /home/robot/
load('data_2705_ctp.csv')

%% Plot cposes
formula_cposes = data_2705_ctp(:,1:24);
vrep_cposes =  data_2705_ctp(:,25:48);
ans1 = data_2705_ctp(:,1);
ans2 = data_2705_ctp(:,25);
len = 100;
fig_1 = figure('Name', '1-4')
x_shift = 0;
y_shift = 0;
z_shift = 0;
a=1;
subplot(4,3,a);
grid on;
hold on;
plot(x_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 1 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=2;
subplot(4,3,a);
grid on;
hold on;
plot(y_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 1 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=3;
subplot(4,3,a);
grid on;
hold on;
plot(z_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 1 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=4;
subplot(4,3,a);
grid on;
hold on;
plot(x_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 2 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=5;
subplot(4,3,a);
grid on;
hold on;
plot(y_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 2 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=6;
subplot(4,3,a);
grid on;
hold on;
plot(z_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 2 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=7;
subplot(4,3,a);
grid on;
hold on;
plot(x_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 3 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=8;
subplot(4,3,a);
grid on;
hold on;
plot(y_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 3 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=9;
subplot(4,3,a);
grid on;
hold on;
plot(z_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 3 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=10;
subplot(4,3,a);
grid on;
hold on;
plot(x_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 4 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=11;
subplot(4,3,a);
grid on;
hold on;
plot(y_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 4 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=12;
subplot(4,3,a);
grid on;
hold on;
l1 = plot(z_shift+formula_cposes(:,a));
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
plot(x_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 5 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=14;
subplot(4,3,a-12);
grid on;
hold on;
plot(y_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 5 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=15;
subplot(4,3,a-12);
grid on;
hold on;
plot(z_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 5 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=16;
subplot(4,3,a-12);
grid on;
hold on;
plot(x_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 6 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=17;
subplot(4,3,a-12);
grid on;
hold on;
plot(y_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 6 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=18;
subplot(4,3,a-12);
grid on;
hold on;
plot(z_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 6 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=19;
subplot(4,3,a-12);
grid on;
hold on;
plot(x_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 7 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=20;
subplot(4,3,a-12);
grid on;
hold on;
plot(y_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 7 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=21;
subplot(4,3,a-12);
grid on;
hold on;
plot(z_shift+formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 7 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=22;
subplot(4,3,a-12);
grid on;
hold on;
plot(x_shift+formula_cposes(:,a));
plot(vrep_cposes(:,22));
title('test point 8 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=23
subplot(4,3,a-12);
grid on;
hold on;
plot(y_shift+formula_cposes(:,a));
plot(vrep_cposes(:,23));
title('test point 8 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=24;
subplot(4,3,a-12);
grid on;
hold on;
l1 = plot(z_shift+formula_cposes(:,a));
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
