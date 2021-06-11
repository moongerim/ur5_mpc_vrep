clear all
close all
clc
cd /home/robot/workspaces/ur5_mpc_vrep
low = load('data_low.csv');
high = load('data_high.csv');

%% Store data:
ctp_f = low(:,1:24);
ctp_v = low(:,25:48);
dist_val = low(:,49:160);
dist_vrep = low(:,161:272);
human_sphere = low(:,273:314);
human_vrep = low(:,315:356);
joint_positions = low(:,357:362);
goal_positions =  low(:,363:368);
q_dot_real = low(:,369:374);
q_dot =  low(:,375:380);
min_dist = low(:,381:388);
vrep_time = high(:,1);
high_solutions = high(:,2:16);
smallest_distance = high(:,17);
row_index = high(:,18);
goal = high(:,19:24);
min_dist_high = high(:,25:32);
len = 1000;
dt = 500
%% Plot joint positions Vs Goal Positions
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
hL = legend([l1,l2],["q", "q goal"]);
% Programatically move the Legend
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
saveas(fig_1, 'jp.png');

%% Plot distances low
fig_2 = figure('Name','distances')
hold on;
for i=1:8
    plot(min_dist(5:end,i));
end
set(gca,'XTick',0:dt:dt*len); set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

legend('test point 1','test point 2','test point 3','test point 4','test point 5','test point 6','test point 7','test point 8')
saveas(fig_2, 'dist_val.png');
%% Plot joint velocities Vs MPC solutions
% fig_4 = figure('Name','velocities')
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
% hL = legend([l1,l2],["q_dot", "MPC solutions"]);
% newPosition = [0.6 0.1 0.1 0.1];
% newUnits = 'normalized';
% set(hL,'Position', newPosition,'Units', newUnits);
% saveas(fig_4, 'jv.png');
