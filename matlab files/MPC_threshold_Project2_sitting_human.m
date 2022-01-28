clear variables
close all
clc
cd /home/robot/workspaces/ur5_mpc_ursim/data_1811/2
low = load('data_6.csv');
s=100;
[e,n]=size(low);
len = e;
% e=5000
dt = 0.05;
ctp_f = low(:,1:30);
human_sphere = low(:,31:72);

joint_positions = low(:,73:78);
goal_positions =  low(:,79:84);
q_dot_real = low(:,85:90);

low_MPC_solutions =  low(:,91:99);
min_dist = low(s:e,100:109);
smallest_distance = low(:,110);
linvelscale = low(:,111);

from_high = low(:,112:141);
ctv = low(s:e,142:171);
limit = low(s:e,202:211);

kkt_val_low = low_MPC_solutions(:,8);

high_MPC_solutions = from_high(:,1:12);
high_joint_pos = from_high(:,13:18);
high_goal = from_high(:,19:24);
high_ee = from_high(:,25:27);
kkt_val_high = from_high(:,29);
    
    
for i=1:10
    for j = 1:e-s
        test_points_vel(j,i) = sqrt(ctv(j,i)^2+ctv(j,i+1)^2+ctv(j,i+2)^2);
    end
end

error=0;
for w = s:len
    if kkt_val_low(w)>0.01 || kkt_val_high(w)>0.01
        TABLE_err(i) = 1;
        error=error+1;
        w
    end
end
perc = error/(len-s);
    
%%    
step = 200;
fig_1 = figure('Name', 'test point velocities 1-5')
subplot(5,1,1);
grid on;
hold on;
plot(test_points_vel(:,1))
plot(limit(:,1))
title('TP_{1}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(5,1,2);
grid on
hold on;
plot(test_points_vel(:,2));
plot(limit(:,2));
title('TP_{2}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(5,1,3);
hold on;
grid on;
plot(test_points_vel(:,3));
plot(limit(:,3));
title('TP_{3}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(5,1,4);
grid on;
hold on;
plot(test_points_vel(:,4));
plot(limit(:,4));
title('TP_{4}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
subplot(5,1,5);
grid on;
hold on;
l1 = plot(test_points_vel(:,5));
l2 = plot(limit(:,5));
title('TP_{5}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
name = sprintf('slack=1.png')
saveas(fig_1, name);

fig_6 = figure('Name', 'test point velocities 5-10')
subplot(5,1,1);
hold on;
grid on;
plot(test_points_vel(:,6));
plot(limit(:,6));
title('TP_{6}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
xlabel('time, seconds')

subplot(5,1,2);
hold on;
grid on;
plot(test_points_vel(:,7));
plot(limit(:,7));
title('TP_{7}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
xlabel('time, seconds')

subplot(5,1,3);
hold on;
grid on;
plot(test_points_vel(:,8));
plot(limit(:,8));
title('TP_{8}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
xlabel('time, seconds')

subplot(5,1,4);
hold on;
grid on;
plot(test_points_vel(:,9));
plot(limit(:,9));
title('TP_{9}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
xlabel('time, seconds')

subplot(5,1,5);
hold on;
grid on;
l1 = plot(test_points_vel(:,10));
l2 = plot(limit(:,10));
title('TP_{10}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
xlabel('time, seconds')


% Construct a Legend with the data from the sub-plots
hL = legend([l1,l2],["Velocities", "Limit"]);
% Programatically move the Legend
newPosition = [0.8 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
name = sprintf('slack=1.png')
saveas(fig_6, name);
    
fig_2 = figure('Name','distances')
hold on;
for i=1:10
    plot(min_dist(:,i));
    
end
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
legend('test point 1','test point 2','test point 3','test point 4','test point 5','test point 6','test point 7','test point 8')
saveas(fig_2, 'the smallest distance 1.png');

%% Plot joint positions Vs Goal Positions
fig_1 = figure('Name', 'Joint poses')
subplot(3,2,1);
grid on;
hold on;
plot(joint_positions(s:e,1))
plot(goal_positions(s:e,1))
title('joint_{1}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,2);
grid on
hold on;
plot(joint_positions(s:e,2));
plot(goal_positions(s:e,2));
title('joint_{2}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,3);
hold on;
grid on;
plot(joint_positions(s:e,3));
plot(goal_positions(s:e,3));
title('joint_{3}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,4);
grid on;
hold on;
plot(joint_positions(s:e,4));
plot(goal_positions(s:e,4));
title('joint_{4}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,5);
grid on;
hold on;
plot(joint_positions(s:e,5));
plot(goal_positions(s:e,5));
title('joint_{5}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,6);
hold on;
grid on;
l1 = plot(joint_positions(s:e,6));
l2 = plot(goal_positions(s:e,6));
title('joint_{6}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
xlabel('time, seconds')

% Construct a Legend with the data from the sub-plots
hL = legend([l1,l2],["Q", "Goal"]);
% Programatically move the Legend
newPosition = [0.45 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
saveas(fig_1, 'jp.png');


%% Plot joint vel
fig_1 = figure('Name', 'Joint poses')
subplot(3,2,1);
grid on;
hold on;
plot(q_dot_real(s:e,1))
plot(low_MPC_solutions(s:e,1))
title('joint_{1}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,2);
grid on
hold on;
plot(q_dot_real(s:e,2));
plot(low_MPC_solutions(s:e,2));
title('joint_{2}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,3);
hold on;
grid on;
plot(q_dot_real(s:e,3));
plot(low_MPC_solutions(s:e,3));
title('joint_{3}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,4);
grid on;
hold on;
plot(q_dot_real(s:e,4));
plot(low_MPC_solutions(s:e,4));
title('joint_{4}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,5);
grid on;
hold on;
plot(q_dot_real(s:e,5));
plot(low_MPC_solutions(s:e,5));
title('joint_{5}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);

subplot(3,2,6);
hold on;
grid on;
l1 = plot(q_dot_real(s:e,6));
l2 = plot(low_MPC_solutions(s:e,6));
title('joint_{6}')
set(gca,'XTick',0:step:step*len);
set(gca,'XTickLabel',0:dt*step:len*step*dt);
xlabel('time, seconds')


