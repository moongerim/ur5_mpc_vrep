clear all
close all
clc
cd /home/robot/workspaces/ur5_mpc_vrep
low = load('data_17.csv');

%% Plot cposes
s = 1;
[e,mm] = size(low);
formula_cposes = low(s:e,1:30);
vrep_cposes =  low(s:e,31:60);

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

fig_3 = figure('Name', '9-10')

a=25;

subplot(4,3,a-24);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 9 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=26;
subplot(4,3,a-24);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 9 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=27;
subplot(4,3,a-24);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 9 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=28;
subplot(4,3,a-24);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 10 x');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=29;
subplot(4,3,a-24);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 10 y');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=30;
subplot(4,3,a-24);
grid on;
hold on;
plot(formula_cposes(:,a));
plot(vrep_cposes(:,a));
title('test point 10 z');
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
