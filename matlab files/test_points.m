
d_1 =  0.089159;         
d_4 =  0.10915;        
d_5 =  0.09465;      
d_6 =  0.08230;   
a_2 = -0.42500;
 a_3 = -0.39225;
theta_1=0;
theta_2=-3.14/2;
theta_3 =0;
theta_4 = -3.14/2;
theta_5 = 0;
theta_6 = 0;
link21_x = (cos(theta_1)*(a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)))/4
link21_y = (sin(theta_1)*(a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)))/4
link21_z = d_1 + 0.25*a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2)