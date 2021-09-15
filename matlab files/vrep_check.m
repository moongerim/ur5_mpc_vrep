clear all
close all
clc
cd /home/robot/workspaces/ur5_mpc_vrep
low = load('data_low.csv');
s = 6;
e = 3000;

vrep_dist = low(s:e,161:272);

%% Plot cposes
len = 100;
fig_1 = figure('Name', '1-4')
a=1; %1
b=a+8; %9
c=b+8; %17
d=c+8; %25
e=d+8; %33
f=e+8; %41
g=f+8; %49
q=g+8; %57
w=q+8; %65
r=w+8; %73
t=r+8; %81
y=t+8; %89
u=y+8; %97
i=u+8; %105

subplot(4,2,a);
grid on;
hold on;
plot(vrep_dist(:,a));
plot(vrep_dist(:,b));
plot(vrep_dist(:,c));
plot(vrep_dist(:,d));
plot(vrep_dist(:,e));
plot(vrep_dist(:,f));
plot(vrep_dist(:,g));
plot(vrep_dist(:,q));
plot(vrep_dist(:,w));
plot(vrep_dist(:,r));
plot(vrep_dist(:,t));
plot(vrep_dist(:,y));
plot(vrep_dist(:,u));
plot(vrep_dist(:,i));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a = a+1;
b=a+8; 
c=b+8; 
d=c+8; 
e=d+8; 
f=e+8; 
g=f+8; 
q=g+8; 
w=q+8; 
r=w+8; 
t=r+8; 
y=t+8;
u=y+8; 
i=u+8; 
subplot(4,2,a);
grid on;
hold on;
plot(vrep_dist(:,a));
plot(vrep_dist(:,b));
plot(vrep_dist(:,c));
plot(vrep_dist(:,d));
plot(vrep_dist(:,e));
plot(vrep_dist(:,f));
plot(vrep_dist(:,g));
plot(vrep_dist(:,q));
plot(vrep_dist(:,w));
plot(vrep_dist(:,r));
plot(vrep_dist(:,t));
plot(vrep_dist(:,y));
plot(vrep_dist(:,u));
plot(vrep_dist(:,i));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a = a+1;
b=a+8; 
c=b+8; 
d=c+8; 
e=d+8; 
f=e+8; 
g=f+8; 
q=g+8; 
w=q+8; 
r=w+8; 
t=r+8; 
y=t+8;
u=y+8; 
i=u+8; 
subplot(4,2,a);
grid on;
hold on;
plot(vrep_dist(:,a));
plot(vrep_dist(:,b));
plot(vrep_dist(:,c));
plot(vrep_dist(:,d));
plot(vrep_dist(:,e));
plot(vrep_dist(:,f));
plot(vrep_dist(:,g));
plot(vrep_dist(:,q));
plot(vrep_dist(:,w));
plot(vrep_dist(:,r));
plot(vrep_dist(:,t));
plot(vrep_dist(:,y));
plot(vrep_dist(:,u));
plot(vrep_dist(:,i));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a = a+1;
b=a+8; 
c=b+8; 
d=c+8; 
e=d+8; 
f=e+8; 
g=f+8; 
q=g+8; 
w=q+8; 
r=w+8; 
t=r+8; 
y=t+8;
u=y+8; 
i=u+8; 
subplot(4,2,a);
grid on;
hold on;
plot(vrep_dist(:,a));
plot(vrep_dist(:,b));
plot(vrep_dist(:,c));
plot(vrep_dist(:,d));
plot(vrep_dist(:,e));
plot(vrep_dist(:,f));
plot(vrep_dist(:,g));
plot(vrep_dist(:,q));
plot(vrep_dist(:,w));
plot(vrep_dist(:,r));
plot(vrep_dist(:,t));
plot(vrep_dist(:,y));
plot(vrep_dist(:,u));
plot(vrep_dist(:,i));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a = a+1;
b=a+8; 
c=b+8; 
d=c+8; 
e=d+8; 
f=e+8; 
g=f+8; 
q=g+8; 
w=q+8; 
r=w+8; 
t=r+8; 
y=t+8;
u=y+8; 
i=u+8; 
subplot(4,2,a);
grid on;
hold on;
plot(vrep_dist(:,a));
plot(vrep_dist(:,b));
plot(vrep_dist(:,c));
plot(vrep_dist(:,d));
plot(vrep_dist(:,e));
plot(vrep_dist(:,f));
plot(vrep_dist(:,g));
plot(vrep_dist(:,q));
plot(vrep_dist(:,w));
plot(vrep_dist(:,r));
plot(vrep_dist(:,t));
plot(vrep_dist(:,y));
plot(vrep_dist(:,u));
plot(vrep_dist(:,i));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a = a+1;
b=a+8; 
c=b+8; 
d=c+8; 
e=d+8; 
f=e+8; 
g=f+8; 
q=g+8; 
w=q+8; 
r=w+8; 
t=r+8; 
y=t+8;
u=y+8; 
i=u+8; 
subplot(4,2,a);
grid on;
hold on;
plot(vrep_dist(:,a));
plot(vrep_dist(:,b));
plot(vrep_dist(:,c));
plot(vrep_dist(:,d));
plot(vrep_dist(:,e));
plot(vrep_dist(:,f));
plot(vrep_dist(:,g));
plot(vrep_dist(:,q));
plot(vrep_dist(:,w));
plot(vrep_dist(:,r));
plot(vrep_dist(:,t));
plot(vrep_dist(:,y));
plot(vrep_dist(:,u));
plot(vrep_dist(:,i));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a = a+1;
b=a+8; 
c=b+8; 
d=c+8; 
e=d+8; 
f=e+8; 
g=f+8; 
q=g+8; 
w=q+8; 
r=w+8; 
t=r+8; 
y=t+8;
u=y+8; 
i=u+8; 
subplot(4,2,a);
grid on;
hold on;
plot(vrep_dist(:,a));
plot(vrep_dist(:,b));
plot(vrep_dist(:,c));
plot(vrep_dist(:,d));
plot(vrep_dist(:,e));
plot(vrep_dist(:,f));
plot(vrep_dist(:,g));
plot(vrep_dist(:,q));
plot(vrep_dist(:,w));
plot(vrep_dist(:,r));
plot(vrep_dist(:,t));
plot(vrep_dist(:,y));
plot(vrep_dist(:,u));
plot(vrep_dist(:,i));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

a = a+1;
b=a+8; 
c=b+8; 
d=c+8; 
e=d+8; 
f=e+8; 
g=f+8; 
q=g+8; 
w=q+8; 
r=w+8; 
t=r+8; 
y=t+8;
u=y+8; 
i=u+8; 
subplot(4,2,a);
grid on;
hold on;
l1 = plot(vrep_dist(:,a));
l2 = plot(vrep_dist(:,b));
l3 = plot(vrep_dist(:,c));
l4 = plot(vrep_dist(:,d));
l5 = plot(vrep_dist(:,e));
l6 = plot(vrep_dist(:,f));
l7 = plot(vrep_dist(:,g));
l8 = plot(vrep_dist(:,q));
l9 = plot(vrep_dist(:,w));
l10 = plot(vrep_dist(:,r));
l11 = plot(vrep_dist(:,t));
l12 = plot(vrep_dist(:,y));
l13 = plot(vrep_dist(:,u));
l14 = plot(vrep_dist(:,i));
title(int2str(a));
set(gca,'XTick',0:100:100*len);
set(gca,'XTickLabel',0:0.05*100:len*100*0.05);

hL = legend([l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13,l14],["1", "2","3", "4","5", "6","7", "8","9", "10","11", "12","13", "14"]);
newPosition = [0.6 0.1 0.1 0.1];
newUnits = 'normalized';
set(hL,'Position', newPosition,'Units', newUnits);
