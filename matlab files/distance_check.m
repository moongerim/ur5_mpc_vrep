clear all
close all
clc
cd /home/robot/
load("data_2705_dist.csv")

formula_dist = data_2705_dist(:,1:112);
vrep_dist =  data_2705_dist(:,113:224);

  %% Plot cposes
len = 100;
fig_1 = figure('Name', '1-4')
a=1
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=2
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=3
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=4
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=5
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=6
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=7
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=8
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=9
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=10
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=11
subplot(4,3,a);
grid on;
hold on;
plot(formula_dist(:,a));
plot(vrep_dist(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=12
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

fig_3 = figure('Name', '25-37')
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

fig_4 = figure('Name', '38-40');
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

a=a+1;
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

fig_5 = figure('Name', '38-40');

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

fig_6 = figure('Name', '38-40');

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

a=a+1;
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

a=a+1;
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
fig_7 = figure('Name', '38-40');

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
fig_8 = figure('Name', '38-40');

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

fig_9 = figure('Name', '38-40');

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

filename = sprintf('dist_2705_1.png');
saveas(fig_1, filename);
filename = sprintf('dist_2705_2.png');
saveas(fig_2, filename);
filename = sprintf('dist_2705_3.png');
saveas(fig_3, filename);
filename = sprintf('dist_2705_4.png');
saveas(fig_4, filename);
filename = sprintf('dist_2705_5.png');
saveas(fig_5, filename);
filename = sprintf('dist_2705_6.png');
saveas(fig_6, filename);
filename = sprintf('dist_2705_7.png');
saveas(fig_7, filename);
filename = sprintf('dist_2705_8.png');
saveas(fig_8, filename);
filename = sprintf('dist_2705_9.png');
saveas(fig_9, filename);
filename = sprintf('dist_2705_10.png');
saveas(fig_10, filename);