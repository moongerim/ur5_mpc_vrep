clear all; close all; clc
syms theta_1 theta_2 theta_3 theta_4 theta_5 theta_6 'real'

    
a_2 = -0.425; a_3 = -0.39225;
d_1 = 0.089459; d_4 = 0.10915; d_5 = 0.09465; d_6 = 0.0823;

% UR transformation matrices 
            
T12 = [cos(theta_1), 0,  sin(theta_1), 0;
      sin(theta_1), 0, -cos(theta_1), 0;
                0, 1,            0, d_1;
                0, 0,            0, 1];

T23 = [cos(theta_2), -sin(theta_2), 0, a_2*cos(theta_2);
      sin(theta_2),  cos(theta_2), 0, a_2*sin(theta_2);
                0,            0, 1,                0;
                0,            0, 0,                1];

T34 = [cos(theta_3), -sin(theta_3), 0, a_3*cos(theta_3);
      sin(theta_3),  cos(theta_3), 0, a_3*sin(theta_3);
                0,            0, 1,      0;
                0,            0, 0,      1];
            
T45 = [cos(theta_4), 0,  sin(theta_4),   0;
      sin(theta_4), 0, -cos(theta_4),   0;
                0, 1,            0, d_4;
                0, 0,            0,   1];

T56 = [cos(theta_5),  0, -sin(theta_5),   0;
      sin(theta_5),  0,  cos(theta_5),   0;
                0, -1,              0, d_5;
                0,  0,              0,   1];

T67 = [cos(theta_6), -sin(theta_6), 0,   0;
      sin(theta_6),  cos(theta_6), 0,   0;
                0,            0,   1, d_6;
                0,            0,   0,   1];
            

% here we need to find points from j2 to end-effector

T1 = T12;
T2 = T1*T23;
T3 = T2*T34; 
T4 = T3*T45; 
T5 = T4*T56; 
T6 = T5*T67;
%% End-effector c_pose
disp('End-effector c_pose')
vpa(T6(1:3,4))
%% End-effector linear Jacobian (zeros for j7)
disp('End-effector linear Jacobian (zeros for j7)')
vpa([diff(T6(1:3,4), theta_1), diff(T6(1:3,4), theta_2), diff(T6(1:3,4), theta_3), ...
      diff(T6(1:3,4), theta_4), diff(T6(1:3,4), theta_5), diff(T6(1:3,4), theta_6)])

%% how to write equations
disp([char(13),char(13),char(13),'************** Acado code for spheres **************',char(13)])
base_string = 'IntermediateState';
for i=1:3
        temp_str = strcat(base_string,' T1','_',sprintf('%i',i),' = ',sprintf('%s',simplify(vpa(T1(i,4)))),';');
        disp(temp_str)
end
disp('   ')
mat = 2;
for i=1:3 
    for j=1:3
        temp_str = strcat(base_string,' R',sprintf('%i',mat),'_',sprintf('%i',i),sprintf('%i',j),' = ',sprintf('%s',simplify(vpa(T2(i,j)))),';');
        disp(temp_str)
    end
end
for i=1:3
        temp_str = strcat(base_string,' T',sprintf('%i',mat),'_',sprintf('%i',i),' = ',sprintf('%s',simplify(vpa(T2(i,4)))),';');
        disp(temp_str)
end
disp('   ')
%% Multiply with previous
Tarr = {'T12','T23','T34','T45','T56','T67'};
for mat = 3:6
    for i=1:3 
        for j=1:3
            temp_str = strcat(base_string,' R',sprintf('%i',mat),'_',sprintf('%i',i),sprintf('%i',j),' = ');
            temp_1=strcat(' R',sprintf('%i',mat-1),sprintf('_%i%i',1,j),'*(',sprintf('%s',simplify(vpa(eval(strcat(Tarr{mat},'(1,i)'))))),')');
            temp_2=strcat(' R',sprintf('%i',mat-1),sprintf('_%i%i',2,j),'*(',sprintf('%s',simplify(vpa(eval(strcat(Tarr{mat},'(2,i)'))))),')');
            temp_3=strcat(' R',sprintf('%i',mat-1),sprintf('_%i%i',3,j),'*(',sprintf('%s',simplify(vpa(eval(strcat(Tarr{mat},'(3,i)'))))),')');
            disp(strcat(temp_str,' ',temp_1,' + ',temp_2,' + ',temp_3,';'))
        end
    end
    %
    for i=1:3
            temp_str = strcat(base_string,' T',sprintf('%i',mat),'_',sprintf('%i',i),' = ');
            temp_1=strcat(' R',sprintf('%i',mat-1),sprintf('_%i%i',1,i),'*(',sprintf('%s',simplify(vpa(eval(strcat(Tarr{mat},'(1,4)'))))),')');
            temp_2=strcat(' R',sprintf('%i',mat-1),sprintf('_%i%i',2,i),'*(',sprintf('%s',simplify(vpa(eval(strcat(Tarr{mat},'(2,4)'))))),')');
            temp_3=strcat(' R',sprintf('%i',mat-1),sprintf('_%i%i',3,i),'*(',sprintf('%s',simplify(vpa(eval(strcat(Tarr{mat},'(3,4)'))))),')');
            temp_4=strcat(' T',sprintf('%i',mat-1),sprintf('_%i',i),'*(',sprintf('%s',simplify(vpa(eval(strcat(Tarr{mat},'(4,4)'))))),')');
            disp(strcat(temp_str,' ',temp_1,' + ',temp_2,' + ',temp_3,' + ',temp_4,';'))
    end
    disp(' ')
end
%%
syms u_1 u_2 u_3 u_4 u_5 u_6 'real'
% v end
Jv0 = [diff(T1(1:3,4), theta_1)] * [u_1]';
Jv1 = [diff(T2(1:3,4), theta_1), diff(T2(1:3,4), theta_2)] * [u_1 u_2]';
Jv2 = [diff(T3(1:3,4), theta_1), diff(T3(1:3,4), theta_2), diff(T3(1:3,4), theta_3)] * [u_1 u_2 u_3]';
Jv3 = [diff(T4(1:3,4), theta_1), diff(T4(1:3,4), theta_2), diff(T4(1:3,4), theta_3),diff(T4(1:3,4), theta_4)] * [u_1 u_2 u_3 u_4]';
Jv4 = [diff(T5(1:3,4), theta_1), diff(T5(1:3,4), theta_2), diff(T5(1:3,4), theta_3),diff(T5(1:3,4), theta_4), diff(T5(1:3,4), theta_5)] * [u_1 u_2 u_3 u_4 u_5]';
Jv5 = [diff(T6(1:3,4), theta_1), diff(T6(1:3,4), theta_2), diff(T6(1:3,4), theta_3),diff(T6(1:3,4), theta_4), diff(T6(1:3,4), theta_5), diff(T6(1:3,4), theta_6)] * [u_1 u_2 u_3 u_4 u_5 u_6]';
% Jv6 = Jv5;
%%
Jvarr={'Jv0','Jv1','Jv2','Jv3','Jv4','Jv5'};
velarr = {'x','y','z'};
disp([char(13),char(13),char(13)])
for mat = 1:6
    for i=1:3
        temp_str = strcat(base_string,' v',sprintf('%i',mat),'_',sprintf('%s',velarr{i}),' = ');
        temp_1=strcat(sprintf('%s',simplify(vpa(eval(strcat(Jvarr{mat},'(i)'))))),';');
        disp(strcat(temp_str,' ',temp_1))
    end
end
%
% disp('IntermediateState v7_x=v6_x;')
% disp('IntermediateState v7_y=v6_y;')
% disp('IntermediateState v7_z=v6_z;')

%% Ros node code C++
disp([char(13),char(13),char(13),'************** C++ code for ROS nodes **************',char(13)])
disp('Eigen::MatrixXf get_cpose(float theta_1, float theta_2, float theta_3, float theta_4, float theta_5, float theta_6){')
disp('Eigen::MatrixXf mat(3,6);')
disp('mat <<')
get_cpose = simplify(vpa([T1(1:3,4) T2(1:3,4) T3(1:3,4) T4(1:3,4) T5(1:3,4) T6(1:3,4)]));

for i=1:(size(get_cpose,1)-1)
    mega_str = '';
    for j=1:size(get_cpose,2)
        mega_str = strcat(mega_str,sprintf('%s,',get_cpose(i,j)));
    end
    disp(mega_str);
end
mega_str = strcat(sprintf('%s',get_cpose(3,1)),',',...
    sprintf('%s',get_cpose(3,2)),',',sprintf('%s',get_cpose(3,3)),',',...
sprintf('%s',get_cpose(3,4)),',',sprintf('%s',get_cpose(3,5)),',',...
sprintf('%s',get_cpose(3,6)));
disp([mega_str,';'])
disp(['	return mat;',char(13),'}'])
%%
disp([char(13),char(13)])
disp('Eigen::MatrixXf get_velocity(float theta_1, float theta_2, float theta_3, float theta_4, float theta_5, float theta_6, float q7,')
disp('                             float u_1, float u_2, float u_3, float u_4, float u_5, float u_6, float u_7){')
disp('	Eigen::MatrixXf mat(15,1);')
disp('mat <<')
get_vels = [Jv0; Jv1; Jv2; Jv3; Jv4; Jv5];
for j=1:(length(get_vels)-1)
    disp(sprintf('%s,',vpa(simplify(get_vels(j)))));
end
disp(sprintf('%s;',vpa(simplify(get_vels(18)))));
disp(['	return mat;',char(13),'}'])
