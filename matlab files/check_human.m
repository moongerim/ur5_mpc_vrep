% clear all
% close all
% clc
cd /home/robot/workspaces/ur5_mpc_vrep
low = load('data_low.csv');

formula_human = low(6:end,273:314);
vrep_human = low(6:end,315:356);

%% Plot cposes
len = 100;
fig_1 = figure('Name', '1-4')
a=1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);
a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

% 4
a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a);
grid on;
hold on;
l1 = plot(formula_human(:,a));
l2 = plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_2 = figure('Name', '5-8');
a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_human(:,a));
l2 = plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

fig_3 = figure('Name', '25-37');
a=a+1;
sh = a-1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);


a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1 = plot(formula_human(:,a));
l2 = plot(vrep_human(:,a));
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
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
plot(formula_human(:,a));
plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a=a+1;
subplot(4,3,a-sh);
grid on;
hold on;
l1=plot(formula_human(:,a));
l2=plot(vrep_human(:,a));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2],["formula", "vrep"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);

