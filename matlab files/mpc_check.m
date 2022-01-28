close all
clear all
cd /home/robot/workspaces/ur5_mpc_ursim
low = load('data_low.csv');
s=1;
[e,n]=size(low);
ctp_f = low(:,1:30);
human_sphere = low(:,31:72);
len = e;
dt = 0.025;
joint_positions = low(:,73:78);
goal_positions =  low(:,79:84);
q_dot_real = low(:,85:90);

low_MPC_solutions =  low(:,91:99);
plot(low_MPC_solutions(:,7))
min_dist = low(:,100:109);
smallest_distance = low(:,110);
linvelscale = low(:,111);

from_high = low(:,112:141);
ctv = low(:,142:171);
tp_vel_vrep
alpha = 0.85;
% T_s = 0.05;
Vh = 2;
ar_max = 5.0; 
t2 = 0.100; 
test_points_vel = [];
for i=1:10
    test_points_vel(:,i) = ctv(:,i).*ctv(:,i)+ctv(:,i+1).*ctv(:,i+1)+ctv(:,i+2).*ctv(:,i+2);
end
Vr = test_points_vel;
Tp = [];
for k=1:length(Vr)
    for j= 1:10
        Tp(k,j) = Vh * (Vr(k,j)/ar_max + t2) + Vr(k,j) * t2 + Vr(k,j)^2 / (2*ar_max) ;
    end
end
i=1;

%%
fig_5 = figure('Name', 'test point velocities 1-5')
subplot(5,1,1);
grid on;
hold on;
plot(test_points_vel(:,1))
plot(Tp(:,1))
title('TP_{1}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);

subplot(5,1,2);
grid on
hold on;
plot(test_points_vel(:,2));
plot(Tp(:,2));
title('TP_{2}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);

subplot(5,1,3);
hold on;
grid on;
plot(test_points_vel(:,3));
plot(Tp(:,3));
title('TP_{3}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);

subplot(5,1,4);
grid on;
hold on;
plot(test_points_vel(:,4));
plot(Tp(:,4));
title('TP_{4}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);
subplot(5,1,5);
grid on;
hold on;
l1 = plot(test_points_vel(:,5));
l2 = plot(Tp(:,5));
title('TP_{5}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);

% Construct a Legend with the data from the sub-plots
hL = legend([l1,l2],["Velocities", "Limit"]);
% Programatically move the Legend
newPosition = [0.8 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
name = sprintf('ctv15_%i.png',i)
saveas(fig_5, name);

fig_6 = figure('Name', 'test point velocities 5-10')
subplot(5,1,1);
hold on;
grid on;
plot(test_points_vel(:,6));
plot(Tp(:,6));
title('TP_{6}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);
xlabel('time, seconds')

subplot(5,1,2);
hold on;
grid on;
plot(test_points_vel(:,7));
plot(Tp(:,7));
title('TP_{7}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);
xlabel('time, seconds')

subplot(5,1,3);
hold on;
grid on;
plot(test_points_vel(:,8));
plot(Tp(:,8));
title('TP_{8}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);
xlabel('time, seconds')

subplot(5,1,4);
hold on;
grid on;
plot(test_points_vel(:,9));
plot(Tp(:,9));
title('TP_{9}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);
xlabel('time, seconds')

subplot(5,1,5);
hold on;
grid on;
l1 = plot(test_points_vel(:,10));
l2 = plot(Tp(:,10));
title('TP_{10}')
set(gca,'XTick',0:20:20*len);
set(gca,'XTickLabel',0:dt*20:len*20*dt);
xlabel('time, seconds')


% Construct a Legend with the data from the sub-plots
hL = legend([l1,l2],["Velocities", "Limit"]);
% Programatically move the Legend
newPosition = [0.8 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
name = sprintf('ctv610_%i.png',i)
saveas(fig_6, name);
    