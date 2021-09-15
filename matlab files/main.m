clear all
close all
clc
cd /home/robot/workspaces/ur5_mpc_vrep
low = load('data_low.csv');

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

goal = low(:,389:394);

ctv = low(:,395:418);
ctv_vrep = low(:,419:442);
smallest_distance = low(:,443);

from_high_solutions = low(:,444:455);
from_high_CSTV = low(:,456:523);
from_high_c_goal = low(:,524:526);
from_high_dist = low(:,527:638);
from_high_min_dist = low(:,639:646);

from_high_jp = low(:,456:461);
from_high_goal = low(:,461:466);
human = low(:,467:523);

linvelscale = low(:,647);
len = 5000;
dt = 1000;
s = 10;
e = length(goal);
% e = 500;
%% Plot joint positions Vs Goal Positions
fig_1 = figure('Name', 'Joint positions')
subplot(3,2,1);
grid on;
hold on;
plot(joint_positions(s:e,1))
plot(goal_positions(s:e,1))
plot(from_high_jp(s:e,1))
title('joint_{1}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,2);
grid on
hold on;
plot(joint_positions(s:e,2));
plot(goal_positions(s:e,2));
plot(from_high_jp(s:e,2))
title('joint_{2}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,3);
hold on;
grid on;
plot(joint_positions(s:e,3));
plot(goal_positions(s:e,3));
plot(from_high_jp(s:e,3))
title('joint_{3}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,4);
grid on;
hold on;
plot(joint_positions(s:e,4));
plot(goal_positions(s:e,4));
plot(from_high_jp(s:e,4));
title('joint_{4}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,5);
grid on;
hold on;
plot(joint_positions(s:e,5));
plot(goal_positions(s:e,5));
plot(from_high_jp(s:e,5))
title('joint_{5}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,6);
hold on;
grid on;
l1 = plot(joint_positions(s:e,6));
l2 = plot(goal_positions(s:e,6));
l4 = plot(from_high_jp(s:e,6))
title('joint_{6}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
xlabel('time, seconds')

% Construct a Legend with the data from the sub-plots
hL = legend([l1,l2, l4],["JP from low", "controller goal", "JP from high"]);
% Programatically move the Legend
newPosition = [0.45 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
saveas(fig_1, 'jp.png');

%% Plot distances low
fig_2 = figure('Name','distances')
hold on;
for i=1:8
    plot(min_dist(s:e,i));
    
end
% plot(smallest_distance(s:e))
set(gca,'XTick',0:dt:dt*len); set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

legend('test point 1','test point 2','test point 3','test point 4','test point 5','test point 6','test point 7','test point 8')
saveas(fig_2, 'dist_val.png');

%% Plot distances low
fig_3 = figure('Name','distances')
hold on;
for i=1:8
    plot(from_high_min_dist(s:e,i));
end
% plot(smallest_distance(s:e))
set(gca,'XTick',0:dt:dt*len); set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

legend('test point 1','test point 2','test point 3','test point 4','test point 5','test point 6','test point 7','test point 8')
saveas(fig_3, 'dist_val_h.png');



%% Plot joint velocities Vs MPC solutions
fig_4 = figure('Name','velocities')

subplot(3,2,1);
grid on;
hold on;
plot(q_dot_real(s:e,1));
plot(q_dot(s:e,1));
title('joint_{1}');
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,2);
grid on
hold on;
plot(q_dot_real(s:e,2));
plot(q_dot(s:e,2));
title('joint_{2}');
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
subplot(3,2,3);
hold on;
grid on;
plot(q_dot_real(s:e,3));
plot(q_dot(s:e,3));
title('joint_{3}');
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,4);
grid on;
hold on;
plot(q_dot_real(s:e,4));
plot(q_dot(s:e,4));
title('joint_{4}');
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,5);
grid on;
hold on;
plot(q_dot_real(s:e,5));
plot(q_dot(s:e,5));
title('joint_{5}');
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,6);
hold on;
grid on;
l1 = plot(q_dot_real(s:e,6));
l2 = plot(q_dot(s:e,6));
title('joint_{6}');
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
xlabel('time, seconds')

hL = legend([l1,l2],["q dot", "MPC solutions"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
saveas(fig_4, 'jv.png');
