clear all
close all
clc
cd /home/robot/mpc_vrep
load('data_2705_jp.csv')
g = load('2805_goal.csv')
%%     Plot positions vs target
joint_positions = data_2705_jp(1:500,1:6);
goal_positions =  g(:,2:7);
q_dot_real = data_2705_jp(1:500,12:18);
q_dot =  data_2705_jp(1:500,19:24);

len = 100;
fig_1 = figure('Name', 'Joint positions')
subplot(3,2,1);
grid on;
hold on;
plot(joint_positions(:,1))
plot(goal_positions(:,1))
title('joint_{1}')
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

subplot(3,2,2);
grid on
hold on;
plot(joint_positions(:,2));
plot(goal_positions(:,2));
title('joint_{2}')
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

subplot(3,2,3);
hold on;
grid on;
plot(joint_positions(:,3));
plot(goal_positions(:,3));
title('joint_{3}')
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

subplot(3,2,4);
grid on;
hold on;
plot(joint_positions(:,4));
plot(goal_positions(:,4));
title('joint_{4}')
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

subplot(3,2,5);
grid on;
hold on;
plot(joint_positions(:,5));
plot(goal_positions(:,5));
title('joint_{5}')
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

subplot(3,2,6);
hold on;
grid on;
l1 = plot(joint_positions(:,6));
l2 = plot(goal_positions(:,6));
title('joint_{6}')
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
xlabel('time, seconds')

% Construct a Legend with the data from the sub-plots
hL = legend([l1,l2],{"q", "q goal"});
% Programatically move the Legend
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
filename = sprintf('%s_%d.png', 'jp', i);
saveas(fig_1, filename);

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
