clear all
close all
clc
cd /home/robot/workspaces/ur5_mpc_vrep
low = load('data_low.csv');
s = 100;
[e,temp] =size(low);

formula_dist =  low(s:e,49:160);
vrep_dist = low(s:e,161:272);
% 
human_sphere = low(s:e,273:314);
human_vrep = low(s:e,315:356);
human = human_vrep;
% 
% x_shift = 1;
% y_shift = 0.5;
% z_shift = 1.2;
% 
h1 = human(:,1:3);
h2 = human(:,4:6);
h3 = human(:,7:9);
h4 = human(:,10:12);
h5 = human(:,13:15);
h6 = human(:,16:18);
h7 = human(:,19:21);
h8 = human(:,22:24);
h9 = human(:,25:27);
h10 = human(:,28:30);
h11 = human(:,31:33);
h12 = human(:,34:36);
h13 = human(:,37:39);
h14 = human(:,40:42);
% 
ctp_f = low(s:e,1:24);
ctp_v = low(s:e,25:48);
% 
ctp = ctp_v;
t1 = ctp(:,1:3);
t2 = ctp(:,4:6);
t3 = ctp(:,8:9);
t4 = ctp(:,10:12);
t5 = ctp(:,13:15);
t6 = ctp(:,16:18);
t7 = ctp(:,19:21);
t8 = ctp(:,22:24);

D = norm(t1(1,:) - h1(1,:)) -0.29 - 0.5510
f = formula_dist(1)
v = vrep_dist(1)
% 
diff = formula_dist - vrep_dist;
mean_diff = mean(diff)
%% Plot cposes
len = 100;
fig_1 = figure('Name', '1-4')
a=1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=2;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=3;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=4;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=5;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=6;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=7;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=8;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=9;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=10;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=11;
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=12;
subplot(4,3,a);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_2 = figure('Name', '5-8')
a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_3 = figure('Name', '25-37')
a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_4 = figure('Name', '38-40');
a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_5 = figure('Name', '38-40');

a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_6 = figure('Name', '38-40');

a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));

title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
fig_7 = figure('Name', '38-40');

a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));

title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
fig_8 = figure('Name', '38-40');

a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));

title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_9 = figure('Name', '38-40');

a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));

title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_10 = figure('Name', '38-40');

a=a+1
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));

title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_dist(:,a));
l2 = plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

function D = euc_dist(G,G2)
    for i=1:length(G)
        D(i) = norm(G(i) - G2(i));
    end
end