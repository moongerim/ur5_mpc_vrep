
class MPC_solver
{
private:
  int num_steps;
public:
  MPC_solver(int n);
  int reinitialize();
  double * solve_mpc(double input_arr[68], double state_arr[60]);
};


