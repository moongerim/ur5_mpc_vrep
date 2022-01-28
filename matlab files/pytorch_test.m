clear all;
clc;
close all
cd '/home/robot/workspaces/ur5_mpc_ursim/src/nn_train/log/7/Network_log/20211119_133920' 
for i=1
    filename = sprintf('%i.mat',i-1);
    load(filename);
    s = 383;
    len = length(goal);
    goal_jp = goal;
    dt = 0.05;
    ctv = test_point_vels;
    alpha = 0.89;
    T_s = 0.05;
    v_h = 2;
    Epsilon = 0.020;
    alpha = 0.8500;
    d_bar= 0.2100;
     % velocity vector
    Vh = 1.6;          % human speed (in dataset 2.0 - 2.2 m/s)
    ar_max = 5.0;      % robot maximum acceleration
    t2 = 0.100;        % system delay untill full break
    test_points_vel = [];
    for j=1:10
        test_points_vel(:,j) = ctv(:,j).*ctv(:,j)+ctv(:,j+1).*ctv(:,j+1)+ctv(:,j+2).*ctv(:,j+2);
    end
    
    new_data=zeros(len,54);
    new_data(:,1:6) = joint_poses;
    new_data(:,7:48) = human_poses;
    T = array2table(new_data);
    writetable(T,'pytorch_test.csv');
    Vr = test_points_vel;
    Tp = [];
    for k=1:length(Vr)
        for j= 1:10
            Tp(k,j) = Vh * (Vr(k,j)/ar_max + t2) + Vr(k,j) * t2 + Vr(k,j)^2 / (2*ar_max) ;
        end
    end
    
    for j = 1:length(Vr)
        for k = 1:10
            if test_points_vel>Tp
                TABLE_ERR_TESTVEL(i,j,k)=1;
            end
        end
    end
    
    len = 1383
    
    fig_1 = figure('Name', 'velocities')
    subplot(3,2,1);
    grid on;
    hold on;
    plot(actions(s:len,1));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 1 dot")

    subplot(3,2,2);
    grid on;
    hold on;
    plot(actions(s:len,2));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 2 dot")

    subplot(3,2,3);
    grid on;
    hold on;
    plot(actions(s:len,3));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 3 dot")

    subplot(3,2,4);
    grid on;
    hold on;
    plot(actions(s:len,4));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 4 dot")

    subplot(3,2,5);
    grid on;
    hold on;
    plot(actions(s:len,5));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 5 dot")

    subplot(3,2,6);
    grid on;
    hold on;
    plot(actions(s:len,6));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 6 dot")
    name = sprintf('vel_%i.png',i)
    
    saveas(fig_1, name);
    
    
    fig_2 = figure('Name', 'positions');
    subplot(3,2,1);
    grid on;
    hold on;
    plot(joint_poses(s:len,1));
    plot(goal(s:len,1));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 1")

    subplot(3,2,2);
    grid on;
    hold on;
    plot(joint_poses(s:len,2));
    plot(goal(s:len,2));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 2 ")

    subplot(3,2,3);
    grid on;
    hold on;
    plot(joint_poses(s:len,3));
    plot(goal(s:len,3));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 3")

    subplot(3,2,4);
    grid on;
    hold on;
    plot(joint_poses(s:len,4));
    plot(goal(s:len,4));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 4")

    subplot(3,2,5);
    grid on;
    hold on;
    plot(joint_poses(s:len,5));
    plot(goal(s:len,5));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 5")

    subplot(3,2,6);
    grid on;
    hold on;
    l1 = plot(joint_poses(s:len,6));
    l2 = plot(goal(s:len,6));
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    title("q 6")
    % Construct a Legend with the data from the sub-plots
    hL = legend([l1,l2],["position", "goal"]);
    % Programatically move the Legend
    newPosition = [0.45 0.1 0.1 0.1];
    newUnits = 'normalized';
    set(hL,'Position', newPosition,'Units', newUnits);
    name = sprintf('pos_%i.png',i)
    saveas(fig_2, name);
    
    fig_3 = figure('Name','distances')
    hold on;
    plot(smallest_dist(s:len))
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    name = sprintf('dist_%i.png',i)
    saveas(fig_3, name);
    
    fig_4 = figure('Name', 'nn_time')
    hold on;
    plot(nn_time(s:len))
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    name = sprintf('nn_time_%i.png',i)
    saveas(fig_4, name);
    
    fig_5 = figure('Name', 'test point velocities 1-5')
    subplot(5,1,1);
    grid on;
    hold on;
    plot(test_points_vel(s:len,1))
    plot(Tp(s:len,1))
    title('TP_{1}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);

    subplot(5,1,2);
    grid on
    hold on;
    plot(test_points_vel(s:len,2));
    plot(Tp(s:len,2));
    title('TP_{2}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);

    subplot(5,1,3);
    hold on;
    grid on;
    plot(test_points_vel(s:len,3));
    plot(Tp(s:len,3));
    title('TP_{3}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);

    subplot(5,1,4);
    grid on;
    hold on;
    plot(test_points_vel(s:len,4));
    plot(Tp(s:len,4));
    title('TP_{4}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    subplot(5,1,5);
    grid on;
    hold on;
    l1 = plot(test_points_vel(s:len,5));
    l2 = plot(Tp(s:len,5));
    title('TP_{5}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);

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
    plot(test_points_vel(s:len,6));
    plot(Tp(s:len,6));
    title('TP_{6}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    xlabel('time, seconds')

    subplot(5,1,2);
    hold on;
    grid on;
    plot(test_points_vel(s:len,7));
    plot(Tp(s:len,7));
    title('TP_{7}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    xlabel('time, seconds')

    subplot(5,1,3);
    hold on;
    grid on;
    plot(test_points_vel(s:len,8));
    plot(Tp(s:len,8));
    title('TP_{8}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    xlabel('time, seconds')

    subplot(5,1,4);
    hold on;
    grid on;
    plot(test_points_vel(s:len,9));
    plot(Tp(s:len,9));
    title('TP_{9}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    xlabel('time, seconds')

    subplot(5,1,5);
    hold on;
    grid on;
    l1 = plot(test_points_vel(s:len,10));
    l2 = plot(Tp(s:len,10));
    title('TP_{10}')
    set(gca,'XTick',0:200:200*len);
    set(gca,'XTickLabel',0:dt*200:len*200*dt);
    xlabel('time, seconds')


    % Construct a Legend with the data from the sub-plots
    hL = legend([l1,l2],["Velocities", "Limit"]);
    % Programatically move the Legend
    newPosition = [0.8 0.1 0.1 0.1];
    newUnits = 'normalized';
    set(hL,'Position', newPosition,'Units', newUnits);
    name = sprintf('ctv610_%i.png',i)
    saveas(fig_6, name);
end
