syms q1 q2 q3 q4 q5 q6 q7 'real'

D0 = 0.1564; 
D1 = -0.1284; a1 = 0.0054;
D2 = -0.0064; a2 = -0.2104;
D3 = -0.2104; a3 = 0.0064; % here error in a3 from manual's DH
D4 = -0.0064; a4 = -0.2084;
D5 = -0.1059; a5 = 0.0;
D6 = -0.0; a6 = -0.1059;


TB1=[...
    cos(q1) -sin(q1) 0 0;
    -sin(q1) -cos(q1) 0 0;
    0 0 -1 D0;
    0 0 0 1;
];

T12=[...
    cos(q2) -sin(q2) 0 0;
    0 0 -1 a1;
    sin(q2) cos(q2) 0 D1;
    0 0 0 1;
];

T23=[...
    cos(q3) -sin(q3) 0 0;
    0 0 1 a2;
    -sin(q3) -cos(q3) 0 D2;
    0 0 0 1;
];

T34=[...
    cos(q4) -sin(q4) 0 0;
    0 0 -1 a3;
    sin(q4) cos(q4) 0 D3;
    0 0 0 1;
];

T45=[...
    cos(q5) -sin(q5) 0 0;
    0 0 1 a4;
    -sin(q5) -cos(q5) 0 D4;
    0 0 0 1;
];

T56=[...
    cos(q6) -sin(q6) 0 0;
    0 0 -1 a5;
    sin(q6) cos(q6) 0 D5;
    0 0 0 1;
];

T67=[...
    cos(q7) -sin(q7) 0 0;
    0 0 1 a6;
    -sin(q7) -cos(q7) 0 D6;
    0 0 0 1;
];
T7end = [...
    1 0 0 0;
    0 -1 0 0;
    0 0 -1 -0.0615; % center of end-effector
    0 0 0 1;
];
Tend2gripper = [...
    1 0 0 0;
    0 1 0 0;
    0 0 1 0.07; % center of the tool (closest point on nails)
    0 0 0 1;
];
Tend2tool = [...
    1 0 0 0;
    0 1 0 0;
    0 0 1 0.12; % center of the tool (closest point on nails)
    0 0 0 1;
];

% here we need to find points from j2 to end-effector
T1 = TB1*T12;
T2 = T1*T23;
T3 = T2*T34; 
T4 = T3*T45; 
T5 = T4*T56; 
T6 = T5*T67;
T7tool = T7end*Tend2gripper;
T7 = T6*T7tool;
T_calibration = T6*T7end*Tend2tool;
%% End-effector c_pose
disp('End-effector c_pose')
vpa(T_calibration(1:3,4))
%% End-effector linear Jacobian (zeros for j7)
disp('End-effector linear Jacobian (zeros for j7)')
vpa([diff(T6(1:3,4), q1), diff(T6(1:3,4), q2), diff(T6(1:3,4), q3), ...
      diff(T6(1:3,4), q4), diff(T6(1:3,4), q5), diff(T6(1:3,4), q6)])

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
Tarr = {'T12','T23','T34','T45','T56','T67','T7tool'};
for mat = 3:7
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
syms u_1 u_2 u_3 u_4 u_5 u_6 u_7 'real'
% v end
Jv0 = [diff(T1(1:3,4), q1)] * [u_1]';
Jv1 = [diff(T2(1:3,4), q1), diff(T2(1:3,4), q2)] * [u_1 u_2]';
Jv2 = [diff(T2(1:3,4), q1), diff(T2(1:3,4), q2), diff(T2(1:3,4), q3)] * [u_1 u_2 u_3]';
Jv3 = [diff(T3(1:3,4), q1), diff(T3(1:3,4), q2), diff(T3(1:3,4), q3), ...
      diff(T3(1:3,4), q4)] * [u_1 u_2 u_3 u_4]';
Jv4 = [diff(T4(1:3,4), q1), diff(T4(1:3,4), q2), diff(T4(1:3,4), q3), ...
      diff(T4(1:3,4), q4), diff(T4(1:3,4), q5)] * [u_1 u_2 u_3 u_4 u_5]';
Jv5 = [diff(T5(1:3,4), q1), diff(T5(1:3,4), q2), diff(T5(1:3,4), q3), ...
      diff(T5(1:3,4), q4), diff(T5(1:3,4), q5), diff(T5(1:3,4), q6)] * [u_1 u_2 u_3 u_4 u_5 u_6]';
Jv6 = [diff(T6(1:3,4), q1), diff(T6(1:3,4), q2), diff(T6(1:3,4), q3), ...
      diff(T6(1:3,4), q4), diff(T6(1:3,4), q5), diff(T6(1:3,4), q6), diff(T6(1:3,4), q7)] * [u_1 u_2 u_3 u_4 u_5 u_6 u_7]';
Jv7 = Jv6;
%%
Jvarr={'Jv0','Jv1','Jv2','Jv3','Jv5','Jv6','Jv7'};
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
disp('IntermediateState v7_x=v6_x;')
disp('IntermediateState v7_y=v6_y;')
disp('IntermediateState v7_z=v6_z;')

%% Ros node code C++
disp([char(13),char(13),char(13),'************** C++ code for ROS nodes **************',char(13)])
disp('Eigen::MatrixXf get_cpose(float q1, float q2, float q3, float q4, float q5, float q6, float q7){')
disp('Eigen::MatrixXf mat(3,8);')
disp('mat <<')
get_cpose = simplify(vpa([TB1(1:3,4) T1(1:3,4) T2(1:3,4) T3(1:3,4) T4(1:3,4) T5(1:3,4) T6(1:3,4) T7(1:3,4)]));

for i=1:(size(get_cpose,1)-1)
    mega_str = '';
    for j=1:size(get_cpose,2)
        mega_str = strcat(mega_str,sprintf('%s,',get_cpose(i,j)));
    end
    disp(mega_str)
end
mega_str = strcat(sprintf('%s',get_cpose(3,j)),',',...
    sprintf('%s',get_cpose(3,j)),',',sprintf('%s',get_cpose(3,j)));
disp([mega_str,';'])
disp(['	return mat;',char(13),'}'])
%%
disp([char(13),char(13)])
disp('Eigen::MatrixXf get_velocity(float q1, float q2, float q3, float q4, float q5, float q6, float q7,')
disp('                             float u_1, float u_2, float u_3, float u_4, float u_5, float u_6, float u_7){')
disp('	Eigen::MatrixXf mat(21,1);')
disp('mat <<')
get_vels = [Jv1; Jv2; Jv3; Jv4; Jv5; Jv6; Jv7];
for j=1:(length(get_vels)-1)
    disp(sprintf('%s,',vpa(simplify(get_vels(j)))));
end
disp(sprintf('%s;',vpa(simplify(get_vels(21)))));
disp(['	return mat;',char(13),'}'])
