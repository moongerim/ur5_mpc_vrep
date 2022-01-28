clear all
close all
clc
cd /home/robot/workspaces/ur5_mpc_vrep/
low = load('data_6.csv');
s=1;
[e,n]=size(low);
ctp_f = low(:,1:30);
human_sphere = low(:,31:72);

joint_positions = low(:,73:78);
goal_positions =  low(:,79:84);
q_dot_real = low(:,85:90);

low_MPC_solutions =  low(:,91:99);
min_dist = low(:,100:109);
smallest_distance = low(:,110);
linvelscale = low(:,111);

from_high = low(:,112:141);
ctv = low(:,142:171);
alpha = 0.89;
T_s = 0.05;
v_h = 2;
for i=1:10
    test_points_vel(:,i) = ctv(:,i).*ctv(:,i)+ctv(:,i+1).*ctv(:,i+1)+ctv(:,i+2).*ctv(:,i+2);
end

% From human motion dataset 
% "Human movement and ergonomics: An industry-oriented dataset for collaborative robotics."
% 13 human data recordings
Epsilon = 0.020;
% Radius_array = Radius_array + Epsilon;
% tuning parameters
alpha = 0.8500;
d_bar= 0.2100;

%system parameters
Vr = test_points_vel; % velocity vector
Vh = 2.0;          % human speed (in dataset 2.0 - 2.2 m/s)
ar_max = 5.0;      % robot maximum acceleration
t2 = 0.100;        % system delay untill full break


% for i=1:length(Vr)
for j= 1:10
    High_vels(:,j) = Vh * (Vr(:,j)./ar_max + t2) + Vr(:,j).* t2 + Vr(:,j).*Vr(:,j) / (2*ar_max) ;
end
% end
dt =100
len = e;
%% Plot joint positions Vs Goal Positions
fig_1 = figure('Name', 'Joint poses')
subplot(3,2,1);
grid on;
hold on;
plot(joint_positions(s:e,1))
plot(goal_positions(s:e,1))
title('joint_{1}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,2);
grid on
hold on;
plot(joint_positions(s:e,2));
plot(goal_positions(s:e,2));
title('joint_{2}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,3);
hold on;
grid on;
plot(joint_positions(s:e,3));
plot(goal_positions(s:e,3));
title('joint_{3}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,4);
grid on;
hold on;
plot(joint_positions(s:e,4));
plot(goal_positions(s:e,4));
title('joint_{4}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,5);
grid on;
hold on;
plot(joint_positions(s:e,5));
plot(goal_positions(s:e,5));
title('joint_{5}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);

subplot(3,2,6);
hold on;
grid on;
l1 = plot(joint_positions(s:e,6));
l2 = plot(goal_positions(s:e,6));
title('joint_{6}')
set(gca,'XTick',0:dt:dt*len);
set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
xlabel('time, seconds')

% Construct a Legend with the data from the sub-plots
hL = legend([l1,l2],["Q", "Goal"]);
% Programatically move the Legend
newPosition = [0.45 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
saveas(fig_1, 'jp.png');

%% Plot distances low
% fig_2 = figure('Name','distances')
% hold on;
% % for i=1:8
% %     plot(min_dist(s:e,i));
% %     
% % end
% plot(smallest_distance(s:e))
% set(gca,'XTick',0:dt:dt*len); set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% % legend('test point 1','test point 2','test point 3','test point 4','test point 5','test point 6','test point 7','test point 8')
% saveas(fig_2, 'the smallest distance.png');
% 
% %% Plot joint velocities Vs MPC solutions
% fig_4 = figure('Name','velocities')
% 
% subplot(3,2,1);
% grid on;
% hold on;
% plot(q_dot_real(s:e,1));
% plot(low_MPC_solutions(s:e,1));
% title('joint_{1}');
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% subplot(3,2,2);
% grid on
% hold on;
% plot(q_dot_real(s:e,2));
% plot(low_MPC_solutions(s:e,2));
% title('joint_{2}');
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% subplot(3,2,3);
% hold on;
% grid on;
% plot(q_dot_real(s:e,3));
% plot(low_MPC_solutions(s:e,3));
% title('joint_{3}');
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% subplot(3,2,4);
% grid on;
% hold on;
% plot(q_dot_real(s:e,4));
% plot(low_MPC_solutions(s:e,4));
% title('joint_{4}');
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% subplot(3,2,5);
% grid on;
% hold on;
% plot(q_dot_real(s:e,5));
% plot(low_MPC_solutions(s:e,5));
% title('joint_{5}');
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% subplot(3,2,6);
% hold on;
% grid on;
% l1 = plot(q_dot_real(s:e,6));
% l2 = plot(low_MPC_solutions(s:e,6));
% title('joint_{6}');
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% xlabel('time, seconds')
% 
% hL = legend([l1,l2],["q dot", "MPC solutions"]);
% newPosition = [0.45 0.1 0.1 0.1];
% newUnits = 'normalized';
% set(hL,'Position', newPosition,'Units', newUnits);
% saveas(fig_4, 'jv.png');
% 
% %% Test points vels
% fig_1 = figure('Name', 'CTV')
% subplot(5,2,1);
% grid on;
% hold on;
% plot(test_points_vel(s:e,1))
% plot(High_vels(s:e,1))
% title('TP_{1}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% subplot(5,2,2);
% grid on
% hold on;
% plot(test_points_vel(s:e,2));
% plot(High_vels(s:e,2));
% title('TP_{2}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% subplot(5,2,3);
% hold on;
% grid on;
% plot(test_points_vel(s:e,3));
% plot(High_vels(s:e,3));
% title('TP_{3}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% subplot(5,2,4);
% grid on;
% hold on;
% plot(test_points_vel(s:e,4));
% plot(High_vels(s:e,4));
% title('TP_{4}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% subplot(5,2,5);
% grid on;
% hold on;
% plot(test_points_vel(s:e,5));
% plot(High_vels(s:e,5));
% title('TP_{5}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% 
% subplot(5,2,6);
% hold on;
% grid on;
% plot(test_points_vel(s:e,6));
% plot(High_vels(s:e,6));
% title('TP_{6}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% xlabel('time, seconds')
% 
% subplot(5,2,7);
% hold on;
% grid on;
% plot(test_points_vel(s:e,7));
% plot(High_vels(s:e,7));
% title('TP_{7}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% xlabel('time, seconds')
% 
% subplot(5,2,8);
% hold on;
% grid on;
% plot(test_points_vel(s:e,8));
% plot(High_vels(s:e,8));
% title('TP_{8}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% xlabel('time, seconds')
% 
% subplot(5,2,9);
% hold on;
% grid on;
% plot(test_points_vel(s:e,9));
% plot(High_vels(s:e,9));
% title('TP_{9}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% xlabel('time, seconds')
% 
% subplot(5,2,10);
% hold on;
% grid on;
% l1 = plot(test_points_vel(s:e,10));
% l2 = plot(High_vels(s:e,10));
% title('TP_{10}')
% set(gca,'XTick',0:dt:dt*len);
% set(gca,'XTickLabel',0:0.05*dt:len*dt*0.05);
% xlabel('time, seconds')
% 
% 
% % Construct a Legend with the data from the sub-plots
% hL = legend([l1,l2],["vel", "Limit"]);
% % Programatically move the Legend
% newPosition = [0.45 0.1 0.1 0.1];
% newUnits = 'normalized';
% set(hL,'Position', newPosition,'Units', newUnits);
% saveas(fig_1, 'ctv.png');
% 
