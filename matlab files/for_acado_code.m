% ur 5 forward kinematics with DH parameter
clear
clc
close all


% UR kinematics parameters
syms theta_1 theta_2 theta_3 theta_4 theta_5 theta_6 real; % theta_1 - theta_6
syms a_2 a_3 d_1 d_4 d_5 d_6 real;  % DH parameters
% 
% theta_1 = 0; theta_2 = -pi/2; theta_3 = 0; theta_4 = -pi/2; theta_5 = 0; theta_6 = 0;
a_2 = -0.42500; a_3 = -0.39225; 
d_1 = 0.089159; d_4 = 0.10915; d_5 = 0.09465; d_6 = 0.0823;

%UR5 parameters, m
% a_2 = -0.425; a_3 = -0.39225;
% d_1 = 0.089459; d_4 = 0.10915; d_5 = 0.09465; d_6 = 0.0823; 

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
      0, 0, 1, 0;
      0, 0, 0, 1];

  
% H22 - before the joint 3
H22 = [cos(theta_2), -sin(theta_2), 0, a_2*cos(theta_2);
       sin(theta_2),  cos(theta_2), 0, a_2*sin(theta_2);
                0,            0, 1,                0;
                0,            0, 0,                1];
T01 = H1;  
T02 = H1*H2;
T03 = T02*H3; 
T04 = T03*H4; 
T05 = T04*H5; 
T06 = T05*H6;
T07 = T06*H7;
joint3 = T02(3,4)
joint4 = T03(3,4)
joint5 = T04(3,4)
% joint6 = simplify(T07(3,4))
T06(3,4);
T22 = H1*H22;
% position vectors p
p6 = T06(1:3,4);
disp('Forward kinematics is solved ...');
% theta_1 = 0; theta_2 = -pi/2; theta_3 = 0; theta_4 = -pi/2; theta_5 = 0; theta_6 = 0;

%% open the file to write
fileID = fopen('code.txt','w');
fprintf(fileID,'// Code for ellipse \n');
% get ellipse info
load('A_and_c');
% fprintf(fileID,strcat('double obstacle_x= ', num2str(c(1)),';\n'));
% fprintf(fileID,strcat('double obstacle_y= ', num2str(c(2)),';\n'));
% fprintf(fileID,strcat('double obstacle_z= ', num2str(c(3)),';\n\n'));
%% get test points
disp('Finding testing points ...');

% test point 1 on joint 3
disp('test point 1:');
test_point1 = T22(1:3,4);
txt_vpa = simplify(vpa(test_point1));
fprintf(fileID,strcat('IntermediateState joint3_x=',char(txt_vpa(1)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint3_y=',char(txt_vpa(2)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint3_z=',char(txt_vpa(3)), ';\n'));
txt_cond1 = strcat('IntermediateState first_condition = ',num2str(A(1,1)),'*(joint3_x - obstacle_x)*(joint3_x - obstacle_x) + ',num2str(A(2,2)),'*(joint3_y - obstacle_y)*(joint3_y - obstacle_y) + ',num2str(A(3,3)),'*(joint3_z - obstacle_z)*(joint3_z - obstacle_z) - 1;\n');
fprintf(fileID,txt_cond1);
fprintf(fileID,'ocp.subjectTo( first_condition >=  0.0);\n\n');

% test point 2 on link 2
syms new_a_21
new_a_21 = a_3*0.25;
disp('test point 2:');
test_point2 = T03(1:3,4);
test_point2 = subs(test_point2, a_3, new_a_21);
simplify(vpa(test_point2))

txt2_vpa = simplify(vpa(test_point2));
fprintf(fileID,strcat('IntermediateState link21_x=',char(txt2_vpa(1)), ';\n'));
fprintf(fileID,strcat('IntermediateState link21_y=',char(txt2_vpa(2)), ';\n'));
fprintf(fileID,strcat('IntermediateState link21_z=',char(txt2_vpa(3)), ';\n'));
txt_cond2 = strcat('IntermediateState second_condition = ',num2str(A(1,1)),'*(link21_x - obstacle_x)*(link21_x - obstacle_x) + ',num2str(A(2,2)),'*(link21_y - obstacle_y)*(link21_y - obstacle_y) + ',num2str(A(3,3)),'*(link21_z - obstacle_z)*(link21_z - obstacle_z) - 1;\n');
fprintf(fileID,txt_cond2);
fprintf(fileID,'ocp.subjectTo( second_condition >=  0.0);\n\n');

% test point 3 on link 2
syms new_a_22
new_a_22 = a_3*0.5;
disp('test point 3:');
test_point3 = T03(1:3,4);
test_point3 = subs(test_point3, a_3, new_a_22);
simplify(vpa(test_point3))

txt3_vpa = simplify(vpa(test_point3));
fprintf(fileID,strcat('IntermediateState link22_x=',char(txt3_vpa(1)), ';\n'));
fprintf(fileID,strcat('IntermediateState link22_y=',char(txt3_vpa(2)), ';\n'));
fprintf(fileID,strcat('IntermediateState link22_z=',char(txt3_vpa(3)), ';\n'));
txt_cond3 = strcat('IntermediateState third_condition = ',num2str(A(1,1)),'*(link22_x - obstacle_x)*(link22_x - obstacle_x) + ',num2str(A(2,2)),'*(link22_y - obstacle_y)*(link22_y - obstacle_y) + ',num2str(A(3,3)),'*(link22_z - obstacle_z)*(link22_z - obstacle_z) - 1;\n');
fprintf(fileID,txt_cond3);
fprintf(fileID,'ocp.subjectTo( third_condition >=  0.0);\n\n');

%test point 4 on link 2
syms new_a_23
new_a_23 = a_3*0.75;
disp('test point 4:');
test_point4 = T03(1:3,4);
test_point4 = subs(test_point4, a_3, new_a_23);
simplify(vpa(test_point4))

txt4_vpa = simplify(vpa(test_point4));
fprintf(fileID,strcat('IntermediateState link23_x=',char(txt4_vpa(1)), ';\n'));
fprintf(fileID,strcat('IntermediateState link23_y=',char(txt4_vpa(2)), ';\n'));
fprintf(fileID,strcat('IntermediateState link23_z=',char(txt4_vpa(3)), ';\n'));
txt_cond4 = strcat('IntermediateState forth_condition = ',num2str(A(1,1)),'*(link23_x - obstacle_x)*(link23_x - obstacle_x) + ',num2str(A(2,2)),'*(link23_y - obstacle_y)*(link23_y - obstacle_y) + ',num2str(A(3,3)),'*(link23_z - obstacle_z)*(link23_z - obstacle_z) - 1;\n');
fprintf(fileID,txt_cond4);
fprintf(fileID,'ocp.subjectTo( forth_condition >=  0.0);\n\n');

%test point 5 before the joint 4
disp('test point 5:');
test_point5 = T03(1:3,4);
simplify(vpa(test_point3))

txt5_vpa = simplify(vpa(test_point5));
fprintf(fileID,strcat('IntermediateState joint41_x=',char(txt5_vpa(1)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint41_y=',char(txt5_vpa(2)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint41_z=',char(txt5_vpa(3)), ';\n'));
txt_cond5 = strcat('IntermediateState fifth_condition = ',num2str(A(1,1)),'*(joint41_x - obstacle_x)*(joint41_x - obstacle_x) + ',num2str(A(2,2)),'*(joint41_y - obstacle_y)*(joint41_y - obstacle_y) + ',num2str(A(3,3)),'*(joint41_z - obstacle_z)*(joint41_z - obstacle_z) - 1;\n');
fprintf(fileID,txt_cond5);
fprintf(fileID,'ocp.subjectTo( fifth_condition >=  0.0);\n\n');

%test point 6 after the joint 4
disp('test point 6:');
test_point6 = T04(1:3,4);
simplify(vpa(test_point6))

txt6_vpa = simplify(vpa(test_point6));
fprintf(fileID,strcat('IntermediateState joint42_x=',char(txt6_vpa(1)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint42_y=',char(txt6_vpa(2)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint42_z=',char(txt6_vpa(3)), ';\n'));
txt_cond6 = strcat('IntermediateState sixth_condition = ',num2str(A(1,1)),'*(joint42_x - obstacle_x)*(joint42_x - obstacle_x) + ',num2str(A(2,2)),'*(joint42_y - obstacle_y)*(joint42_y - obstacle_y) + ',num2str(A(3,3)),'*(joint42_z - obstacle_z)*(joint42_z - obstacle_z) - 1;\n');
fprintf(fileID,txt_cond6);
fprintf(fileID,'ocp.subjectTo( sixth_condition >=  0.0);\n\n');

%test point 7 after the joint 5
disp('test point 7:');
test_point7 = T05(1:3,4);
simplify(vpa(test_point7))

txt7_vpa = simplify(vpa(test_point7));
fprintf(fileID,strcat('IntermediateState joint52_x=',char(txt7_vpa(1)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint52_y=',char(txt7_vpa(2)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint52_z=',char(txt7_vpa(3)), ';\n'));
txt_cond7 = strcat('IntermediateState seventh_condition = ',num2str(A(1,1)),'*(joint52_x - obstacle_x)*(joint52_x - obstacle_x) + ',num2str(A(2,2)),'*(joint52_y - obstacle_y)*(joint52_y - obstacle_y) + ',num2str(A(3,3)),'*(joint52_z - obstacle_z)*(joint52_z - obstacle_z) - 1;\n');
fprintf(fileID,txt_cond7);
fprintf(fileID,'ocp.subjectTo( seventh_condition >=  0.0);\n\n');

%test point 8 after the joint 6
disp('test point 8:');
test_point8 = T07(1:3,4);
simplify(vpa(test_point8))

txt8_vpa = simplify(vpa(test_point8));
fprintf(fileID,strcat('IntermediateState joint62_x=',char(txt8_vpa(1)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint62_y=',char(txt8_vpa(2)), ';\n'));
fprintf(fileID,strcat('IntermediateState joint62_z=',char(txt8_vpa(3)), ';\n'));
txt_cond1 = strcat('IntermediateState eighth_condition = ',num2str(A(1,1)),'*(joint62_x - obstacle_x)*(joint62_x - obstacle_x) + ',num2str(A(2,2)),'*(joint62_y - obstacle_y)*(joint62_y - obstacle_y) + ',num2str(A(3,3)),'*(joint62_z - obstacle_z)*(joint62_z - obstacle_z) - 1;\n');
fprintf(fileID,txt_cond1);
fprintf(fileID,'ocp.subjectTo( eighth_condition >=  0.0);\n\n');

% close file
fclose(fileID);

%% Cartesian positions of 8 test points:
fileID = fopen('getCPose.txt','w');

fprintf(fileID,'// cartesian positions of 8 test points on UR5 robot \n');
fprintf(fileID,strcat('0, ', char(txt_vpa(1)), ', ', char(txt2_vpa(1)), ', ',char(txt3_vpa(1)),', ', char(txt4_vpa(1)),', ',char(txt5_vpa(1)),', ',char(txt6_vpa(1)),', ', char(txt7_vpa(1)), ', ',char(txt8_vpa(1)),',\n'));
fprintf(fileID,strcat('0, ', char(txt_vpa(2)), ', ',char(txt2_vpa(2)), ', ',char(txt3_vpa(2)), ', ',char(txt4_vpa(2)),', ',char(txt5_vpa(2)),', ',char(txt6_vpa(2)), ', ',char(txt7_vpa(2)), ', ',char(txt8_vpa(2)),',\n'));
fprintf(fileID,strcat('0, ', char(txt_vpa(3)), ', ',char(txt2_vpa(3)), ', ',char(txt3_vpa(3)), ', ',char(txt4_vpa(3)),', ',char(txt5_vpa(3)),', ',char(txt6_vpa(3)), ', ',char(txt7_vpa(3)), ', ',char(txt8_vpa(3)), ';\n'));
% close file
fclose(fileID);
