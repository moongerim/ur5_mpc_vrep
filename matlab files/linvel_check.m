clear all
close all
clc
cd /home/robot/
load('data_low_2705_cposes.csv')
q = data_low_2705_cposes(:,1:6);
formula_linvel = data_low_2705_cposes(:,7:30);
vrep_linvel =  data_low_2705_cposes(:,31:54);
%%
% UR kinematics parameters
syms theta_1 theta_2 theta_3 theta_4 theta_5 theta_6 real; % 
a_2 = -0.42500; a_3 = -0.39225; 
d_1 = 0.089159; d_4 = 0.10915; d_5 = 0.09465; d_6 = 0.0823;

% UR transformation matrices 
H1 = [cos(theta_1), 0,  sin(theta_1), 0;
      sin(theta_1), 0, -cos(theta_1), 0;
                0, 1,            0, d_1;
                0, 0,            0, 1];

H2 = [cos(theta_2), -sin(theta_2), 0, a_2*cos(theta_2);
      sin(theta_2),  cos(theta_2), 0, a_2*sin(theta_2);
                0,            0, 1,                0;
                0,            0, 0,                1];

H3 = [cos(theta_3), -sin(theta_3), 0, a_3*cos(theta_3);
      sin(theta_3),  cos(theta_3), 0, a_3*sin(theta_3);
                0,            0, 1,      0;
                0,            0, 0,      1];
            
H4 = [cos(theta_4), 0,  sin(theta_4),   0;
      sin(theta_4), 0, -cos(theta_4),   0;
                0, 1,            0, d_4;
                0, 0,            0,   1];

H5 = [cos(theta_5),  0, -sin(theta_5),   0;
      sin(theta_5),  0,  cos(theta_5),   0;
                0, -1,              0, d_5;
                0,  0,              0,   1];

H6 = [cos(theta_6), -sin(theta_6), 0,   0;
      sin(theta_6),  cos(theta_6), 0,   0;
                0,            0,   1, d_6;
                0,            0,   0,   1];

H7 = [1, 0, 0, 0;
      0, 1, 0, 0;
      0, 0, 1, 0.11;
      0, 0, 0, 1];

% H22 - before the joint 3
H22 = [cos(theta_2), -sin(theta_2), 0, a_2*cos(theta_2);
      sin(theta_2),  cos(theta_2), 0, a_2*sin(theta_2);
                0,            0, 1,                0.11;
                0,            0, 0,                1];
T01 = H1;
T02 = H1*H2;
T03 = T02*H3;
T04 = T03*H4;
T05 = T04*H5;
T06 = T05*H6;
T07 = T06*H7;

joint3 = T02(3,4);
joint4 = T03(3,4);
joint5 = T04(3,4);
% joint6 = simplify(T07(3,4));
T06(3,4);
T22 = H1*H22;
% position vectors p
p6 = T06(1:3,4);
disp('Forward kinematics is solved ...');

%% get test points
disp('Finding testing points ...');

% test point 1 on joint 3
disp('test point 1:');
test_point1 = T22(1:3,4);
txt1_vpa = simplify(vpa(test_point1));

% test point 2 on link 2
syms new_a_21;
new_a_21 = a_3*0.25;
disp('test point 2:');
test_point2 = T03(1:3,4);
test_point2 = subs(test_point2, a_3, new_a_21);
simplify(vpa(test_point2));
txt2_vpa = simplify(vpa(test_point2));

% test point 3 on link 2
syms new_a_22;
new_a_22 = a_3*0.5;
disp('test point 3:');
test_point3 = T03(1:3,4);
test_point3 = subs(test_point3, a_3, new_a_22);
simplify(vpa(test_point3));
txt3_vpa = simplify(vpa(test_point3));

%test point 4 on link 2
syms new_a_23;
new_a_23 = a_3*0.75;
disp('test point 4:');
test_point4 = T03(1:3,4);
test_point4 = subs(test_point4, a_3, new_a_23);
simplify(vpa(test_point4));
txt4_vpa = simplify(vpa(test_point4));

%test point 5 before the joint 4
disp('test point 5:');
test_point5 = T03(1:3,4);
simplify(vpa(test_point3));
txt5_vpa = simplify(vpa(test_point5));

%test point 6 after the joint 4
disp('test point 6:');
test_point6 = T04(1:3,4);
simplify(vpa(test_point6));
txt6_vpa = simplify(vpa(test_point6));

%test point 7 after the joint 5
disp('test point 7:');
test_point7 = T05(1:3,4);
simplify(vpa(test_point7));
txt7_vpa = simplify(vpa(test_point7));

%test point 8 after the joint 6
disp('test point 8:');
test_point8 = T07(1:3,4);
simplify(vpa(test_point8));
txt8_vpa = simplify(vpa(test_point8));


%% Linear velocities calculation:

Jv1 = [diff(txt1_vpa, theta_1), diff(txt1_vpa, theta_2), diff(txt1_vpa, theta_3), diff(txt1_vpa, theta_4), diff(txt1_vpa, theta_5), diff(txt1_vpa, theta_6)];
Jv2 = [diff(txt2_vpa, theta_1), diff(txt2_vpa, theta_2), diff(txt2_vpa, theta_3), diff(txt2_vpa, theta_4), diff(txt2_vpa, theta_5), diff(txt2_vpa, theta_6)];
Jv3 = [diff(txt3_vpa, theta_1), diff(txt3_vpa, theta_2), diff(txt3_vpa, theta_3), diff(txt3_vpa, theta_4), diff(txt3_vpa, theta_5), diff(txt3_vpa, theta_6)];
Jv4 = [diff(txt4_vpa, theta_1), diff(txt4_vpa, theta_2), diff(txt4_vpa, theta_3), diff(txt4_vpa, theta_4), diff(txt4_vpa, theta_5), diff(txt4_vpa, theta_6)];
Jv5 = [diff(txt5_vpa, theta_1), diff(txt5_vpa, theta_2), diff(txt5_vpa, theta_3), diff(txt5_vpa, theta_4), diff(txt5_vpa, theta_5), diff(txt5_vpa, theta_6)];
Jv6 = [diff(txt6_vpa, theta_1), diff(txt6_vpa, theta_2), diff(txt6_vpa, theta_3), diff(txt6_vpa, theta_4), diff(txt6_vpa, theta_5), diff(txt6_vpa, theta_6)];
Jv7 = [diff(txt7_vpa, theta_1), diff(txt7_vpa, theta_2), diff(txt7_vpa, theta_3), diff(txt7_vpa, theta_4), diff(txt7_vpa, theta_5), diff(txt7_vpa, theta_6)];
Jv8 = [diff(txt8_vpa, theta_1), diff(txt8_vpa, theta_2), diff(txt8_vpa, theta_3), diff(txt8_vpa, theta_4), diff(txt8_vpa, theta_5), diff(txt8_vpa, theta_6)];

vpa(simplify([Jv1; Jv2; Jv3; Jv4; Jv5; Jv6; Jv7; Jv8]),4)





