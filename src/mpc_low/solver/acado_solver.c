/*
 *    This file was auto-generated using the ACADO Toolkit.
 *    
 *    While ACADO Toolkit is free software released under the terms of
 *    the GNU Lesser General Public License (LGPL), the generated code
 *    as such remains the property of the user who used ACADO Toolkit
 *    to generate this code. In particular, user dependent data of the code
 *    do not inherit the GNU LGPL license. On the other hand, parts of the
 *    generated code that are a direct copy of source code from the
 *    ACADO Toolkit or the software tools it is based on, remain, as derived
 *    work, automatically covered by the LGPL license.
 *    
 *    ACADO Toolkit is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *    
 */


#include "acado_common.h"




/******************************************************************************/
/*                                                                            */
/* ACADO code generation                                                      */
/*                                                                            */
/******************************************************************************/


int acado_modelSimulation(  )
{
int ret;

int lRun1;
ret = 0;
for (lRun1 = 0; lRun1 < 10; ++lRun1)
{
acadoWorkspace.state[0] = acadoVariables.x[lRun1 * 7];
acadoWorkspace.state[1] = acadoVariables.x[lRun1 * 7 + 1];
acadoWorkspace.state[2] = acadoVariables.x[lRun1 * 7 + 2];
acadoWorkspace.state[3] = acadoVariables.x[lRun1 * 7 + 3];
acadoWorkspace.state[4] = acadoVariables.x[lRun1 * 7 + 4];
acadoWorkspace.state[5] = acadoVariables.x[lRun1 * 7 + 5];
acadoWorkspace.state[6] = acadoVariables.x[lRun1 * 7 + 6];

acadoWorkspace.state[105] = acadoVariables.u[lRun1 * 7];
acadoWorkspace.state[106] = acadoVariables.u[lRun1 * 7 + 1];
acadoWorkspace.state[107] = acadoVariables.u[lRun1 * 7 + 2];
acadoWorkspace.state[108] = acadoVariables.u[lRun1 * 7 + 3];
acadoWorkspace.state[109] = acadoVariables.u[lRun1 * 7 + 4];
acadoWorkspace.state[110] = acadoVariables.u[lRun1 * 7 + 5];
acadoWorkspace.state[111] = acadoVariables.u[lRun1 * 7 + 6];
acadoWorkspace.state[112] = acadoVariables.od[lRun1 * 59];
acadoWorkspace.state[113] = acadoVariables.od[lRun1 * 59 + 1];
acadoWorkspace.state[114] = acadoVariables.od[lRun1 * 59 + 2];
acadoWorkspace.state[115] = acadoVariables.od[lRun1 * 59 + 3];
acadoWorkspace.state[116] = acadoVariables.od[lRun1 * 59 + 4];
acadoWorkspace.state[117] = acadoVariables.od[lRun1 * 59 + 5];
acadoWorkspace.state[118] = acadoVariables.od[lRun1 * 59 + 6];
acadoWorkspace.state[119] = acadoVariables.od[lRun1 * 59 + 7];
acadoWorkspace.state[120] = acadoVariables.od[lRun1 * 59 + 8];
acadoWorkspace.state[121] = acadoVariables.od[lRun1 * 59 + 9];
acadoWorkspace.state[122] = acadoVariables.od[lRun1 * 59 + 10];
acadoWorkspace.state[123] = acadoVariables.od[lRun1 * 59 + 11];
acadoWorkspace.state[124] = acadoVariables.od[lRun1 * 59 + 12];
acadoWorkspace.state[125] = acadoVariables.od[lRun1 * 59 + 13];
acadoWorkspace.state[126] = acadoVariables.od[lRun1 * 59 + 14];
acadoWorkspace.state[127] = acadoVariables.od[lRun1 * 59 + 15];
acadoWorkspace.state[128] = acadoVariables.od[lRun1 * 59 + 16];
acadoWorkspace.state[129] = acadoVariables.od[lRun1 * 59 + 17];
acadoWorkspace.state[130] = acadoVariables.od[lRun1 * 59 + 18];
acadoWorkspace.state[131] = acadoVariables.od[lRun1 * 59 + 19];
acadoWorkspace.state[132] = acadoVariables.od[lRun1 * 59 + 20];
acadoWorkspace.state[133] = acadoVariables.od[lRun1 * 59 + 21];
acadoWorkspace.state[134] = acadoVariables.od[lRun1 * 59 + 22];
acadoWorkspace.state[135] = acadoVariables.od[lRun1 * 59 + 23];
acadoWorkspace.state[136] = acadoVariables.od[lRun1 * 59 + 24];
acadoWorkspace.state[137] = acadoVariables.od[lRun1 * 59 + 25];
acadoWorkspace.state[138] = acadoVariables.od[lRun1 * 59 + 26];
acadoWorkspace.state[139] = acadoVariables.od[lRun1 * 59 + 27];
acadoWorkspace.state[140] = acadoVariables.od[lRun1 * 59 + 28];
acadoWorkspace.state[141] = acadoVariables.od[lRun1 * 59 + 29];
acadoWorkspace.state[142] = acadoVariables.od[lRun1 * 59 + 30];
acadoWorkspace.state[143] = acadoVariables.od[lRun1 * 59 + 31];
acadoWorkspace.state[144] = acadoVariables.od[lRun1 * 59 + 32];
acadoWorkspace.state[145] = acadoVariables.od[lRun1 * 59 + 33];
acadoWorkspace.state[146] = acadoVariables.od[lRun1 * 59 + 34];
acadoWorkspace.state[147] = acadoVariables.od[lRun1 * 59 + 35];
acadoWorkspace.state[148] = acadoVariables.od[lRun1 * 59 + 36];
acadoWorkspace.state[149] = acadoVariables.od[lRun1 * 59 + 37];
acadoWorkspace.state[150] = acadoVariables.od[lRun1 * 59 + 38];
acadoWorkspace.state[151] = acadoVariables.od[lRun1 * 59 + 39];
acadoWorkspace.state[152] = acadoVariables.od[lRun1 * 59 + 40];
acadoWorkspace.state[153] = acadoVariables.od[lRun1 * 59 + 41];
acadoWorkspace.state[154] = acadoVariables.od[lRun1 * 59 + 42];
acadoWorkspace.state[155] = acadoVariables.od[lRun1 * 59 + 43];
acadoWorkspace.state[156] = acadoVariables.od[lRun1 * 59 + 44];
acadoWorkspace.state[157] = acadoVariables.od[lRun1 * 59 + 45];
acadoWorkspace.state[158] = acadoVariables.od[lRun1 * 59 + 46];
acadoWorkspace.state[159] = acadoVariables.od[lRun1 * 59 + 47];
acadoWorkspace.state[160] = acadoVariables.od[lRun1 * 59 + 48];
acadoWorkspace.state[161] = acadoVariables.od[lRun1 * 59 + 49];
acadoWorkspace.state[162] = acadoVariables.od[lRun1 * 59 + 50];
acadoWorkspace.state[163] = acadoVariables.od[lRun1 * 59 + 51];
acadoWorkspace.state[164] = acadoVariables.od[lRun1 * 59 + 52];
acadoWorkspace.state[165] = acadoVariables.od[lRun1 * 59 + 53];
acadoWorkspace.state[166] = acadoVariables.od[lRun1 * 59 + 54];
acadoWorkspace.state[167] = acadoVariables.od[lRun1 * 59 + 55];
acadoWorkspace.state[168] = acadoVariables.od[lRun1 * 59 + 56];
acadoWorkspace.state[169] = acadoVariables.od[lRun1 * 59 + 57];
acadoWorkspace.state[170] = acadoVariables.od[lRun1 * 59 + 58];

ret = acado_integrate(acadoWorkspace.state, 1);

acadoWorkspace.d[lRun1 * 7] = acadoWorkspace.state[0] - acadoVariables.x[lRun1 * 7 + 7];
acadoWorkspace.d[lRun1 * 7 + 1] = acadoWorkspace.state[1] - acadoVariables.x[lRun1 * 7 + 8];
acadoWorkspace.d[lRun1 * 7 + 2] = acadoWorkspace.state[2] - acadoVariables.x[lRun1 * 7 + 9];
acadoWorkspace.d[lRun1 * 7 + 3] = acadoWorkspace.state[3] - acadoVariables.x[lRun1 * 7 + 10];
acadoWorkspace.d[lRun1 * 7 + 4] = acadoWorkspace.state[4] - acadoVariables.x[lRun1 * 7 + 11];
acadoWorkspace.d[lRun1 * 7 + 5] = acadoWorkspace.state[5] - acadoVariables.x[lRun1 * 7 + 12];
acadoWorkspace.d[lRun1 * 7 + 6] = acadoWorkspace.state[6] - acadoVariables.x[lRun1 * 7 + 13];

acadoWorkspace.evGx[lRun1 * 49] = acadoWorkspace.state[7];
acadoWorkspace.evGx[lRun1 * 49 + 1] = acadoWorkspace.state[8];
acadoWorkspace.evGx[lRun1 * 49 + 2] = acadoWorkspace.state[9];
acadoWorkspace.evGx[lRun1 * 49 + 3] = acadoWorkspace.state[10];
acadoWorkspace.evGx[lRun1 * 49 + 4] = acadoWorkspace.state[11];
acadoWorkspace.evGx[lRun1 * 49 + 5] = acadoWorkspace.state[12];
acadoWorkspace.evGx[lRun1 * 49 + 6] = acadoWorkspace.state[13];
acadoWorkspace.evGx[lRun1 * 49 + 7] = acadoWorkspace.state[14];
acadoWorkspace.evGx[lRun1 * 49 + 8] = acadoWorkspace.state[15];
acadoWorkspace.evGx[lRun1 * 49 + 9] = acadoWorkspace.state[16];
acadoWorkspace.evGx[lRun1 * 49 + 10] = acadoWorkspace.state[17];
acadoWorkspace.evGx[lRun1 * 49 + 11] = acadoWorkspace.state[18];
acadoWorkspace.evGx[lRun1 * 49 + 12] = acadoWorkspace.state[19];
acadoWorkspace.evGx[lRun1 * 49 + 13] = acadoWorkspace.state[20];
acadoWorkspace.evGx[lRun1 * 49 + 14] = acadoWorkspace.state[21];
acadoWorkspace.evGx[lRun1 * 49 + 15] = acadoWorkspace.state[22];
acadoWorkspace.evGx[lRun1 * 49 + 16] = acadoWorkspace.state[23];
acadoWorkspace.evGx[lRun1 * 49 + 17] = acadoWorkspace.state[24];
acadoWorkspace.evGx[lRun1 * 49 + 18] = acadoWorkspace.state[25];
acadoWorkspace.evGx[lRun1 * 49 + 19] = acadoWorkspace.state[26];
acadoWorkspace.evGx[lRun1 * 49 + 20] = acadoWorkspace.state[27];
acadoWorkspace.evGx[lRun1 * 49 + 21] = acadoWorkspace.state[28];
acadoWorkspace.evGx[lRun1 * 49 + 22] = acadoWorkspace.state[29];
acadoWorkspace.evGx[lRun1 * 49 + 23] = acadoWorkspace.state[30];
acadoWorkspace.evGx[lRun1 * 49 + 24] = acadoWorkspace.state[31];
acadoWorkspace.evGx[lRun1 * 49 + 25] = acadoWorkspace.state[32];
acadoWorkspace.evGx[lRun1 * 49 + 26] = acadoWorkspace.state[33];
acadoWorkspace.evGx[lRun1 * 49 + 27] = acadoWorkspace.state[34];
acadoWorkspace.evGx[lRun1 * 49 + 28] = acadoWorkspace.state[35];
acadoWorkspace.evGx[lRun1 * 49 + 29] = acadoWorkspace.state[36];
acadoWorkspace.evGx[lRun1 * 49 + 30] = acadoWorkspace.state[37];
acadoWorkspace.evGx[lRun1 * 49 + 31] = acadoWorkspace.state[38];
acadoWorkspace.evGx[lRun1 * 49 + 32] = acadoWorkspace.state[39];
acadoWorkspace.evGx[lRun1 * 49 + 33] = acadoWorkspace.state[40];
acadoWorkspace.evGx[lRun1 * 49 + 34] = acadoWorkspace.state[41];
acadoWorkspace.evGx[lRun1 * 49 + 35] = acadoWorkspace.state[42];
acadoWorkspace.evGx[lRun1 * 49 + 36] = acadoWorkspace.state[43];
acadoWorkspace.evGx[lRun1 * 49 + 37] = acadoWorkspace.state[44];
acadoWorkspace.evGx[lRun1 * 49 + 38] = acadoWorkspace.state[45];
acadoWorkspace.evGx[lRun1 * 49 + 39] = acadoWorkspace.state[46];
acadoWorkspace.evGx[lRun1 * 49 + 40] = acadoWorkspace.state[47];
acadoWorkspace.evGx[lRun1 * 49 + 41] = acadoWorkspace.state[48];
acadoWorkspace.evGx[lRun1 * 49 + 42] = acadoWorkspace.state[49];
acadoWorkspace.evGx[lRun1 * 49 + 43] = acadoWorkspace.state[50];
acadoWorkspace.evGx[lRun1 * 49 + 44] = acadoWorkspace.state[51];
acadoWorkspace.evGx[lRun1 * 49 + 45] = acadoWorkspace.state[52];
acadoWorkspace.evGx[lRun1 * 49 + 46] = acadoWorkspace.state[53];
acadoWorkspace.evGx[lRun1 * 49 + 47] = acadoWorkspace.state[54];
acadoWorkspace.evGx[lRun1 * 49 + 48] = acadoWorkspace.state[55];

acadoWorkspace.evGu[lRun1 * 49] = acadoWorkspace.state[56];
acadoWorkspace.evGu[lRun1 * 49 + 1] = acadoWorkspace.state[57];
acadoWorkspace.evGu[lRun1 * 49 + 2] = acadoWorkspace.state[58];
acadoWorkspace.evGu[lRun1 * 49 + 3] = acadoWorkspace.state[59];
acadoWorkspace.evGu[lRun1 * 49 + 4] = acadoWorkspace.state[60];
acadoWorkspace.evGu[lRun1 * 49 + 5] = acadoWorkspace.state[61];
acadoWorkspace.evGu[lRun1 * 49 + 6] = acadoWorkspace.state[62];
acadoWorkspace.evGu[lRun1 * 49 + 7] = acadoWorkspace.state[63];
acadoWorkspace.evGu[lRun1 * 49 + 8] = acadoWorkspace.state[64];
acadoWorkspace.evGu[lRun1 * 49 + 9] = acadoWorkspace.state[65];
acadoWorkspace.evGu[lRun1 * 49 + 10] = acadoWorkspace.state[66];
acadoWorkspace.evGu[lRun1 * 49 + 11] = acadoWorkspace.state[67];
acadoWorkspace.evGu[lRun1 * 49 + 12] = acadoWorkspace.state[68];
acadoWorkspace.evGu[lRun1 * 49 + 13] = acadoWorkspace.state[69];
acadoWorkspace.evGu[lRun1 * 49 + 14] = acadoWorkspace.state[70];
acadoWorkspace.evGu[lRun1 * 49 + 15] = acadoWorkspace.state[71];
acadoWorkspace.evGu[lRun1 * 49 + 16] = acadoWorkspace.state[72];
acadoWorkspace.evGu[lRun1 * 49 + 17] = acadoWorkspace.state[73];
acadoWorkspace.evGu[lRun1 * 49 + 18] = acadoWorkspace.state[74];
acadoWorkspace.evGu[lRun1 * 49 + 19] = acadoWorkspace.state[75];
acadoWorkspace.evGu[lRun1 * 49 + 20] = acadoWorkspace.state[76];
acadoWorkspace.evGu[lRun1 * 49 + 21] = acadoWorkspace.state[77];
acadoWorkspace.evGu[lRun1 * 49 + 22] = acadoWorkspace.state[78];
acadoWorkspace.evGu[lRun1 * 49 + 23] = acadoWorkspace.state[79];
acadoWorkspace.evGu[lRun1 * 49 + 24] = acadoWorkspace.state[80];
acadoWorkspace.evGu[lRun1 * 49 + 25] = acadoWorkspace.state[81];
acadoWorkspace.evGu[lRun1 * 49 + 26] = acadoWorkspace.state[82];
acadoWorkspace.evGu[lRun1 * 49 + 27] = acadoWorkspace.state[83];
acadoWorkspace.evGu[lRun1 * 49 + 28] = acadoWorkspace.state[84];
acadoWorkspace.evGu[lRun1 * 49 + 29] = acadoWorkspace.state[85];
acadoWorkspace.evGu[lRun1 * 49 + 30] = acadoWorkspace.state[86];
acadoWorkspace.evGu[lRun1 * 49 + 31] = acadoWorkspace.state[87];
acadoWorkspace.evGu[lRun1 * 49 + 32] = acadoWorkspace.state[88];
acadoWorkspace.evGu[lRun1 * 49 + 33] = acadoWorkspace.state[89];
acadoWorkspace.evGu[lRun1 * 49 + 34] = acadoWorkspace.state[90];
acadoWorkspace.evGu[lRun1 * 49 + 35] = acadoWorkspace.state[91];
acadoWorkspace.evGu[lRun1 * 49 + 36] = acadoWorkspace.state[92];
acadoWorkspace.evGu[lRun1 * 49 + 37] = acadoWorkspace.state[93];
acadoWorkspace.evGu[lRun1 * 49 + 38] = acadoWorkspace.state[94];
acadoWorkspace.evGu[lRun1 * 49 + 39] = acadoWorkspace.state[95];
acadoWorkspace.evGu[lRun1 * 49 + 40] = acadoWorkspace.state[96];
acadoWorkspace.evGu[lRun1 * 49 + 41] = acadoWorkspace.state[97];
acadoWorkspace.evGu[lRun1 * 49 + 42] = acadoWorkspace.state[98];
acadoWorkspace.evGu[lRun1 * 49 + 43] = acadoWorkspace.state[99];
acadoWorkspace.evGu[lRun1 * 49 + 44] = acadoWorkspace.state[100];
acadoWorkspace.evGu[lRun1 * 49 + 45] = acadoWorkspace.state[101];
acadoWorkspace.evGu[lRun1 * 49 + 46] = acadoWorkspace.state[102];
acadoWorkspace.evGu[lRun1 * 49 + 47] = acadoWorkspace.state[103];
acadoWorkspace.evGu[lRun1 * 49 + 48] = acadoWorkspace.state[104];
}
return ret;
}

void acado_evaluateLSQ(const real_t* in, real_t* out)
{
const real_t* xd = in;
const real_t* u = in + 7;

/* Compute outputs: */
out[0] = xd[0];
out[1] = xd[1];
out[2] = xd[2];
out[3] = xd[3];
out[4] = xd[4];
out[5] = xd[5];
out[6] = u[0];
out[7] = u[1];
out[8] = u[2];
out[9] = u[3];
out[10] = u[4];
out[11] = u[5];
out[12] = u[6];
}

void acado_evaluateLSQEndTerm(const real_t* in, real_t* out)
{
const real_t* xd = in;

/* Compute outputs: */
out[0] = xd[0];
out[1] = xd[1];
out[2] = xd[2];
out[3] = xd[3];
out[4] = xd[4];
out[5] = xd[5];
}

void acado_evaluateObjective(  )
{
int runObj;
for (runObj = 0; runObj < 10; ++runObj)
{
acadoWorkspace.objValueIn[0] = acadoVariables.x[runObj * 7];
acadoWorkspace.objValueIn[1] = acadoVariables.x[runObj * 7 + 1];
acadoWorkspace.objValueIn[2] = acadoVariables.x[runObj * 7 + 2];
acadoWorkspace.objValueIn[3] = acadoVariables.x[runObj * 7 + 3];
acadoWorkspace.objValueIn[4] = acadoVariables.x[runObj * 7 + 4];
acadoWorkspace.objValueIn[5] = acadoVariables.x[runObj * 7 + 5];
acadoWorkspace.objValueIn[6] = acadoVariables.x[runObj * 7 + 6];
acadoWorkspace.objValueIn[7] = acadoVariables.u[runObj * 7];
acadoWorkspace.objValueIn[8] = acadoVariables.u[runObj * 7 + 1];
acadoWorkspace.objValueIn[9] = acadoVariables.u[runObj * 7 + 2];
acadoWorkspace.objValueIn[10] = acadoVariables.u[runObj * 7 + 3];
acadoWorkspace.objValueIn[11] = acadoVariables.u[runObj * 7 + 4];
acadoWorkspace.objValueIn[12] = acadoVariables.u[runObj * 7 + 5];
acadoWorkspace.objValueIn[13] = acadoVariables.u[runObj * 7 + 6];
acadoWorkspace.objValueIn[14] = acadoVariables.od[runObj * 59];
acadoWorkspace.objValueIn[15] = acadoVariables.od[runObj * 59 + 1];
acadoWorkspace.objValueIn[16] = acadoVariables.od[runObj * 59 + 2];
acadoWorkspace.objValueIn[17] = acadoVariables.od[runObj * 59 + 3];
acadoWorkspace.objValueIn[18] = acadoVariables.od[runObj * 59 + 4];
acadoWorkspace.objValueIn[19] = acadoVariables.od[runObj * 59 + 5];
acadoWorkspace.objValueIn[20] = acadoVariables.od[runObj * 59 + 6];
acadoWorkspace.objValueIn[21] = acadoVariables.od[runObj * 59 + 7];
acadoWorkspace.objValueIn[22] = acadoVariables.od[runObj * 59 + 8];
acadoWorkspace.objValueIn[23] = acadoVariables.od[runObj * 59 + 9];
acadoWorkspace.objValueIn[24] = acadoVariables.od[runObj * 59 + 10];
acadoWorkspace.objValueIn[25] = acadoVariables.od[runObj * 59 + 11];
acadoWorkspace.objValueIn[26] = acadoVariables.od[runObj * 59 + 12];
acadoWorkspace.objValueIn[27] = acadoVariables.od[runObj * 59 + 13];
acadoWorkspace.objValueIn[28] = acadoVariables.od[runObj * 59 + 14];
acadoWorkspace.objValueIn[29] = acadoVariables.od[runObj * 59 + 15];
acadoWorkspace.objValueIn[30] = acadoVariables.od[runObj * 59 + 16];
acadoWorkspace.objValueIn[31] = acadoVariables.od[runObj * 59 + 17];
acadoWorkspace.objValueIn[32] = acadoVariables.od[runObj * 59 + 18];
acadoWorkspace.objValueIn[33] = acadoVariables.od[runObj * 59 + 19];
acadoWorkspace.objValueIn[34] = acadoVariables.od[runObj * 59 + 20];
acadoWorkspace.objValueIn[35] = acadoVariables.od[runObj * 59 + 21];
acadoWorkspace.objValueIn[36] = acadoVariables.od[runObj * 59 + 22];
acadoWorkspace.objValueIn[37] = acadoVariables.od[runObj * 59 + 23];
acadoWorkspace.objValueIn[38] = acadoVariables.od[runObj * 59 + 24];
acadoWorkspace.objValueIn[39] = acadoVariables.od[runObj * 59 + 25];
acadoWorkspace.objValueIn[40] = acadoVariables.od[runObj * 59 + 26];
acadoWorkspace.objValueIn[41] = acadoVariables.od[runObj * 59 + 27];
acadoWorkspace.objValueIn[42] = acadoVariables.od[runObj * 59 + 28];
acadoWorkspace.objValueIn[43] = acadoVariables.od[runObj * 59 + 29];
acadoWorkspace.objValueIn[44] = acadoVariables.od[runObj * 59 + 30];
acadoWorkspace.objValueIn[45] = acadoVariables.od[runObj * 59 + 31];
acadoWorkspace.objValueIn[46] = acadoVariables.od[runObj * 59 + 32];
acadoWorkspace.objValueIn[47] = acadoVariables.od[runObj * 59 + 33];
acadoWorkspace.objValueIn[48] = acadoVariables.od[runObj * 59 + 34];
acadoWorkspace.objValueIn[49] = acadoVariables.od[runObj * 59 + 35];
acadoWorkspace.objValueIn[50] = acadoVariables.od[runObj * 59 + 36];
acadoWorkspace.objValueIn[51] = acadoVariables.od[runObj * 59 + 37];
acadoWorkspace.objValueIn[52] = acadoVariables.od[runObj * 59 + 38];
acadoWorkspace.objValueIn[53] = acadoVariables.od[runObj * 59 + 39];
acadoWorkspace.objValueIn[54] = acadoVariables.od[runObj * 59 + 40];
acadoWorkspace.objValueIn[55] = acadoVariables.od[runObj * 59 + 41];
acadoWorkspace.objValueIn[56] = acadoVariables.od[runObj * 59 + 42];
acadoWorkspace.objValueIn[57] = acadoVariables.od[runObj * 59 + 43];
acadoWorkspace.objValueIn[58] = acadoVariables.od[runObj * 59 + 44];
acadoWorkspace.objValueIn[59] = acadoVariables.od[runObj * 59 + 45];
acadoWorkspace.objValueIn[60] = acadoVariables.od[runObj * 59 + 46];
acadoWorkspace.objValueIn[61] = acadoVariables.od[runObj * 59 + 47];
acadoWorkspace.objValueIn[62] = acadoVariables.od[runObj * 59 + 48];
acadoWorkspace.objValueIn[63] = acadoVariables.od[runObj * 59 + 49];
acadoWorkspace.objValueIn[64] = acadoVariables.od[runObj * 59 + 50];
acadoWorkspace.objValueIn[65] = acadoVariables.od[runObj * 59 + 51];
acadoWorkspace.objValueIn[66] = acadoVariables.od[runObj * 59 + 52];
acadoWorkspace.objValueIn[67] = acadoVariables.od[runObj * 59 + 53];
acadoWorkspace.objValueIn[68] = acadoVariables.od[runObj * 59 + 54];
acadoWorkspace.objValueIn[69] = acadoVariables.od[runObj * 59 + 55];
acadoWorkspace.objValueIn[70] = acadoVariables.od[runObj * 59 + 56];
acadoWorkspace.objValueIn[71] = acadoVariables.od[runObj * 59 + 57];
acadoWorkspace.objValueIn[72] = acadoVariables.od[runObj * 59 + 58];

acado_evaluateLSQ( acadoWorkspace.objValueIn, acadoWorkspace.objValueOut );
acadoWorkspace.Dy[runObj * 13] = acadoWorkspace.objValueOut[0];
acadoWorkspace.Dy[runObj * 13 + 1] = acadoWorkspace.objValueOut[1];
acadoWorkspace.Dy[runObj * 13 + 2] = acadoWorkspace.objValueOut[2];
acadoWorkspace.Dy[runObj * 13 + 3] = acadoWorkspace.objValueOut[3];
acadoWorkspace.Dy[runObj * 13 + 4] = acadoWorkspace.objValueOut[4];
acadoWorkspace.Dy[runObj * 13 + 5] = acadoWorkspace.objValueOut[5];
acadoWorkspace.Dy[runObj * 13 + 6] = acadoWorkspace.objValueOut[6];
acadoWorkspace.Dy[runObj * 13 + 7] = acadoWorkspace.objValueOut[7];
acadoWorkspace.Dy[runObj * 13 + 8] = acadoWorkspace.objValueOut[8];
acadoWorkspace.Dy[runObj * 13 + 9] = acadoWorkspace.objValueOut[9];
acadoWorkspace.Dy[runObj * 13 + 10] = acadoWorkspace.objValueOut[10];
acadoWorkspace.Dy[runObj * 13 + 11] = acadoWorkspace.objValueOut[11];
acadoWorkspace.Dy[runObj * 13 + 12] = acadoWorkspace.objValueOut[12];

}
acadoWorkspace.objValueIn[0] = acadoVariables.x[70];
acadoWorkspace.objValueIn[1] = acadoVariables.x[71];
acadoWorkspace.objValueIn[2] = acadoVariables.x[72];
acadoWorkspace.objValueIn[3] = acadoVariables.x[73];
acadoWorkspace.objValueIn[4] = acadoVariables.x[74];
acadoWorkspace.objValueIn[5] = acadoVariables.x[75];
acadoWorkspace.objValueIn[6] = acadoVariables.x[76];
acadoWorkspace.objValueIn[7] = acadoVariables.od[590];
acadoWorkspace.objValueIn[8] = acadoVariables.od[591];
acadoWorkspace.objValueIn[9] = acadoVariables.od[592];
acadoWorkspace.objValueIn[10] = acadoVariables.od[593];
acadoWorkspace.objValueIn[11] = acadoVariables.od[594];
acadoWorkspace.objValueIn[12] = acadoVariables.od[595];
acadoWorkspace.objValueIn[13] = acadoVariables.od[596];
acadoWorkspace.objValueIn[14] = acadoVariables.od[597];
acadoWorkspace.objValueIn[15] = acadoVariables.od[598];
acadoWorkspace.objValueIn[16] = acadoVariables.od[599];
acadoWorkspace.objValueIn[17] = acadoVariables.od[600];
acadoWorkspace.objValueIn[18] = acadoVariables.od[601];
acadoWorkspace.objValueIn[19] = acadoVariables.od[602];
acadoWorkspace.objValueIn[20] = acadoVariables.od[603];
acadoWorkspace.objValueIn[21] = acadoVariables.od[604];
acadoWorkspace.objValueIn[22] = acadoVariables.od[605];
acadoWorkspace.objValueIn[23] = acadoVariables.od[606];
acadoWorkspace.objValueIn[24] = acadoVariables.od[607];
acadoWorkspace.objValueIn[25] = acadoVariables.od[608];
acadoWorkspace.objValueIn[26] = acadoVariables.od[609];
acadoWorkspace.objValueIn[27] = acadoVariables.od[610];
acadoWorkspace.objValueIn[28] = acadoVariables.od[611];
acadoWorkspace.objValueIn[29] = acadoVariables.od[612];
acadoWorkspace.objValueIn[30] = acadoVariables.od[613];
acadoWorkspace.objValueIn[31] = acadoVariables.od[614];
acadoWorkspace.objValueIn[32] = acadoVariables.od[615];
acadoWorkspace.objValueIn[33] = acadoVariables.od[616];
acadoWorkspace.objValueIn[34] = acadoVariables.od[617];
acadoWorkspace.objValueIn[35] = acadoVariables.od[618];
acadoWorkspace.objValueIn[36] = acadoVariables.od[619];
acadoWorkspace.objValueIn[37] = acadoVariables.od[620];
acadoWorkspace.objValueIn[38] = acadoVariables.od[621];
acadoWorkspace.objValueIn[39] = acadoVariables.od[622];
acadoWorkspace.objValueIn[40] = acadoVariables.od[623];
acadoWorkspace.objValueIn[41] = acadoVariables.od[624];
acadoWorkspace.objValueIn[42] = acadoVariables.od[625];
acadoWorkspace.objValueIn[43] = acadoVariables.od[626];
acadoWorkspace.objValueIn[44] = acadoVariables.od[627];
acadoWorkspace.objValueIn[45] = acadoVariables.od[628];
acadoWorkspace.objValueIn[46] = acadoVariables.od[629];
acadoWorkspace.objValueIn[47] = acadoVariables.od[630];
acadoWorkspace.objValueIn[48] = acadoVariables.od[631];
acadoWorkspace.objValueIn[49] = acadoVariables.od[632];
acadoWorkspace.objValueIn[50] = acadoVariables.od[633];
acadoWorkspace.objValueIn[51] = acadoVariables.od[634];
acadoWorkspace.objValueIn[52] = acadoVariables.od[635];
acadoWorkspace.objValueIn[53] = acadoVariables.od[636];
acadoWorkspace.objValueIn[54] = acadoVariables.od[637];
acadoWorkspace.objValueIn[55] = acadoVariables.od[638];
acadoWorkspace.objValueIn[56] = acadoVariables.od[639];
acadoWorkspace.objValueIn[57] = acadoVariables.od[640];
acadoWorkspace.objValueIn[58] = acadoVariables.od[641];
acadoWorkspace.objValueIn[59] = acadoVariables.od[642];
acadoWorkspace.objValueIn[60] = acadoVariables.od[643];
acadoWorkspace.objValueIn[61] = acadoVariables.od[644];
acadoWorkspace.objValueIn[62] = acadoVariables.od[645];
acadoWorkspace.objValueIn[63] = acadoVariables.od[646];
acadoWorkspace.objValueIn[64] = acadoVariables.od[647];
acadoWorkspace.objValueIn[65] = acadoVariables.od[648];
acado_evaluateLSQEndTerm( acadoWorkspace.objValueIn, acadoWorkspace.objValueOut );

acadoWorkspace.DyN[0] = acadoWorkspace.objValueOut[0];
acadoWorkspace.DyN[1] = acadoWorkspace.objValueOut[1];
acadoWorkspace.DyN[2] = acadoWorkspace.objValueOut[2];
acadoWorkspace.DyN[3] = acadoWorkspace.objValueOut[3];
acadoWorkspace.DyN[4] = acadoWorkspace.objValueOut[4];
acadoWorkspace.DyN[5] = acadoWorkspace.objValueOut[5];

}

void acado_multGxd( real_t* const dOld, real_t* const Gx1, real_t* const dNew )
{
dNew[0] += + Gx1[0]*dOld[0] + Gx1[1]*dOld[1] + Gx1[2]*dOld[2] + Gx1[3]*dOld[3] + Gx1[4]*dOld[4] + Gx1[5]*dOld[5] + Gx1[6]*dOld[6];
dNew[1] += + Gx1[7]*dOld[0] + Gx1[8]*dOld[1] + Gx1[9]*dOld[2] + Gx1[10]*dOld[3] + Gx1[11]*dOld[4] + Gx1[12]*dOld[5] + Gx1[13]*dOld[6];
dNew[2] += + Gx1[14]*dOld[0] + Gx1[15]*dOld[1] + Gx1[16]*dOld[2] + Gx1[17]*dOld[3] + Gx1[18]*dOld[4] + Gx1[19]*dOld[5] + Gx1[20]*dOld[6];
dNew[3] += + Gx1[21]*dOld[0] + Gx1[22]*dOld[1] + Gx1[23]*dOld[2] + Gx1[24]*dOld[3] + Gx1[25]*dOld[4] + Gx1[26]*dOld[5] + Gx1[27]*dOld[6];
dNew[4] += + Gx1[28]*dOld[0] + Gx1[29]*dOld[1] + Gx1[30]*dOld[2] + Gx1[31]*dOld[3] + Gx1[32]*dOld[4] + Gx1[33]*dOld[5] + Gx1[34]*dOld[6];
dNew[5] += + Gx1[35]*dOld[0] + Gx1[36]*dOld[1] + Gx1[37]*dOld[2] + Gx1[38]*dOld[3] + Gx1[39]*dOld[4] + Gx1[40]*dOld[5] + Gx1[41]*dOld[6];
dNew[6] += + Gx1[42]*dOld[0] + Gx1[43]*dOld[1] + Gx1[44]*dOld[2] + Gx1[45]*dOld[3] + Gx1[46]*dOld[4] + Gx1[47]*dOld[5] + Gx1[48]*dOld[6];
}

void acado_moveGxT( real_t* const Gx1, real_t* const Gx2 )
{
Gx2[0] = Gx1[0];
Gx2[1] = Gx1[1];
Gx2[2] = Gx1[2];
Gx2[3] = Gx1[3];
Gx2[4] = Gx1[4];
Gx2[5] = Gx1[5];
Gx2[6] = Gx1[6];
Gx2[7] = Gx1[7];
Gx2[8] = Gx1[8];
Gx2[9] = Gx1[9];
Gx2[10] = Gx1[10];
Gx2[11] = Gx1[11];
Gx2[12] = Gx1[12];
Gx2[13] = Gx1[13];
Gx2[14] = Gx1[14];
Gx2[15] = Gx1[15];
Gx2[16] = Gx1[16];
Gx2[17] = Gx1[17];
Gx2[18] = Gx1[18];
Gx2[19] = Gx1[19];
Gx2[20] = Gx1[20];
Gx2[21] = Gx1[21];
Gx2[22] = Gx1[22];
Gx2[23] = Gx1[23];
Gx2[24] = Gx1[24];
Gx2[25] = Gx1[25];
Gx2[26] = Gx1[26];
Gx2[27] = Gx1[27];
Gx2[28] = Gx1[28];
Gx2[29] = Gx1[29];
Gx2[30] = Gx1[30];
Gx2[31] = Gx1[31];
Gx2[32] = Gx1[32];
Gx2[33] = Gx1[33];
Gx2[34] = Gx1[34];
Gx2[35] = Gx1[35];
Gx2[36] = Gx1[36];
Gx2[37] = Gx1[37];
Gx2[38] = Gx1[38];
Gx2[39] = Gx1[39];
Gx2[40] = Gx1[40];
Gx2[41] = Gx1[41];
Gx2[42] = Gx1[42];
Gx2[43] = Gx1[43];
Gx2[44] = Gx1[44];
Gx2[45] = Gx1[45];
Gx2[46] = Gx1[46];
Gx2[47] = Gx1[47];
Gx2[48] = Gx1[48];
}

void acado_multGxGx( real_t* const Gx1, real_t* const Gx2, real_t* const Gx3 )
{
Gx3[0] = + Gx1[0]*Gx2[0] + Gx1[1]*Gx2[7] + Gx1[2]*Gx2[14] + Gx1[3]*Gx2[21] + Gx1[4]*Gx2[28] + Gx1[5]*Gx2[35] + Gx1[6]*Gx2[42];
Gx3[1] = + Gx1[0]*Gx2[1] + Gx1[1]*Gx2[8] + Gx1[2]*Gx2[15] + Gx1[3]*Gx2[22] + Gx1[4]*Gx2[29] + Gx1[5]*Gx2[36] + Gx1[6]*Gx2[43];
Gx3[2] = + Gx1[0]*Gx2[2] + Gx1[1]*Gx2[9] + Gx1[2]*Gx2[16] + Gx1[3]*Gx2[23] + Gx1[4]*Gx2[30] + Gx1[5]*Gx2[37] + Gx1[6]*Gx2[44];
Gx3[3] = + Gx1[0]*Gx2[3] + Gx1[1]*Gx2[10] + Gx1[2]*Gx2[17] + Gx1[3]*Gx2[24] + Gx1[4]*Gx2[31] + Gx1[5]*Gx2[38] + Gx1[6]*Gx2[45];
Gx3[4] = + Gx1[0]*Gx2[4] + Gx1[1]*Gx2[11] + Gx1[2]*Gx2[18] + Gx1[3]*Gx2[25] + Gx1[4]*Gx2[32] + Gx1[5]*Gx2[39] + Gx1[6]*Gx2[46];
Gx3[5] = + Gx1[0]*Gx2[5] + Gx1[1]*Gx2[12] + Gx1[2]*Gx2[19] + Gx1[3]*Gx2[26] + Gx1[4]*Gx2[33] + Gx1[5]*Gx2[40] + Gx1[6]*Gx2[47];
Gx3[6] = + Gx1[0]*Gx2[6] + Gx1[1]*Gx2[13] + Gx1[2]*Gx2[20] + Gx1[3]*Gx2[27] + Gx1[4]*Gx2[34] + Gx1[5]*Gx2[41] + Gx1[6]*Gx2[48];
Gx3[7] = + Gx1[7]*Gx2[0] + Gx1[8]*Gx2[7] + Gx1[9]*Gx2[14] + Gx1[10]*Gx2[21] + Gx1[11]*Gx2[28] + Gx1[12]*Gx2[35] + Gx1[13]*Gx2[42];
Gx3[8] = + Gx1[7]*Gx2[1] + Gx1[8]*Gx2[8] + Gx1[9]*Gx2[15] + Gx1[10]*Gx2[22] + Gx1[11]*Gx2[29] + Gx1[12]*Gx2[36] + Gx1[13]*Gx2[43];
Gx3[9] = + Gx1[7]*Gx2[2] + Gx1[8]*Gx2[9] + Gx1[9]*Gx2[16] + Gx1[10]*Gx2[23] + Gx1[11]*Gx2[30] + Gx1[12]*Gx2[37] + Gx1[13]*Gx2[44];
Gx3[10] = + Gx1[7]*Gx2[3] + Gx1[8]*Gx2[10] + Gx1[9]*Gx2[17] + Gx1[10]*Gx2[24] + Gx1[11]*Gx2[31] + Gx1[12]*Gx2[38] + Gx1[13]*Gx2[45];
Gx3[11] = + Gx1[7]*Gx2[4] + Gx1[8]*Gx2[11] + Gx1[9]*Gx2[18] + Gx1[10]*Gx2[25] + Gx1[11]*Gx2[32] + Gx1[12]*Gx2[39] + Gx1[13]*Gx2[46];
Gx3[12] = + Gx1[7]*Gx2[5] + Gx1[8]*Gx2[12] + Gx1[9]*Gx2[19] + Gx1[10]*Gx2[26] + Gx1[11]*Gx2[33] + Gx1[12]*Gx2[40] + Gx1[13]*Gx2[47];
Gx3[13] = + Gx1[7]*Gx2[6] + Gx1[8]*Gx2[13] + Gx1[9]*Gx2[20] + Gx1[10]*Gx2[27] + Gx1[11]*Gx2[34] + Gx1[12]*Gx2[41] + Gx1[13]*Gx2[48];
Gx3[14] = + Gx1[14]*Gx2[0] + Gx1[15]*Gx2[7] + Gx1[16]*Gx2[14] + Gx1[17]*Gx2[21] + Gx1[18]*Gx2[28] + Gx1[19]*Gx2[35] + Gx1[20]*Gx2[42];
Gx3[15] = + Gx1[14]*Gx2[1] + Gx1[15]*Gx2[8] + Gx1[16]*Gx2[15] + Gx1[17]*Gx2[22] + Gx1[18]*Gx2[29] + Gx1[19]*Gx2[36] + Gx1[20]*Gx2[43];
Gx3[16] = + Gx1[14]*Gx2[2] + Gx1[15]*Gx2[9] + Gx1[16]*Gx2[16] + Gx1[17]*Gx2[23] + Gx1[18]*Gx2[30] + Gx1[19]*Gx2[37] + Gx1[20]*Gx2[44];
Gx3[17] = + Gx1[14]*Gx2[3] + Gx1[15]*Gx2[10] + Gx1[16]*Gx2[17] + Gx1[17]*Gx2[24] + Gx1[18]*Gx2[31] + Gx1[19]*Gx2[38] + Gx1[20]*Gx2[45];
Gx3[18] = + Gx1[14]*Gx2[4] + Gx1[15]*Gx2[11] + Gx1[16]*Gx2[18] + Gx1[17]*Gx2[25] + Gx1[18]*Gx2[32] + Gx1[19]*Gx2[39] + Gx1[20]*Gx2[46];
Gx3[19] = + Gx1[14]*Gx2[5] + Gx1[15]*Gx2[12] + Gx1[16]*Gx2[19] + Gx1[17]*Gx2[26] + Gx1[18]*Gx2[33] + Gx1[19]*Gx2[40] + Gx1[20]*Gx2[47];
Gx3[20] = + Gx1[14]*Gx2[6] + Gx1[15]*Gx2[13] + Gx1[16]*Gx2[20] + Gx1[17]*Gx2[27] + Gx1[18]*Gx2[34] + Gx1[19]*Gx2[41] + Gx1[20]*Gx2[48];
Gx3[21] = + Gx1[21]*Gx2[0] + Gx1[22]*Gx2[7] + Gx1[23]*Gx2[14] + Gx1[24]*Gx2[21] + Gx1[25]*Gx2[28] + Gx1[26]*Gx2[35] + Gx1[27]*Gx2[42];
Gx3[22] = + Gx1[21]*Gx2[1] + Gx1[22]*Gx2[8] + Gx1[23]*Gx2[15] + Gx1[24]*Gx2[22] + Gx1[25]*Gx2[29] + Gx1[26]*Gx2[36] + Gx1[27]*Gx2[43];
Gx3[23] = + Gx1[21]*Gx2[2] + Gx1[22]*Gx2[9] + Gx1[23]*Gx2[16] + Gx1[24]*Gx2[23] + Gx1[25]*Gx2[30] + Gx1[26]*Gx2[37] + Gx1[27]*Gx2[44];
Gx3[24] = + Gx1[21]*Gx2[3] + Gx1[22]*Gx2[10] + Gx1[23]*Gx2[17] + Gx1[24]*Gx2[24] + Gx1[25]*Gx2[31] + Gx1[26]*Gx2[38] + Gx1[27]*Gx2[45];
Gx3[25] = + Gx1[21]*Gx2[4] + Gx1[22]*Gx2[11] + Gx1[23]*Gx2[18] + Gx1[24]*Gx2[25] + Gx1[25]*Gx2[32] + Gx1[26]*Gx2[39] + Gx1[27]*Gx2[46];
Gx3[26] = + Gx1[21]*Gx2[5] + Gx1[22]*Gx2[12] + Gx1[23]*Gx2[19] + Gx1[24]*Gx2[26] + Gx1[25]*Gx2[33] + Gx1[26]*Gx2[40] + Gx1[27]*Gx2[47];
Gx3[27] = + Gx1[21]*Gx2[6] + Gx1[22]*Gx2[13] + Gx1[23]*Gx2[20] + Gx1[24]*Gx2[27] + Gx1[25]*Gx2[34] + Gx1[26]*Gx2[41] + Gx1[27]*Gx2[48];
Gx3[28] = + Gx1[28]*Gx2[0] + Gx1[29]*Gx2[7] + Gx1[30]*Gx2[14] + Gx1[31]*Gx2[21] + Gx1[32]*Gx2[28] + Gx1[33]*Gx2[35] + Gx1[34]*Gx2[42];
Gx3[29] = + Gx1[28]*Gx2[1] + Gx1[29]*Gx2[8] + Gx1[30]*Gx2[15] + Gx1[31]*Gx2[22] + Gx1[32]*Gx2[29] + Gx1[33]*Gx2[36] + Gx1[34]*Gx2[43];
Gx3[30] = + Gx1[28]*Gx2[2] + Gx1[29]*Gx2[9] + Gx1[30]*Gx2[16] + Gx1[31]*Gx2[23] + Gx1[32]*Gx2[30] + Gx1[33]*Gx2[37] + Gx1[34]*Gx2[44];
Gx3[31] = + Gx1[28]*Gx2[3] + Gx1[29]*Gx2[10] + Gx1[30]*Gx2[17] + Gx1[31]*Gx2[24] + Gx1[32]*Gx2[31] + Gx1[33]*Gx2[38] + Gx1[34]*Gx2[45];
Gx3[32] = + Gx1[28]*Gx2[4] + Gx1[29]*Gx2[11] + Gx1[30]*Gx2[18] + Gx1[31]*Gx2[25] + Gx1[32]*Gx2[32] + Gx1[33]*Gx2[39] + Gx1[34]*Gx2[46];
Gx3[33] = + Gx1[28]*Gx2[5] + Gx1[29]*Gx2[12] + Gx1[30]*Gx2[19] + Gx1[31]*Gx2[26] + Gx1[32]*Gx2[33] + Gx1[33]*Gx2[40] + Gx1[34]*Gx2[47];
Gx3[34] = + Gx1[28]*Gx2[6] + Gx1[29]*Gx2[13] + Gx1[30]*Gx2[20] + Gx1[31]*Gx2[27] + Gx1[32]*Gx2[34] + Gx1[33]*Gx2[41] + Gx1[34]*Gx2[48];
Gx3[35] = + Gx1[35]*Gx2[0] + Gx1[36]*Gx2[7] + Gx1[37]*Gx2[14] + Gx1[38]*Gx2[21] + Gx1[39]*Gx2[28] + Gx1[40]*Gx2[35] + Gx1[41]*Gx2[42];
Gx3[36] = + Gx1[35]*Gx2[1] + Gx1[36]*Gx2[8] + Gx1[37]*Gx2[15] + Gx1[38]*Gx2[22] + Gx1[39]*Gx2[29] + Gx1[40]*Gx2[36] + Gx1[41]*Gx2[43];
Gx3[37] = + Gx1[35]*Gx2[2] + Gx1[36]*Gx2[9] + Gx1[37]*Gx2[16] + Gx1[38]*Gx2[23] + Gx1[39]*Gx2[30] + Gx1[40]*Gx2[37] + Gx1[41]*Gx2[44];
Gx3[38] = + Gx1[35]*Gx2[3] + Gx1[36]*Gx2[10] + Gx1[37]*Gx2[17] + Gx1[38]*Gx2[24] + Gx1[39]*Gx2[31] + Gx1[40]*Gx2[38] + Gx1[41]*Gx2[45];
Gx3[39] = + Gx1[35]*Gx2[4] + Gx1[36]*Gx2[11] + Gx1[37]*Gx2[18] + Gx1[38]*Gx2[25] + Gx1[39]*Gx2[32] + Gx1[40]*Gx2[39] + Gx1[41]*Gx2[46];
Gx3[40] = + Gx1[35]*Gx2[5] + Gx1[36]*Gx2[12] + Gx1[37]*Gx2[19] + Gx1[38]*Gx2[26] + Gx1[39]*Gx2[33] + Gx1[40]*Gx2[40] + Gx1[41]*Gx2[47];
Gx3[41] = + Gx1[35]*Gx2[6] + Gx1[36]*Gx2[13] + Gx1[37]*Gx2[20] + Gx1[38]*Gx2[27] + Gx1[39]*Gx2[34] + Gx1[40]*Gx2[41] + Gx1[41]*Gx2[48];
Gx3[42] = + Gx1[42]*Gx2[0] + Gx1[43]*Gx2[7] + Gx1[44]*Gx2[14] + Gx1[45]*Gx2[21] + Gx1[46]*Gx2[28] + Gx1[47]*Gx2[35] + Gx1[48]*Gx2[42];
Gx3[43] = + Gx1[42]*Gx2[1] + Gx1[43]*Gx2[8] + Gx1[44]*Gx2[15] + Gx1[45]*Gx2[22] + Gx1[46]*Gx2[29] + Gx1[47]*Gx2[36] + Gx1[48]*Gx2[43];
Gx3[44] = + Gx1[42]*Gx2[2] + Gx1[43]*Gx2[9] + Gx1[44]*Gx2[16] + Gx1[45]*Gx2[23] + Gx1[46]*Gx2[30] + Gx1[47]*Gx2[37] + Gx1[48]*Gx2[44];
Gx3[45] = + Gx1[42]*Gx2[3] + Gx1[43]*Gx2[10] + Gx1[44]*Gx2[17] + Gx1[45]*Gx2[24] + Gx1[46]*Gx2[31] + Gx1[47]*Gx2[38] + Gx1[48]*Gx2[45];
Gx3[46] = + Gx1[42]*Gx2[4] + Gx1[43]*Gx2[11] + Gx1[44]*Gx2[18] + Gx1[45]*Gx2[25] + Gx1[46]*Gx2[32] + Gx1[47]*Gx2[39] + Gx1[48]*Gx2[46];
Gx3[47] = + Gx1[42]*Gx2[5] + Gx1[43]*Gx2[12] + Gx1[44]*Gx2[19] + Gx1[45]*Gx2[26] + Gx1[46]*Gx2[33] + Gx1[47]*Gx2[40] + Gx1[48]*Gx2[47];
Gx3[48] = + Gx1[42]*Gx2[6] + Gx1[43]*Gx2[13] + Gx1[44]*Gx2[20] + Gx1[45]*Gx2[27] + Gx1[46]*Gx2[34] + Gx1[47]*Gx2[41] + Gx1[48]*Gx2[48];
}

void acado_multGxGu( real_t* const Gx1, real_t* const Gu1, real_t* const Gu2 )
{
Gu2[0] = + Gx1[0]*Gu1[0] + Gx1[1]*Gu1[7] + Gx1[2]*Gu1[14] + Gx1[3]*Gu1[21] + Gx1[4]*Gu1[28] + Gx1[5]*Gu1[35] + Gx1[6]*Gu1[42];
Gu2[1] = + Gx1[0]*Gu1[1] + Gx1[1]*Gu1[8] + Gx1[2]*Gu1[15] + Gx1[3]*Gu1[22] + Gx1[4]*Gu1[29] + Gx1[5]*Gu1[36] + Gx1[6]*Gu1[43];
Gu2[2] = + Gx1[0]*Gu1[2] + Gx1[1]*Gu1[9] + Gx1[2]*Gu1[16] + Gx1[3]*Gu1[23] + Gx1[4]*Gu1[30] + Gx1[5]*Gu1[37] + Gx1[6]*Gu1[44];
Gu2[3] = + Gx1[0]*Gu1[3] + Gx1[1]*Gu1[10] + Gx1[2]*Gu1[17] + Gx1[3]*Gu1[24] + Gx1[4]*Gu1[31] + Gx1[5]*Gu1[38] + Gx1[6]*Gu1[45];
Gu2[4] = + Gx1[0]*Gu1[4] + Gx1[1]*Gu1[11] + Gx1[2]*Gu1[18] + Gx1[3]*Gu1[25] + Gx1[4]*Gu1[32] + Gx1[5]*Gu1[39] + Gx1[6]*Gu1[46];
Gu2[5] = + Gx1[0]*Gu1[5] + Gx1[1]*Gu1[12] + Gx1[2]*Gu1[19] + Gx1[3]*Gu1[26] + Gx1[4]*Gu1[33] + Gx1[5]*Gu1[40] + Gx1[6]*Gu1[47];
Gu2[6] = + Gx1[0]*Gu1[6] + Gx1[1]*Gu1[13] + Gx1[2]*Gu1[20] + Gx1[3]*Gu1[27] + Gx1[4]*Gu1[34] + Gx1[5]*Gu1[41] + Gx1[6]*Gu1[48];
Gu2[7] = + Gx1[7]*Gu1[0] + Gx1[8]*Gu1[7] + Gx1[9]*Gu1[14] + Gx1[10]*Gu1[21] + Gx1[11]*Gu1[28] + Gx1[12]*Gu1[35] + Gx1[13]*Gu1[42];
Gu2[8] = + Gx1[7]*Gu1[1] + Gx1[8]*Gu1[8] + Gx1[9]*Gu1[15] + Gx1[10]*Gu1[22] + Gx1[11]*Gu1[29] + Gx1[12]*Gu1[36] + Gx1[13]*Gu1[43];
Gu2[9] = + Gx1[7]*Gu1[2] + Gx1[8]*Gu1[9] + Gx1[9]*Gu1[16] + Gx1[10]*Gu1[23] + Gx1[11]*Gu1[30] + Gx1[12]*Gu1[37] + Gx1[13]*Gu1[44];
Gu2[10] = + Gx1[7]*Gu1[3] + Gx1[8]*Gu1[10] + Gx1[9]*Gu1[17] + Gx1[10]*Gu1[24] + Gx1[11]*Gu1[31] + Gx1[12]*Gu1[38] + Gx1[13]*Gu1[45];
Gu2[11] = + Gx1[7]*Gu1[4] + Gx1[8]*Gu1[11] + Gx1[9]*Gu1[18] + Gx1[10]*Gu1[25] + Gx1[11]*Gu1[32] + Gx1[12]*Gu1[39] + Gx1[13]*Gu1[46];
Gu2[12] = + Gx1[7]*Gu1[5] + Gx1[8]*Gu1[12] + Gx1[9]*Gu1[19] + Gx1[10]*Gu1[26] + Gx1[11]*Gu1[33] + Gx1[12]*Gu1[40] + Gx1[13]*Gu1[47];
Gu2[13] = + Gx1[7]*Gu1[6] + Gx1[8]*Gu1[13] + Gx1[9]*Gu1[20] + Gx1[10]*Gu1[27] + Gx1[11]*Gu1[34] + Gx1[12]*Gu1[41] + Gx1[13]*Gu1[48];
Gu2[14] = + Gx1[14]*Gu1[0] + Gx1[15]*Gu1[7] + Gx1[16]*Gu1[14] + Gx1[17]*Gu1[21] + Gx1[18]*Gu1[28] + Gx1[19]*Gu1[35] + Gx1[20]*Gu1[42];
Gu2[15] = + Gx1[14]*Gu1[1] + Gx1[15]*Gu1[8] + Gx1[16]*Gu1[15] + Gx1[17]*Gu1[22] + Gx1[18]*Gu1[29] + Gx1[19]*Gu1[36] + Gx1[20]*Gu1[43];
Gu2[16] = + Gx1[14]*Gu1[2] + Gx1[15]*Gu1[9] + Gx1[16]*Gu1[16] + Gx1[17]*Gu1[23] + Gx1[18]*Gu1[30] + Gx1[19]*Gu1[37] + Gx1[20]*Gu1[44];
Gu2[17] = + Gx1[14]*Gu1[3] + Gx1[15]*Gu1[10] + Gx1[16]*Gu1[17] + Gx1[17]*Gu1[24] + Gx1[18]*Gu1[31] + Gx1[19]*Gu1[38] + Gx1[20]*Gu1[45];
Gu2[18] = + Gx1[14]*Gu1[4] + Gx1[15]*Gu1[11] + Gx1[16]*Gu1[18] + Gx1[17]*Gu1[25] + Gx1[18]*Gu1[32] + Gx1[19]*Gu1[39] + Gx1[20]*Gu1[46];
Gu2[19] = + Gx1[14]*Gu1[5] + Gx1[15]*Gu1[12] + Gx1[16]*Gu1[19] + Gx1[17]*Gu1[26] + Gx1[18]*Gu1[33] + Gx1[19]*Gu1[40] + Gx1[20]*Gu1[47];
Gu2[20] = + Gx1[14]*Gu1[6] + Gx1[15]*Gu1[13] + Gx1[16]*Gu1[20] + Gx1[17]*Gu1[27] + Gx1[18]*Gu1[34] + Gx1[19]*Gu1[41] + Gx1[20]*Gu1[48];
Gu2[21] = + Gx1[21]*Gu1[0] + Gx1[22]*Gu1[7] + Gx1[23]*Gu1[14] + Gx1[24]*Gu1[21] + Gx1[25]*Gu1[28] + Gx1[26]*Gu1[35] + Gx1[27]*Gu1[42];
Gu2[22] = + Gx1[21]*Gu1[1] + Gx1[22]*Gu1[8] + Gx1[23]*Gu1[15] + Gx1[24]*Gu1[22] + Gx1[25]*Gu1[29] + Gx1[26]*Gu1[36] + Gx1[27]*Gu1[43];
Gu2[23] = + Gx1[21]*Gu1[2] + Gx1[22]*Gu1[9] + Gx1[23]*Gu1[16] + Gx1[24]*Gu1[23] + Gx1[25]*Gu1[30] + Gx1[26]*Gu1[37] + Gx1[27]*Gu1[44];
Gu2[24] = + Gx1[21]*Gu1[3] + Gx1[22]*Gu1[10] + Gx1[23]*Gu1[17] + Gx1[24]*Gu1[24] + Gx1[25]*Gu1[31] + Gx1[26]*Gu1[38] + Gx1[27]*Gu1[45];
Gu2[25] = + Gx1[21]*Gu1[4] + Gx1[22]*Gu1[11] + Gx1[23]*Gu1[18] + Gx1[24]*Gu1[25] + Gx1[25]*Gu1[32] + Gx1[26]*Gu1[39] + Gx1[27]*Gu1[46];
Gu2[26] = + Gx1[21]*Gu1[5] + Gx1[22]*Gu1[12] + Gx1[23]*Gu1[19] + Gx1[24]*Gu1[26] + Gx1[25]*Gu1[33] + Gx1[26]*Gu1[40] + Gx1[27]*Gu1[47];
Gu2[27] = + Gx1[21]*Gu1[6] + Gx1[22]*Gu1[13] + Gx1[23]*Gu1[20] + Gx1[24]*Gu1[27] + Gx1[25]*Gu1[34] + Gx1[26]*Gu1[41] + Gx1[27]*Gu1[48];
Gu2[28] = + Gx1[28]*Gu1[0] + Gx1[29]*Gu1[7] + Gx1[30]*Gu1[14] + Gx1[31]*Gu1[21] + Gx1[32]*Gu1[28] + Gx1[33]*Gu1[35] + Gx1[34]*Gu1[42];
Gu2[29] = + Gx1[28]*Gu1[1] + Gx1[29]*Gu1[8] + Gx1[30]*Gu1[15] + Gx1[31]*Gu1[22] + Gx1[32]*Gu1[29] + Gx1[33]*Gu1[36] + Gx1[34]*Gu1[43];
Gu2[30] = + Gx1[28]*Gu1[2] + Gx1[29]*Gu1[9] + Gx1[30]*Gu1[16] + Gx1[31]*Gu1[23] + Gx1[32]*Gu1[30] + Gx1[33]*Gu1[37] + Gx1[34]*Gu1[44];
Gu2[31] = + Gx1[28]*Gu1[3] + Gx1[29]*Gu1[10] + Gx1[30]*Gu1[17] + Gx1[31]*Gu1[24] + Gx1[32]*Gu1[31] + Gx1[33]*Gu1[38] + Gx1[34]*Gu1[45];
Gu2[32] = + Gx1[28]*Gu1[4] + Gx1[29]*Gu1[11] + Gx1[30]*Gu1[18] + Gx1[31]*Gu1[25] + Gx1[32]*Gu1[32] + Gx1[33]*Gu1[39] + Gx1[34]*Gu1[46];
Gu2[33] = + Gx1[28]*Gu1[5] + Gx1[29]*Gu1[12] + Gx1[30]*Gu1[19] + Gx1[31]*Gu1[26] + Gx1[32]*Gu1[33] + Gx1[33]*Gu1[40] + Gx1[34]*Gu1[47];
Gu2[34] = + Gx1[28]*Gu1[6] + Gx1[29]*Gu1[13] + Gx1[30]*Gu1[20] + Gx1[31]*Gu1[27] + Gx1[32]*Gu1[34] + Gx1[33]*Gu1[41] + Gx1[34]*Gu1[48];
Gu2[35] = + Gx1[35]*Gu1[0] + Gx1[36]*Gu1[7] + Gx1[37]*Gu1[14] + Gx1[38]*Gu1[21] + Gx1[39]*Gu1[28] + Gx1[40]*Gu1[35] + Gx1[41]*Gu1[42];
Gu2[36] = + Gx1[35]*Gu1[1] + Gx1[36]*Gu1[8] + Gx1[37]*Gu1[15] + Gx1[38]*Gu1[22] + Gx1[39]*Gu1[29] + Gx1[40]*Gu1[36] + Gx1[41]*Gu1[43];
Gu2[37] = + Gx1[35]*Gu1[2] + Gx1[36]*Gu1[9] + Gx1[37]*Gu1[16] + Gx1[38]*Gu1[23] + Gx1[39]*Gu1[30] + Gx1[40]*Gu1[37] + Gx1[41]*Gu1[44];
Gu2[38] = + Gx1[35]*Gu1[3] + Gx1[36]*Gu1[10] + Gx1[37]*Gu1[17] + Gx1[38]*Gu1[24] + Gx1[39]*Gu1[31] + Gx1[40]*Gu1[38] + Gx1[41]*Gu1[45];
Gu2[39] = + Gx1[35]*Gu1[4] + Gx1[36]*Gu1[11] + Gx1[37]*Gu1[18] + Gx1[38]*Gu1[25] + Gx1[39]*Gu1[32] + Gx1[40]*Gu1[39] + Gx1[41]*Gu1[46];
Gu2[40] = + Gx1[35]*Gu1[5] + Gx1[36]*Gu1[12] + Gx1[37]*Gu1[19] + Gx1[38]*Gu1[26] + Gx1[39]*Gu1[33] + Gx1[40]*Gu1[40] + Gx1[41]*Gu1[47];
Gu2[41] = + Gx1[35]*Gu1[6] + Gx1[36]*Gu1[13] + Gx1[37]*Gu1[20] + Gx1[38]*Gu1[27] + Gx1[39]*Gu1[34] + Gx1[40]*Gu1[41] + Gx1[41]*Gu1[48];
Gu2[42] = + Gx1[42]*Gu1[0] + Gx1[43]*Gu1[7] + Gx1[44]*Gu1[14] + Gx1[45]*Gu1[21] + Gx1[46]*Gu1[28] + Gx1[47]*Gu1[35] + Gx1[48]*Gu1[42];
Gu2[43] = + Gx1[42]*Gu1[1] + Gx1[43]*Gu1[8] + Gx1[44]*Gu1[15] + Gx1[45]*Gu1[22] + Gx1[46]*Gu1[29] + Gx1[47]*Gu1[36] + Gx1[48]*Gu1[43];
Gu2[44] = + Gx1[42]*Gu1[2] + Gx1[43]*Gu1[9] + Gx1[44]*Gu1[16] + Gx1[45]*Gu1[23] + Gx1[46]*Gu1[30] + Gx1[47]*Gu1[37] + Gx1[48]*Gu1[44];
Gu2[45] = + Gx1[42]*Gu1[3] + Gx1[43]*Gu1[10] + Gx1[44]*Gu1[17] + Gx1[45]*Gu1[24] + Gx1[46]*Gu1[31] + Gx1[47]*Gu1[38] + Gx1[48]*Gu1[45];
Gu2[46] = + Gx1[42]*Gu1[4] + Gx1[43]*Gu1[11] + Gx1[44]*Gu1[18] + Gx1[45]*Gu1[25] + Gx1[46]*Gu1[32] + Gx1[47]*Gu1[39] + Gx1[48]*Gu1[46];
Gu2[47] = + Gx1[42]*Gu1[5] + Gx1[43]*Gu1[12] + Gx1[44]*Gu1[19] + Gx1[45]*Gu1[26] + Gx1[46]*Gu1[33] + Gx1[47]*Gu1[40] + Gx1[48]*Gu1[47];
Gu2[48] = + Gx1[42]*Gu1[6] + Gx1[43]*Gu1[13] + Gx1[44]*Gu1[20] + Gx1[45]*Gu1[27] + Gx1[46]*Gu1[34] + Gx1[47]*Gu1[41] + Gx1[48]*Gu1[48];
}

void acado_moveGuE( real_t* const Gu1, real_t* const Gu2 )
{
Gu2[0] = Gu1[0];
Gu2[1] = Gu1[1];
Gu2[2] = Gu1[2];
Gu2[3] = Gu1[3];
Gu2[4] = Gu1[4];
Gu2[5] = Gu1[5];
Gu2[6] = Gu1[6];
Gu2[7] = Gu1[7];
Gu2[8] = Gu1[8];
Gu2[9] = Gu1[9];
Gu2[10] = Gu1[10];
Gu2[11] = Gu1[11];
Gu2[12] = Gu1[12];
Gu2[13] = Gu1[13];
Gu2[14] = Gu1[14];
Gu2[15] = Gu1[15];
Gu2[16] = Gu1[16];
Gu2[17] = Gu1[17];
Gu2[18] = Gu1[18];
Gu2[19] = Gu1[19];
Gu2[20] = Gu1[20];
Gu2[21] = Gu1[21];
Gu2[22] = Gu1[22];
Gu2[23] = Gu1[23];
Gu2[24] = Gu1[24];
Gu2[25] = Gu1[25];
Gu2[26] = Gu1[26];
Gu2[27] = Gu1[27];
Gu2[28] = Gu1[28];
Gu2[29] = Gu1[29];
Gu2[30] = Gu1[30];
Gu2[31] = Gu1[31];
Gu2[32] = Gu1[32];
Gu2[33] = Gu1[33];
Gu2[34] = Gu1[34];
Gu2[35] = Gu1[35];
Gu2[36] = Gu1[36];
Gu2[37] = Gu1[37];
Gu2[38] = Gu1[38];
Gu2[39] = Gu1[39];
Gu2[40] = Gu1[40];
Gu2[41] = Gu1[41];
Gu2[42] = Gu1[42];
Gu2[43] = Gu1[43];
Gu2[44] = Gu1[44];
Gu2[45] = Gu1[45];
Gu2[46] = Gu1[46];
Gu2[47] = Gu1[47];
Gu2[48] = Gu1[48];
}

void acado_setBlockH11( int iRow, int iCol, real_t* const Gu1, real_t* const Gu2 )
{
acadoWorkspace.H[(iRow * 490) + (iCol * 7)] += + Gu1[0]*Gu2[0] + Gu1[7]*Gu2[7] + Gu1[14]*Gu2[14] + Gu1[21]*Gu2[21] + Gu1[28]*Gu2[28] + Gu1[35]*Gu2[35] + Gu1[42]*Gu2[42];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 1)] += + Gu1[0]*Gu2[1] + Gu1[7]*Gu2[8] + Gu1[14]*Gu2[15] + Gu1[21]*Gu2[22] + Gu1[28]*Gu2[29] + Gu1[35]*Gu2[36] + Gu1[42]*Gu2[43];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 2)] += + Gu1[0]*Gu2[2] + Gu1[7]*Gu2[9] + Gu1[14]*Gu2[16] + Gu1[21]*Gu2[23] + Gu1[28]*Gu2[30] + Gu1[35]*Gu2[37] + Gu1[42]*Gu2[44];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 3)] += + Gu1[0]*Gu2[3] + Gu1[7]*Gu2[10] + Gu1[14]*Gu2[17] + Gu1[21]*Gu2[24] + Gu1[28]*Gu2[31] + Gu1[35]*Gu2[38] + Gu1[42]*Gu2[45];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 4)] += + Gu1[0]*Gu2[4] + Gu1[7]*Gu2[11] + Gu1[14]*Gu2[18] + Gu1[21]*Gu2[25] + Gu1[28]*Gu2[32] + Gu1[35]*Gu2[39] + Gu1[42]*Gu2[46];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 5)] += + Gu1[0]*Gu2[5] + Gu1[7]*Gu2[12] + Gu1[14]*Gu2[19] + Gu1[21]*Gu2[26] + Gu1[28]*Gu2[33] + Gu1[35]*Gu2[40] + Gu1[42]*Gu2[47];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 6)] += + Gu1[0]*Gu2[6] + Gu1[7]*Gu2[13] + Gu1[14]*Gu2[20] + Gu1[21]*Gu2[27] + Gu1[28]*Gu2[34] + Gu1[35]*Gu2[41] + Gu1[42]*Gu2[48];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7)] += + Gu1[1]*Gu2[0] + Gu1[8]*Gu2[7] + Gu1[15]*Gu2[14] + Gu1[22]*Gu2[21] + Gu1[29]*Gu2[28] + Gu1[36]*Gu2[35] + Gu1[43]*Gu2[42];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 1)] += + Gu1[1]*Gu2[1] + Gu1[8]*Gu2[8] + Gu1[15]*Gu2[15] + Gu1[22]*Gu2[22] + Gu1[29]*Gu2[29] + Gu1[36]*Gu2[36] + Gu1[43]*Gu2[43];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 2)] += + Gu1[1]*Gu2[2] + Gu1[8]*Gu2[9] + Gu1[15]*Gu2[16] + Gu1[22]*Gu2[23] + Gu1[29]*Gu2[30] + Gu1[36]*Gu2[37] + Gu1[43]*Gu2[44];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 3)] += + Gu1[1]*Gu2[3] + Gu1[8]*Gu2[10] + Gu1[15]*Gu2[17] + Gu1[22]*Gu2[24] + Gu1[29]*Gu2[31] + Gu1[36]*Gu2[38] + Gu1[43]*Gu2[45];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 4)] += + Gu1[1]*Gu2[4] + Gu1[8]*Gu2[11] + Gu1[15]*Gu2[18] + Gu1[22]*Gu2[25] + Gu1[29]*Gu2[32] + Gu1[36]*Gu2[39] + Gu1[43]*Gu2[46];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 5)] += + Gu1[1]*Gu2[5] + Gu1[8]*Gu2[12] + Gu1[15]*Gu2[19] + Gu1[22]*Gu2[26] + Gu1[29]*Gu2[33] + Gu1[36]*Gu2[40] + Gu1[43]*Gu2[47];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 6)] += + Gu1[1]*Gu2[6] + Gu1[8]*Gu2[13] + Gu1[15]*Gu2[20] + Gu1[22]*Gu2[27] + Gu1[29]*Gu2[34] + Gu1[36]*Gu2[41] + Gu1[43]*Gu2[48];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7)] += + Gu1[2]*Gu2[0] + Gu1[9]*Gu2[7] + Gu1[16]*Gu2[14] + Gu1[23]*Gu2[21] + Gu1[30]*Gu2[28] + Gu1[37]*Gu2[35] + Gu1[44]*Gu2[42];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 1)] += + Gu1[2]*Gu2[1] + Gu1[9]*Gu2[8] + Gu1[16]*Gu2[15] + Gu1[23]*Gu2[22] + Gu1[30]*Gu2[29] + Gu1[37]*Gu2[36] + Gu1[44]*Gu2[43];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 2)] += + Gu1[2]*Gu2[2] + Gu1[9]*Gu2[9] + Gu1[16]*Gu2[16] + Gu1[23]*Gu2[23] + Gu1[30]*Gu2[30] + Gu1[37]*Gu2[37] + Gu1[44]*Gu2[44];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 3)] += + Gu1[2]*Gu2[3] + Gu1[9]*Gu2[10] + Gu1[16]*Gu2[17] + Gu1[23]*Gu2[24] + Gu1[30]*Gu2[31] + Gu1[37]*Gu2[38] + Gu1[44]*Gu2[45];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 4)] += + Gu1[2]*Gu2[4] + Gu1[9]*Gu2[11] + Gu1[16]*Gu2[18] + Gu1[23]*Gu2[25] + Gu1[30]*Gu2[32] + Gu1[37]*Gu2[39] + Gu1[44]*Gu2[46];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 5)] += + Gu1[2]*Gu2[5] + Gu1[9]*Gu2[12] + Gu1[16]*Gu2[19] + Gu1[23]*Gu2[26] + Gu1[30]*Gu2[33] + Gu1[37]*Gu2[40] + Gu1[44]*Gu2[47];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 6)] += + Gu1[2]*Gu2[6] + Gu1[9]*Gu2[13] + Gu1[16]*Gu2[20] + Gu1[23]*Gu2[27] + Gu1[30]*Gu2[34] + Gu1[37]*Gu2[41] + Gu1[44]*Gu2[48];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7)] += + Gu1[3]*Gu2[0] + Gu1[10]*Gu2[7] + Gu1[17]*Gu2[14] + Gu1[24]*Gu2[21] + Gu1[31]*Gu2[28] + Gu1[38]*Gu2[35] + Gu1[45]*Gu2[42];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 1)] += + Gu1[3]*Gu2[1] + Gu1[10]*Gu2[8] + Gu1[17]*Gu2[15] + Gu1[24]*Gu2[22] + Gu1[31]*Gu2[29] + Gu1[38]*Gu2[36] + Gu1[45]*Gu2[43];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 2)] += + Gu1[3]*Gu2[2] + Gu1[10]*Gu2[9] + Gu1[17]*Gu2[16] + Gu1[24]*Gu2[23] + Gu1[31]*Gu2[30] + Gu1[38]*Gu2[37] + Gu1[45]*Gu2[44];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 3)] += + Gu1[3]*Gu2[3] + Gu1[10]*Gu2[10] + Gu1[17]*Gu2[17] + Gu1[24]*Gu2[24] + Gu1[31]*Gu2[31] + Gu1[38]*Gu2[38] + Gu1[45]*Gu2[45];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 4)] += + Gu1[3]*Gu2[4] + Gu1[10]*Gu2[11] + Gu1[17]*Gu2[18] + Gu1[24]*Gu2[25] + Gu1[31]*Gu2[32] + Gu1[38]*Gu2[39] + Gu1[45]*Gu2[46];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 5)] += + Gu1[3]*Gu2[5] + Gu1[10]*Gu2[12] + Gu1[17]*Gu2[19] + Gu1[24]*Gu2[26] + Gu1[31]*Gu2[33] + Gu1[38]*Gu2[40] + Gu1[45]*Gu2[47];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 6)] += + Gu1[3]*Gu2[6] + Gu1[10]*Gu2[13] + Gu1[17]*Gu2[20] + Gu1[24]*Gu2[27] + Gu1[31]*Gu2[34] + Gu1[38]*Gu2[41] + Gu1[45]*Gu2[48];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7)] += + Gu1[4]*Gu2[0] + Gu1[11]*Gu2[7] + Gu1[18]*Gu2[14] + Gu1[25]*Gu2[21] + Gu1[32]*Gu2[28] + Gu1[39]*Gu2[35] + Gu1[46]*Gu2[42];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 1)] += + Gu1[4]*Gu2[1] + Gu1[11]*Gu2[8] + Gu1[18]*Gu2[15] + Gu1[25]*Gu2[22] + Gu1[32]*Gu2[29] + Gu1[39]*Gu2[36] + Gu1[46]*Gu2[43];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 2)] += + Gu1[4]*Gu2[2] + Gu1[11]*Gu2[9] + Gu1[18]*Gu2[16] + Gu1[25]*Gu2[23] + Gu1[32]*Gu2[30] + Gu1[39]*Gu2[37] + Gu1[46]*Gu2[44];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 3)] += + Gu1[4]*Gu2[3] + Gu1[11]*Gu2[10] + Gu1[18]*Gu2[17] + Gu1[25]*Gu2[24] + Gu1[32]*Gu2[31] + Gu1[39]*Gu2[38] + Gu1[46]*Gu2[45];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 4)] += + Gu1[4]*Gu2[4] + Gu1[11]*Gu2[11] + Gu1[18]*Gu2[18] + Gu1[25]*Gu2[25] + Gu1[32]*Gu2[32] + Gu1[39]*Gu2[39] + Gu1[46]*Gu2[46];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 5)] += + Gu1[4]*Gu2[5] + Gu1[11]*Gu2[12] + Gu1[18]*Gu2[19] + Gu1[25]*Gu2[26] + Gu1[32]*Gu2[33] + Gu1[39]*Gu2[40] + Gu1[46]*Gu2[47];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 6)] += + Gu1[4]*Gu2[6] + Gu1[11]*Gu2[13] + Gu1[18]*Gu2[20] + Gu1[25]*Gu2[27] + Gu1[32]*Gu2[34] + Gu1[39]*Gu2[41] + Gu1[46]*Gu2[48];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7)] += + Gu1[5]*Gu2[0] + Gu1[12]*Gu2[7] + Gu1[19]*Gu2[14] + Gu1[26]*Gu2[21] + Gu1[33]*Gu2[28] + Gu1[40]*Gu2[35] + Gu1[47]*Gu2[42];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 1)] += + Gu1[5]*Gu2[1] + Gu1[12]*Gu2[8] + Gu1[19]*Gu2[15] + Gu1[26]*Gu2[22] + Gu1[33]*Gu2[29] + Gu1[40]*Gu2[36] + Gu1[47]*Gu2[43];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 2)] += + Gu1[5]*Gu2[2] + Gu1[12]*Gu2[9] + Gu1[19]*Gu2[16] + Gu1[26]*Gu2[23] + Gu1[33]*Gu2[30] + Gu1[40]*Gu2[37] + Gu1[47]*Gu2[44];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 3)] += + Gu1[5]*Gu2[3] + Gu1[12]*Gu2[10] + Gu1[19]*Gu2[17] + Gu1[26]*Gu2[24] + Gu1[33]*Gu2[31] + Gu1[40]*Gu2[38] + Gu1[47]*Gu2[45];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 4)] += + Gu1[5]*Gu2[4] + Gu1[12]*Gu2[11] + Gu1[19]*Gu2[18] + Gu1[26]*Gu2[25] + Gu1[33]*Gu2[32] + Gu1[40]*Gu2[39] + Gu1[47]*Gu2[46];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 5)] += + Gu1[5]*Gu2[5] + Gu1[12]*Gu2[12] + Gu1[19]*Gu2[19] + Gu1[26]*Gu2[26] + Gu1[33]*Gu2[33] + Gu1[40]*Gu2[40] + Gu1[47]*Gu2[47];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 6)] += + Gu1[5]*Gu2[6] + Gu1[12]*Gu2[13] + Gu1[19]*Gu2[20] + Gu1[26]*Gu2[27] + Gu1[33]*Gu2[34] + Gu1[40]*Gu2[41] + Gu1[47]*Gu2[48];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7)] += + Gu1[6]*Gu2[0] + Gu1[13]*Gu2[7] + Gu1[20]*Gu2[14] + Gu1[27]*Gu2[21] + Gu1[34]*Gu2[28] + Gu1[41]*Gu2[35] + Gu1[48]*Gu2[42];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 1)] += + Gu1[6]*Gu2[1] + Gu1[13]*Gu2[8] + Gu1[20]*Gu2[15] + Gu1[27]*Gu2[22] + Gu1[34]*Gu2[29] + Gu1[41]*Gu2[36] + Gu1[48]*Gu2[43];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 2)] += + Gu1[6]*Gu2[2] + Gu1[13]*Gu2[9] + Gu1[20]*Gu2[16] + Gu1[27]*Gu2[23] + Gu1[34]*Gu2[30] + Gu1[41]*Gu2[37] + Gu1[48]*Gu2[44];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 3)] += + Gu1[6]*Gu2[3] + Gu1[13]*Gu2[10] + Gu1[20]*Gu2[17] + Gu1[27]*Gu2[24] + Gu1[34]*Gu2[31] + Gu1[41]*Gu2[38] + Gu1[48]*Gu2[45];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 4)] += + Gu1[6]*Gu2[4] + Gu1[13]*Gu2[11] + Gu1[20]*Gu2[18] + Gu1[27]*Gu2[25] + Gu1[34]*Gu2[32] + Gu1[41]*Gu2[39] + Gu1[48]*Gu2[46];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 5)] += + Gu1[6]*Gu2[5] + Gu1[13]*Gu2[12] + Gu1[20]*Gu2[19] + Gu1[27]*Gu2[26] + Gu1[34]*Gu2[33] + Gu1[41]*Gu2[40] + Gu1[48]*Gu2[47];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 6)] += + Gu1[6]*Gu2[6] + Gu1[13]*Gu2[13] + Gu1[20]*Gu2[20] + Gu1[27]*Gu2[27] + Gu1[34]*Gu2[34] + Gu1[41]*Gu2[41] + Gu1[48]*Gu2[48];
}

void acado_setBlockH11_R1( int iRow, int iCol )
{
acadoWorkspace.H[(iRow * 490) + (iCol * 7)] = (real_t)1.0000000000000000e+00 + (real_t)1.0000000000000001e-05;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 1)] = 0.0;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 2)] = 0.0;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 3)] = 0.0;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 4)] = 0.0;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 5)] = 0.0;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 6)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 1)] = (real_t)1.0000000000000000e+00 + (real_t)1.0000000000000001e-05;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 2)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 3)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 4)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 5)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 6)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 1)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 2)] = (real_t)1.0000000000000000e+00 + (real_t)1.0000000000000001e-05;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 3)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 4)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 5)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 6)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 1)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 2)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 3)] = (real_t)1.0000000000000000e+00 + (real_t)1.0000000000000001e-05;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 4)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 5)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 6)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 1)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 2)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 3)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 4)] = (real_t)1.0000000000000000e+00 + (real_t)1.0000000000000001e-05;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 5)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 6)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 1)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 2)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 3)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 4)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 5)] = (real_t)1.0000000000000000e+00 + (real_t)1.0000000000000001e-05;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 6)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 1)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 2)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 3)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 4)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 5)] = 0.0;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 6)] = (real_t)5.0000000000000000e+02 + (real_t)1.0000000000000001e-05;
}

void acado_zeroBlockH11( int iRow, int iCol )
{
acadoWorkspace.H[(iRow * 490) + (iCol * 7)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 1)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 2)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 3)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 4)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 5)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 6)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 1)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 2)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 3)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 4)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 5)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 6)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 1)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 2)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 3)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 4)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 5)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 6)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 1)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 2)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 3)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 4)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 5)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 6)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 1)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 2)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 3)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 4)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 5)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 6)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 1)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 2)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 3)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 4)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 5)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 6)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 1)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 2)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 3)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 4)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 5)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 6)] = 0.0000000000000000e+00;
}

void acado_copyHTH( int iRow, int iCol )
{
acadoWorkspace.H[(iRow * 490) + (iCol * 7)] = acadoWorkspace.H[(iCol * 490) + (iRow * 7)];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 1)] = acadoWorkspace.H[(iCol * 490 + 70) + (iRow * 7)];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 2)] = acadoWorkspace.H[(iCol * 490 + 140) + (iRow * 7)];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 3)] = acadoWorkspace.H[(iCol * 490 + 210) + (iRow * 7)];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 4)] = acadoWorkspace.H[(iCol * 490 + 280) + (iRow * 7)];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 5)] = acadoWorkspace.H[(iCol * 490 + 350) + (iRow * 7)];
acadoWorkspace.H[(iRow * 490) + (iCol * 7 + 6)] = acadoWorkspace.H[(iCol * 490 + 420) + (iRow * 7)];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7)] = acadoWorkspace.H[(iCol * 490) + (iRow * 7 + 1)];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 1)] = acadoWorkspace.H[(iCol * 490 + 70) + (iRow * 7 + 1)];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 2)] = acadoWorkspace.H[(iCol * 490 + 140) + (iRow * 7 + 1)];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 3)] = acadoWorkspace.H[(iCol * 490 + 210) + (iRow * 7 + 1)];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 4)] = acadoWorkspace.H[(iCol * 490 + 280) + (iRow * 7 + 1)];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 5)] = acadoWorkspace.H[(iCol * 490 + 350) + (iRow * 7 + 1)];
acadoWorkspace.H[(iRow * 490 + 70) + (iCol * 7 + 6)] = acadoWorkspace.H[(iCol * 490 + 420) + (iRow * 7 + 1)];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7)] = acadoWorkspace.H[(iCol * 490) + (iRow * 7 + 2)];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 1)] = acadoWorkspace.H[(iCol * 490 + 70) + (iRow * 7 + 2)];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 2)] = acadoWorkspace.H[(iCol * 490 + 140) + (iRow * 7 + 2)];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 3)] = acadoWorkspace.H[(iCol * 490 + 210) + (iRow * 7 + 2)];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 4)] = acadoWorkspace.H[(iCol * 490 + 280) + (iRow * 7 + 2)];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 5)] = acadoWorkspace.H[(iCol * 490 + 350) + (iRow * 7 + 2)];
acadoWorkspace.H[(iRow * 490 + 140) + (iCol * 7 + 6)] = acadoWorkspace.H[(iCol * 490 + 420) + (iRow * 7 + 2)];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7)] = acadoWorkspace.H[(iCol * 490) + (iRow * 7 + 3)];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 1)] = acadoWorkspace.H[(iCol * 490 + 70) + (iRow * 7 + 3)];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 2)] = acadoWorkspace.H[(iCol * 490 + 140) + (iRow * 7 + 3)];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 3)] = acadoWorkspace.H[(iCol * 490 + 210) + (iRow * 7 + 3)];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 4)] = acadoWorkspace.H[(iCol * 490 + 280) + (iRow * 7 + 3)];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 5)] = acadoWorkspace.H[(iCol * 490 + 350) + (iRow * 7 + 3)];
acadoWorkspace.H[(iRow * 490 + 210) + (iCol * 7 + 6)] = acadoWorkspace.H[(iCol * 490 + 420) + (iRow * 7 + 3)];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7)] = acadoWorkspace.H[(iCol * 490) + (iRow * 7 + 4)];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 1)] = acadoWorkspace.H[(iCol * 490 + 70) + (iRow * 7 + 4)];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 2)] = acadoWorkspace.H[(iCol * 490 + 140) + (iRow * 7 + 4)];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 3)] = acadoWorkspace.H[(iCol * 490 + 210) + (iRow * 7 + 4)];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 4)] = acadoWorkspace.H[(iCol * 490 + 280) + (iRow * 7 + 4)];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 5)] = acadoWorkspace.H[(iCol * 490 + 350) + (iRow * 7 + 4)];
acadoWorkspace.H[(iRow * 490 + 280) + (iCol * 7 + 6)] = acadoWorkspace.H[(iCol * 490 + 420) + (iRow * 7 + 4)];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7)] = acadoWorkspace.H[(iCol * 490) + (iRow * 7 + 5)];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 1)] = acadoWorkspace.H[(iCol * 490 + 70) + (iRow * 7 + 5)];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 2)] = acadoWorkspace.H[(iCol * 490 + 140) + (iRow * 7 + 5)];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 3)] = acadoWorkspace.H[(iCol * 490 + 210) + (iRow * 7 + 5)];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 4)] = acadoWorkspace.H[(iCol * 490 + 280) + (iRow * 7 + 5)];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 5)] = acadoWorkspace.H[(iCol * 490 + 350) + (iRow * 7 + 5)];
acadoWorkspace.H[(iRow * 490 + 350) + (iCol * 7 + 6)] = acadoWorkspace.H[(iCol * 490 + 420) + (iRow * 7 + 5)];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7)] = acadoWorkspace.H[(iCol * 490) + (iRow * 7 + 6)];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 1)] = acadoWorkspace.H[(iCol * 490 + 70) + (iRow * 7 + 6)];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 2)] = acadoWorkspace.H[(iCol * 490 + 140) + (iRow * 7 + 6)];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 3)] = acadoWorkspace.H[(iCol * 490 + 210) + (iRow * 7 + 6)];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 4)] = acadoWorkspace.H[(iCol * 490 + 280) + (iRow * 7 + 6)];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 5)] = acadoWorkspace.H[(iCol * 490 + 350) + (iRow * 7 + 6)];
acadoWorkspace.H[(iRow * 490 + 420) + (iCol * 7 + 6)] = acadoWorkspace.H[(iCol * 490 + 420) + (iRow * 7 + 6)];
}

void acado_multQ1d( real_t* const dOld, real_t* const dNew )
{
dNew[0] = + (real_t)2.0000000000000000e+01*dOld[0];
dNew[1] = + (real_t)2.0000000000000000e+01*dOld[1];
dNew[2] = + (real_t)1.5000000000000000e+01*dOld[2];
dNew[3] = + (real_t)1.5000000000000000e+01*dOld[3];
dNew[4] = + (real_t)1.0000000000000000e+01*dOld[4];
dNew[5] = + (real_t)1.0000000000000000e+01*dOld[5];
dNew[6] = 0.0;
;
}

void acado_multQN1d( real_t* const dOld, real_t* const dNew )
{
dNew[0] = +dOld[0];
dNew[1] = +dOld[1];
dNew[2] = +dOld[2];
dNew[3] = +dOld[3];
dNew[4] = +dOld[4];
dNew[5] = +dOld[5];
dNew[6] = 0.0;
;
}

void acado_multRDy( real_t* const Dy1, real_t* const RDy1 )
{
RDy1[0] = +Dy1[6];
RDy1[1] = +Dy1[7];
RDy1[2] = +Dy1[8];
RDy1[3] = +Dy1[9];
RDy1[4] = +Dy1[10];
RDy1[5] = +Dy1[11];
RDy1[6] = + (real_t)5.0000000000000000e+02*Dy1[12];
}

void acado_multQDy( real_t* const Dy1, real_t* const QDy1 )
{
QDy1[0] = + (real_t)2.0000000000000000e+01*Dy1[0];
QDy1[1] = + (real_t)2.0000000000000000e+01*Dy1[1];
QDy1[2] = + (real_t)1.5000000000000000e+01*Dy1[2];
QDy1[3] = + (real_t)1.5000000000000000e+01*Dy1[3];
QDy1[4] = + (real_t)1.0000000000000000e+01*Dy1[4];
QDy1[5] = + (real_t)1.0000000000000000e+01*Dy1[5];
QDy1[6] = 0.0;
;
}

void acado_multEQDy( real_t* const E1, real_t* const QDy1, real_t* const U1 )
{
U1[0] += + E1[0]*QDy1[0] + E1[7]*QDy1[1] + E1[14]*QDy1[2] + E1[21]*QDy1[3] + E1[28]*QDy1[4] + E1[35]*QDy1[5] + E1[42]*QDy1[6];
U1[1] += + E1[1]*QDy1[0] + E1[8]*QDy1[1] + E1[15]*QDy1[2] + E1[22]*QDy1[3] + E1[29]*QDy1[4] + E1[36]*QDy1[5] + E1[43]*QDy1[6];
U1[2] += + E1[2]*QDy1[0] + E1[9]*QDy1[1] + E1[16]*QDy1[2] + E1[23]*QDy1[3] + E1[30]*QDy1[4] + E1[37]*QDy1[5] + E1[44]*QDy1[6];
U1[3] += + E1[3]*QDy1[0] + E1[10]*QDy1[1] + E1[17]*QDy1[2] + E1[24]*QDy1[3] + E1[31]*QDy1[4] + E1[38]*QDy1[5] + E1[45]*QDy1[6];
U1[4] += + E1[4]*QDy1[0] + E1[11]*QDy1[1] + E1[18]*QDy1[2] + E1[25]*QDy1[3] + E1[32]*QDy1[4] + E1[39]*QDy1[5] + E1[46]*QDy1[6];
U1[5] += + E1[5]*QDy1[0] + E1[12]*QDy1[1] + E1[19]*QDy1[2] + E1[26]*QDy1[3] + E1[33]*QDy1[4] + E1[40]*QDy1[5] + E1[47]*QDy1[6];
U1[6] += + E1[6]*QDy1[0] + E1[13]*QDy1[1] + E1[20]*QDy1[2] + E1[27]*QDy1[3] + E1[34]*QDy1[4] + E1[41]*QDy1[5] + E1[48]*QDy1[6];
}

void acado_multQETGx( real_t* const E1, real_t* const Gx1, real_t* const H101 )
{
H101[0] += + E1[0]*Gx1[0] + E1[7]*Gx1[7] + E1[14]*Gx1[14] + E1[21]*Gx1[21] + E1[28]*Gx1[28] + E1[35]*Gx1[35] + E1[42]*Gx1[42];
H101[1] += + E1[0]*Gx1[1] + E1[7]*Gx1[8] + E1[14]*Gx1[15] + E1[21]*Gx1[22] + E1[28]*Gx1[29] + E1[35]*Gx1[36] + E1[42]*Gx1[43];
H101[2] += + E1[0]*Gx1[2] + E1[7]*Gx1[9] + E1[14]*Gx1[16] + E1[21]*Gx1[23] + E1[28]*Gx1[30] + E1[35]*Gx1[37] + E1[42]*Gx1[44];
H101[3] += + E1[0]*Gx1[3] + E1[7]*Gx1[10] + E1[14]*Gx1[17] + E1[21]*Gx1[24] + E1[28]*Gx1[31] + E1[35]*Gx1[38] + E1[42]*Gx1[45];
H101[4] += + E1[0]*Gx1[4] + E1[7]*Gx1[11] + E1[14]*Gx1[18] + E1[21]*Gx1[25] + E1[28]*Gx1[32] + E1[35]*Gx1[39] + E1[42]*Gx1[46];
H101[5] += + E1[0]*Gx1[5] + E1[7]*Gx1[12] + E1[14]*Gx1[19] + E1[21]*Gx1[26] + E1[28]*Gx1[33] + E1[35]*Gx1[40] + E1[42]*Gx1[47];
H101[6] += + E1[0]*Gx1[6] + E1[7]*Gx1[13] + E1[14]*Gx1[20] + E1[21]*Gx1[27] + E1[28]*Gx1[34] + E1[35]*Gx1[41] + E1[42]*Gx1[48];
H101[7] += + E1[1]*Gx1[0] + E1[8]*Gx1[7] + E1[15]*Gx1[14] + E1[22]*Gx1[21] + E1[29]*Gx1[28] + E1[36]*Gx1[35] + E1[43]*Gx1[42];
H101[8] += + E1[1]*Gx1[1] + E1[8]*Gx1[8] + E1[15]*Gx1[15] + E1[22]*Gx1[22] + E1[29]*Gx1[29] + E1[36]*Gx1[36] + E1[43]*Gx1[43];
H101[9] += + E1[1]*Gx1[2] + E1[8]*Gx1[9] + E1[15]*Gx1[16] + E1[22]*Gx1[23] + E1[29]*Gx1[30] + E1[36]*Gx1[37] + E1[43]*Gx1[44];
H101[10] += + E1[1]*Gx1[3] + E1[8]*Gx1[10] + E1[15]*Gx1[17] + E1[22]*Gx1[24] + E1[29]*Gx1[31] + E1[36]*Gx1[38] + E1[43]*Gx1[45];
H101[11] += + E1[1]*Gx1[4] + E1[8]*Gx1[11] + E1[15]*Gx1[18] + E1[22]*Gx1[25] + E1[29]*Gx1[32] + E1[36]*Gx1[39] + E1[43]*Gx1[46];
H101[12] += + E1[1]*Gx1[5] + E1[8]*Gx1[12] + E1[15]*Gx1[19] + E1[22]*Gx1[26] + E1[29]*Gx1[33] + E1[36]*Gx1[40] + E1[43]*Gx1[47];
H101[13] += + E1[1]*Gx1[6] + E1[8]*Gx1[13] + E1[15]*Gx1[20] + E1[22]*Gx1[27] + E1[29]*Gx1[34] + E1[36]*Gx1[41] + E1[43]*Gx1[48];
H101[14] += + E1[2]*Gx1[0] + E1[9]*Gx1[7] + E1[16]*Gx1[14] + E1[23]*Gx1[21] + E1[30]*Gx1[28] + E1[37]*Gx1[35] + E1[44]*Gx1[42];
H101[15] += + E1[2]*Gx1[1] + E1[9]*Gx1[8] + E1[16]*Gx1[15] + E1[23]*Gx1[22] + E1[30]*Gx1[29] + E1[37]*Gx1[36] + E1[44]*Gx1[43];
H101[16] += + E1[2]*Gx1[2] + E1[9]*Gx1[9] + E1[16]*Gx1[16] + E1[23]*Gx1[23] + E1[30]*Gx1[30] + E1[37]*Gx1[37] + E1[44]*Gx1[44];
H101[17] += + E1[2]*Gx1[3] + E1[9]*Gx1[10] + E1[16]*Gx1[17] + E1[23]*Gx1[24] + E1[30]*Gx1[31] + E1[37]*Gx1[38] + E1[44]*Gx1[45];
H101[18] += + E1[2]*Gx1[4] + E1[9]*Gx1[11] + E1[16]*Gx1[18] + E1[23]*Gx1[25] + E1[30]*Gx1[32] + E1[37]*Gx1[39] + E1[44]*Gx1[46];
H101[19] += + E1[2]*Gx1[5] + E1[9]*Gx1[12] + E1[16]*Gx1[19] + E1[23]*Gx1[26] + E1[30]*Gx1[33] + E1[37]*Gx1[40] + E1[44]*Gx1[47];
H101[20] += + E1[2]*Gx1[6] + E1[9]*Gx1[13] + E1[16]*Gx1[20] + E1[23]*Gx1[27] + E1[30]*Gx1[34] + E1[37]*Gx1[41] + E1[44]*Gx1[48];
H101[21] += + E1[3]*Gx1[0] + E1[10]*Gx1[7] + E1[17]*Gx1[14] + E1[24]*Gx1[21] + E1[31]*Gx1[28] + E1[38]*Gx1[35] + E1[45]*Gx1[42];
H101[22] += + E1[3]*Gx1[1] + E1[10]*Gx1[8] + E1[17]*Gx1[15] + E1[24]*Gx1[22] + E1[31]*Gx1[29] + E1[38]*Gx1[36] + E1[45]*Gx1[43];
H101[23] += + E1[3]*Gx1[2] + E1[10]*Gx1[9] + E1[17]*Gx1[16] + E1[24]*Gx1[23] + E1[31]*Gx1[30] + E1[38]*Gx1[37] + E1[45]*Gx1[44];
H101[24] += + E1[3]*Gx1[3] + E1[10]*Gx1[10] + E1[17]*Gx1[17] + E1[24]*Gx1[24] + E1[31]*Gx1[31] + E1[38]*Gx1[38] + E1[45]*Gx1[45];
H101[25] += + E1[3]*Gx1[4] + E1[10]*Gx1[11] + E1[17]*Gx1[18] + E1[24]*Gx1[25] + E1[31]*Gx1[32] + E1[38]*Gx1[39] + E1[45]*Gx1[46];
H101[26] += + E1[3]*Gx1[5] + E1[10]*Gx1[12] + E1[17]*Gx1[19] + E1[24]*Gx1[26] + E1[31]*Gx1[33] + E1[38]*Gx1[40] + E1[45]*Gx1[47];
H101[27] += + E1[3]*Gx1[6] + E1[10]*Gx1[13] + E1[17]*Gx1[20] + E1[24]*Gx1[27] + E1[31]*Gx1[34] + E1[38]*Gx1[41] + E1[45]*Gx1[48];
H101[28] += + E1[4]*Gx1[0] + E1[11]*Gx1[7] + E1[18]*Gx1[14] + E1[25]*Gx1[21] + E1[32]*Gx1[28] + E1[39]*Gx1[35] + E1[46]*Gx1[42];
H101[29] += + E1[4]*Gx1[1] + E1[11]*Gx1[8] + E1[18]*Gx1[15] + E1[25]*Gx1[22] + E1[32]*Gx1[29] + E1[39]*Gx1[36] + E1[46]*Gx1[43];
H101[30] += + E1[4]*Gx1[2] + E1[11]*Gx1[9] + E1[18]*Gx1[16] + E1[25]*Gx1[23] + E1[32]*Gx1[30] + E1[39]*Gx1[37] + E1[46]*Gx1[44];
H101[31] += + E1[4]*Gx1[3] + E1[11]*Gx1[10] + E1[18]*Gx1[17] + E1[25]*Gx1[24] + E1[32]*Gx1[31] + E1[39]*Gx1[38] + E1[46]*Gx1[45];
H101[32] += + E1[4]*Gx1[4] + E1[11]*Gx1[11] + E1[18]*Gx1[18] + E1[25]*Gx1[25] + E1[32]*Gx1[32] + E1[39]*Gx1[39] + E1[46]*Gx1[46];
H101[33] += + E1[4]*Gx1[5] + E1[11]*Gx1[12] + E1[18]*Gx1[19] + E1[25]*Gx1[26] + E1[32]*Gx1[33] + E1[39]*Gx1[40] + E1[46]*Gx1[47];
H101[34] += + E1[4]*Gx1[6] + E1[11]*Gx1[13] + E1[18]*Gx1[20] + E1[25]*Gx1[27] + E1[32]*Gx1[34] + E1[39]*Gx1[41] + E1[46]*Gx1[48];
H101[35] += + E1[5]*Gx1[0] + E1[12]*Gx1[7] + E1[19]*Gx1[14] + E1[26]*Gx1[21] + E1[33]*Gx1[28] + E1[40]*Gx1[35] + E1[47]*Gx1[42];
H101[36] += + E1[5]*Gx1[1] + E1[12]*Gx1[8] + E1[19]*Gx1[15] + E1[26]*Gx1[22] + E1[33]*Gx1[29] + E1[40]*Gx1[36] + E1[47]*Gx1[43];
H101[37] += + E1[5]*Gx1[2] + E1[12]*Gx1[9] + E1[19]*Gx1[16] + E1[26]*Gx1[23] + E1[33]*Gx1[30] + E1[40]*Gx1[37] + E1[47]*Gx1[44];
H101[38] += + E1[5]*Gx1[3] + E1[12]*Gx1[10] + E1[19]*Gx1[17] + E1[26]*Gx1[24] + E1[33]*Gx1[31] + E1[40]*Gx1[38] + E1[47]*Gx1[45];
H101[39] += + E1[5]*Gx1[4] + E1[12]*Gx1[11] + E1[19]*Gx1[18] + E1[26]*Gx1[25] + E1[33]*Gx1[32] + E1[40]*Gx1[39] + E1[47]*Gx1[46];
H101[40] += + E1[5]*Gx1[5] + E1[12]*Gx1[12] + E1[19]*Gx1[19] + E1[26]*Gx1[26] + E1[33]*Gx1[33] + E1[40]*Gx1[40] + E1[47]*Gx1[47];
H101[41] += + E1[5]*Gx1[6] + E1[12]*Gx1[13] + E1[19]*Gx1[20] + E1[26]*Gx1[27] + E1[33]*Gx1[34] + E1[40]*Gx1[41] + E1[47]*Gx1[48];
H101[42] += + E1[6]*Gx1[0] + E1[13]*Gx1[7] + E1[20]*Gx1[14] + E1[27]*Gx1[21] + E1[34]*Gx1[28] + E1[41]*Gx1[35] + E1[48]*Gx1[42];
H101[43] += + E1[6]*Gx1[1] + E1[13]*Gx1[8] + E1[20]*Gx1[15] + E1[27]*Gx1[22] + E1[34]*Gx1[29] + E1[41]*Gx1[36] + E1[48]*Gx1[43];
H101[44] += + E1[6]*Gx1[2] + E1[13]*Gx1[9] + E1[20]*Gx1[16] + E1[27]*Gx1[23] + E1[34]*Gx1[30] + E1[41]*Gx1[37] + E1[48]*Gx1[44];
H101[45] += + E1[6]*Gx1[3] + E1[13]*Gx1[10] + E1[20]*Gx1[17] + E1[27]*Gx1[24] + E1[34]*Gx1[31] + E1[41]*Gx1[38] + E1[48]*Gx1[45];
H101[46] += + E1[6]*Gx1[4] + E1[13]*Gx1[11] + E1[20]*Gx1[18] + E1[27]*Gx1[25] + E1[34]*Gx1[32] + E1[41]*Gx1[39] + E1[48]*Gx1[46];
H101[47] += + E1[6]*Gx1[5] + E1[13]*Gx1[12] + E1[20]*Gx1[19] + E1[27]*Gx1[26] + E1[34]*Gx1[33] + E1[41]*Gx1[40] + E1[48]*Gx1[47];
H101[48] += + E1[6]*Gx1[6] + E1[13]*Gx1[13] + E1[20]*Gx1[20] + E1[27]*Gx1[27] + E1[34]*Gx1[34] + E1[41]*Gx1[41] + E1[48]*Gx1[48];
}

void acado_zeroBlockH10( real_t* const H101 )
{
{ int lCopy; for (lCopy = 0; lCopy < 49; lCopy++) H101[ lCopy ] = 0; }
}

void acado_multEDu( real_t* const E1, real_t* const U1, real_t* const dNew )
{
dNew[0] += + E1[0]*U1[0] + E1[1]*U1[1] + E1[2]*U1[2] + E1[3]*U1[3] + E1[4]*U1[4] + E1[5]*U1[5] + E1[6]*U1[6];
dNew[1] += + E1[7]*U1[0] + E1[8]*U1[1] + E1[9]*U1[2] + E1[10]*U1[3] + E1[11]*U1[4] + E1[12]*U1[5] + E1[13]*U1[6];
dNew[2] += + E1[14]*U1[0] + E1[15]*U1[1] + E1[16]*U1[2] + E1[17]*U1[3] + E1[18]*U1[4] + E1[19]*U1[5] + E1[20]*U1[6];
dNew[3] += + E1[21]*U1[0] + E1[22]*U1[1] + E1[23]*U1[2] + E1[24]*U1[3] + E1[25]*U1[4] + E1[26]*U1[5] + E1[27]*U1[6];
dNew[4] += + E1[28]*U1[0] + E1[29]*U1[1] + E1[30]*U1[2] + E1[31]*U1[3] + E1[32]*U1[4] + E1[33]*U1[5] + E1[34]*U1[6];
dNew[5] += + E1[35]*U1[0] + E1[36]*U1[1] + E1[37]*U1[2] + E1[38]*U1[3] + E1[39]*U1[4] + E1[40]*U1[5] + E1[41]*U1[6];
dNew[6] += + E1[42]*U1[0] + E1[43]*U1[1] + E1[44]*U1[2] + E1[45]*U1[3] + E1[46]*U1[4] + E1[47]*U1[5] + E1[48]*U1[6];
}

void acado_multQ1Gx( real_t* const Gx1, real_t* const Gx2 )
{
Gx2[0] = + (real_t)2.0000000000000000e+01*Gx1[0];
Gx2[1] = + (real_t)2.0000000000000000e+01*Gx1[1];
Gx2[2] = + (real_t)2.0000000000000000e+01*Gx1[2];
Gx2[3] = + (real_t)2.0000000000000000e+01*Gx1[3];
Gx2[4] = + (real_t)2.0000000000000000e+01*Gx1[4];
Gx2[5] = + (real_t)2.0000000000000000e+01*Gx1[5];
Gx2[6] = + (real_t)2.0000000000000000e+01*Gx1[6];
Gx2[7] = + (real_t)2.0000000000000000e+01*Gx1[7];
Gx2[8] = + (real_t)2.0000000000000000e+01*Gx1[8];
Gx2[9] = + (real_t)2.0000000000000000e+01*Gx1[9];
Gx2[10] = + (real_t)2.0000000000000000e+01*Gx1[10];
Gx2[11] = + (real_t)2.0000000000000000e+01*Gx1[11];
Gx2[12] = + (real_t)2.0000000000000000e+01*Gx1[12];
Gx2[13] = + (real_t)2.0000000000000000e+01*Gx1[13];
Gx2[14] = + (real_t)1.5000000000000000e+01*Gx1[14];
Gx2[15] = + (real_t)1.5000000000000000e+01*Gx1[15];
Gx2[16] = + (real_t)1.5000000000000000e+01*Gx1[16];
Gx2[17] = + (real_t)1.5000000000000000e+01*Gx1[17];
Gx2[18] = + (real_t)1.5000000000000000e+01*Gx1[18];
Gx2[19] = + (real_t)1.5000000000000000e+01*Gx1[19];
Gx2[20] = + (real_t)1.5000000000000000e+01*Gx1[20];
Gx2[21] = + (real_t)1.5000000000000000e+01*Gx1[21];
Gx2[22] = + (real_t)1.5000000000000000e+01*Gx1[22];
Gx2[23] = + (real_t)1.5000000000000000e+01*Gx1[23];
Gx2[24] = + (real_t)1.5000000000000000e+01*Gx1[24];
Gx2[25] = + (real_t)1.5000000000000000e+01*Gx1[25];
Gx2[26] = + (real_t)1.5000000000000000e+01*Gx1[26];
Gx2[27] = + (real_t)1.5000000000000000e+01*Gx1[27];
Gx2[28] = + (real_t)1.0000000000000000e+01*Gx1[28];
Gx2[29] = + (real_t)1.0000000000000000e+01*Gx1[29];
Gx2[30] = + (real_t)1.0000000000000000e+01*Gx1[30];
Gx2[31] = + (real_t)1.0000000000000000e+01*Gx1[31];
Gx2[32] = + (real_t)1.0000000000000000e+01*Gx1[32];
Gx2[33] = + (real_t)1.0000000000000000e+01*Gx1[33];
Gx2[34] = + (real_t)1.0000000000000000e+01*Gx1[34];
Gx2[35] = + (real_t)1.0000000000000000e+01*Gx1[35];
Gx2[36] = + (real_t)1.0000000000000000e+01*Gx1[36];
Gx2[37] = + (real_t)1.0000000000000000e+01*Gx1[37];
Gx2[38] = + (real_t)1.0000000000000000e+01*Gx1[38];
Gx2[39] = + (real_t)1.0000000000000000e+01*Gx1[39];
Gx2[40] = + (real_t)1.0000000000000000e+01*Gx1[40];
Gx2[41] = + (real_t)1.0000000000000000e+01*Gx1[41];
Gx2[42] = 0.0;
;
Gx2[43] = 0.0;
;
Gx2[44] = 0.0;
;
Gx2[45] = 0.0;
;
Gx2[46] = 0.0;
;
Gx2[47] = 0.0;
;
Gx2[48] = 0.0;
;
}

void acado_multQN1Gx( real_t* const Gx1, real_t* const Gx2 )
{
Gx2[0] = +Gx1[0];
Gx2[1] = +Gx1[1];
Gx2[2] = +Gx1[2];
Gx2[3] = +Gx1[3];
Gx2[4] = +Gx1[4];
Gx2[5] = +Gx1[5];
Gx2[6] = +Gx1[6];
Gx2[7] = +Gx1[7];
Gx2[8] = +Gx1[8];
Gx2[9] = +Gx1[9];
Gx2[10] = +Gx1[10];
Gx2[11] = +Gx1[11];
Gx2[12] = +Gx1[12];
Gx2[13] = +Gx1[13];
Gx2[14] = +Gx1[14];
Gx2[15] = +Gx1[15];
Gx2[16] = +Gx1[16];
Gx2[17] = +Gx1[17];
Gx2[18] = +Gx1[18];
Gx2[19] = +Gx1[19];
Gx2[20] = +Gx1[20];
Gx2[21] = +Gx1[21];
Gx2[22] = +Gx1[22];
Gx2[23] = +Gx1[23];
Gx2[24] = +Gx1[24];
Gx2[25] = +Gx1[25];
Gx2[26] = +Gx1[26];
Gx2[27] = +Gx1[27];
Gx2[28] = +Gx1[28];
Gx2[29] = +Gx1[29];
Gx2[30] = +Gx1[30];
Gx2[31] = +Gx1[31];
Gx2[32] = +Gx1[32];
Gx2[33] = +Gx1[33];
Gx2[34] = +Gx1[34];
Gx2[35] = +Gx1[35];
Gx2[36] = +Gx1[36];
Gx2[37] = +Gx1[37];
Gx2[38] = +Gx1[38];
Gx2[39] = +Gx1[39];
Gx2[40] = +Gx1[40];
Gx2[41] = +Gx1[41];
Gx2[42] = 0.0;
;
Gx2[43] = 0.0;
;
Gx2[44] = 0.0;
;
Gx2[45] = 0.0;
;
Gx2[46] = 0.0;
;
Gx2[47] = 0.0;
;
Gx2[48] = 0.0;
;
}

void acado_multQ1Gu( real_t* const Gu1, real_t* const Gu2 )
{
Gu2[0] = + (real_t)2.0000000000000000e+01*Gu1[0];
Gu2[1] = + (real_t)2.0000000000000000e+01*Gu1[1];
Gu2[2] = + (real_t)2.0000000000000000e+01*Gu1[2];
Gu2[3] = + (real_t)2.0000000000000000e+01*Gu1[3];
Gu2[4] = + (real_t)2.0000000000000000e+01*Gu1[4];
Gu2[5] = + (real_t)2.0000000000000000e+01*Gu1[5];
Gu2[6] = + (real_t)2.0000000000000000e+01*Gu1[6];
Gu2[7] = + (real_t)2.0000000000000000e+01*Gu1[7];
Gu2[8] = + (real_t)2.0000000000000000e+01*Gu1[8];
Gu2[9] = + (real_t)2.0000000000000000e+01*Gu1[9];
Gu2[10] = + (real_t)2.0000000000000000e+01*Gu1[10];
Gu2[11] = + (real_t)2.0000000000000000e+01*Gu1[11];
Gu2[12] = + (real_t)2.0000000000000000e+01*Gu1[12];
Gu2[13] = + (real_t)2.0000000000000000e+01*Gu1[13];
Gu2[14] = + (real_t)1.5000000000000000e+01*Gu1[14];
Gu2[15] = + (real_t)1.5000000000000000e+01*Gu1[15];
Gu2[16] = + (real_t)1.5000000000000000e+01*Gu1[16];
Gu2[17] = + (real_t)1.5000000000000000e+01*Gu1[17];
Gu2[18] = + (real_t)1.5000000000000000e+01*Gu1[18];
Gu2[19] = + (real_t)1.5000000000000000e+01*Gu1[19];
Gu2[20] = + (real_t)1.5000000000000000e+01*Gu1[20];
Gu2[21] = + (real_t)1.5000000000000000e+01*Gu1[21];
Gu2[22] = + (real_t)1.5000000000000000e+01*Gu1[22];
Gu2[23] = + (real_t)1.5000000000000000e+01*Gu1[23];
Gu2[24] = + (real_t)1.5000000000000000e+01*Gu1[24];
Gu2[25] = + (real_t)1.5000000000000000e+01*Gu1[25];
Gu2[26] = + (real_t)1.5000000000000000e+01*Gu1[26];
Gu2[27] = + (real_t)1.5000000000000000e+01*Gu1[27];
Gu2[28] = + (real_t)1.0000000000000000e+01*Gu1[28];
Gu2[29] = + (real_t)1.0000000000000000e+01*Gu1[29];
Gu2[30] = + (real_t)1.0000000000000000e+01*Gu1[30];
Gu2[31] = + (real_t)1.0000000000000000e+01*Gu1[31];
Gu2[32] = + (real_t)1.0000000000000000e+01*Gu1[32];
Gu2[33] = + (real_t)1.0000000000000000e+01*Gu1[33];
Gu2[34] = + (real_t)1.0000000000000000e+01*Gu1[34];
Gu2[35] = + (real_t)1.0000000000000000e+01*Gu1[35];
Gu2[36] = + (real_t)1.0000000000000000e+01*Gu1[36];
Gu2[37] = + (real_t)1.0000000000000000e+01*Gu1[37];
Gu2[38] = + (real_t)1.0000000000000000e+01*Gu1[38];
Gu2[39] = + (real_t)1.0000000000000000e+01*Gu1[39];
Gu2[40] = + (real_t)1.0000000000000000e+01*Gu1[40];
Gu2[41] = + (real_t)1.0000000000000000e+01*Gu1[41];
Gu2[42] = 0.0;
;
Gu2[43] = 0.0;
;
Gu2[44] = 0.0;
;
Gu2[45] = 0.0;
;
Gu2[46] = 0.0;
;
Gu2[47] = 0.0;
;
Gu2[48] = 0.0;
;
}

void acado_multQN1Gu( real_t* const Gu1, real_t* const Gu2 )
{
Gu2[0] = +Gu1[0];
Gu2[1] = +Gu1[1];
Gu2[2] = +Gu1[2];
Gu2[3] = +Gu1[3];
Gu2[4] = +Gu1[4];
Gu2[5] = +Gu1[5];
Gu2[6] = +Gu1[6];
Gu2[7] = +Gu1[7];
Gu2[8] = +Gu1[8];
Gu2[9] = +Gu1[9];
Gu2[10] = +Gu1[10];
Gu2[11] = +Gu1[11];
Gu2[12] = +Gu1[12];
Gu2[13] = +Gu1[13];
Gu2[14] = +Gu1[14];
Gu2[15] = +Gu1[15];
Gu2[16] = +Gu1[16];
Gu2[17] = +Gu1[17];
Gu2[18] = +Gu1[18];
Gu2[19] = +Gu1[19];
Gu2[20] = +Gu1[20];
Gu2[21] = +Gu1[21];
Gu2[22] = +Gu1[22];
Gu2[23] = +Gu1[23];
Gu2[24] = +Gu1[24];
Gu2[25] = +Gu1[25];
Gu2[26] = +Gu1[26];
Gu2[27] = +Gu1[27];
Gu2[28] = +Gu1[28];
Gu2[29] = +Gu1[29];
Gu2[30] = +Gu1[30];
Gu2[31] = +Gu1[31];
Gu2[32] = +Gu1[32];
Gu2[33] = +Gu1[33];
Gu2[34] = +Gu1[34];
Gu2[35] = +Gu1[35];
Gu2[36] = +Gu1[36];
Gu2[37] = +Gu1[37];
Gu2[38] = +Gu1[38];
Gu2[39] = +Gu1[39];
Gu2[40] = +Gu1[40];
Gu2[41] = +Gu1[41];
Gu2[42] = 0.0;
;
Gu2[43] = 0.0;
;
Gu2[44] = 0.0;
;
Gu2[45] = 0.0;
;
Gu2[46] = 0.0;
;
Gu2[47] = 0.0;
;
Gu2[48] = 0.0;
;
}

void acado_multHxC( real_t* const Hx, real_t* const Gx, real_t* const A01 )
{
A01[0] = + Hx[0]*Gx[0] + Hx[1]*Gx[7] + Hx[2]*Gx[14] + Hx[3]*Gx[21] + Hx[4]*Gx[28] + Hx[5]*Gx[35] + Hx[6]*Gx[42];
A01[1] = + Hx[0]*Gx[1] + Hx[1]*Gx[8] + Hx[2]*Gx[15] + Hx[3]*Gx[22] + Hx[4]*Gx[29] + Hx[5]*Gx[36] + Hx[6]*Gx[43];
A01[2] = + Hx[0]*Gx[2] + Hx[1]*Gx[9] + Hx[2]*Gx[16] + Hx[3]*Gx[23] + Hx[4]*Gx[30] + Hx[5]*Gx[37] + Hx[6]*Gx[44];
A01[3] = + Hx[0]*Gx[3] + Hx[1]*Gx[10] + Hx[2]*Gx[17] + Hx[3]*Gx[24] + Hx[4]*Gx[31] + Hx[5]*Gx[38] + Hx[6]*Gx[45];
A01[4] = + Hx[0]*Gx[4] + Hx[1]*Gx[11] + Hx[2]*Gx[18] + Hx[3]*Gx[25] + Hx[4]*Gx[32] + Hx[5]*Gx[39] + Hx[6]*Gx[46];
A01[5] = + Hx[0]*Gx[5] + Hx[1]*Gx[12] + Hx[2]*Gx[19] + Hx[3]*Gx[26] + Hx[4]*Gx[33] + Hx[5]*Gx[40] + Hx[6]*Gx[47];
A01[6] = + Hx[0]*Gx[6] + Hx[1]*Gx[13] + Hx[2]*Gx[20] + Hx[3]*Gx[27] + Hx[4]*Gx[34] + Hx[5]*Gx[41] + Hx[6]*Gx[48];
A01[7] = + Hx[7]*Gx[0] + Hx[8]*Gx[7] + Hx[9]*Gx[14] + Hx[10]*Gx[21] + Hx[11]*Gx[28] + Hx[12]*Gx[35] + Hx[13]*Gx[42];
A01[8] = + Hx[7]*Gx[1] + Hx[8]*Gx[8] + Hx[9]*Gx[15] + Hx[10]*Gx[22] + Hx[11]*Gx[29] + Hx[12]*Gx[36] + Hx[13]*Gx[43];
A01[9] = + Hx[7]*Gx[2] + Hx[8]*Gx[9] + Hx[9]*Gx[16] + Hx[10]*Gx[23] + Hx[11]*Gx[30] + Hx[12]*Gx[37] + Hx[13]*Gx[44];
A01[10] = + Hx[7]*Gx[3] + Hx[8]*Gx[10] + Hx[9]*Gx[17] + Hx[10]*Gx[24] + Hx[11]*Gx[31] + Hx[12]*Gx[38] + Hx[13]*Gx[45];
A01[11] = + Hx[7]*Gx[4] + Hx[8]*Gx[11] + Hx[9]*Gx[18] + Hx[10]*Gx[25] + Hx[11]*Gx[32] + Hx[12]*Gx[39] + Hx[13]*Gx[46];
A01[12] = + Hx[7]*Gx[5] + Hx[8]*Gx[12] + Hx[9]*Gx[19] + Hx[10]*Gx[26] + Hx[11]*Gx[33] + Hx[12]*Gx[40] + Hx[13]*Gx[47];
A01[13] = + Hx[7]*Gx[6] + Hx[8]*Gx[13] + Hx[9]*Gx[20] + Hx[10]*Gx[27] + Hx[11]*Gx[34] + Hx[12]*Gx[41] + Hx[13]*Gx[48];
A01[14] = + Hx[14]*Gx[0] + Hx[15]*Gx[7] + Hx[16]*Gx[14] + Hx[17]*Gx[21] + Hx[18]*Gx[28] + Hx[19]*Gx[35] + Hx[20]*Gx[42];
A01[15] = + Hx[14]*Gx[1] + Hx[15]*Gx[8] + Hx[16]*Gx[15] + Hx[17]*Gx[22] + Hx[18]*Gx[29] + Hx[19]*Gx[36] + Hx[20]*Gx[43];
A01[16] = + Hx[14]*Gx[2] + Hx[15]*Gx[9] + Hx[16]*Gx[16] + Hx[17]*Gx[23] + Hx[18]*Gx[30] + Hx[19]*Gx[37] + Hx[20]*Gx[44];
A01[17] = + Hx[14]*Gx[3] + Hx[15]*Gx[10] + Hx[16]*Gx[17] + Hx[17]*Gx[24] + Hx[18]*Gx[31] + Hx[19]*Gx[38] + Hx[20]*Gx[45];
A01[18] = + Hx[14]*Gx[4] + Hx[15]*Gx[11] + Hx[16]*Gx[18] + Hx[17]*Gx[25] + Hx[18]*Gx[32] + Hx[19]*Gx[39] + Hx[20]*Gx[46];
A01[19] = + Hx[14]*Gx[5] + Hx[15]*Gx[12] + Hx[16]*Gx[19] + Hx[17]*Gx[26] + Hx[18]*Gx[33] + Hx[19]*Gx[40] + Hx[20]*Gx[47];
A01[20] = + Hx[14]*Gx[6] + Hx[15]*Gx[13] + Hx[16]*Gx[20] + Hx[17]*Gx[27] + Hx[18]*Gx[34] + Hx[19]*Gx[41] + Hx[20]*Gx[48];
}

void acado_multHxE( real_t* const Hx, real_t* const E, int row, int col )
{
acadoWorkspace.A[(row * 210) + (col * 7)] = + Hx[0]*E[0] + Hx[1]*E[7] + Hx[2]*E[14] + Hx[3]*E[21] + Hx[4]*E[28] + Hx[5]*E[35] + Hx[6]*E[42];
acadoWorkspace.A[(row * 210) + (col * 7 + 1)] = + Hx[0]*E[1] + Hx[1]*E[8] + Hx[2]*E[15] + Hx[3]*E[22] + Hx[4]*E[29] + Hx[5]*E[36] + Hx[6]*E[43];
acadoWorkspace.A[(row * 210) + (col * 7 + 2)] = + Hx[0]*E[2] + Hx[1]*E[9] + Hx[2]*E[16] + Hx[3]*E[23] + Hx[4]*E[30] + Hx[5]*E[37] + Hx[6]*E[44];
acadoWorkspace.A[(row * 210) + (col * 7 + 3)] = + Hx[0]*E[3] + Hx[1]*E[10] + Hx[2]*E[17] + Hx[3]*E[24] + Hx[4]*E[31] + Hx[5]*E[38] + Hx[6]*E[45];
acadoWorkspace.A[(row * 210) + (col * 7 + 4)] = + Hx[0]*E[4] + Hx[1]*E[11] + Hx[2]*E[18] + Hx[3]*E[25] + Hx[4]*E[32] + Hx[5]*E[39] + Hx[6]*E[46];
acadoWorkspace.A[(row * 210) + (col * 7 + 5)] = + Hx[0]*E[5] + Hx[1]*E[12] + Hx[2]*E[19] + Hx[3]*E[26] + Hx[4]*E[33] + Hx[5]*E[40] + Hx[6]*E[47];
acadoWorkspace.A[(row * 210) + (col * 7 + 6)] = + Hx[0]*E[6] + Hx[1]*E[13] + Hx[2]*E[20] + Hx[3]*E[27] + Hx[4]*E[34] + Hx[5]*E[41] + Hx[6]*E[48];
acadoWorkspace.A[(row * 210 + 70) + (col * 7)] = + Hx[7]*E[0] + Hx[8]*E[7] + Hx[9]*E[14] + Hx[10]*E[21] + Hx[11]*E[28] + Hx[12]*E[35] + Hx[13]*E[42];
acadoWorkspace.A[(row * 210 + 70) + (col * 7 + 1)] = + Hx[7]*E[1] + Hx[8]*E[8] + Hx[9]*E[15] + Hx[10]*E[22] + Hx[11]*E[29] + Hx[12]*E[36] + Hx[13]*E[43];
acadoWorkspace.A[(row * 210 + 70) + (col * 7 + 2)] = + Hx[7]*E[2] + Hx[8]*E[9] + Hx[9]*E[16] + Hx[10]*E[23] + Hx[11]*E[30] + Hx[12]*E[37] + Hx[13]*E[44];
acadoWorkspace.A[(row * 210 + 70) + (col * 7 + 3)] = + Hx[7]*E[3] + Hx[8]*E[10] + Hx[9]*E[17] + Hx[10]*E[24] + Hx[11]*E[31] + Hx[12]*E[38] + Hx[13]*E[45];
acadoWorkspace.A[(row * 210 + 70) + (col * 7 + 4)] = + Hx[7]*E[4] + Hx[8]*E[11] + Hx[9]*E[18] + Hx[10]*E[25] + Hx[11]*E[32] + Hx[12]*E[39] + Hx[13]*E[46];
acadoWorkspace.A[(row * 210 + 70) + (col * 7 + 5)] = + Hx[7]*E[5] + Hx[8]*E[12] + Hx[9]*E[19] + Hx[10]*E[26] + Hx[11]*E[33] + Hx[12]*E[40] + Hx[13]*E[47];
acadoWorkspace.A[(row * 210 + 70) + (col * 7 + 6)] = + Hx[7]*E[6] + Hx[8]*E[13] + Hx[9]*E[20] + Hx[10]*E[27] + Hx[11]*E[34] + Hx[12]*E[41] + Hx[13]*E[48];
acadoWorkspace.A[(row * 210 + 140) + (col * 7)] = + Hx[14]*E[0] + Hx[15]*E[7] + Hx[16]*E[14] + Hx[17]*E[21] + Hx[18]*E[28] + Hx[19]*E[35] + Hx[20]*E[42];
acadoWorkspace.A[(row * 210 + 140) + (col * 7 + 1)] = + Hx[14]*E[1] + Hx[15]*E[8] + Hx[16]*E[15] + Hx[17]*E[22] + Hx[18]*E[29] + Hx[19]*E[36] + Hx[20]*E[43];
acadoWorkspace.A[(row * 210 + 140) + (col * 7 + 2)] = + Hx[14]*E[2] + Hx[15]*E[9] + Hx[16]*E[16] + Hx[17]*E[23] + Hx[18]*E[30] + Hx[19]*E[37] + Hx[20]*E[44];
acadoWorkspace.A[(row * 210 + 140) + (col * 7 + 3)] = + Hx[14]*E[3] + Hx[15]*E[10] + Hx[16]*E[17] + Hx[17]*E[24] + Hx[18]*E[31] + Hx[19]*E[38] + Hx[20]*E[45];
acadoWorkspace.A[(row * 210 + 140) + (col * 7 + 4)] = + Hx[14]*E[4] + Hx[15]*E[11] + Hx[16]*E[18] + Hx[17]*E[25] + Hx[18]*E[32] + Hx[19]*E[39] + Hx[20]*E[46];
acadoWorkspace.A[(row * 210 + 140) + (col * 7 + 5)] = + Hx[14]*E[5] + Hx[15]*E[12] + Hx[16]*E[19] + Hx[17]*E[26] + Hx[18]*E[33] + Hx[19]*E[40] + Hx[20]*E[47];
acadoWorkspace.A[(row * 210 + 140) + (col * 7 + 6)] = + Hx[14]*E[6] + Hx[15]*E[13] + Hx[16]*E[20] + Hx[17]*E[27] + Hx[18]*E[34] + Hx[19]*E[41] + Hx[20]*E[48];
}

void acado_macHxd( real_t* const Hx, real_t* const tmpd, real_t* const lbA, real_t* const ubA )
{
acadoWorkspace.evHxd[0] = + Hx[0]*tmpd[0] + Hx[1]*tmpd[1] + Hx[2]*tmpd[2] + Hx[3]*tmpd[3] + Hx[4]*tmpd[4] + Hx[5]*tmpd[5] + Hx[6]*tmpd[6];
acadoWorkspace.evHxd[1] = + Hx[7]*tmpd[0] + Hx[8]*tmpd[1] + Hx[9]*tmpd[2] + Hx[10]*tmpd[3] + Hx[11]*tmpd[4] + Hx[12]*tmpd[5] + Hx[13]*tmpd[6];
acadoWorkspace.evHxd[2] = + Hx[14]*tmpd[0] + Hx[15]*tmpd[1] + Hx[16]*tmpd[2] + Hx[17]*tmpd[3] + Hx[18]*tmpd[4] + Hx[19]*tmpd[5] + Hx[20]*tmpd[6];
lbA[0] -= acadoWorkspace.evHxd[0];
lbA[1] -= acadoWorkspace.evHxd[1];
lbA[2] -= acadoWorkspace.evHxd[2];
ubA[0] -= acadoWorkspace.evHxd[0];
ubA[1] -= acadoWorkspace.evHxd[1];
ubA[2] -= acadoWorkspace.evHxd[2];
}

void acado_evaluatePathConstraints(const real_t* in, real_t* out)
{
const real_t* xd = in;
/* Vector of auxiliary variables; number of elements: 113. */
real_t* a = acadoWorkspace.conAuxVar;

/* Compute intermediate quantities: */
a[0] = (sin(xd[1]));
a[1] = ((real_t)(8.9159000000000002e-02)+((real_t)(-4.2499999999999999e-01)*a[0]));
a[2] = ((real_t)(-1.0000000000000001e-01)+a[1]);
a[3] = (sin((xd[1]+xd[2])));
a[4] = (a[1]+((real_t)(-3.9224999999999999e-01)*a[3]));
a[5] = ((real_t)(-1.0000000000000001e-01)+a[4]);
a[6] = (sin(((xd[1]+xd[2])+xd[3])));
a[7] = (sin(xd[4]));
a[8] = (cos(((xd[1]+xd[2])+xd[3])));
a[9] = (sin(((xd[1]+xd[2])+xd[3])));
a[10] = (sin(xd[4]));
a[11] = (((a[5]-((((real_t)(7.0000000000000000e+00)*a[6])*a[7])/(real_t)(1.0000000000000000e+02)))-((real_t)(9.4649999999999998e-02)*a[8]))-(((real_t)(8.2299999999999998e-02)*a[9])*a[10]));
a[12] = (real_t)(0.0000000000000000e+00);
a[13] = (cos(xd[1]));
a[14] = (real_t)(-4.2499999999999999e-01);
a[15] = (a[13]*a[14]);
a[16] = (real_t)(0.0000000000000000e+00);
a[17] = (real_t)(0.0000000000000000e+00);
a[18] = (real_t)(0.0000000000000000e+00);
a[19] = (real_t)(0.0000000000000000e+00);
a[20] = (real_t)(0.0000000000000000e+00);
a[21] = (real_t)(0.0000000000000000e+00);
a[22] = (a[13]*a[14]);
a[23] = (cos((xd[1]+xd[2])));
a[24] = (real_t)(-3.9224999999999999e-01);
a[25] = (a[23]*a[24]);
a[26] = (a[22]+a[25]);
a[27] = (a[23]*a[24]);
a[28] = (real_t)(0.0000000000000000e+00);
a[29] = (real_t)(0.0000000000000000e+00);
a[30] = (real_t)(0.0000000000000000e+00);
a[31] = (real_t)(0.0000000000000000e+00);
a[32] = (real_t)(0.0000000000000000e+00);
a[33] = (a[22]+a[25]);
a[34] = (cos(((xd[1]+xd[2])+xd[3])));
a[35] = (real_t)(7.0000000000000000e+00);
a[36] = (a[34]*a[35]);
a[37] = (a[36]*a[7]);
a[38] = ((real_t)(1.0000000000000000e+00)/(real_t)(1.0000000000000000e+02));
a[39] = (a[37]*a[38]);
a[40] = (real_t)(-1.0000000000000000e+00);
a[41] = (a[39]*a[40]);
a[42] = (a[33]+a[41]);
a[43] = ((real_t)(-1.0000000000000000e+00)*(sin(((xd[1]+xd[2])+xd[3]))));
a[44] = (real_t)(9.4649999999999998e-02);
a[45] = (a[43]*a[44]);
a[46] = (real_t)(-1.0000000000000000e+00);
a[47] = (a[45]*a[46]);
a[48] = (a[42]+a[47]);
a[49] = (cos(((xd[1]+xd[2])+xd[3])));
a[50] = (real_t)(8.2299999999999998e-02);
a[51] = (a[49]*a[50]);
a[52] = (a[51]*a[10]);
a[53] = (real_t)(-1.0000000000000000e+00);
a[54] = (a[52]*a[53]);
a[55] = (a[48]+a[54]);
a[56] = (a[23]*a[24]);
a[57] = (a[34]*a[35]);
a[58] = (a[57]*a[7]);
a[59] = (a[58]*a[38]);
a[60] = (a[59]*a[40]);
a[61] = (a[56]+a[60]);
a[62] = (a[43]*a[44]);
a[63] = (a[62]*a[46]);
a[64] = (a[61]+a[63]);
a[65] = (a[49]*a[50]);
a[66] = (a[65]*a[10]);
a[67] = (a[66]*a[53]);
a[68] = (a[64]+a[67]);
a[69] = (a[34]*a[35]);
a[70] = (a[69]*a[7]);
a[71] = (a[70]*a[38]);
a[72] = (a[71]*a[40]);
a[73] = (a[43]*a[44]);
a[74] = (a[73]*a[46]);
a[75] = (a[72]+a[74]);
a[76] = (a[49]*a[50]);
a[77] = (a[76]*a[10]);
a[78] = (a[77]*a[53]);
a[79] = (a[75]+a[78]);
a[80] = (cos(xd[4]));
a[81] = ((real_t)(7.0000000000000000e+00)*a[6]);
a[82] = (a[80]*a[81]);
a[83] = (a[82]*a[38]);
a[84] = (a[83]*a[40]);
a[85] = (cos(xd[4]));
a[86] = ((real_t)(8.2299999999999998e-02)*a[9]);
a[87] = (a[85]*a[86]);
a[88] = (a[87]*a[53]);
a[89] = (a[84]+a[88]);
a[90] = (real_t)(0.0000000000000000e+00);
a[91] = (real_t)(0.0000000000000000e+00);
a[92] = (real_t)(0.0000000000000000e+00);
a[93] = (real_t)(0.0000000000000000e+00);
a[94] = (real_t)(0.0000000000000000e+00);
a[95] = (real_t)(0.0000000000000000e+00);
a[96] = (real_t)(0.0000000000000000e+00);
a[97] = (real_t)(0.0000000000000000e+00);
a[98] = (real_t)(0.0000000000000000e+00);
a[99] = (real_t)(0.0000000000000000e+00);
a[100] = (real_t)(0.0000000000000000e+00);
a[101] = (real_t)(0.0000000000000000e+00);
a[102] = (real_t)(0.0000000000000000e+00);
a[103] = (real_t)(0.0000000000000000e+00);
a[104] = (real_t)(0.0000000000000000e+00);
a[105] = (real_t)(0.0000000000000000e+00);
a[106] = (real_t)(0.0000000000000000e+00);
a[107] = (real_t)(0.0000000000000000e+00);
a[108] = (real_t)(0.0000000000000000e+00);
a[109] = (real_t)(0.0000000000000000e+00);
a[110] = (real_t)(0.0000000000000000e+00);
a[111] = (real_t)(0.0000000000000000e+00);
a[112] = (real_t)(0.0000000000000000e+00);

/* Compute outputs: */
out[0] = a[2];
out[1] = a[5];
out[2] = a[11];
out[3] = a[12];
out[4] = a[15];
out[5] = a[16];
out[6] = a[17];
out[7] = a[18];
out[8] = a[19];
out[9] = a[20];
out[10] = a[21];
out[11] = a[26];
out[12] = a[27];
out[13] = a[28];
out[14] = a[29];
out[15] = a[30];
out[16] = a[31];
out[17] = a[32];
out[18] = a[55];
out[19] = a[68];
out[20] = a[79];
out[21] = a[89];
out[22] = a[90];
out[23] = a[91];
out[24] = a[92];
out[25] = a[93];
out[26] = a[94];
out[27] = a[95];
out[28] = a[96];
out[29] = a[97];
out[30] = a[98];
out[31] = a[99];
out[32] = a[100];
out[33] = a[101];
out[34] = a[102];
out[35] = a[103];
out[36] = a[104];
out[37] = a[105];
out[38] = a[106];
out[39] = a[107];
out[40] = a[108];
out[41] = a[109];
out[42] = a[110];
out[43] = a[111];
out[44] = a[112];
}

void acado_macETSlu( real_t* const E0, real_t* const g1 )
{
g1[0] += 0.0;
;
g1[1] += 0.0;
;
g1[2] += 0.0;
;
g1[3] += 0.0;
;
g1[4] += 0.0;
;
g1[5] += 0.0;
;
g1[6] += 0.0;
;
}

void acado_condensePrep(  )
{
int lRun1;
acado_moveGuE( acadoWorkspace.evGu, acadoWorkspace.E );
acado_moveGxT( &(acadoWorkspace.evGx[ 49 ]), acadoWorkspace.T );
acado_multGxd( acadoWorkspace.d, &(acadoWorkspace.evGx[ 49 ]), &(acadoWorkspace.d[ 7 ]) );
acado_multGxGx( acadoWorkspace.T, acadoWorkspace.evGx, &(acadoWorkspace.evGx[ 49 ]) );

acado_multGxGu( acadoWorkspace.T, acadoWorkspace.E, &(acadoWorkspace.E[ 49 ]) );

acado_moveGuE( &(acadoWorkspace.evGu[ 49 ]), &(acadoWorkspace.E[ 98 ]) );

acado_moveGxT( &(acadoWorkspace.evGx[ 98 ]), acadoWorkspace.T );
acado_multGxd( &(acadoWorkspace.d[ 7 ]), &(acadoWorkspace.evGx[ 98 ]), &(acadoWorkspace.d[ 14 ]) );
acado_multGxGx( acadoWorkspace.T, &(acadoWorkspace.evGx[ 49 ]), &(acadoWorkspace.evGx[ 98 ]) );

acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 49 ]), &(acadoWorkspace.E[ 147 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 98 ]), &(acadoWorkspace.E[ 196 ]) );

acado_moveGuE( &(acadoWorkspace.evGu[ 98 ]), &(acadoWorkspace.E[ 245 ]) );

acado_moveGxT( &(acadoWorkspace.evGx[ 147 ]), acadoWorkspace.T );
acado_multGxd( &(acadoWorkspace.d[ 14 ]), &(acadoWorkspace.evGx[ 147 ]), &(acadoWorkspace.d[ 21 ]) );
acado_multGxGx( acadoWorkspace.T, &(acadoWorkspace.evGx[ 98 ]), &(acadoWorkspace.evGx[ 147 ]) );

acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 147 ]), &(acadoWorkspace.E[ 294 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 196 ]), &(acadoWorkspace.E[ 343 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 245 ]), &(acadoWorkspace.E[ 392 ]) );

acado_moveGuE( &(acadoWorkspace.evGu[ 147 ]), &(acadoWorkspace.E[ 441 ]) );

acado_moveGxT( &(acadoWorkspace.evGx[ 196 ]), acadoWorkspace.T );
acado_multGxd( &(acadoWorkspace.d[ 21 ]), &(acadoWorkspace.evGx[ 196 ]), &(acadoWorkspace.d[ 28 ]) );
acado_multGxGx( acadoWorkspace.T, &(acadoWorkspace.evGx[ 147 ]), &(acadoWorkspace.evGx[ 196 ]) );

acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 294 ]), &(acadoWorkspace.E[ 490 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 343 ]), &(acadoWorkspace.E[ 539 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 392 ]), &(acadoWorkspace.E[ 588 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 441 ]), &(acadoWorkspace.E[ 637 ]) );

acado_moveGuE( &(acadoWorkspace.evGu[ 196 ]), &(acadoWorkspace.E[ 686 ]) );

acado_moveGxT( &(acadoWorkspace.evGx[ 245 ]), acadoWorkspace.T );
acado_multGxd( &(acadoWorkspace.d[ 28 ]), &(acadoWorkspace.evGx[ 245 ]), &(acadoWorkspace.d[ 35 ]) );
acado_multGxGx( acadoWorkspace.T, &(acadoWorkspace.evGx[ 196 ]), &(acadoWorkspace.evGx[ 245 ]) );

acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 490 ]), &(acadoWorkspace.E[ 735 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 539 ]), &(acadoWorkspace.E[ 784 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 588 ]), &(acadoWorkspace.E[ 833 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 637 ]), &(acadoWorkspace.E[ 882 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 686 ]), &(acadoWorkspace.E[ 931 ]) );

acado_moveGuE( &(acadoWorkspace.evGu[ 245 ]), &(acadoWorkspace.E[ 980 ]) );

acado_moveGxT( &(acadoWorkspace.evGx[ 294 ]), acadoWorkspace.T );
acado_multGxd( &(acadoWorkspace.d[ 35 ]), &(acadoWorkspace.evGx[ 294 ]), &(acadoWorkspace.d[ 42 ]) );
acado_multGxGx( acadoWorkspace.T, &(acadoWorkspace.evGx[ 245 ]), &(acadoWorkspace.evGx[ 294 ]) );

acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 735 ]), &(acadoWorkspace.E[ 1029 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 784 ]), &(acadoWorkspace.E[ 1078 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 833 ]), &(acadoWorkspace.E[ 1127 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 882 ]), &(acadoWorkspace.E[ 1176 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 931 ]), &(acadoWorkspace.E[ 1225 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 980 ]), &(acadoWorkspace.E[ 1274 ]) );

acado_moveGuE( &(acadoWorkspace.evGu[ 294 ]), &(acadoWorkspace.E[ 1323 ]) );

acado_moveGxT( &(acadoWorkspace.evGx[ 343 ]), acadoWorkspace.T );
acado_multGxd( &(acadoWorkspace.d[ 42 ]), &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.d[ 49 ]) );
acado_multGxGx( acadoWorkspace.T, &(acadoWorkspace.evGx[ 294 ]), &(acadoWorkspace.evGx[ 343 ]) );

acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.E[ 1372 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.E[ 1421 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1127 ]), &(acadoWorkspace.E[ 1470 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1176 ]), &(acadoWorkspace.E[ 1519 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1225 ]), &(acadoWorkspace.E[ 1568 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1274 ]), &(acadoWorkspace.E[ 1617 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1323 ]), &(acadoWorkspace.E[ 1666 ]) );

acado_moveGuE( &(acadoWorkspace.evGu[ 343 ]), &(acadoWorkspace.E[ 1715 ]) );

acado_moveGxT( &(acadoWorkspace.evGx[ 392 ]), acadoWorkspace.T );
acado_multGxd( &(acadoWorkspace.d[ 49 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.d[ 56 ]) );
acado_multGxGx( acadoWorkspace.T, &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.evGx[ 392 ]) );

acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.E[ 1764 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.E[ 1813 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.E[ 1862 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1519 ]), &(acadoWorkspace.E[ 1911 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1568 ]), &(acadoWorkspace.E[ 1960 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1617 ]), &(acadoWorkspace.E[ 2009 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1666 ]), &(acadoWorkspace.E[ 2058 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1715 ]), &(acadoWorkspace.E[ 2107 ]) );

acado_moveGuE( &(acadoWorkspace.evGu[ 392 ]), &(acadoWorkspace.E[ 2156 ]) );

acado_moveGxT( &(acadoWorkspace.evGx[ 441 ]), acadoWorkspace.T );
acado_multGxd( &(acadoWorkspace.d[ 56 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.d[ 63 ]) );
acado_multGxGx( acadoWorkspace.T, &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.evGx[ 441 ]) );

acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.E[ 2205 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.E[ 2254 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.E[ 2303 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.E[ 2352 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 1960 ]), &(acadoWorkspace.E[ 2401 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 2009 ]), &(acadoWorkspace.E[ 2450 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 2058 ]), &(acadoWorkspace.E[ 2499 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 2107 ]), &(acadoWorkspace.E[ 2548 ]) );
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ 2156 ]), &(acadoWorkspace.E[ 2597 ]) );

acado_moveGuE( &(acadoWorkspace.evGu[ 441 ]), &(acadoWorkspace.E[ 2646 ]) );

acado_multQ1Gu( acadoWorkspace.E, acadoWorkspace.QE );
acado_multQ1Gu( &(acadoWorkspace.E[ 49 ]), &(acadoWorkspace.QE[ 49 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 98 ]), &(acadoWorkspace.QE[ 98 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 147 ]), &(acadoWorkspace.QE[ 147 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 196 ]), &(acadoWorkspace.QE[ 196 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 245 ]), &(acadoWorkspace.QE[ 245 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 294 ]), &(acadoWorkspace.QE[ 294 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 343 ]), &(acadoWorkspace.QE[ 343 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 392 ]), &(acadoWorkspace.QE[ 392 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 441 ]), &(acadoWorkspace.QE[ 441 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 490 ]), &(acadoWorkspace.QE[ 490 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 539 ]), &(acadoWorkspace.QE[ 539 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 588 ]), &(acadoWorkspace.QE[ 588 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 637 ]), &(acadoWorkspace.QE[ 637 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 686 ]), &(acadoWorkspace.QE[ 686 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 735 ]), &(acadoWorkspace.QE[ 735 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 784 ]), &(acadoWorkspace.QE[ 784 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 833 ]), &(acadoWorkspace.QE[ 833 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 882 ]), &(acadoWorkspace.QE[ 882 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 931 ]), &(acadoWorkspace.QE[ 931 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 980 ]), &(acadoWorkspace.QE[ 980 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.QE[ 1029 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.QE[ 1078 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1127 ]), &(acadoWorkspace.QE[ 1127 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1176 ]), &(acadoWorkspace.QE[ 1176 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1225 ]), &(acadoWorkspace.QE[ 1225 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1274 ]), &(acadoWorkspace.QE[ 1274 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1323 ]), &(acadoWorkspace.QE[ 1323 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QE[ 1372 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.QE[ 1421 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.QE[ 1470 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1519 ]), &(acadoWorkspace.QE[ 1519 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1568 ]), &(acadoWorkspace.QE[ 1568 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1617 ]), &(acadoWorkspace.QE[ 1617 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1666 ]), &(acadoWorkspace.QE[ 1666 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1715 ]), &(acadoWorkspace.QE[ 1715 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 1764 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QE[ 1813 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.QE[ 1862 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.QE[ 1911 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 1960 ]), &(acadoWorkspace.QE[ 1960 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 2009 ]), &(acadoWorkspace.QE[ 2009 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 2058 ]), &(acadoWorkspace.QE[ 2058 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 2107 ]), &(acadoWorkspace.QE[ 2107 ]) );
acado_multQ1Gu( &(acadoWorkspace.E[ 2156 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2205 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2254 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QE[ 2303 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.QE[ 2352 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2401 ]), &(acadoWorkspace.QE[ 2401 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2450 ]), &(acadoWorkspace.QE[ 2450 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2499 ]), &(acadoWorkspace.QE[ 2499 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2548 ]), &(acadoWorkspace.QE[ 2548 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2597 ]), &(acadoWorkspace.QE[ 2597 ]) );
acado_multQN1Gu( &(acadoWorkspace.E[ 2646 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_zeroBlockH10( acadoWorkspace.H10 );
acado_multQETGx( acadoWorkspace.QE, acadoWorkspace.evGx, acadoWorkspace.H10 );
acado_multQETGx( &(acadoWorkspace.QE[ 49 ]), &(acadoWorkspace.evGx[ 49 ]), acadoWorkspace.H10 );
acado_multQETGx( &(acadoWorkspace.QE[ 147 ]), &(acadoWorkspace.evGx[ 98 ]), acadoWorkspace.H10 );
acado_multQETGx( &(acadoWorkspace.QE[ 294 ]), &(acadoWorkspace.evGx[ 147 ]), acadoWorkspace.H10 );
acado_multQETGx( &(acadoWorkspace.QE[ 490 ]), &(acadoWorkspace.evGx[ 196 ]), acadoWorkspace.H10 );
acado_multQETGx( &(acadoWorkspace.QE[ 735 ]), &(acadoWorkspace.evGx[ 245 ]), acadoWorkspace.H10 );
acado_multQETGx( &(acadoWorkspace.QE[ 1029 ]), &(acadoWorkspace.evGx[ 294 ]), acadoWorkspace.H10 );
acado_multQETGx( &(acadoWorkspace.QE[ 1372 ]), &(acadoWorkspace.evGx[ 343 ]), acadoWorkspace.H10 );
acado_multQETGx( &(acadoWorkspace.QE[ 1764 ]), &(acadoWorkspace.evGx[ 392 ]), acadoWorkspace.H10 );
acado_multQETGx( &(acadoWorkspace.QE[ 2205 ]), &(acadoWorkspace.evGx[ 441 ]), acadoWorkspace.H10 );
acado_zeroBlockH10( &(acadoWorkspace.H10[ 49 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 98 ]), &(acadoWorkspace.evGx[ 49 ]), &(acadoWorkspace.H10[ 49 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 196 ]), &(acadoWorkspace.evGx[ 98 ]), &(acadoWorkspace.H10[ 49 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 343 ]), &(acadoWorkspace.evGx[ 147 ]), &(acadoWorkspace.H10[ 49 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 539 ]), &(acadoWorkspace.evGx[ 196 ]), &(acadoWorkspace.H10[ 49 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 784 ]), &(acadoWorkspace.evGx[ 245 ]), &(acadoWorkspace.H10[ 49 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1078 ]), &(acadoWorkspace.evGx[ 294 ]), &(acadoWorkspace.H10[ 49 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1421 ]), &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.H10[ 49 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1813 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.H10[ 49 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2254 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.H10[ 49 ]) );
acado_zeroBlockH10( &(acadoWorkspace.H10[ 98 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 245 ]), &(acadoWorkspace.evGx[ 98 ]), &(acadoWorkspace.H10[ 98 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 392 ]), &(acadoWorkspace.evGx[ 147 ]), &(acadoWorkspace.H10[ 98 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 588 ]), &(acadoWorkspace.evGx[ 196 ]), &(acadoWorkspace.H10[ 98 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 833 ]), &(acadoWorkspace.evGx[ 245 ]), &(acadoWorkspace.H10[ 98 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1127 ]), &(acadoWorkspace.evGx[ 294 ]), &(acadoWorkspace.H10[ 98 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1470 ]), &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.H10[ 98 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1862 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.H10[ 98 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2303 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.H10[ 98 ]) );
acado_zeroBlockH10( &(acadoWorkspace.H10[ 147 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 441 ]), &(acadoWorkspace.evGx[ 147 ]), &(acadoWorkspace.H10[ 147 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 637 ]), &(acadoWorkspace.evGx[ 196 ]), &(acadoWorkspace.H10[ 147 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 882 ]), &(acadoWorkspace.evGx[ 245 ]), &(acadoWorkspace.H10[ 147 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1176 ]), &(acadoWorkspace.evGx[ 294 ]), &(acadoWorkspace.H10[ 147 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1519 ]), &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.H10[ 147 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1911 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.H10[ 147 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2352 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.H10[ 147 ]) );
acado_zeroBlockH10( &(acadoWorkspace.H10[ 196 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 686 ]), &(acadoWorkspace.evGx[ 196 ]), &(acadoWorkspace.H10[ 196 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 931 ]), &(acadoWorkspace.evGx[ 245 ]), &(acadoWorkspace.H10[ 196 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1225 ]), &(acadoWorkspace.evGx[ 294 ]), &(acadoWorkspace.H10[ 196 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1568 ]), &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.H10[ 196 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1960 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.H10[ 196 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2401 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.H10[ 196 ]) );
acado_zeroBlockH10( &(acadoWorkspace.H10[ 245 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 980 ]), &(acadoWorkspace.evGx[ 245 ]), &(acadoWorkspace.H10[ 245 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1274 ]), &(acadoWorkspace.evGx[ 294 ]), &(acadoWorkspace.H10[ 245 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1617 ]), &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.H10[ 245 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2009 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.H10[ 245 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2450 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.H10[ 245 ]) );
acado_zeroBlockH10( &(acadoWorkspace.H10[ 294 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1323 ]), &(acadoWorkspace.evGx[ 294 ]), &(acadoWorkspace.H10[ 294 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1666 ]), &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.H10[ 294 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2058 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.H10[ 294 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2499 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.H10[ 294 ]) );
acado_zeroBlockH10( &(acadoWorkspace.H10[ 343 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 1715 ]), &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.H10[ 343 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2107 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.H10[ 343 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2548 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.H10[ 343 ]) );
acado_zeroBlockH10( &(acadoWorkspace.H10[ 392 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2156 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.H10[ 392 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2597 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.H10[ 392 ]) );
acado_zeroBlockH10( &(acadoWorkspace.H10[ 441 ]) );
acado_multQETGx( &(acadoWorkspace.QE[ 2646 ]), &(acadoWorkspace.evGx[ 441 ]), &(acadoWorkspace.H10[ 441 ]) );

acado_setBlockH11_R1( 0, 0 );
acado_setBlockH11( 0, 0, acadoWorkspace.E, acadoWorkspace.QE );
acado_setBlockH11( 0, 0, &(acadoWorkspace.E[ 49 ]), &(acadoWorkspace.QE[ 49 ]) );
acado_setBlockH11( 0, 0, &(acadoWorkspace.E[ 147 ]), &(acadoWorkspace.QE[ 147 ]) );
acado_setBlockH11( 0, 0, &(acadoWorkspace.E[ 294 ]), &(acadoWorkspace.QE[ 294 ]) );
acado_setBlockH11( 0, 0, &(acadoWorkspace.E[ 490 ]), &(acadoWorkspace.QE[ 490 ]) );
acado_setBlockH11( 0, 0, &(acadoWorkspace.E[ 735 ]), &(acadoWorkspace.QE[ 735 ]) );
acado_setBlockH11( 0, 0, &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.QE[ 1029 ]) );
acado_setBlockH11( 0, 0, &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QE[ 1372 ]) );
acado_setBlockH11( 0, 0, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 1764 ]) );
acado_setBlockH11( 0, 0, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2205 ]) );

acado_zeroBlockH11( 0, 1 );
acado_setBlockH11( 0, 1, &(acadoWorkspace.E[ 49 ]), &(acadoWorkspace.QE[ 98 ]) );
acado_setBlockH11( 0, 1, &(acadoWorkspace.E[ 147 ]), &(acadoWorkspace.QE[ 196 ]) );
acado_setBlockH11( 0, 1, &(acadoWorkspace.E[ 294 ]), &(acadoWorkspace.QE[ 343 ]) );
acado_setBlockH11( 0, 1, &(acadoWorkspace.E[ 490 ]), &(acadoWorkspace.QE[ 539 ]) );
acado_setBlockH11( 0, 1, &(acadoWorkspace.E[ 735 ]), &(acadoWorkspace.QE[ 784 ]) );
acado_setBlockH11( 0, 1, &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.QE[ 1078 ]) );
acado_setBlockH11( 0, 1, &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QE[ 1421 ]) );
acado_setBlockH11( 0, 1, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 1813 ]) );
acado_setBlockH11( 0, 1, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2254 ]) );

acado_zeroBlockH11( 0, 2 );
acado_setBlockH11( 0, 2, &(acadoWorkspace.E[ 147 ]), &(acadoWorkspace.QE[ 245 ]) );
acado_setBlockH11( 0, 2, &(acadoWorkspace.E[ 294 ]), &(acadoWorkspace.QE[ 392 ]) );
acado_setBlockH11( 0, 2, &(acadoWorkspace.E[ 490 ]), &(acadoWorkspace.QE[ 588 ]) );
acado_setBlockH11( 0, 2, &(acadoWorkspace.E[ 735 ]), &(acadoWorkspace.QE[ 833 ]) );
acado_setBlockH11( 0, 2, &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.QE[ 1127 ]) );
acado_setBlockH11( 0, 2, &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QE[ 1470 ]) );
acado_setBlockH11( 0, 2, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 1862 ]) );
acado_setBlockH11( 0, 2, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2303 ]) );

acado_zeroBlockH11( 0, 3 );
acado_setBlockH11( 0, 3, &(acadoWorkspace.E[ 294 ]), &(acadoWorkspace.QE[ 441 ]) );
acado_setBlockH11( 0, 3, &(acadoWorkspace.E[ 490 ]), &(acadoWorkspace.QE[ 637 ]) );
acado_setBlockH11( 0, 3, &(acadoWorkspace.E[ 735 ]), &(acadoWorkspace.QE[ 882 ]) );
acado_setBlockH11( 0, 3, &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.QE[ 1176 ]) );
acado_setBlockH11( 0, 3, &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QE[ 1519 ]) );
acado_setBlockH11( 0, 3, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 1911 ]) );
acado_setBlockH11( 0, 3, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2352 ]) );

acado_zeroBlockH11( 0, 4 );
acado_setBlockH11( 0, 4, &(acadoWorkspace.E[ 490 ]), &(acadoWorkspace.QE[ 686 ]) );
acado_setBlockH11( 0, 4, &(acadoWorkspace.E[ 735 ]), &(acadoWorkspace.QE[ 931 ]) );
acado_setBlockH11( 0, 4, &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.QE[ 1225 ]) );
acado_setBlockH11( 0, 4, &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QE[ 1568 ]) );
acado_setBlockH11( 0, 4, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 1960 ]) );
acado_setBlockH11( 0, 4, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2401 ]) );

acado_zeroBlockH11( 0, 5 );
acado_setBlockH11( 0, 5, &(acadoWorkspace.E[ 735 ]), &(acadoWorkspace.QE[ 980 ]) );
acado_setBlockH11( 0, 5, &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.QE[ 1274 ]) );
acado_setBlockH11( 0, 5, &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QE[ 1617 ]) );
acado_setBlockH11( 0, 5, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 2009 ]) );
acado_setBlockH11( 0, 5, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2450 ]) );

acado_zeroBlockH11( 0, 6 );
acado_setBlockH11( 0, 6, &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.QE[ 1323 ]) );
acado_setBlockH11( 0, 6, &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QE[ 1666 ]) );
acado_setBlockH11( 0, 6, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 2058 ]) );
acado_setBlockH11( 0, 6, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2499 ]) );

acado_zeroBlockH11( 0, 7 );
acado_setBlockH11( 0, 7, &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QE[ 1715 ]) );
acado_setBlockH11( 0, 7, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 2107 ]) );
acado_setBlockH11( 0, 7, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2548 ]) );

acado_zeroBlockH11( 0, 8 );
acado_setBlockH11( 0, 8, &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_setBlockH11( 0, 8, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2597 ]) );

acado_zeroBlockH11( 0, 9 );
acado_setBlockH11( 0, 9, &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_setBlockH11_R1( 1, 1 );
acado_setBlockH11( 1, 1, &(acadoWorkspace.E[ 98 ]), &(acadoWorkspace.QE[ 98 ]) );
acado_setBlockH11( 1, 1, &(acadoWorkspace.E[ 196 ]), &(acadoWorkspace.QE[ 196 ]) );
acado_setBlockH11( 1, 1, &(acadoWorkspace.E[ 343 ]), &(acadoWorkspace.QE[ 343 ]) );
acado_setBlockH11( 1, 1, &(acadoWorkspace.E[ 539 ]), &(acadoWorkspace.QE[ 539 ]) );
acado_setBlockH11( 1, 1, &(acadoWorkspace.E[ 784 ]), &(acadoWorkspace.QE[ 784 ]) );
acado_setBlockH11( 1, 1, &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.QE[ 1078 ]) );
acado_setBlockH11( 1, 1, &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.QE[ 1421 ]) );
acado_setBlockH11( 1, 1, &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QE[ 1813 ]) );
acado_setBlockH11( 1, 1, &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2254 ]) );

acado_zeroBlockH11( 1, 2 );
acado_setBlockH11( 1, 2, &(acadoWorkspace.E[ 196 ]), &(acadoWorkspace.QE[ 245 ]) );
acado_setBlockH11( 1, 2, &(acadoWorkspace.E[ 343 ]), &(acadoWorkspace.QE[ 392 ]) );
acado_setBlockH11( 1, 2, &(acadoWorkspace.E[ 539 ]), &(acadoWorkspace.QE[ 588 ]) );
acado_setBlockH11( 1, 2, &(acadoWorkspace.E[ 784 ]), &(acadoWorkspace.QE[ 833 ]) );
acado_setBlockH11( 1, 2, &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.QE[ 1127 ]) );
acado_setBlockH11( 1, 2, &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.QE[ 1470 ]) );
acado_setBlockH11( 1, 2, &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QE[ 1862 ]) );
acado_setBlockH11( 1, 2, &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2303 ]) );

acado_zeroBlockH11( 1, 3 );
acado_setBlockH11( 1, 3, &(acadoWorkspace.E[ 343 ]), &(acadoWorkspace.QE[ 441 ]) );
acado_setBlockH11( 1, 3, &(acadoWorkspace.E[ 539 ]), &(acadoWorkspace.QE[ 637 ]) );
acado_setBlockH11( 1, 3, &(acadoWorkspace.E[ 784 ]), &(acadoWorkspace.QE[ 882 ]) );
acado_setBlockH11( 1, 3, &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.QE[ 1176 ]) );
acado_setBlockH11( 1, 3, &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.QE[ 1519 ]) );
acado_setBlockH11( 1, 3, &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QE[ 1911 ]) );
acado_setBlockH11( 1, 3, &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2352 ]) );

acado_zeroBlockH11( 1, 4 );
acado_setBlockH11( 1, 4, &(acadoWorkspace.E[ 539 ]), &(acadoWorkspace.QE[ 686 ]) );
acado_setBlockH11( 1, 4, &(acadoWorkspace.E[ 784 ]), &(acadoWorkspace.QE[ 931 ]) );
acado_setBlockH11( 1, 4, &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.QE[ 1225 ]) );
acado_setBlockH11( 1, 4, &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.QE[ 1568 ]) );
acado_setBlockH11( 1, 4, &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QE[ 1960 ]) );
acado_setBlockH11( 1, 4, &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2401 ]) );

acado_zeroBlockH11( 1, 5 );
acado_setBlockH11( 1, 5, &(acadoWorkspace.E[ 784 ]), &(acadoWorkspace.QE[ 980 ]) );
acado_setBlockH11( 1, 5, &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.QE[ 1274 ]) );
acado_setBlockH11( 1, 5, &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.QE[ 1617 ]) );
acado_setBlockH11( 1, 5, &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QE[ 2009 ]) );
acado_setBlockH11( 1, 5, &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2450 ]) );

acado_zeroBlockH11( 1, 6 );
acado_setBlockH11( 1, 6, &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.QE[ 1323 ]) );
acado_setBlockH11( 1, 6, &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.QE[ 1666 ]) );
acado_setBlockH11( 1, 6, &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QE[ 2058 ]) );
acado_setBlockH11( 1, 6, &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2499 ]) );

acado_zeroBlockH11( 1, 7 );
acado_setBlockH11( 1, 7, &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.QE[ 1715 ]) );
acado_setBlockH11( 1, 7, &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QE[ 2107 ]) );
acado_setBlockH11( 1, 7, &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2548 ]) );

acado_zeroBlockH11( 1, 8 );
acado_setBlockH11( 1, 8, &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_setBlockH11( 1, 8, &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2597 ]) );

acado_zeroBlockH11( 1, 9 );
acado_setBlockH11( 1, 9, &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_setBlockH11_R1( 2, 2 );
acado_setBlockH11( 2, 2, &(acadoWorkspace.E[ 245 ]), &(acadoWorkspace.QE[ 245 ]) );
acado_setBlockH11( 2, 2, &(acadoWorkspace.E[ 392 ]), &(acadoWorkspace.QE[ 392 ]) );
acado_setBlockH11( 2, 2, &(acadoWorkspace.E[ 588 ]), &(acadoWorkspace.QE[ 588 ]) );
acado_setBlockH11( 2, 2, &(acadoWorkspace.E[ 833 ]), &(acadoWorkspace.QE[ 833 ]) );
acado_setBlockH11( 2, 2, &(acadoWorkspace.E[ 1127 ]), &(acadoWorkspace.QE[ 1127 ]) );
acado_setBlockH11( 2, 2, &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.QE[ 1470 ]) );
acado_setBlockH11( 2, 2, &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.QE[ 1862 ]) );
acado_setBlockH11( 2, 2, &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QE[ 2303 ]) );

acado_zeroBlockH11( 2, 3 );
acado_setBlockH11( 2, 3, &(acadoWorkspace.E[ 392 ]), &(acadoWorkspace.QE[ 441 ]) );
acado_setBlockH11( 2, 3, &(acadoWorkspace.E[ 588 ]), &(acadoWorkspace.QE[ 637 ]) );
acado_setBlockH11( 2, 3, &(acadoWorkspace.E[ 833 ]), &(acadoWorkspace.QE[ 882 ]) );
acado_setBlockH11( 2, 3, &(acadoWorkspace.E[ 1127 ]), &(acadoWorkspace.QE[ 1176 ]) );
acado_setBlockH11( 2, 3, &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.QE[ 1519 ]) );
acado_setBlockH11( 2, 3, &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.QE[ 1911 ]) );
acado_setBlockH11( 2, 3, &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QE[ 2352 ]) );

acado_zeroBlockH11( 2, 4 );
acado_setBlockH11( 2, 4, &(acadoWorkspace.E[ 588 ]), &(acadoWorkspace.QE[ 686 ]) );
acado_setBlockH11( 2, 4, &(acadoWorkspace.E[ 833 ]), &(acadoWorkspace.QE[ 931 ]) );
acado_setBlockH11( 2, 4, &(acadoWorkspace.E[ 1127 ]), &(acadoWorkspace.QE[ 1225 ]) );
acado_setBlockH11( 2, 4, &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.QE[ 1568 ]) );
acado_setBlockH11( 2, 4, &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.QE[ 1960 ]) );
acado_setBlockH11( 2, 4, &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QE[ 2401 ]) );

acado_zeroBlockH11( 2, 5 );
acado_setBlockH11( 2, 5, &(acadoWorkspace.E[ 833 ]), &(acadoWorkspace.QE[ 980 ]) );
acado_setBlockH11( 2, 5, &(acadoWorkspace.E[ 1127 ]), &(acadoWorkspace.QE[ 1274 ]) );
acado_setBlockH11( 2, 5, &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.QE[ 1617 ]) );
acado_setBlockH11( 2, 5, &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.QE[ 2009 ]) );
acado_setBlockH11( 2, 5, &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QE[ 2450 ]) );

acado_zeroBlockH11( 2, 6 );
acado_setBlockH11( 2, 6, &(acadoWorkspace.E[ 1127 ]), &(acadoWorkspace.QE[ 1323 ]) );
acado_setBlockH11( 2, 6, &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.QE[ 1666 ]) );
acado_setBlockH11( 2, 6, &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.QE[ 2058 ]) );
acado_setBlockH11( 2, 6, &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QE[ 2499 ]) );

acado_zeroBlockH11( 2, 7 );
acado_setBlockH11( 2, 7, &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.QE[ 1715 ]) );
acado_setBlockH11( 2, 7, &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.QE[ 2107 ]) );
acado_setBlockH11( 2, 7, &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QE[ 2548 ]) );

acado_zeroBlockH11( 2, 8 );
acado_setBlockH11( 2, 8, &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_setBlockH11( 2, 8, &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QE[ 2597 ]) );

acado_zeroBlockH11( 2, 9 );
acado_setBlockH11( 2, 9, &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_setBlockH11_R1( 3, 3 );
acado_setBlockH11( 3, 3, &(acadoWorkspace.E[ 441 ]), &(acadoWorkspace.QE[ 441 ]) );
acado_setBlockH11( 3, 3, &(acadoWorkspace.E[ 637 ]), &(acadoWorkspace.QE[ 637 ]) );
acado_setBlockH11( 3, 3, &(acadoWorkspace.E[ 882 ]), &(acadoWorkspace.QE[ 882 ]) );
acado_setBlockH11( 3, 3, &(acadoWorkspace.E[ 1176 ]), &(acadoWorkspace.QE[ 1176 ]) );
acado_setBlockH11( 3, 3, &(acadoWorkspace.E[ 1519 ]), &(acadoWorkspace.QE[ 1519 ]) );
acado_setBlockH11( 3, 3, &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.QE[ 1911 ]) );
acado_setBlockH11( 3, 3, &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.QE[ 2352 ]) );

acado_zeroBlockH11( 3, 4 );
acado_setBlockH11( 3, 4, &(acadoWorkspace.E[ 637 ]), &(acadoWorkspace.QE[ 686 ]) );
acado_setBlockH11( 3, 4, &(acadoWorkspace.E[ 882 ]), &(acadoWorkspace.QE[ 931 ]) );
acado_setBlockH11( 3, 4, &(acadoWorkspace.E[ 1176 ]), &(acadoWorkspace.QE[ 1225 ]) );
acado_setBlockH11( 3, 4, &(acadoWorkspace.E[ 1519 ]), &(acadoWorkspace.QE[ 1568 ]) );
acado_setBlockH11( 3, 4, &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.QE[ 1960 ]) );
acado_setBlockH11( 3, 4, &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.QE[ 2401 ]) );

acado_zeroBlockH11( 3, 5 );
acado_setBlockH11( 3, 5, &(acadoWorkspace.E[ 882 ]), &(acadoWorkspace.QE[ 980 ]) );
acado_setBlockH11( 3, 5, &(acadoWorkspace.E[ 1176 ]), &(acadoWorkspace.QE[ 1274 ]) );
acado_setBlockH11( 3, 5, &(acadoWorkspace.E[ 1519 ]), &(acadoWorkspace.QE[ 1617 ]) );
acado_setBlockH11( 3, 5, &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.QE[ 2009 ]) );
acado_setBlockH11( 3, 5, &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.QE[ 2450 ]) );

acado_zeroBlockH11( 3, 6 );
acado_setBlockH11( 3, 6, &(acadoWorkspace.E[ 1176 ]), &(acadoWorkspace.QE[ 1323 ]) );
acado_setBlockH11( 3, 6, &(acadoWorkspace.E[ 1519 ]), &(acadoWorkspace.QE[ 1666 ]) );
acado_setBlockH11( 3, 6, &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.QE[ 2058 ]) );
acado_setBlockH11( 3, 6, &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.QE[ 2499 ]) );

acado_zeroBlockH11( 3, 7 );
acado_setBlockH11( 3, 7, &(acadoWorkspace.E[ 1519 ]), &(acadoWorkspace.QE[ 1715 ]) );
acado_setBlockH11( 3, 7, &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.QE[ 2107 ]) );
acado_setBlockH11( 3, 7, &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.QE[ 2548 ]) );

acado_zeroBlockH11( 3, 8 );
acado_setBlockH11( 3, 8, &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_setBlockH11( 3, 8, &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.QE[ 2597 ]) );

acado_zeroBlockH11( 3, 9 );
acado_setBlockH11( 3, 9, &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_setBlockH11_R1( 4, 4 );
acado_setBlockH11( 4, 4, &(acadoWorkspace.E[ 686 ]), &(acadoWorkspace.QE[ 686 ]) );
acado_setBlockH11( 4, 4, &(acadoWorkspace.E[ 931 ]), &(acadoWorkspace.QE[ 931 ]) );
acado_setBlockH11( 4, 4, &(acadoWorkspace.E[ 1225 ]), &(acadoWorkspace.QE[ 1225 ]) );
acado_setBlockH11( 4, 4, &(acadoWorkspace.E[ 1568 ]), &(acadoWorkspace.QE[ 1568 ]) );
acado_setBlockH11( 4, 4, &(acadoWorkspace.E[ 1960 ]), &(acadoWorkspace.QE[ 1960 ]) );
acado_setBlockH11( 4, 4, &(acadoWorkspace.E[ 2401 ]), &(acadoWorkspace.QE[ 2401 ]) );

acado_zeroBlockH11( 4, 5 );
acado_setBlockH11( 4, 5, &(acadoWorkspace.E[ 931 ]), &(acadoWorkspace.QE[ 980 ]) );
acado_setBlockH11( 4, 5, &(acadoWorkspace.E[ 1225 ]), &(acadoWorkspace.QE[ 1274 ]) );
acado_setBlockH11( 4, 5, &(acadoWorkspace.E[ 1568 ]), &(acadoWorkspace.QE[ 1617 ]) );
acado_setBlockH11( 4, 5, &(acadoWorkspace.E[ 1960 ]), &(acadoWorkspace.QE[ 2009 ]) );
acado_setBlockH11( 4, 5, &(acadoWorkspace.E[ 2401 ]), &(acadoWorkspace.QE[ 2450 ]) );

acado_zeroBlockH11( 4, 6 );
acado_setBlockH11( 4, 6, &(acadoWorkspace.E[ 1225 ]), &(acadoWorkspace.QE[ 1323 ]) );
acado_setBlockH11( 4, 6, &(acadoWorkspace.E[ 1568 ]), &(acadoWorkspace.QE[ 1666 ]) );
acado_setBlockH11( 4, 6, &(acadoWorkspace.E[ 1960 ]), &(acadoWorkspace.QE[ 2058 ]) );
acado_setBlockH11( 4, 6, &(acadoWorkspace.E[ 2401 ]), &(acadoWorkspace.QE[ 2499 ]) );

acado_zeroBlockH11( 4, 7 );
acado_setBlockH11( 4, 7, &(acadoWorkspace.E[ 1568 ]), &(acadoWorkspace.QE[ 1715 ]) );
acado_setBlockH11( 4, 7, &(acadoWorkspace.E[ 1960 ]), &(acadoWorkspace.QE[ 2107 ]) );
acado_setBlockH11( 4, 7, &(acadoWorkspace.E[ 2401 ]), &(acadoWorkspace.QE[ 2548 ]) );

acado_zeroBlockH11( 4, 8 );
acado_setBlockH11( 4, 8, &(acadoWorkspace.E[ 1960 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_setBlockH11( 4, 8, &(acadoWorkspace.E[ 2401 ]), &(acadoWorkspace.QE[ 2597 ]) );

acado_zeroBlockH11( 4, 9 );
acado_setBlockH11( 4, 9, &(acadoWorkspace.E[ 2401 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_setBlockH11_R1( 5, 5 );
acado_setBlockH11( 5, 5, &(acadoWorkspace.E[ 980 ]), &(acadoWorkspace.QE[ 980 ]) );
acado_setBlockH11( 5, 5, &(acadoWorkspace.E[ 1274 ]), &(acadoWorkspace.QE[ 1274 ]) );
acado_setBlockH11( 5, 5, &(acadoWorkspace.E[ 1617 ]), &(acadoWorkspace.QE[ 1617 ]) );
acado_setBlockH11( 5, 5, &(acadoWorkspace.E[ 2009 ]), &(acadoWorkspace.QE[ 2009 ]) );
acado_setBlockH11( 5, 5, &(acadoWorkspace.E[ 2450 ]), &(acadoWorkspace.QE[ 2450 ]) );

acado_zeroBlockH11( 5, 6 );
acado_setBlockH11( 5, 6, &(acadoWorkspace.E[ 1274 ]), &(acadoWorkspace.QE[ 1323 ]) );
acado_setBlockH11( 5, 6, &(acadoWorkspace.E[ 1617 ]), &(acadoWorkspace.QE[ 1666 ]) );
acado_setBlockH11( 5, 6, &(acadoWorkspace.E[ 2009 ]), &(acadoWorkspace.QE[ 2058 ]) );
acado_setBlockH11( 5, 6, &(acadoWorkspace.E[ 2450 ]), &(acadoWorkspace.QE[ 2499 ]) );

acado_zeroBlockH11( 5, 7 );
acado_setBlockH11( 5, 7, &(acadoWorkspace.E[ 1617 ]), &(acadoWorkspace.QE[ 1715 ]) );
acado_setBlockH11( 5, 7, &(acadoWorkspace.E[ 2009 ]), &(acadoWorkspace.QE[ 2107 ]) );
acado_setBlockH11( 5, 7, &(acadoWorkspace.E[ 2450 ]), &(acadoWorkspace.QE[ 2548 ]) );

acado_zeroBlockH11( 5, 8 );
acado_setBlockH11( 5, 8, &(acadoWorkspace.E[ 2009 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_setBlockH11( 5, 8, &(acadoWorkspace.E[ 2450 ]), &(acadoWorkspace.QE[ 2597 ]) );

acado_zeroBlockH11( 5, 9 );
acado_setBlockH11( 5, 9, &(acadoWorkspace.E[ 2450 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_setBlockH11_R1( 6, 6 );
acado_setBlockH11( 6, 6, &(acadoWorkspace.E[ 1323 ]), &(acadoWorkspace.QE[ 1323 ]) );
acado_setBlockH11( 6, 6, &(acadoWorkspace.E[ 1666 ]), &(acadoWorkspace.QE[ 1666 ]) );
acado_setBlockH11( 6, 6, &(acadoWorkspace.E[ 2058 ]), &(acadoWorkspace.QE[ 2058 ]) );
acado_setBlockH11( 6, 6, &(acadoWorkspace.E[ 2499 ]), &(acadoWorkspace.QE[ 2499 ]) );

acado_zeroBlockH11( 6, 7 );
acado_setBlockH11( 6, 7, &(acadoWorkspace.E[ 1666 ]), &(acadoWorkspace.QE[ 1715 ]) );
acado_setBlockH11( 6, 7, &(acadoWorkspace.E[ 2058 ]), &(acadoWorkspace.QE[ 2107 ]) );
acado_setBlockH11( 6, 7, &(acadoWorkspace.E[ 2499 ]), &(acadoWorkspace.QE[ 2548 ]) );

acado_zeroBlockH11( 6, 8 );
acado_setBlockH11( 6, 8, &(acadoWorkspace.E[ 2058 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_setBlockH11( 6, 8, &(acadoWorkspace.E[ 2499 ]), &(acadoWorkspace.QE[ 2597 ]) );

acado_zeroBlockH11( 6, 9 );
acado_setBlockH11( 6, 9, &(acadoWorkspace.E[ 2499 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_setBlockH11_R1( 7, 7 );
acado_setBlockH11( 7, 7, &(acadoWorkspace.E[ 1715 ]), &(acadoWorkspace.QE[ 1715 ]) );
acado_setBlockH11( 7, 7, &(acadoWorkspace.E[ 2107 ]), &(acadoWorkspace.QE[ 2107 ]) );
acado_setBlockH11( 7, 7, &(acadoWorkspace.E[ 2548 ]), &(acadoWorkspace.QE[ 2548 ]) );

acado_zeroBlockH11( 7, 8 );
acado_setBlockH11( 7, 8, &(acadoWorkspace.E[ 2107 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_setBlockH11( 7, 8, &(acadoWorkspace.E[ 2548 ]), &(acadoWorkspace.QE[ 2597 ]) );

acado_zeroBlockH11( 7, 9 );
acado_setBlockH11( 7, 9, &(acadoWorkspace.E[ 2548 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_setBlockH11_R1( 8, 8 );
acado_setBlockH11( 8, 8, &(acadoWorkspace.E[ 2156 ]), &(acadoWorkspace.QE[ 2156 ]) );
acado_setBlockH11( 8, 8, &(acadoWorkspace.E[ 2597 ]), &(acadoWorkspace.QE[ 2597 ]) );

acado_zeroBlockH11( 8, 9 );
acado_setBlockH11( 8, 9, &(acadoWorkspace.E[ 2597 ]), &(acadoWorkspace.QE[ 2646 ]) );

acado_setBlockH11_R1( 9, 9 );
acado_setBlockH11( 9, 9, &(acadoWorkspace.E[ 2646 ]), &(acadoWorkspace.QE[ 2646 ]) );


acado_copyHTH( 1, 0 );
acado_copyHTH( 2, 0 );
acado_copyHTH( 2, 1 );
acado_copyHTH( 3, 0 );
acado_copyHTH( 3, 1 );
acado_copyHTH( 3, 2 );
acado_copyHTH( 4, 0 );
acado_copyHTH( 4, 1 );
acado_copyHTH( 4, 2 );
acado_copyHTH( 4, 3 );
acado_copyHTH( 5, 0 );
acado_copyHTH( 5, 1 );
acado_copyHTH( 5, 2 );
acado_copyHTH( 5, 3 );
acado_copyHTH( 5, 4 );
acado_copyHTH( 6, 0 );
acado_copyHTH( 6, 1 );
acado_copyHTH( 6, 2 );
acado_copyHTH( 6, 3 );
acado_copyHTH( 6, 4 );
acado_copyHTH( 6, 5 );
acado_copyHTH( 7, 0 );
acado_copyHTH( 7, 1 );
acado_copyHTH( 7, 2 );
acado_copyHTH( 7, 3 );
acado_copyHTH( 7, 4 );
acado_copyHTH( 7, 5 );
acado_copyHTH( 7, 6 );
acado_copyHTH( 8, 0 );
acado_copyHTH( 8, 1 );
acado_copyHTH( 8, 2 );
acado_copyHTH( 8, 3 );
acado_copyHTH( 8, 4 );
acado_copyHTH( 8, 5 );
acado_copyHTH( 8, 6 );
acado_copyHTH( 8, 7 );
acado_copyHTH( 9, 0 );
acado_copyHTH( 9, 1 );
acado_copyHTH( 9, 2 );
acado_copyHTH( 9, 3 );
acado_copyHTH( 9, 4 );
acado_copyHTH( 9, 5 );
acado_copyHTH( 9, 6 );
acado_copyHTH( 9, 7 );
acado_copyHTH( 9, 8 );

acado_multQ1d( acadoWorkspace.d, acadoWorkspace.Qd );
acado_multQ1d( &(acadoWorkspace.d[ 7 ]), &(acadoWorkspace.Qd[ 7 ]) );
acado_multQ1d( &(acadoWorkspace.d[ 14 ]), &(acadoWorkspace.Qd[ 14 ]) );
acado_multQ1d( &(acadoWorkspace.d[ 21 ]), &(acadoWorkspace.Qd[ 21 ]) );
acado_multQ1d( &(acadoWorkspace.d[ 28 ]), &(acadoWorkspace.Qd[ 28 ]) );
acado_multQ1d( &(acadoWorkspace.d[ 35 ]), &(acadoWorkspace.Qd[ 35 ]) );
acado_multQ1d( &(acadoWorkspace.d[ 42 ]), &(acadoWorkspace.Qd[ 42 ]) );
acado_multQ1d( &(acadoWorkspace.d[ 49 ]), &(acadoWorkspace.Qd[ 49 ]) );
acado_multQ1d( &(acadoWorkspace.d[ 56 ]), &(acadoWorkspace.Qd[ 56 ]) );
acado_multQN1d( &(acadoWorkspace.d[ 63 ]), &(acadoWorkspace.Qd[ 63 ]) );

acado_macETSlu( acadoWorkspace.QE, acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 49 ]), acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 147 ]), acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 294 ]), acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 490 ]), acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 735 ]), acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 1029 ]), acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 1372 ]), acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 1764 ]), acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 2205 ]), acadoWorkspace.g );
acado_macETSlu( &(acadoWorkspace.QE[ 98 ]), &(acadoWorkspace.g[ 7 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 196 ]), &(acadoWorkspace.g[ 7 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 343 ]), &(acadoWorkspace.g[ 7 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 539 ]), &(acadoWorkspace.g[ 7 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 784 ]), &(acadoWorkspace.g[ 7 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1078 ]), &(acadoWorkspace.g[ 7 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1421 ]), &(acadoWorkspace.g[ 7 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1813 ]), &(acadoWorkspace.g[ 7 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2254 ]), &(acadoWorkspace.g[ 7 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 245 ]), &(acadoWorkspace.g[ 14 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 392 ]), &(acadoWorkspace.g[ 14 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 588 ]), &(acadoWorkspace.g[ 14 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 833 ]), &(acadoWorkspace.g[ 14 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1127 ]), &(acadoWorkspace.g[ 14 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1470 ]), &(acadoWorkspace.g[ 14 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1862 ]), &(acadoWorkspace.g[ 14 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2303 ]), &(acadoWorkspace.g[ 14 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 441 ]), &(acadoWorkspace.g[ 21 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 637 ]), &(acadoWorkspace.g[ 21 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 882 ]), &(acadoWorkspace.g[ 21 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1176 ]), &(acadoWorkspace.g[ 21 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1519 ]), &(acadoWorkspace.g[ 21 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1911 ]), &(acadoWorkspace.g[ 21 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2352 ]), &(acadoWorkspace.g[ 21 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 686 ]), &(acadoWorkspace.g[ 28 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 931 ]), &(acadoWorkspace.g[ 28 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1225 ]), &(acadoWorkspace.g[ 28 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1568 ]), &(acadoWorkspace.g[ 28 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1960 ]), &(acadoWorkspace.g[ 28 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2401 ]), &(acadoWorkspace.g[ 28 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 980 ]), &(acadoWorkspace.g[ 35 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1274 ]), &(acadoWorkspace.g[ 35 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1617 ]), &(acadoWorkspace.g[ 35 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2009 ]), &(acadoWorkspace.g[ 35 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2450 ]), &(acadoWorkspace.g[ 35 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1323 ]), &(acadoWorkspace.g[ 42 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1666 ]), &(acadoWorkspace.g[ 42 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2058 ]), &(acadoWorkspace.g[ 42 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2499 ]), &(acadoWorkspace.g[ 42 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 1715 ]), &(acadoWorkspace.g[ 49 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2107 ]), &(acadoWorkspace.g[ 49 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2548 ]), &(acadoWorkspace.g[ 49 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2156 ]), &(acadoWorkspace.g[ 56 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2597 ]), &(acadoWorkspace.g[ 56 ]) );
acado_macETSlu( &(acadoWorkspace.QE[ 2646 ]), &(acadoWorkspace.g[ 63 ]) );
acadoWorkspace.lb[0] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[0];
acadoWorkspace.lb[1] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[1];
acadoWorkspace.lb[2] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[2];
acadoWorkspace.lb[3] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[3];
acadoWorkspace.lb[4] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[4];
acadoWorkspace.lb[5] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[5];
acadoWorkspace.lb[6] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[6];
acadoWorkspace.lb[7] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[7];
acadoWorkspace.lb[8] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[8];
acadoWorkspace.lb[9] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[9];
acadoWorkspace.lb[10] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[10];
acadoWorkspace.lb[11] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[11];
acadoWorkspace.lb[12] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[12];
acadoWorkspace.lb[13] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[13];
acadoWorkspace.lb[14] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[14];
acadoWorkspace.lb[15] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[15];
acadoWorkspace.lb[16] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[16];
acadoWorkspace.lb[17] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[17];
acadoWorkspace.lb[18] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[18];
acadoWorkspace.lb[19] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[19];
acadoWorkspace.lb[20] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[20];
acadoWorkspace.lb[21] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[21];
acadoWorkspace.lb[22] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[22];
acadoWorkspace.lb[23] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[23];
acadoWorkspace.lb[24] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[24];
acadoWorkspace.lb[25] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[25];
acadoWorkspace.lb[26] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[26];
acadoWorkspace.lb[27] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[27];
acadoWorkspace.lb[28] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[28];
acadoWorkspace.lb[29] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[29];
acadoWorkspace.lb[30] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[30];
acadoWorkspace.lb[31] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[31];
acadoWorkspace.lb[32] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[32];
acadoWorkspace.lb[33] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[33];
acadoWorkspace.lb[34] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[34];
acadoWorkspace.lb[35] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[35];
acadoWorkspace.lb[36] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[36];
acadoWorkspace.lb[37] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[37];
acadoWorkspace.lb[38] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[38];
acadoWorkspace.lb[39] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[39];
acadoWorkspace.lb[40] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[40];
acadoWorkspace.lb[41] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[41];
acadoWorkspace.lb[42] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[42];
acadoWorkspace.lb[43] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[43];
acadoWorkspace.lb[44] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[44];
acadoWorkspace.lb[45] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[45];
acadoWorkspace.lb[46] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[46];
acadoWorkspace.lb[47] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[47];
acadoWorkspace.lb[48] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[48];
acadoWorkspace.lb[49] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[49];
acadoWorkspace.lb[50] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[50];
acadoWorkspace.lb[51] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[51];
acadoWorkspace.lb[52] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[52];
acadoWorkspace.lb[53] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[53];
acadoWorkspace.lb[54] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[54];
acadoWorkspace.lb[55] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[55];
acadoWorkspace.lb[56] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[56];
acadoWorkspace.lb[57] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[57];
acadoWorkspace.lb[58] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[58];
acadoWorkspace.lb[59] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[59];
acadoWorkspace.lb[60] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[60];
acadoWorkspace.lb[61] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[61];
acadoWorkspace.lb[62] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[62];
acadoWorkspace.lb[63] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[63];
acadoWorkspace.lb[64] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[64];
acadoWorkspace.lb[65] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[65];
acadoWorkspace.lb[66] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[66];
acadoWorkspace.lb[67] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[67];
acadoWorkspace.lb[68] = (real_t)-1.2000000000000000e+00 - acadoVariables.u[68];
acadoWorkspace.lb[69] = (real_t)-1.0000000000000000e+12 - acadoVariables.u[69];
acadoWorkspace.ub[0] = (real_t)1.2000000000000000e+00 - acadoVariables.u[0];
acadoWorkspace.ub[1] = (real_t)1.2000000000000000e+00 - acadoVariables.u[1];
acadoWorkspace.ub[2] = (real_t)1.2000000000000000e+00 - acadoVariables.u[2];
acadoWorkspace.ub[3] = (real_t)1.2000000000000000e+00 - acadoVariables.u[3];
acadoWorkspace.ub[4] = (real_t)1.2000000000000000e+00 - acadoVariables.u[4];
acadoWorkspace.ub[5] = (real_t)1.2000000000000000e+00 - acadoVariables.u[5];
acadoWorkspace.ub[6] = (real_t)1.0000000000000000e+12 - acadoVariables.u[6];
acadoWorkspace.ub[7] = (real_t)1.2000000000000000e+00 - acadoVariables.u[7];
acadoWorkspace.ub[8] = (real_t)1.2000000000000000e+00 - acadoVariables.u[8];
acadoWorkspace.ub[9] = (real_t)1.2000000000000000e+00 - acadoVariables.u[9];
acadoWorkspace.ub[10] = (real_t)1.2000000000000000e+00 - acadoVariables.u[10];
acadoWorkspace.ub[11] = (real_t)1.2000000000000000e+00 - acadoVariables.u[11];
acadoWorkspace.ub[12] = (real_t)1.2000000000000000e+00 - acadoVariables.u[12];
acadoWorkspace.ub[13] = (real_t)1.0000000000000000e+12 - acadoVariables.u[13];
acadoWorkspace.ub[14] = (real_t)1.2000000000000000e+00 - acadoVariables.u[14];
acadoWorkspace.ub[15] = (real_t)1.2000000000000000e+00 - acadoVariables.u[15];
acadoWorkspace.ub[16] = (real_t)1.2000000000000000e+00 - acadoVariables.u[16];
acadoWorkspace.ub[17] = (real_t)1.2000000000000000e+00 - acadoVariables.u[17];
acadoWorkspace.ub[18] = (real_t)1.2000000000000000e+00 - acadoVariables.u[18];
acadoWorkspace.ub[19] = (real_t)1.2000000000000000e+00 - acadoVariables.u[19];
acadoWorkspace.ub[20] = (real_t)1.0000000000000000e+12 - acadoVariables.u[20];
acadoWorkspace.ub[21] = (real_t)1.2000000000000000e+00 - acadoVariables.u[21];
acadoWorkspace.ub[22] = (real_t)1.2000000000000000e+00 - acadoVariables.u[22];
acadoWorkspace.ub[23] = (real_t)1.2000000000000000e+00 - acadoVariables.u[23];
acadoWorkspace.ub[24] = (real_t)1.2000000000000000e+00 - acadoVariables.u[24];
acadoWorkspace.ub[25] = (real_t)1.2000000000000000e+00 - acadoVariables.u[25];
acadoWorkspace.ub[26] = (real_t)1.2000000000000000e+00 - acadoVariables.u[26];
acadoWorkspace.ub[27] = (real_t)1.0000000000000000e+12 - acadoVariables.u[27];
acadoWorkspace.ub[28] = (real_t)1.2000000000000000e+00 - acadoVariables.u[28];
acadoWorkspace.ub[29] = (real_t)1.2000000000000000e+00 - acadoVariables.u[29];
acadoWorkspace.ub[30] = (real_t)1.2000000000000000e+00 - acadoVariables.u[30];
acadoWorkspace.ub[31] = (real_t)1.2000000000000000e+00 - acadoVariables.u[31];
acadoWorkspace.ub[32] = (real_t)1.2000000000000000e+00 - acadoVariables.u[32];
acadoWorkspace.ub[33] = (real_t)1.2000000000000000e+00 - acadoVariables.u[33];
acadoWorkspace.ub[34] = (real_t)1.0000000000000000e+12 - acadoVariables.u[34];
acadoWorkspace.ub[35] = (real_t)1.2000000000000000e+00 - acadoVariables.u[35];
acadoWorkspace.ub[36] = (real_t)1.2000000000000000e+00 - acadoVariables.u[36];
acadoWorkspace.ub[37] = (real_t)1.2000000000000000e+00 - acadoVariables.u[37];
acadoWorkspace.ub[38] = (real_t)1.2000000000000000e+00 - acadoVariables.u[38];
acadoWorkspace.ub[39] = (real_t)1.2000000000000000e+00 - acadoVariables.u[39];
acadoWorkspace.ub[40] = (real_t)1.2000000000000000e+00 - acadoVariables.u[40];
acadoWorkspace.ub[41] = (real_t)1.0000000000000000e+12 - acadoVariables.u[41];
acadoWorkspace.ub[42] = (real_t)1.2000000000000000e+00 - acadoVariables.u[42];
acadoWorkspace.ub[43] = (real_t)1.2000000000000000e+00 - acadoVariables.u[43];
acadoWorkspace.ub[44] = (real_t)1.2000000000000000e+00 - acadoVariables.u[44];
acadoWorkspace.ub[45] = (real_t)1.2000000000000000e+00 - acadoVariables.u[45];
acadoWorkspace.ub[46] = (real_t)1.2000000000000000e+00 - acadoVariables.u[46];
acadoWorkspace.ub[47] = (real_t)1.2000000000000000e+00 - acadoVariables.u[47];
acadoWorkspace.ub[48] = (real_t)1.0000000000000000e+12 - acadoVariables.u[48];
acadoWorkspace.ub[49] = (real_t)1.2000000000000000e+00 - acadoVariables.u[49];
acadoWorkspace.ub[50] = (real_t)1.2000000000000000e+00 - acadoVariables.u[50];
acadoWorkspace.ub[51] = (real_t)1.2000000000000000e+00 - acadoVariables.u[51];
acadoWorkspace.ub[52] = (real_t)1.2000000000000000e+00 - acadoVariables.u[52];
acadoWorkspace.ub[53] = (real_t)1.2000000000000000e+00 - acadoVariables.u[53];
acadoWorkspace.ub[54] = (real_t)1.2000000000000000e+00 - acadoVariables.u[54];
acadoWorkspace.ub[55] = (real_t)1.0000000000000000e+12 - acadoVariables.u[55];
acadoWorkspace.ub[56] = (real_t)1.2000000000000000e+00 - acadoVariables.u[56];
acadoWorkspace.ub[57] = (real_t)1.2000000000000000e+00 - acadoVariables.u[57];
acadoWorkspace.ub[58] = (real_t)1.2000000000000000e+00 - acadoVariables.u[58];
acadoWorkspace.ub[59] = (real_t)1.2000000000000000e+00 - acadoVariables.u[59];
acadoWorkspace.ub[60] = (real_t)1.2000000000000000e+00 - acadoVariables.u[60];
acadoWorkspace.ub[61] = (real_t)1.2000000000000000e+00 - acadoVariables.u[61];
acadoWorkspace.ub[62] = (real_t)1.0000000000000000e+12 - acadoVariables.u[62];
acadoWorkspace.ub[63] = (real_t)1.2000000000000000e+00 - acadoVariables.u[63];
acadoWorkspace.ub[64] = (real_t)1.2000000000000000e+00 - acadoVariables.u[64];
acadoWorkspace.ub[65] = (real_t)1.2000000000000000e+00 - acadoVariables.u[65];
acadoWorkspace.ub[66] = (real_t)1.2000000000000000e+00 - acadoVariables.u[66];
acadoWorkspace.ub[67] = (real_t)1.2000000000000000e+00 - acadoVariables.u[67];
acadoWorkspace.ub[68] = (real_t)1.2000000000000000e+00 - acadoVariables.u[68];
acadoWorkspace.ub[69] = (real_t)1.0000000000000000e+12 - acadoVariables.u[69];

for (lRun1 = 0; lRun1 < 10; ++lRun1)
{
acadoWorkspace.conValueIn[0] = acadoVariables.x[lRun1 * 7];
acadoWorkspace.conValueIn[1] = acadoVariables.x[lRun1 * 7 + 1];
acadoWorkspace.conValueIn[2] = acadoVariables.x[lRun1 * 7 + 2];
acadoWorkspace.conValueIn[3] = acadoVariables.x[lRun1 * 7 + 3];
acadoWorkspace.conValueIn[4] = acadoVariables.x[lRun1 * 7 + 4];
acadoWorkspace.conValueIn[5] = acadoVariables.x[lRun1 * 7 + 5];
acadoWorkspace.conValueIn[6] = acadoVariables.x[lRun1 * 7 + 6];
acadoWorkspace.conValueIn[7] = acadoVariables.u[lRun1 * 7];
acadoWorkspace.conValueIn[8] = acadoVariables.u[lRun1 * 7 + 1];
acadoWorkspace.conValueIn[9] = acadoVariables.u[lRun1 * 7 + 2];
acadoWorkspace.conValueIn[10] = acadoVariables.u[lRun1 * 7 + 3];
acadoWorkspace.conValueIn[11] = acadoVariables.u[lRun1 * 7 + 4];
acadoWorkspace.conValueIn[12] = acadoVariables.u[lRun1 * 7 + 5];
acadoWorkspace.conValueIn[13] = acadoVariables.u[lRun1 * 7 + 6];
acadoWorkspace.conValueIn[14] = acadoVariables.od[lRun1 * 59];
acadoWorkspace.conValueIn[15] = acadoVariables.od[lRun1 * 59 + 1];
acadoWorkspace.conValueIn[16] = acadoVariables.od[lRun1 * 59 + 2];
acadoWorkspace.conValueIn[17] = acadoVariables.od[lRun1 * 59 + 3];
acadoWorkspace.conValueIn[18] = acadoVariables.od[lRun1 * 59 + 4];
acadoWorkspace.conValueIn[19] = acadoVariables.od[lRun1 * 59 + 5];
acadoWorkspace.conValueIn[20] = acadoVariables.od[lRun1 * 59 + 6];
acadoWorkspace.conValueIn[21] = acadoVariables.od[lRun1 * 59 + 7];
acadoWorkspace.conValueIn[22] = acadoVariables.od[lRun1 * 59 + 8];
acadoWorkspace.conValueIn[23] = acadoVariables.od[lRun1 * 59 + 9];
acadoWorkspace.conValueIn[24] = acadoVariables.od[lRun1 * 59 + 10];
acadoWorkspace.conValueIn[25] = acadoVariables.od[lRun1 * 59 + 11];
acadoWorkspace.conValueIn[26] = acadoVariables.od[lRun1 * 59 + 12];
acadoWorkspace.conValueIn[27] = acadoVariables.od[lRun1 * 59 + 13];
acadoWorkspace.conValueIn[28] = acadoVariables.od[lRun1 * 59 + 14];
acadoWorkspace.conValueIn[29] = acadoVariables.od[lRun1 * 59 + 15];
acadoWorkspace.conValueIn[30] = acadoVariables.od[lRun1 * 59 + 16];
acadoWorkspace.conValueIn[31] = acadoVariables.od[lRun1 * 59 + 17];
acadoWorkspace.conValueIn[32] = acadoVariables.od[lRun1 * 59 + 18];
acadoWorkspace.conValueIn[33] = acadoVariables.od[lRun1 * 59 + 19];
acadoWorkspace.conValueIn[34] = acadoVariables.od[lRun1 * 59 + 20];
acadoWorkspace.conValueIn[35] = acadoVariables.od[lRun1 * 59 + 21];
acadoWorkspace.conValueIn[36] = acadoVariables.od[lRun1 * 59 + 22];
acadoWorkspace.conValueIn[37] = acadoVariables.od[lRun1 * 59 + 23];
acadoWorkspace.conValueIn[38] = acadoVariables.od[lRun1 * 59 + 24];
acadoWorkspace.conValueIn[39] = acadoVariables.od[lRun1 * 59 + 25];
acadoWorkspace.conValueIn[40] = acadoVariables.od[lRun1 * 59 + 26];
acadoWorkspace.conValueIn[41] = acadoVariables.od[lRun1 * 59 + 27];
acadoWorkspace.conValueIn[42] = acadoVariables.od[lRun1 * 59 + 28];
acadoWorkspace.conValueIn[43] = acadoVariables.od[lRun1 * 59 + 29];
acadoWorkspace.conValueIn[44] = acadoVariables.od[lRun1 * 59 + 30];
acadoWorkspace.conValueIn[45] = acadoVariables.od[lRun1 * 59 + 31];
acadoWorkspace.conValueIn[46] = acadoVariables.od[lRun1 * 59 + 32];
acadoWorkspace.conValueIn[47] = acadoVariables.od[lRun1 * 59 + 33];
acadoWorkspace.conValueIn[48] = acadoVariables.od[lRun1 * 59 + 34];
acadoWorkspace.conValueIn[49] = acadoVariables.od[lRun1 * 59 + 35];
acadoWorkspace.conValueIn[50] = acadoVariables.od[lRun1 * 59 + 36];
acadoWorkspace.conValueIn[51] = acadoVariables.od[lRun1 * 59 + 37];
acadoWorkspace.conValueIn[52] = acadoVariables.od[lRun1 * 59 + 38];
acadoWorkspace.conValueIn[53] = acadoVariables.od[lRun1 * 59 + 39];
acadoWorkspace.conValueIn[54] = acadoVariables.od[lRun1 * 59 + 40];
acadoWorkspace.conValueIn[55] = acadoVariables.od[lRun1 * 59 + 41];
acadoWorkspace.conValueIn[56] = acadoVariables.od[lRun1 * 59 + 42];
acadoWorkspace.conValueIn[57] = acadoVariables.od[lRun1 * 59 + 43];
acadoWorkspace.conValueIn[58] = acadoVariables.od[lRun1 * 59 + 44];
acadoWorkspace.conValueIn[59] = acadoVariables.od[lRun1 * 59 + 45];
acadoWorkspace.conValueIn[60] = acadoVariables.od[lRun1 * 59 + 46];
acadoWorkspace.conValueIn[61] = acadoVariables.od[lRun1 * 59 + 47];
acadoWorkspace.conValueIn[62] = acadoVariables.od[lRun1 * 59 + 48];
acadoWorkspace.conValueIn[63] = acadoVariables.od[lRun1 * 59 + 49];
acadoWorkspace.conValueIn[64] = acadoVariables.od[lRun1 * 59 + 50];
acadoWorkspace.conValueIn[65] = acadoVariables.od[lRun1 * 59 + 51];
acadoWorkspace.conValueIn[66] = acadoVariables.od[lRun1 * 59 + 52];
acadoWorkspace.conValueIn[67] = acadoVariables.od[lRun1 * 59 + 53];
acadoWorkspace.conValueIn[68] = acadoVariables.od[lRun1 * 59 + 54];
acadoWorkspace.conValueIn[69] = acadoVariables.od[lRun1 * 59 + 55];
acadoWorkspace.conValueIn[70] = acadoVariables.od[lRun1 * 59 + 56];
acadoWorkspace.conValueIn[71] = acadoVariables.od[lRun1 * 59 + 57];
acadoWorkspace.conValueIn[72] = acadoVariables.od[lRun1 * 59 + 58];
acado_evaluatePathConstraints( acadoWorkspace.conValueIn, acadoWorkspace.conValueOut );
acadoWorkspace.evH[lRun1 * 3] = acadoWorkspace.conValueOut[0];
acadoWorkspace.evH[lRun1 * 3 + 1] = acadoWorkspace.conValueOut[1];
acadoWorkspace.evH[lRun1 * 3 + 2] = acadoWorkspace.conValueOut[2];

acadoWorkspace.evHx[lRun1 * 21] = acadoWorkspace.conValueOut[3];
acadoWorkspace.evHx[lRun1 * 21 + 1] = acadoWorkspace.conValueOut[4];
acadoWorkspace.evHx[lRun1 * 21 + 2] = acadoWorkspace.conValueOut[5];
acadoWorkspace.evHx[lRun1 * 21 + 3] = acadoWorkspace.conValueOut[6];
acadoWorkspace.evHx[lRun1 * 21 + 4] = acadoWorkspace.conValueOut[7];
acadoWorkspace.evHx[lRun1 * 21 + 5] = acadoWorkspace.conValueOut[8];
acadoWorkspace.evHx[lRun1 * 21 + 6] = acadoWorkspace.conValueOut[9];
acadoWorkspace.evHx[lRun1 * 21 + 7] = acadoWorkspace.conValueOut[10];
acadoWorkspace.evHx[lRun1 * 21 + 8] = acadoWorkspace.conValueOut[11];
acadoWorkspace.evHx[lRun1 * 21 + 9] = acadoWorkspace.conValueOut[12];
acadoWorkspace.evHx[lRun1 * 21 + 10] = acadoWorkspace.conValueOut[13];
acadoWorkspace.evHx[lRun1 * 21 + 11] = acadoWorkspace.conValueOut[14];
acadoWorkspace.evHx[lRun1 * 21 + 12] = acadoWorkspace.conValueOut[15];
acadoWorkspace.evHx[lRun1 * 21 + 13] = acadoWorkspace.conValueOut[16];
acadoWorkspace.evHx[lRun1 * 21 + 14] = acadoWorkspace.conValueOut[17];
acadoWorkspace.evHx[lRun1 * 21 + 15] = acadoWorkspace.conValueOut[18];
acadoWorkspace.evHx[lRun1 * 21 + 16] = acadoWorkspace.conValueOut[19];
acadoWorkspace.evHx[lRun1 * 21 + 17] = acadoWorkspace.conValueOut[20];
acadoWorkspace.evHx[lRun1 * 21 + 18] = acadoWorkspace.conValueOut[21];
acadoWorkspace.evHx[lRun1 * 21 + 19] = acadoWorkspace.conValueOut[22];
acadoWorkspace.evHx[lRun1 * 21 + 20] = acadoWorkspace.conValueOut[23];
acadoWorkspace.evHu[lRun1 * 21] = acadoWorkspace.conValueOut[24];
acadoWorkspace.evHu[lRun1 * 21 + 1] = acadoWorkspace.conValueOut[25];
acadoWorkspace.evHu[lRun1 * 21 + 2] = acadoWorkspace.conValueOut[26];
acadoWorkspace.evHu[lRun1 * 21 + 3] = acadoWorkspace.conValueOut[27];
acadoWorkspace.evHu[lRun1 * 21 + 4] = acadoWorkspace.conValueOut[28];
acadoWorkspace.evHu[lRun1 * 21 + 5] = acadoWorkspace.conValueOut[29];
acadoWorkspace.evHu[lRun1 * 21 + 6] = acadoWorkspace.conValueOut[30];
acadoWorkspace.evHu[lRun1 * 21 + 7] = acadoWorkspace.conValueOut[31];
acadoWorkspace.evHu[lRun1 * 21 + 8] = acadoWorkspace.conValueOut[32];
acadoWorkspace.evHu[lRun1 * 21 + 9] = acadoWorkspace.conValueOut[33];
acadoWorkspace.evHu[lRun1 * 21 + 10] = acadoWorkspace.conValueOut[34];
acadoWorkspace.evHu[lRun1 * 21 + 11] = acadoWorkspace.conValueOut[35];
acadoWorkspace.evHu[lRun1 * 21 + 12] = acadoWorkspace.conValueOut[36];
acadoWorkspace.evHu[lRun1 * 21 + 13] = acadoWorkspace.conValueOut[37];
acadoWorkspace.evHu[lRun1 * 21 + 14] = acadoWorkspace.conValueOut[38];
acadoWorkspace.evHu[lRun1 * 21 + 15] = acadoWorkspace.conValueOut[39];
acadoWorkspace.evHu[lRun1 * 21 + 16] = acadoWorkspace.conValueOut[40];
acadoWorkspace.evHu[lRun1 * 21 + 17] = acadoWorkspace.conValueOut[41];
acadoWorkspace.evHu[lRun1 * 21 + 18] = acadoWorkspace.conValueOut[42];
acadoWorkspace.evHu[lRun1 * 21 + 19] = acadoWorkspace.conValueOut[43];
acadoWorkspace.evHu[lRun1 * 21 + 20] = acadoWorkspace.conValueOut[44];
}

acadoWorkspace.A01[0] = acadoWorkspace.evHx[0];
acadoWorkspace.A01[1] = acadoWorkspace.evHx[1];
acadoWorkspace.A01[2] = acadoWorkspace.evHx[2];
acadoWorkspace.A01[3] = acadoWorkspace.evHx[3];
acadoWorkspace.A01[4] = acadoWorkspace.evHx[4];
acadoWorkspace.A01[5] = acadoWorkspace.evHx[5];
acadoWorkspace.A01[6] = acadoWorkspace.evHx[6];
acadoWorkspace.A01[7] = acadoWorkspace.evHx[7];
acadoWorkspace.A01[8] = acadoWorkspace.evHx[8];
acadoWorkspace.A01[9] = acadoWorkspace.evHx[9];
acadoWorkspace.A01[10] = acadoWorkspace.evHx[10];
acadoWorkspace.A01[11] = acadoWorkspace.evHx[11];
acadoWorkspace.A01[12] = acadoWorkspace.evHx[12];
acadoWorkspace.A01[13] = acadoWorkspace.evHx[13];
acadoWorkspace.A01[14] = acadoWorkspace.evHx[14];
acadoWorkspace.A01[15] = acadoWorkspace.evHx[15];
acadoWorkspace.A01[16] = acadoWorkspace.evHx[16];
acadoWorkspace.A01[17] = acadoWorkspace.evHx[17];
acadoWorkspace.A01[18] = acadoWorkspace.evHx[18];
acadoWorkspace.A01[19] = acadoWorkspace.evHx[19];
acadoWorkspace.A01[20] = acadoWorkspace.evHx[20];

acado_multHxC( &(acadoWorkspace.evHx[ 21 ]), acadoWorkspace.evGx, &(acadoWorkspace.A01[ 21 ]) );
acado_multHxC( &(acadoWorkspace.evHx[ 42 ]), &(acadoWorkspace.evGx[ 49 ]), &(acadoWorkspace.A01[ 42 ]) );
acado_multHxC( &(acadoWorkspace.evHx[ 63 ]), &(acadoWorkspace.evGx[ 98 ]), &(acadoWorkspace.A01[ 63 ]) );
acado_multHxC( &(acadoWorkspace.evHx[ 84 ]), &(acadoWorkspace.evGx[ 147 ]), &(acadoWorkspace.A01[ 84 ]) );
acado_multHxC( &(acadoWorkspace.evHx[ 105 ]), &(acadoWorkspace.evGx[ 196 ]), &(acadoWorkspace.A01[ 105 ]) );
acado_multHxC( &(acadoWorkspace.evHx[ 126 ]), &(acadoWorkspace.evGx[ 245 ]), &(acadoWorkspace.A01[ 126 ]) );
acado_multHxC( &(acadoWorkspace.evHx[ 147 ]), &(acadoWorkspace.evGx[ 294 ]), &(acadoWorkspace.A01[ 147 ]) );
acado_multHxC( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.evGx[ 343 ]), &(acadoWorkspace.A01[ 168 ]) );
acado_multHxC( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.evGx[ 392 ]), &(acadoWorkspace.A01[ 189 ]) );

acado_multHxE( &(acadoWorkspace.evHx[ 21 ]), acadoWorkspace.E, 1, 0 );
acado_multHxE( &(acadoWorkspace.evHx[ 42 ]), &(acadoWorkspace.E[ 49 ]), 2, 0 );
acado_multHxE( &(acadoWorkspace.evHx[ 42 ]), &(acadoWorkspace.E[ 98 ]), 2, 1 );
acado_multHxE( &(acadoWorkspace.evHx[ 63 ]), &(acadoWorkspace.E[ 147 ]), 3, 0 );
acado_multHxE( &(acadoWorkspace.evHx[ 63 ]), &(acadoWorkspace.E[ 196 ]), 3, 1 );
acado_multHxE( &(acadoWorkspace.evHx[ 63 ]), &(acadoWorkspace.E[ 245 ]), 3, 2 );
acado_multHxE( &(acadoWorkspace.evHx[ 84 ]), &(acadoWorkspace.E[ 294 ]), 4, 0 );
acado_multHxE( &(acadoWorkspace.evHx[ 84 ]), &(acadoWorkspace.E[ 343 ]), 4, 1 );
acado_multHxE( &(acadoWorkspace.evHx[ 84 ]), &(acadoWorkspace.E[ 392 ]), 4, 2 );
acado_multHxE( &(acadoWorkspace.evHx[ 84 ]), &(acadoWorkspace.E[ 441 ]), 4, 3 );
acado_multHxE( &(acadoWorkspace.evHx[ 105 ]), &(acadoWorkspace.E[ 490 ]), 5, 0 );
acado_multHxE( &(acadoWorkspace.evHx[ 105 ]), &(acadoWorkspace.E[ 539 ]), 5, 1 );
acado_multHxE( &(acadoWorkspace.evHx[ 105 ]), &(acadoWorkspace.E[ 588 ]), 5, 2 );
acado_multHxE( &(acadoWorkspace.evHx[ 105 ]), &(acadoWorkspace.E[ 637 ]), 5, 3 );
acado_multHxE( &(acadoWorkspace.evHx[ 105 ]), &(acadoWorkspace.E[ 686 ]), 5, 4 );
acado_multHxE( &(acadoWorkspace.evHx[ 126 ]), &(acadoWorkspace.E[ 735 ]), 6, 0 );
acado_multHxE( &(acadoWorkspace.evHx[ 126 ]), &(acadoWorkspace.E[ 784 ]), 6, 1 );
acado_multHxE( &(acadoWorkspace.evHx[ 126 ]), &(acadoWorkspace.E[ 833 ]), 6, 2 );
acado_multHxE( &(acadoWorkspace.evHx[ 126 ]), &(acadoWorkspace.E[ 882 ]), 6, 3 );
acado_multHxE( &(acadoWorkspace.evHx[ 126 ]), &(acadoWorkspace.E[ 931 ]), 6, 4 );
acado_multHxE( &(acadoWorkspace.evHx[ 126 ]), &(acadoWorkspace.E[ 980 ]), 6, 5 );
acado_multHxE( &(acadoWorkspace.evHx[ 147 ]), &(acadoWorkspace.E[ 1029 ]), 7, 0 );
acado_multHxE( &(acadoWorkspace.evHx[ 147 ]), &(acadoWorkspace.E[ 1078 ]), 7, 1 );
acado_multHxE( &(acadoWorkspace.evHx[ 147 ]), &(acadoWorkspace.E[ 1127 ]), 7, 2 );
acado_multHxE( &(acadoWorkspace.evHx[ 147 ]), &(acadoWorkspace.E[ 1176 ]), 7, 3 );
acado_multHxE( &(acadoWorkspace.evHx[ 147 ]), &(acadoWorkspace.E[ 1225 ]), 7, 4 );
acado_multHxE( &(acadoWorkspace.evHx[ 147 ]), &(acadoWorkspace.E[ 1274 ]), 7, 5 );
acado_multHxE( &(acadoWorkspace.evHx[ 147 ]), &(acadoWorkspace.E[ 1323 ]), 7, 6 );
acado_multHxE( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.E[ 1372 ]), 8, 0 );
acado_multHxE( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.E[ 1421 ]), 8, 1 );
acado_multHxE( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.E[ 1470 ]), 8, 2 );
acado_multHxE( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.E[ 1519 ]), 8, 3 );
acado_multHxE( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.E[ 1568 ]), 8, 4 );
acado_multHxE( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.E[ 1617 ]), 8, 5 );
acado_multHxE( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.E[ 1666 ]), 8, 6 );
acado_multHxE( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.E[ 1715 ]), 8, 7 );
acado_multHxE( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.E[ 1764 ]), 9, 0 );
acado_multHxE( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.E[ 1813 ]), 9, 1 );
acado_multHxE( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.E[ 1862 ]), 9, 2 );
acado_multHxE( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.E[ 1911 ]), 9, 3 );
acado_multHxE( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.E[ 1960 ]), 9, 4 );
acado_multHxE( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.E[ 2009 ]), 9, 5 );
acado_multHxE( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.E[ 2058 ]), 9, 6 );
acado_multHxE( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.E[ 2107 ]), 9, 7 );
acado_multHxE( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.E[ 2156 ]), 9, 8 );

acadoWorkspace.A[0] = acadoWorkspace.evHu[0];
acadoWorkspace.A[1] = acadoWorkspace.evHu[1];
acadoWorkspace.A[2] = acadoWorkspace.evHu[2];
acadoWorkspace.A[3] = acadoWorkspace.evHu[3];
acadoWorkspace.A[4] = acadoWorkspace.evHu[4];
acadoWorkspace.A[5] = acadoWorkspace.evHu[5];
acadoWorkspace.A[6] = acadoWorkspace.evHu[6];
acadoWorkspace.A[70] = acadoWorkspace.evHu[7];
acadoWorkspace.A[71] = acadoWorkspace.evHu[8];
acadoWorkspace.A[72] = acadoWorkspace.evHu[9];
acadoWorkspace.A[73] = acadoWorkspace.evHu[10];
acadoWorkspace.A[74] = acadoWorkspace.evHu[11];
acadoWorkspace.A[75] = acadoWorkspace.evHu[12];
acadoWorkspace.A[76] = acadoWorkspace.evHu[13];
acadoWorkspace.A[140] = acadoWorkspace.evHu[14];
acadoWorkspace.A[141] = acadoWorkspace.evHu[15];
acadoWorkspace.A[142] = acadoWorkspace.evHu[16];
acadoWorkspace.A[143] = acadoWorkspace.evHu[17];
acadoWorkspace.A[144] = acadoWorkspace.evHu[18];
acadoWorkspace.A[145] = acadoWorkspace.evHu[19];
acadoWorkspace.A[146] = acadoWorkspace.evHu[20];
acadoWorkspace.A[217] = acadoWorkspace.evHu[21];
acadoWorkspace.A[218] = acadoWorkspace.evHu[22];
acadoWorkspace.A[219] = acadoWorkspace.evHu[23];
acadoWorkspace.A[220] = acadoWorkspace.evHu[24];
acadoWorkspace.A[221] = acadoWorkspace.evHu[25];
acadoWorkspace.A[222] = acadoWorkspace.evHu[26];
acadoWorkspace.A[223] = acadoWorkspace.evHu[27];
acadoWorkspace.A[287] = acadoWorkspace.evHu[28];
acadoWorkspace.A[288] = acadoWorkspace.evHu[29];
acadoWorkspace.A[289] = acadoWorkspace.evHu[30];
acadoWorkspace.A[290] = acadoWorkspace.evHu[31];
acadoWorkspace.A[291] = acadoWorkspace.evHu[32];
acadoWorkspace.A[292] = acadoWorkspace.evHu[33];
acadoWorkspace.A[293] = acadoWorkspace.evHu[34];
acadoWorkspace.A[357] = acadoWorkspace.evHu[35];
acadoWorkspace.A[358] = acadoWorkspace.evHu[36];
acadoWorkspace.A[359] = acadoWorkspace.evHu[37];
acadoWorkspace.A[360] = acadoWorkspace.evHu[38];
acadoWorkspace.A[361] = acadoWorkspace.evHu[39];
acadoWorkspace.A[362] = acadoWorkspace.evHu[40];
acadoWorkspace.A[363] = acadoWorkspace.evHu[41];
acadoWorkspace.A[434] = acadoWorkspace.evHu[42];
acadoWorkspace.A[435] = acadoWorkspace.evHu[43];
acadoWorkspace.A[436] = acadoWorkspace.evHu[44];
acadoWorkspace.A[437] = acadoWorkspace.evHu[45];
acadoWorkspace.A[438] = acadoWorkspace.evHu[46];
acadoWorkspace.A[439] = acadoWorkspace.evHu[47];
acadoWorkspace.A[440] = acadoWorkspace.evHu[48];
acadoWorkspace.A[504] = acadoWorkspace.evHu[49];
acadoWorkspace.A[505] = acadoWorkspace.evHu[50];
acadoWorkspace.A[506] = acadoWorkspace.evHu[51];
acadoWorkspace.A[507] = acadoWorkspace.evHu[52];
acadoWorkspace.A[508] = acadoWorkspace.evHu[53];
acadoWorkspace.A[509] = acadoWorkspace.evHu[54];
acadoWorkspace.A[510] = acadoWorkspace.evHu[55];
acadoWorkspace.A[574] = acadoWorkspace.evHu[56];
acadoWorkspace.A[575] = acadoWorkspace.evHu[57];
acadoWorkspace.A[576] = acadoWorkspace.evHu[58];
acadoWorkspace.A[577] = acadoWorkspace.evHu[59];
acadoWorkspace.A[578] = acadoWorkspace.evHu[60];
acadoWorkspace.A[579] = acadoWorkspace.evHu[61];
acadoWorkspace.A[580] = acadoWorkspace.evHu[62];
acadoWorkspace.A[651] = acadoWorkspace.evHu[63];
acadoWorkspace.A[652] = acadoWorkspace.evHu[64];
acadoWorkspace.A[653] = acadoWorkspace.evHu[65];
acadoWorkspace.A[654] = acadoWorkspace.evHu[66];
acadoWorkspace.A[655] = acadoWorkspace.evHu[67];
acadoWorkspace.A[656] = acadoWorkspace.evHu[68];
acadoWorkspace.A[657] = acadoWorkspace.evHu[69];
acadoWorkspace.A[721] = acadoWorkspace.evHu[70];
acadoWorkspace.A[722] = acadoWorkspace.evHu[71];
acadoWorkspace.A[723] = acadoWorkspace.evHu[72];
acadoWorkspace.A[724] = acadoWorkspace.evHu[73];
acadoWorkspace.A[725] = acadoWorkspace.evHu[74];
acadoWorkspace.A[726] = acadoWorkspace.evHu[75];
acadoWorkspace.A[727] = acadoWorkspace.evHu[76];
acadoWorkspace.A[791] = acadoWorkspace.evHu[77];
acadoWorkspace.A[792] = acadoWorkspace.evHu[78];
acadoWorkspace.A[793] = acadoWorkspace.evHu[79];
acadoWorkspace.A[794] = acadoWorkspace.evHu[80];
acadoWorkspace.A[795] = acadoWorkspace.evHu[81];
acadoWorkspace.A[796] = acadoWorkspace.evHu[82];
acadoWorkspace.A[797] = acadoWorkspace.evHu[83];
acadoWorkspace.A[868] = acadoWorkspace.evHu[84];
acadoWorkspace.A[869] = acadoWorkspace.evHu[85];
acadoWorkspace.A[870] = acadoWorkspace.evHu[86];
acadoWorkspace.A[871] = acadoWorkspace.evHu[87];
acadoWorkspace.A[872] = acadoWorkspace.evHu[88];
acadoWorkspace.A[873] = acadoWorkspace.evHu[89];
acadoWorkspace.A[874] = acadoWorkspace.evHu[90];
acadoWorkspace.A[938] = acadoWorkspace.evHu[91];
acadoWorkspace.A[939] = acadoWorkspace.evHu[92];
acadoWorkspace.A[940] = acadoWorkspace.evHu[93];
acadoWorkspace.A[941] = acadoWorkspace.evHu[94];
acadoWorkspace.A[942] = acadoWorkspace.evHu[95];
acadoWorkspace.A[943] = acadoWorkspace.evHu[96];
acadoWorkspace.A[944] = acadoWorkspace.evHu[97];
acadoWorkspace.A[1008] = acadoWorkspace.evHu[98];
acadoWorkspace.A[1009] = acadoWorkspace.evHu[99];
acadoWorkspace.A[1010] = acadoWorkspace.evHu[100];
acadoWorkspace.A[1011] = acadoWorkspace.evHu[101];
acadoWorkspace.A[1012] = acadoWorkspace.evHu[102];
acadoWorkspace.A[1013] = acadoWorkspace.evHu[103];
acadoWorkspace.A[1014] = acadoWorkspace.evHu[104];
acadoWorkspace.A[1085] = acadoWorkspace.evHu[105];
acadoWorkspace.A[1086] = acadoWorkspace.evHu[106];
acadoWorkspace.A[1087] = acadoWorkspace.evHu[107];
acadoWorkspace.A[1088] = acadoWorkspace.evHu[108];
acadoWorkspace.A[1089] = acadoWorkspace.evHu[109];
acadoWorkspace.A[1090] = acadoWorkspace.evHu[110];
acadoWorkspace.A[1091] = acadoWorkspace.evHu[111];
acadoWorkspace.A[1155] = acadoWorkspace.evHu[112];
acadoWorkspace.A[1156] = acadoWorkspace.evHu[113];
acadoWorkspace.A[1157] = acadoWorkspace.evHu[114];
acadoWorkspace.A[1158] = acadoWorkspace.evHu[115];
acadoWorkspace.A[1159] = acadoWorkspace.evHu[116];
acadoWorkspace.A[1160] = acadoWorkspace.evHu[117];
acadoWorkspace.A[1161] = acadoWorkspace.evHu[118];
acadoWorkspace.A[1225] = acadoWorkspace.evHu[119];
acadoWorkspace.A[1226] = acadoWorkspace.evHu[120];
acadoWorkspace.A[1227] = acadoWorkspace.evHu[121];
acadoWorkspace.A[1228] = acadoWorkspace.evHu[122];
acadoWorkspace.A[1229] = acadoWorkspace.evHu[123];
acadoWorkspace.A[1230] = acadoWorkspace.evHu[124];
acadoWorkspace.A[1231] = acadoWorkspace.evHu[125];
acadoWorkspace.A[1302] = acadoWorkspace.evHu[126];
acadoWorkspace.A[1303] = acadoWorkspace.evHu[127];
acadoWorkspace.A[1304] = acadoWorkspace.evHu[128];
acadoWorkspace.A[1305] = acadoWorkspace.evHu[129];
acadoWorkspace.A[1306] = acadoWorkspace.evHu[130];
acadoWorkspace.A[1307] = acadoWorkspace.evHu[131];
acadoWorkspace.A[1308] = acadoWorkspace.evHu[132];
acadoWorkspace.A[1372] = acadoWorkspace.evHu[133];
acadoWorkspace.A[1373] = acadoWorkspace.evHu[134];
acadoWorkspace.A[1374] = acadoWorkspace.evHu[135];
acadoWorkspace.A[1375] = acadoWorkspace.evHu[136];
acadoWorkspace.A[1376] = acadoWorkspace.evHu[137];
acadoWorkspace.A[1377] = acadoWorkspace.evHu[138];
acadoWorkspace.A[1378] = acadoWorkspace.evHu[139];
acadoWorkspace.A[1442] = acadoWorkspace.evHu[140];
acadoWorkspace.A[1443] = acadoWorkspace.evHu[141];
acadoWorkspace.A[1444] = acadoWorkspace.evHu[142];
acadoWorkspace.A[1445] = acadoWorkspace.evHu[143];
acadoWorkspace.A[1446] = acadoWorkspace.evHu[144];
acadoWorkspace.A[1447] = acadoWorkspace.evHu[145];
acadoWorkspace.A[1448] = acadoWorkspace.evHu[146];
acadoWorkspace.A[1519] = acadoWorkspace.evHu[147];
acadoWorkspace.A[1520] = acadoWorkspace.evHu[148];
acadoWorkspace.A[1521] = acadoWorkspace.evHu[149];
acadoWorkspace.A[1522] = acadoWorkspace.evHu[150];
acadoWorkspace.A[1523] = acadoWorkspace.evHu[151];
acadoWorkspace.A[1524] = acadoWorkspace.evHu[152];
acadoWorkspace.A[1525] = acadoWorkspace.evHu[153];
acadoWorkspace.A[1589] = acadoWorkspace.evHu[154];
acadoWorkspace.A[1590] = acadoWorkspace.evHu[155];
acadoWorkspace.A[1591] = acadoWorkspace.evHu[156];
acadoWorkspace.A[1592] = acadoWorkspace.evHu[157];
acadoWorkspace.A[1593] = acadoWorkspace.evHu[158];
acadoWorkspace.A[1594] = acadoWorkspace.evHu[159];
acadoWorkspace.A[1595] = acadoWorkspace.evHu[160];
acadoWorkspace.A[1659] = acadoWorkspace.evHu[161];
acadoWorkspace.A[1660] = acadoWorkspace.evHu[162];
acadoWorkspace.A[1661] = acadoWorkspace.evHu[163];
acadoWorkspace.A[1662] = acadoWorkspace.evHu[164];
acadoWorkspace.A[1663] = acadoWorkspace.evHu[165];
acadoWorkspace.A[1664] = acadoWorkspace.evHu[166];
acadoWorkspace.A[1665] = acadoWorkspace.evHu[167];
acadoWorkspace.A[1736] = acadoWorkspace.evHu[168];
acadoWorkspace.A[1737] = acadoWorkspace.evHu[169];
acadoWorkspace.A[1738] = acadoWorkspace.evHu[170];
acadoWorkspace.A[1739] = acadoWorkspace.evHu[171];
acadoWorkspace.A[1740] = acadoWorkspace.evHu[172];
acadoWorkspace.A[1741] = acadoWorkspace.evHu[173];
acadoWorkspace.A[1742] = acadoWorkspace.evHu[174];
acadoWorkspace.A[1806] = acadoWorkspace.evHu[175];
acadoWorkspace.A[1807] = acadoWorkspace.evHu[176];
acadoWorkspace.A[1808] = acadoWorkspace.evHu[177];
acadoWorkspace.A[1809] = acadoWorkspace.evHu[178];
acadoWorkspace.A[1810] = acadoWorkspace.evHu[179];
acadoWorkspace.A[1811] = acadoWorkspace.evHu[180];
acadoWorkspace.A[1812] = acadoWorkspace.evHu[181];
acadoWorkspace.A[1876] = acadoWorkspace.evHu[182];
acadoWorkspace.A[1877] = acadoWorkspace.evHu[183];
acadoWorkspace.A[1878] = acadoWorkspace.evHu[184];
acadoWorkspace.A[1879] = acadoWorkspace.evHu[185];
acadoWorkspace.A[1880] = acadoWorkspace.evHu[186];
acadoWorkspace.A[1881] = acadoWorkspace.evHu[187];
acadoWorkspace.A[1882] = acadoWorkspace.evHu[188];
acadoWorkspace.A[1953] = acadoWorkspace.evHu[189];
acadoWorkspace.A[1954] = acadoWorkspace.evHu[190];
acadoWorkspace.A[1955] = acadoWorkspace.evHu[191];
acadoWorkspace.A[1956] = acadoWorkspace.evHu[192];
acadoWorkspace.A[1957] = acadoWorkspace.evHu[193];
acadoWorkspace.A[1958] = acadoWorkspace.evHu[194];
acadoWorkspace.A[1959] = acadoWorkspace.evHu[195];
acadoWorkspace.A[2023] = acadoWorkspace.evHu[196];
acadoWorkspace.A[2024] = acadoWorkspace.evHu[197];
acadoWorkspace.A[2025] = acadoWorkspace.evHu[198];
acadoWorkspace.A[2026] = acadoWorkspace.evHu[199];
acadoWorkspace.A[2027] = acadoWorkspace.evHu[200];
acadoWorkspace.A[2028] = acadoWorkspace.evHu[201];
acadoWorkspace.A[2029] = acadoWorkspace.evHu[202];
acadoWorkspace.A[2093] = acadoWorkspace.evHu[203];
acadoWorkspace.A[2094] = acadoWorkspace.evHu[204];
acadoWorkspace.A[2095] = acadoWorkspace.evHu[205];
acadoWorkspace.A[2096] = acadoWorkspace.evHu[206];
acadoWorkspace.A[2097] = acadoWorkspace.evHu[207];
acadoWorkspace.A[2098] = acadoWorkspace.evHu[208];
acadoWorkspace.A[2099] = acadoWorkspace.evHu[209];
acadoWorkspace.lbA[0] = - acadoWorkspace.evH[0];
acadoWorkspace.lbA[1] = - acadoWorkspace.evH[1];
acadoWorkspace.lbA[2] = - acadoWorkspace.evH[2];
acadoWorkspace.lbA[3] = - acadoWorkspace.evH[3];
acadoWorkspace.lbA[4] = - acadoWorkspace.evH[4];
acadoWorkspace.lbA[5] = - acadoWorkspace.evH[5];
acadoWorkspace.lbA[6] = - acadoWorkspace.evH[6];
acadoWorkspace.lbA[7] = - acadoWorkspace.evH[7];
acadoWorkspace.lbA[8] = - acadoWorkspace.evH[8];
acadoWorkspace.lbA[9] = - acadoWorkspace.evH[9];
acadoWorkspace.lbA[10] = - acadoWorkspace.evH[10];
acadoWorkspace.lbA[11] = - acadoWorkspace.evH[11];
acadoWorkspace.lbA[12] = - acadoWorkspace.evH[12];
acadoWorkspace.lbA[13] = - acadoWorkspace.evH[13];
acadoWorkspace.lbA[14] = - acadoWorkspace.evH[14];
acadoWorkspace.lbA[15] = - acadoWorkspace.evH[15];
acadoWorkspace.lbA[16] = - acadoWorkspace.evH[16];
acadoWorkspace.lbA[17] = - acadoWorkspace.evH[17];
acadoWorkspace.lbA[18] = - acadoWorkspace.evH[18];
acadoWorkspace.lbA[19] = - acadoWorkspace.evH[19];
acadoWorkspace.lbA[20] = - acadoWorkspace.evH[20];
acadoWorkspace.lbA[21] = - acadoWorkspace.evH[21];
acadoWorkspace.lbA[22] = - acadoWorkspace.evH[22];
acadoWorkspace.lbA[23] = - acadoWorkspace.evH[23];
acadoWorkspace.lbA[24] = - acadoWorkspace.evH[24];
acadoWorkspace.lbA[25] = - acadoWorkspace.evH[25];
acadoWorkspace.lbA[26] = - acadoWorkspace.evH[26];
acadoWorkspace.lbA[27] = - acadoWorkspace.evH[27];
acadoWorkspace.lbA[28] = - acadoWorkspace.evH[28];
acadoWorkspace.lbA[29] = - acadoWorkspace.evH[29];

acadoWorkspace.ubA[0] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[0];
acadoWorkspace.ubA[1] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[1];
acadoWorkspace.ubA[2] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[2];
acadoWorkspace.ubA[3] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[3];
acadoWorkspace.ubA[4] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[4];
acadoWorkspace.ubA[5] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[5];
acadoWorkspace.ubA[6] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[6];
acadoWorkspace.ubA[7] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[7];
acadoWorkspace.ubA[8] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[8];
acadoWorkspace.ubA[9] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[9];
acadoWorkspace.ubA[10] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[10];
acadoWorkspace.ubA[11] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[11];
acadoWorkspace.ubA[12] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[12];
acadoWorkspace.ubA[13] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[13];
acadoWorkspace.ubA[14] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[14];
acadoWorkspace.ubA[15] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[15];
acadoWorkspace.ubA[16] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[16];
acadoWorkspace.ubA[17] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[17];
acadoWorkspace.ubA[18] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[18];
acadoWorkspace.ubA[19] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[19];
acadoWorkspace.ubA[20] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[20];
acadoWorkspace.ubA[21] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[21];
acadoWorkspace.ubA[22] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[22];
acadoWorkspace.ubA[23] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[23];
acadoWorkspace.ubA[24] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[24];
acadoWorkspace.ubA[25] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[25];
acadoWorkspace.ubA[26] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[26];
acadoWorkspace.ubA[27] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[27];
acadoWorkspace.ubA[28] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[28];
acadoWorkspace.ubA[29] = (real_t)1.0000000000000000e+12 - acadoWorkspace.evH[29];

acado_macHxd( &(acadoWorkspace.evHx[ 21 ]), acadoWorkspace.d, &(acadoWorkspace.lbA[ 3 ]), &(acadoWorkspace.ubA[ 3 ]) );
acado_macHxd( &(acadoWorkspace.evHx[ 42 ]), &(acadoWorkspace.d[ 7 ]), &(acadoWorkspace.lbA[ 6 ]), &(acadoWorkspace.ubA[ 6 ]) );
acado_macHxd( &(acadoWorkspace.evHx[ 63 ]), &(acadoWorkspace.d[ 14 ]), &(acadoWorkspace.lbA[ 9 ]), &(acadoWorkspace.ubA[ 9 ]) );
acado_macHxd( &(acadoWorkspace.evHx[ 84 ]), &(acadoWorkspace.d[ 21 ]), &(acadoWorkspace.lbA[ 12 ]), &(acadoWorkspace.ubA[ 12 ]) );
acado_macHxd( &(acadoWorkspace.evHx[ 105 ]), &(acadoWorkspace.d[ 28 ]), &(acadoWorkspace.lbA[ 15 ]), &(acadoWorkspace.ubA[ 15 ]) );
acado_macHxd( &(acadoWorkspace.evHx[ 126 ]), &(acadoWorkspace.d[ 35 ]), &(acadoWorkspace.lbA[ 18 ]), &(acadoWorkspace.ubA[ 18 ]) );
acado_macHxd( &(acadoWorkspace.evHx[ 147 ]), &(acadoWorkspace.d[ 42 ]), &(acadoWorkspace.lbA[ 21 ]), &(acadoWorkspace.ubA[ 21 ]) );
acado_macHxd( &(acadoWorkspace.evHx[ 168 ]), &(acadoWorkspace.d[ 49 ]), &(acadoWorkspace.lbA[ 24 ]), &(acadoWorkspace.ubA[ 24 ]) );
acado_macHxd( &(acadoWorkspace.evHx[ 189 ]), &(acadoWorkspace.d[ 56 ]), &(acadoWorkspace.lbA[ 27 ]), &(acadoWorkspace.ubA[ 27 ]) );

}

void acado_condenseFdb(  )
{
int lRun1;
acadoWorkspace.Dx0[0] = acadoVariables.x0[0] - acadoVariables.x[0];
acadoWorkspace.Dx0[1] = acadoVariables.x0[1] - acadoVariables.x[1];
acadoWorkspace.Dx0[2] = acadoVariables.x0[2] - acadoVariables.x[2];
acadoWorkspace.Dx0[3] = acadoVariables.x0[3] - acadoVariables.x[3];
acadoWorkspace.Dx0[4] = acadoVariables.x0[4] - acadoVariables.x[4];
acadoWorkspace.Dx0[5] = acadoVariables.x0[5] - acadoVariables.x[5];
acadoWorkspace.Dx0[6] = acadoVariables.x0[6] - acadoVariables.x[6];

for (lRun1 = 0; lRun1 < 130; ++lRun1)
acadoWorkspace.Dy[lRun1] -= acadoVariables.y[lRun1];

acadoWorkspace.DyN[0] -= acadoVariables.yN[0];
acadoWorkspace.DyN[1] -= acadoVariables.yN[1];
acadoWorkspace.DyN[2] -= acadoVariables.yN[2];
acadoWorkspace.DyN[3] -= acadoVariables.yN[3];
acadoWorkspace.DyN[4] -= acadoVariables.yN[4];
acadoWorkspace.DyN[5] -= acadoVariables.yN[5];

acado_multRDy( acadoWorkspace.Dy, acadoWorkspace.g );
acado_multRDy( &(acadoWorkspace.Dy[ 13 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multRDy( &(acadoWorkspace.Dy[ 26 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multRDy( &(acadoWorkspace.Dy[ 39 ]), &(acadoWorkspace.g[ 21 ]) );
acado_multRDy( &(acadoWorkspace.Dy[ 52 ]), &(acadoWorkspace.g[ 28 ]) );
acado_multRDy( &(acadoWorkspace.Dy[ 65 ]), &(acadoWorkspace.g[ 35 ]) );
acado_multRDy( &(acadoWorkspace.Dy[ 78 ]), &(acadoWorkspace.g[ 42 ]) );
acado_multRDy( &(acadoWorkspace.Dy[ 91 ]), &(acadoWorkspace.g[ 49 ]) );
acado_multRDy( &(acadoWorkspace.Dy[ 104 ]), &(acadoWorkspace.g[ 56 ]) );
acado_multRDy( &(acadoWorkspace.Dy[ 117 ]), &(acadoWorkspace.g[ 63 ]) );

acado_multQDy( acadoWorkspace.Dy, acadoWorkspace.QDy );
acado_multQDy( &(acadoWorkspace.Dy[ 13 ]), &(acadoWorkspace.QDy[ 7 ]) );
acado_multQDy( &(acadoWorkspace.Dy[ 26 ]), &(acadoWorkspace.QDy[ 14 ]) );
acado_multQDy( &(acadoWorkspace.Dy[ 39 ]), &(acadoWorkspace.QDy[ 21 ]) );
acado_multQDy( &(acadoWorkspace.Dy[ 52 ]), &(acadoWorkspace.QDy[ 28 ]) );
acado_multQDy( &(acadoWorkspace.Dy[ 65 ]), &(acadoWorkspace.QDy[ 35 ]) );
acado_multQDy( &(acadoWorkspace.Dy[ 78 ]), &(acadoWorkspace.QDy[ 42 ]) );
acado_multQDy( &(acadoWorkspace.Dy[ 91 ]), &(acadoWorkspace.QDy[ 49 ]) );
acado_multQDy( &(acadoWorkspace.Dy[ 104 ]), &(acadoWorkspace.QDy[ 56 ]) );
acado_multQDy( &(acadoWorkspace.Dy[ 117 ]), &(acadoWorkspace.QDy[ 63 ]) );

acadoWorkspace.QDy[70] = +acadoWorkspace.DyN[0];
acadoWorkspace.QDy[71] = +acadoWorkspace.DyN[1];
acadoWorkspace.QDy[72] = +acadoWorkspace.DyN[2];
acadoWorkspace.QDy[73] = +acadoWorkspace.DyN[3];
acadoWorkspace.QDy[74] = +acadoWorkspace.DyN[4];
acadoWorkspace.QDy[75] = +acadoWorkspace.DyN[5];
acadoWorkspace.QDy[76] = 0.0;
;

acadoWorkspace.QDy[7] += acadoWorkspace.Qd[0];
acadoWorkspace.QDy[8] += acadoWorkspace.Qd[1];
acadoWorkspace.QDy[9] += acadoWorkspace.Qd[2];
acadoWorkspace.QDy[10] += acadoWorkspace.Qd[3];
acadoWorkspace.QDy[11] += acadoWorkspace.Qd[4];
acadoWorkspace.QDy[12] += acadoWorkspace.Qd[5];
acadoWorkspace.QDy[13] += acadoWorkspace.Qd[6];
acadoWorkspace.QDy[14] += acadoWorkspace.Qd[7];
acadoWorkspace.QDy[15] += acadoWorkspace.Qd[8];
acadoWorkspace.QDy[16] += acadoWorkspace.Qd[9];
acadoWorkspace.QDy[17] += acadoWorkspace.Qd[10];
acadoWorkspace.QDy[18] += acadoWorkspace.Qd[11];
acadoWorkspace.QDy[19] += acadoWorkspace.Qd[12];
acadoWorkspace.QDy[20] += acadoWorkspace.Qd[13];
acadoWorkspace.QDy[21] += acadoWorkspace.Qd[14];
acadoWorkspace.QDy[22] += acadoWorkspace.Qd[15];
acadoWorkspace.QDy[23] += acadoWorkspace.Qd[16];
acadoWorkspace.QDy[24] += acadoWorkspace.Qd[17];
acadoWorkspace.QDy[25] += acadoWorkspace.Qd[18];
acadoWorkspace.QDy[26] += acadoWorkspace.Qd[19];
acadoWorkspace.QDy[27] += acadoWorkspace.Qd[20];
acadoWorkspace.QDy[28] += acadoWorkspace.Qd[21];
acadoWorkspace.QDy[29] += acadoWorkspace.Qd[22];
acadoWorkspace.QDy[30] += acadoWorkspace.Qd[23];
acadoWorkspace.QDy[31] += acadoWorkspace.Qd[24];
acadoWorkspace.QDy[32] += acadoWorkspace.Qd[25];
acadoWorkspace.QDy[33] += acadoWorkspace.Qd[26];
acadoWorkspace.QDy[34] += acadoWorkspace.Qd[27];
acadoWorkspace.QDy[35] += acadoWorkspace.Qd[28];
acadoWorkspace.QDy[36] += acadoWorkspace.Qd[29];
acadoWorkspace.QDy[37] += acadoWorkspace.Qd[30];
acadoWorkspace.QDy[38] += acadoWorkspace.Qd[31];
acadoWorkspace.QDy[39] += acadoWorkspace.Qd[32];
acadoWorkspace.QDy[40] += acadoWorkspace.Qd[33];
acadoWorkspace.QDy[41] += acadoWorkspace.Qd[34];
acadoWorkspace.QDy[42] += acadoWorkspace.Qd[35];
acadoWorkspace.QDy[43] += acadoWorkspace.Qd[36];
acadoWorkspace.QDy[44] += acadoWorkspace.Qd[37];
acadoWorkspace.QDy[45] += acadoWorkspace.Qd[38];
acadoWorkspace.QDy[46] += acadoWorkspace.Qd[39];
acadoWorkspace.QDy[47] += acadoWorkspace.Qd[40];
acadoWorkspace.QDy[48] += acadoWorkspace.Qd[41];
acadoWorkspace.QDy[49] += acadoWorkspace.Qd[42];
acadoWorkspace.QDy[50] += acadoWorkspace.Qd[43];
acadoWorkspace.QDy[51] += acadoWorkspace.Qd[44];
acadoWorkspace.QDy[52] += acadoWorkspace.Qd[45];
acadoWorkspace.QDy[53] += acadoWorkspace.Qd[46];
acadoWorkspace.QDy[54] += acadoWorkspace.Qd[47];
acadoWorkspace.QDy[55] += acadoWorkspace.Qd[48];
acadoWorkspace.QDy[56] += acadoWorkspace.Qd[49];
acadoWorkspace.QDy[57] += acadoWorkspace.Qd[50];
acadoWorkspace.QDy[58] += acadoWorkspace.Qd[51];
acadoWorkspace.QDy[59] += acadoWorkspace.Qd[52];
acadoWorkspace.QDy[60] += acadoWorkspace.Qd[53];
acadoWorkspace.QDy[61] += acadoWorkspace.Qd[54];
acadoWorkspace.QDy[62] += acadoWorkspace.Qd[55];
acadoWorkspace.QDy[63] += acadoWorkspace.Qd[56];
acadoWorkspace.QDy[64] += acadoWorkspace.Qd[57];
acadoWorkspace.QDy[65] += acadoWorkspace.Qd[58];
acadoWorkspace.QDy[66] += acadoWorkspace.Qd[59];
acadoWorkspace.QDy[67] += acadoWorkspace.Qd[60];
acadoWorkspace.QDy[68] += acadoWorkspace.Qd[61];
acadoWorkspace.QDy[69] += acadoWorkspace.Qd[62];
acadoWorkspace.QDy[70] += acadoWorkspace.Qd[63];
acadoWorkspace.QDy[71] += acadoWorkspace.Qd[64];
acadoWorkspace.QDy[72] += acadoWorkspace.Qd[65];
acadoWorkspace.QDy[73] += acadoWorkspace.Qd[66];
acadoWorkspace.QDy[74] += acadoWorkspace.Qd[67];
acadoWorkspace.QDy[75] += acadoWorkspace.Qd[68];
acadoWorkspace.QDy[76] += acadoWorkspace.Qd[69];

acado_multEQDy( acadoWorkspace.E, &(acadoWorkspace.QDy[ 7 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 49 ]), &(acadoWorkspace.QDy[ 14 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 147 ]), &(acadoWorkspace.QDy[ 21 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 294 ]), &(acadoWorkspace.QDy[ 28 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 490 ]), &(acadoWorkspace.QDy[ 35 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 735 ]), &(acadoWorkspace.QDy[ 42 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 1029 ]), &(acadoWorkspace.QDy[ 49 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 1372 ]), &(acadoWorkspace.QDy[ 56 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 1764 ]), &(acadoWorkspace.QDy[ 63 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 2205 ]), &(acadoWorkspace.QDy[ 70 ]), acadoWorkspace.g );
acado_multEQDy( &(acadoWorkspace.E[ 98 ]), &(acadoWorkspace.QDy[ 14 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 196 ]), &(acadoWorkspace.QDy[ 21 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 343 ]), &(acadoWorkspace.QDy[ 28 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 539 ]), &(acadoWorkspace.QDy[ 35 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 784 ]), &(acadoWorkspace.QDy[ 42 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.QDy[ 49 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.QDy[ 56 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.QDy[ 63 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.QDy[ 70 ]), &(acadoWorkspace.g[ 7 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 245 ]), &(acadoWorkspace.QDy[ 21 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 392 ]), &(acadoWorkspace.QDy[ 28 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 588 ]), &(acadoWorkspace.QDy[ 35 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 833 ]), &(acadoWorkspace.QDy[ 42 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1127 ]), &(acadoWorkspace.QDy[ 49 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.QDy[ 56 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.QDy[ 63 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.QDy[ 70 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 441 ]), &(acadoWorkspace.QDy[ 28 ]), &(acadoWorkspace.g[ 21 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 637 ]), &(acadoWorkspace.QDy[ 35 ]), &(acadoWorkspace.g[ 21 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 882 ]), &(acadoWorkspace.QDy[ 42 ]), &(acadoWorkspace.g[ 21 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1176 ]), &(acadoWorkspace.QDy[ 49 ]), &(acadoWorkspace.g[ 21 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1519 ]), &(acadoWorkspace.QDy[ 56 ]), &(acadoWorkspace.g[ 21 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.QDy[ 63 ]), &(acadoWorkspace.g[ 21 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.QDy[ 70 ]), &(acadoWorkspace.g[ 21 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 686 ]), &(acadoWorkspace.QDy[ 35 ]), &(acadoWorkspace.g[ 28 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 931 ]), &(acadoWorkspace.QDy[ 42 ]), &(acadoWorkspace.g[ 28 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1225 ]), &(acadoWorkspace.QDy[ 49 ]), &(acadoWorkspace.g[ 28 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1568 ]), &(acadoWorkspace.QDy[ 56 ]), &(acadoWorkspace.g[ 28 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1960 ]), &(acadoWorkspace.QDy[ 63 ]), &(acadoWorkspace.g[ 28 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2401 ]), &(acadoWorkspace.QDy[ 70 ]), &(acadoWorkspace.g[ 28 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 980 ]), &(acadoWorkspace.QDy[ 42 ]), &(acadoWorkspace.g[ 35 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1274 ]), &(acadoWorkspace.QDy[ 49 ]), &(acadoWorkspace.g[ 35 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1617 ]), &(acadoWorkspace.QDy[ 56 ]), &(acadoWorkspace.g[ 35 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2009 ]), &(acadoWorkspace.QDy[ 63 ]), &(acadoWorkspace.g[ 35 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2450 ]), &(acadoWorkspace.QDy[ 70 ]), &(acadoWorkspace.g[ 35 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1323 ]), &(acadoWorkspace.QDy[ 49 ]), &(acadoWorkspace.g[ 42 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1666 ]), &(acadoWorkspace.QDy[ 56 ]), &(acadoWorkspace.g[ 42 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2058 ]), &(acadoWorkspace.QDy[ 63 ]), &(acadoWorkspace.g[ 42 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2499 ]), &(acadoWorkspace.QDy[ 70 ]), &(acadoWorkspace.g[ 42 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 1715 ]), &(acadoWorkspace.QDy[ 56 ]), &(acadoWorkspace.g[ 49 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2107 ]), &(acadoWorkspace.QDy[ 63 ]), &(acadoWorkspace.g[ 49 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2548 ]), &(acadoWorkspace.QDy[ 70 ]), &(acadoWorkspace.g[ 49 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2156 ]), &(acadoWorkspace.QDy[ 63 ]), &(acadoWorkspace.g[ 56 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2597 ]), &(acadoWorkspace.QDy[ 70 ]), &(acadoWorkspace.g[ 56 ]) );
acado_multEQDy( &(acadoWorkspace.E[ 2646 ]), &(acadoWorkspace.QDy[ 70 ]), &(acadoWorkspace.g[ 63 ]) );

acadoWorkspace.g[0] += + acadoWorkspace.H10[0]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[1]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[2]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[3]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[4]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[5]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[6]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[1] += + acadoWorkspace.H10[7]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[8]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[9]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[10]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[11]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[12]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[13]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[2] += + acadoWorkspace.H10[14]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[15]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[16]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[17]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[18]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[19]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[20]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[3] += + acadoWorkspace.H10[21]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[22]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[23]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[24]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[25]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[26]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[27]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[4] += + acadoWorkspace.H10[28]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[29]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[30]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[31]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[32]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[33]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[34]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[5] += + acadoWorkspace.H10[35]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[36]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[37]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[38]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[39]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[40]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[41]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[6] += + acadoWorkspace.H10[42]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[43]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[44]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[45]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[46]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[47]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[48]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[7] += + acadoWorkspace.H10[49]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[50]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[51]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[52]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[53]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[54]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[55]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[8] += + acadoWorkspace.H10[56]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[57]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[58]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[59]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[60]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[61]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[62]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[9] += + acadoWorkspace.H10[63]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[64]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[65]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[66]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[67]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[68]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[69]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[10] += + acadoWorkspace.H10[70]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[71]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[72]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[73]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[74]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[75]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[76]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[11] += + acadoWorkspace.H10[77]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[78]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[79]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[80]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[81]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[82]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[83]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[12] += + acadoWorkspace.H10[84]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[85]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[86]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[87]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[88]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[89]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[90]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[13] += + acadoWorkspace.H10[91]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[92]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[93]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[94]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[95]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[96]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[97]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[14] += + acadoWorkspace.H10[98]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[99]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[100]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[101]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[102]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[103]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[104]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[15] += + acadoWorkspace.H10[105]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[106]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[107]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[108]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[109]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[110]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[111]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[16] += + acadoWorkspace.H10[112]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[113]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[114]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[115]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[116]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[117]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[118]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[17] += + acadoWorkspace.H10[119]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[120]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[121]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[122]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[123]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[124]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[125]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[18] += + acadoWorkspace.H10[126]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[127]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[128]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[129]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[130]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[131]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[132]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[19] += + acadoWorkspace.H10[133]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[134]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[135]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[136]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[137]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[138]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[139]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[20] += + acadoWorkspace.H10[140]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[141]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[142]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[143]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[144]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[145]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[146]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[21] += + acadoWorkspace.H10[147]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[148]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[149]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[150]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[151]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[152]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[153]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[22] += + acadoWorkspace.H10[154]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[155]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[156]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[157]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[158]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[159]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[160]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[23] += + acadoWorkspace.H10[161]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[162]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[163]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[164]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[165]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[166]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[167]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[24] += + acadoWorkspace.H10[168]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[169]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[170]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[171]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[172]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[173]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[174]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[25] += + acadoWorkspace.H10[175]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[176]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[177]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[178]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[179]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[180]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[181]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[26] += + acadoWorkspace.H10[182]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[183]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[184]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[185]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[186]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[187]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[188]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[27] += + acadoWorkspace.H10[189]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[190]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[191]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[192]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[193]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[194]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[195]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[28] += + acadoWorkspace.H10[196]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[197]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[198]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[199]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[200]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[201]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[202]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[29] += + acadoWorkspace.H10[203]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[204]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[205]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[206]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[207]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[208]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[209]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[30] += + acadoWorkspace.H10[210]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[211]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[212]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[213]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[214]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[215]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[216]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[31] += + acadoWorkspace.H10[217]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[218]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[219]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[220]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[221]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[222]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[223]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[32] += + acadoWorkspace.H10[224]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[225]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[226]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[227]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[228]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[229]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[230]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[33] += + acadoWorkspace.H10[231]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[232]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[233]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[234]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[235]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[236]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[237]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[34] += + acadoWorkspace.H10[238]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[239]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[240]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[241]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[242]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[243]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[244]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[35] += + acadoWorkspace.H10[245]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[246]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[247]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[248]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[249]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[250]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[251]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[36] += + acadoWorkspace.H10[252]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[253]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[254]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[255]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[256]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[257]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[258]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[37] += + acadoWorkspace.H10[259]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[260]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[261]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[262]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[263]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[264]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[265]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[38] += + acadoWorkspace.H10[266]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[267]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[268]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[269]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[270]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[271]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[272]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[39] += + acadoWorkspace.H10[273]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[274]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[275]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[276]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[277]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[278]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[279]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[40] += + acadoWorkspace.H10[280]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[281]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[282]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[283]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[284]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[285]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[286]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[41] += + acadoWorkspace.H10[287]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[288]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[289]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[290]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[291]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[292]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[293]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[42] += + acadoWorkspace.H10[294]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[295]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[296]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[297]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[298]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[299]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[300]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[43] += + acadoWorkspace.H10[301]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[302]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[303]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[304]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[305]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[306]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[307]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[44] += + acadoWorkspace.H10[308]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[309]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[310]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[311]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[312]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[313]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[314]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[45] += + acadoWorkspace.H10[315]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[316]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[317]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[318]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[319]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[320]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[321]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[46] += + acadoWorkspace.H10[322]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[323]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[324]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[325]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[326]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[327]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[328]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[47] += + acadoWorkspace.H10[329]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[330]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[331]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[332]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[333]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[334]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[335]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[48] += + acadoWorkspace.H10[336]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[337]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[338]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[339]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[340]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[341]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[342]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[49] += + acadoWorkspace.H10[343]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[344]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[345]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[346]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[347]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[348]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[349]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[50] += + acadoWorkspace.H10[350]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[351]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[352]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[353]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[354]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[355]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[356]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[51] += + acadoWorkspace.H10[357]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[358]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[359]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[360]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[361]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[362]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[363]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[52] += + acadoWorkspace.H10[364]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[365]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[366]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[367]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[368]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[369]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[370]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[53] += + acadoWorkspace.H10[371]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[372]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[373]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[374]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[375]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[376]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[377]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[54] += + acadoWorkspace.H10[378]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[379]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[380]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[381]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[382]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[383]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[384]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[55] += + acadoWorkspace.H10[385]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[386]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[387]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[388]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[389]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[390]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[391]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[56] += + acadoWorkspace.H10[392]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[393]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[394]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[395]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[396]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[397]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[398]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[57] += + acadoWorkspace.H10[399]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[400]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[401]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[402]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[403]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[404]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[405]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[58] += + acadoWorkspace.H10[406]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[407]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[408]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[409]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[410]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[411]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[412]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[59] += + acadoWorkspace.H10[413]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[414]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[415]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[416]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[417]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[418]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[419]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[60] += + acadoWorkspace.H10[420]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[421]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[422]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[423]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[424]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[425]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[426]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[61] += + acadoWorkspace.H10[427]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[428]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[429]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[430]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[431]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[432]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[433]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[62] += + acadoWorkspace.H10[434]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[435]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[436]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[437]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[438]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[439]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[440]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[63] += + acadoWorkspace.H10[441]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[442]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[443]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[444]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[445]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[446]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[447]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[64] += + acadoWorkspace.H10[448]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[449]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[450]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[451]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[452]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[453]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[454]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[65] += + acadoWorkspace.H10[455]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[456]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[457]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[458]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[459]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[460]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[461]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[66] += + acadoWorkspace.H10[462]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[463]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[464]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[465]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[466]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[467]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[468]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[67] += + acadoWorkspace.H10[469]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[470]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[471]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[472]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[473]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[474]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[475]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[68] += + acadoWorkspace.H10[476]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[477]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[478]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[479]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[480]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[481]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[482]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[69] += + acadoWorkspace.H10[483]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[484]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[485]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[486]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[487]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[488]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[489]*acadoWorkspace.Dx0[6];

acadoWorkspace.pacA01Dx0[0] = + acadoWorkspace.A01[0]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[1]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[2]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[3]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[4]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[5]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[6]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[1] = + acadoWorkspace.A01[7]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[8]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[9]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[10]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[11]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[12]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[13]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[2] = + acadoWorkspace.A01[14]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[15]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[16]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[17]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[18]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[19]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[20]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[3] = + acadoWorkspace.A01[21]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[22]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[23]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[24]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[25]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[26]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[27]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[4] = + acadoWorkspace.A01[28]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[29]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[30]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[31]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[32]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[33]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[34]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[5] = + acadoWorkspace.A01[35]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[36]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[37]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[38]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[39]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[40]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[41]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[6] = + acadoWorkspace.A01[42]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[43]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[44]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[45]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[46]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[47]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[48]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[7] = + acadoWorkspace.A01[49]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[50]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[51]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[52]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[53]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[54]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[55]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[8] = + acadoWorkspace.A01[56]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[57]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[58]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[59]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[60]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[61]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[62]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[9] = + acadoWorkspace.A01[63]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[64]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[65]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[66]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[67]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[68]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[69]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[10] = + acadoWorkspace.A01[70]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[71]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[72]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[73]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[74]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[75]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[76]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[11] = + acadoWorkspace.A01[77]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[78]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[79]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[80]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[81]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[82]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[83]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[12] = + acadoWorkspace.A01[84]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[85]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[86]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[87]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[88]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[89]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[90]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[13] = + acadoWorkspace.A01[91]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[92]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[93]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[94]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[95]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[96]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[97]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[14] = + acadoWorkspace.A01[98]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[99]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[100]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[101]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[102]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[103]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[104]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[15] = + acadoWorkspace.A01[105]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[106]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[107]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[108]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[109]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[110]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[111]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[16] = + acadoWorkspace.A01[112]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[113]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[114]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[115]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[116]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[117]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[118]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[17] = + acadoWorkspace.A01[119]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[120]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[121]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[122]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[123]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[124]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[125]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[18] = + acadoWorkspace.A01[126]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[127]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[128]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[129]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[130]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[131]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[132]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[19] = + acadoWorkspace.A01[133]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[134]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[135]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[136]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[137]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[138]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[139]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[20] = + acadoWorkspace.A01[140]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[141]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[142]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[143]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[144]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[145]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[146]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[21] = + acadoWorkspace.A01[147]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[148]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[149]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[150]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[151]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[152]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[153]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[22] = + acadoWorkspace.A01[154]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[155]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[156]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[157]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[158]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[159]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[160]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[23] = + acadoWorkspace.A01[161]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[162]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[163]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[164]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[165]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[166]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[167]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[24] = + acadoWorkspace.A01[168]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[169]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[170]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[171]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[172]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[173]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[174]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[25] = + acadoWorkspace.A01[175]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[176]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[177]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[178]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[179]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[180]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[181]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[26] = + acadoWorkspace.A01[182]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[183]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[184]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[185]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[186]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[187]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[188]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[27] = + acadoWorkspace.A01[189]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[190]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[191]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[192]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[193]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[194]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[195]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[28] = + acadoWorkspace.A01[196]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[197]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[198]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[199]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[200]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[201]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[202]*acadoWorkspace.Dx0[6];
acadoWorkspace.pacA01Dx0[29] = + acadoWorkspace.A01[203]*acadoWorkspace.Dx0[0] + acadoWorkspace.A01[204]*acadoWorkspace.Dx0[1] + acadoWorkspace.A01[205]*acadoWorkspace.Dx0[2] + acadoWorkspace.A01[206]*acadoWorkspace.Dx0[3] + acadoWorkspace.A01[207]*acadoWorkspace.Dx0[4] + acadoWorkspace.A01[208]*acadoWorkspace.Dx0[5] + acadoWorkspace.A01[209]*acadoWorkspace.Dx0[6];
acadoWorkspace.lbA[0] -= acadoWorkspace.pacA01Dx0[0];
acadoWorkspace.lbA[1] -= acadoWorkspace.pacA01Dx0[1];
acadoWorkspace.lbA[2] -= acadoWorkspace.pacA01Dx0[2];
acadoWorkspace.lbA[3] -= acadoWorkspace.pacA01Dx0[3];
acadoWorkspace.lbA[4] -= acadoWorkspace.pacA01Dx0[4];
acadoWorkspace.lbA[5] -= acadoWorkspace.pacA01Dx0[5];
acadoWorkspace.lbA[6] -= acadoWorkspace.pacA01Dx0[6];
acadoWorkspace.lbA[7] -= acadoWorkspace.pacA01Dx0[7];
acadoWorkspace.lbA[8] -= acadoWorkspace.pacA01Dx0[8];
acadoWorkspace.lbA[9] -= acadoWorkspace.pacA01Dx0[9];
acadoWorkspace.lbA[10] -= acadoWorkspace.pacA01Dx0[10];
acadoWorkspace.lbA[11] -= acadoWorkspace.pacA01Dx0[11];
acadoWorkspace.lbA[12] -= acadoWorkspace.pacA01Dx0[12];
acadoWorkspace.lbA[13] -= acadoWorkspace.pacA01Dx0[13];
acadoWorkspace.lbA[14] -= acadoWorkspace.pacA01Dx0[14];
acadoWorkspace.lbA[15] -= acadoWorkspace.pacA01Dx0[15];
acadoWorkspace.lbA[16] -= acadoWorkspace.pacA01Dx0[16];
acadoWorkspace.lbA[17] -= acadoWorkspace.pacA01Dx0[17];
acadoWorkspace.lbA[18] -= acadoWorkspace.pacA01Dx0[18];
acadoWorkspace.lbA[19] -= acadoWorkspace.pacA01Dx0[19];
acadoWorkspace.lbA[20] -= acadoWorkspace.pacA01Dx0[20];
acadoWorkspace.lbA[21] -= acadoWorkspace.pacA01Dx0[21];
acadoWorkspace.lbA[22] -= acadoWorkspace.pacA01Dx0[22];
acadoWorkspace.lbA[23] -= acadoWorkspace.pacA01Dx0[23];
acadoWorkspace.lbA[24] -= acadoWorkspace.pacA01Dx0[24];
acadoWorkspace.lbA[25] -= acadoWorkspace.pacA01Dx0[25];
acadoWorkspace.lbA[26] -= acadoWorkspace.pacA01Dx0[26];
acadoWorkspace.lbA[27] -= acadoWorkspace.pacA01Dx0[27];
acadoWorkspace.lbA[28] -= acadoWorkspace.pacA01Dx0[28];
acadoWorkspace.lbA[29] -= acadoWorkspace.pacA01Dx0[29];

acadoWorkspace.ubA[0] -= acadoWorkspace.pacA01Dx0[0];
acadoWorkspace.ubA[1] -= acadoWorkspace.pacA01Dx0[1];
acadoWorkspace.ubA[2] -= acadoWorkspace.pacA01Dx0[2];
acadoWorkspace.ubA[3] -= acadoWorkspace.pacA01Dx0[3];
acadoWorkspace.ubA[4] -= acadoWorkspace.pacA01Dx0[4];
acadoWorkspace.ubA[5] -= acadoWorkspace.pacA01Dx0[5];
acadoWorkspace.ubA[6] -= acadoWorkspace.pacA01Dx0[6];
acadoWorkspace.ubA[7] -= acadoWorkspace.pacA01Dx0[7];
acadoWorkspace.ubA[8] -= acadoWorkspace.pacA01Dx0[8];
acadoWorkspace.ubA[9] -= acadoWorkspace.pacA01Dx0[9];
acadoWorkspace.ubA[10] -= acadoWorkspace.pacA01Dx0[10];
acadoWorkspace.ubA[11] -= acadoWorkspace.pacA01Dx0[11];
acadoWorkspace.ubA[12] -= acadoWorkspace.pacA01Dx0[12];
acadoWorkspace.ubA[13] -= acadoWorkspace.pacA01Dx0[13];
acadoWorkspace.ubA[14] -= acadoWorkspace.pacA01Dx0[14];
acadoWorkspace.ubA[15] -= acadoWorkspace.pacA01Dx0[15];
acadoWorkspace.ubA[16] -= acadoWorkspace.pacA01Dx0[16];
acadoWorkspace.ubA[17] -= acadoWorkspace.pacA01Dx0[17];
acadoWorkspace.ubA[18] -= acadoWorkspace.pacA01Dx0[18];
acadoWorkspace.ubA[19] -= acadoWorkspace.pacA01Dx0[19];
acadoWorkspace.ubA[20] -= acadoWorkspace.pacA01Dx0[20];
acadoWorkspace.ubA[21] -= acadoWorkspace.pacA01Dx0[21];
acadoWorkspace.ubA[22] -= acadoWorkspace.pacA01Dx0[22];
acadoWorkspace.ubA[23] -= acadoWorkspace.pacA01Dx0[23];
acadoWorkspace.ubA[24] -= acadoWorkspace.pacA01Dx0[24];
acadoWorkspace.ubA[25] -= acadoWorkspace.pacA01Dx0[25];
acadoWorkspace.ubA[26] -= acadoWorkspace.pacA01Dx0[26];
acadoWorkspace.ubA[27] -= acadoWorkspace.pacA01Dx0[27];
acadoWorkspace.ubA[28] -= acadoWorkspace.pacA01Dx0[28];
acadoWorkspace.ubA[29] -= acadoWorkspace.pacA01Dx0[29];

}

void acado_expand(  )
{
acadoVariables.u[0] += acadoWorkspace.x[0];
acadoVariables.u[1] += acadoWorkspace.x[1];
acadoVariables.u[2] += acadoWorkspace.x[2];
acadoVariables.u[3] += acadoWorkspace.x[3];
acadoVariables.u[4] += acadoWorkspace.x[4];
acadoVariables.u[5] += acadoWorkspace.x[5];
acadoVariables.u[6] += acadoWorkspace.x[6];
acadoVariables.u[7] += acadoWorkspace.x[7];
acadoVariables.u[8] += acadoWorkspace.x[8];
acadoVariables.u[9] += acadoWorkspace.x[9];
acadoVariables.u[10] += acadoWorkspace.x[10];
acadoVariables.u[11] += acadoWorkspace.x[11];
acadoVariables.u[12] += acadoWorkspace.x[12];
acadoVariables.u[13] += acadoWorkspace.x[13];
acadoVariables.u[14] += acadoWorkspace.x[14];
acadoVariables.u[15] += acadoWorkspace.x[15];
acadoVariables.u[16] += acadoWorkspace.x[16];
acadoVariables.u[17] += acadoWorkspace.x[17];
acadoVariables.u[18] += acadoWorkspace.x[18];
acadoVariables.u[19] += acadoWorkspace.x[19];
acadoVariables.u[20] += acadoWorkspace.x[20];
acadoVariables.u[21] += acadoWorkspace.x[21];
acadoVariables.u[22] += acadoWorkspace.x[22];
acadoVariables.u[23] += acadoWorkspace.x[23];
acadoVariables.u[24] += acadoWorkspace.x[24];
acadoVariables.u[25] += acadoWorkspace.x[25];
acadoVariables.u[26] += acadoWorkspace.x[26];
acadoVariables.u[27] += acadoWorkspace.x[27];
acadoVariables.u[28] += acadoWorkspace.x[28];
acadoVariables.u[29] += acadoWorkspace.x[29];
acadoVariables.u[30] += acadoWorkspace.x[30];
acadoVariables.u[31] += acadoWorkspace.x[31];
acadoVariables.u[32] += acadoWorkspace.x[32];
acadoVariables.u[33] += acadoWorkspace.x[33];
acadoVariables.u[34] += acadoWorkspace.x[34];
acadoVariables.u[35] += acadoWorkspace.x[35];
acadoVariables.u[36] += acadoWorkspace.x[36];
acadoVariables.u[37] += acadoWorkspace.x[37];
acadoVariables.u[38] += acadoWorkspace.x[38];
acadoVariables.u[39] += acadoWorkspace.x[39];
acadoVariables.u[40] += acadoWorkspace.x[40];
acadoVariables.u[41] += acadoWorkspace.x[41];
acadoVariables.u[42] += acadoWorkspace.x[42];
acadoVariables.u[43] += acadoWorkspace.x[43];
acadoVariables.u[44] += acadoWorkspace.x[44];
acadoVariables.u[45] += acadoWorkspace.x[45];
acadoVariables.u[46] += acadoWorkspace.x[46];
acadoVariables.u[47] += acadoWorkspace.x[47];
acadoVariables.u[48] += acadoWorkspace.x[48];
acadoVariables.u[49] += acadoWorkspace.x[49];
acadoVariables.u[50] += acadoWorkspace.x[50];
acadoVariables.u[51] += acadoWorkspace.x[51];
acadoVariables.u[52] += acadoWorkspace.x[52];
acadoVariables.u[53] += acadoWorkspace.x[53];
acadoVariables.u[54] += acadoWorkspace.x[54];
acadoVariables.u[55] += acadoWorkspace.x[55];
acadoVariables.u[56] += acadoWorkspace.x[56];
acadoVariables.u[57] += acadoWorkspace.x[57];
acadoVariables.u[58] += acadoWorkspace.x[58];
acadoVariables.u[59] += acadoWorkspace.x[59];
acadoVariables.u[60] += acadoWorkspace.x[60];
acadoVariables.u[61] += acadoWorkspace.x[61];
acadoVariables.u[62] += acadoWorkspace.x[62];
acadoVariables.u[63] += acadoWorkspace.x[63];
acadoVariables.u[64] += acadoWorkspace.x[64];
acadoVariables.u[65] += acadoWorkspace.x[65];
acadoVariables.u[66] += acadoWorkspace.x[66];
acadoVariables.u[67] += acadoWorkspace.x[67];
acadoVariables.u[68] += acadoWorkspace.x[68];
acadoVariables.u[69] += acadoWorkspace.x[69];

acadoVariables.x[0] += acadoWorkspace.Dx0[0];
acadoVariables.x[1] += acadoWorkspace.Dx0[1];
acadoVariables.x[2] += acadoWorkspace.Dx0[2];
acadoVariables.x[3] += acadoWorkspace.Dx0[3];
acadoVariables.x[4] += acadoWorkspace.Dx0[4];
acadoVariables.x[5] += acadoWorkspace.Dx0[5];
acadoVariables.x[6] += acadoWorkspace.Dx0[6];

acadoVariables.x[7] += + acadoWorkspace.evGx[0]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[2]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[3]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[4]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[5]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[6]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[0];
acadoVariables.x[8] += + acadoWorkspace.evGx[7]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[8]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[9]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[10]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[11]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[12]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[13]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[1];
acadoVariables.x[9] += + acadoWorkspace.evGx[14]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[15]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[16]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[17]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[18]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[19]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[20]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[2];
acadoVariables.x[10] += + acadoWorkspace.evGx[21]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[22]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[23]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[24]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[25]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[26]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[27]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[3];
acadoVariables.x[11] += + acadoWorkspace.evGx[28]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[29]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[30]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[31]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[32]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[33]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[34]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[4];
acadoVariables.x[12] += + acadoWorkspace.evGx[35]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[36]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[37]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[38]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[39]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[40]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[41]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[5];
acadoVariables.x[13] += + acadoWorkspace.evGx[42]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[43]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[44]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[45]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[46]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[47]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[48]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[6];
acadoVariables.x[14] += + acadoWorkspace.evGx[49]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[50]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[51]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[52]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[53]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[54]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[55]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[7];
acadoVariables.x[15] += + acadoWorkspace.evGx[56]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[57]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[58]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[59]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[60]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[61]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[62]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[8];
acadoVariables.x[16] += + acadoWorkspace.evGx[63]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[64]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[65]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[66]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[67]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[68]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[69]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[9];
acadoVariables.x[17] += + acadoWorkspace.evGx[70]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[71]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[72]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[73]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[74]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[75]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[76]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[10];
acadoVariables.x[18] += + acadoWorkspace.evGx[77]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[78]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[79]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[80]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[81]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[82]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[83]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[11];
acadoVariables.x[19] += + acadoWorkspace.evGx[84]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[85]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[86]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[87]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[88]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[89]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[90]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[12];
acadoVariables.x[20] += + acadoWorkspace.evGx[91]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[92]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[93]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[94]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[95]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[96]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[97]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[13];
acadoVariables.x[21] += + acadoWorkspace.evGx[98]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[99]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[100]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[101]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[102]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[103]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[104]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[14];
acadoVariables.x[22] += + acadoWorkspace.evGx[105]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[106]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[107]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[108]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[109]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[110]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[111]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[15];
acadoVariables.x[23] += + acadoWorkspace.evGx[112]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[113]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[114]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[115]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[116]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[117]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[118]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[16];
acadoVariables.x[24] += + acadoWorkspace.evGx[119]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[120]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[121]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[122]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[123]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[124]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[125]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[17];
acadoVariables.x[25] += + acadoWorkspace.evGx[126]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[127]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[128]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[129]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[130]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[131]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[132]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[18];
acadoVariables.x[26] += + acadoWorkspace.evGx[133]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[134]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[135]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[136]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[137]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[138]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[139]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[19];
acadoVariables.x[27] += + acadoWorkspace.evGx[140]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[141]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[142]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[143]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[144]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[145]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[146]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[20];
acadoVariables.x[28] += + acadoWorkspace.evGx[147]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[148]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[149]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[150]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[151]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[152]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[153]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[21];
acadoVariables.x[29] += + acadoWorkspace.evGx[154]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[155]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[156]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[157]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[158]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[159]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[160]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[22];
acadoVariables.x[30] += + acadoWorkspace.evGx[161]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[162]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[163]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[164]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[165]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[166]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[167]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[23];
acadoVariables.x[31] += + acadoWorkspace.evGx[168]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[169]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[170]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[171]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[172]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[173]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[174]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[24];
acadoVariables.x[32] += + acadoWorkspace.evGx[175]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[176]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[177]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[178]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[179]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[180]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[181]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[25];
acadoVariables.x[33] += + acadoWorkspace.evGx[182]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[183]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[184]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[185]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[186]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[187]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[188]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[26];
acadoVariables.x[34] += + acadoWorkspace.evGx[189]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[190]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[191]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[192]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[193]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[194]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[195]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[27];
acadoVariables.x[35] += + acadoWorkspace.evGx[196]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[197]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[198]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[199]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[200]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[201]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[202]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[28];
acadoVariables.x[36] += + acadoWorkspace.evGx[203]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[204]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[205]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[206]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[207]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[208]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[209]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[29];
acadoVariables.x[37] += + acadoWorkspace.evGx[210]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[211]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[212]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[213]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[214]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[215]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[216]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[30];
acadoVariables.x[38] += + acadoWorkspace.evGx[217]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[218]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[219]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[220]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[221]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[222]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[223]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[31];
acadoVariables.x[39] += + acadoWorkspace.evGx[224]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[225]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[226]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[227]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[228]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[229]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[230]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[32];
acadoVariables.x[40] += + acadoWorkspace.evGx[231]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[232]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[233]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[234]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[235]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[236]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[237]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[33];
acadoVariables.x[41] += + acadoWorkspace.evGx[238]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[239]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[240]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[241]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[242]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[243]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[244]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[34];
acadoVariables.x[42] += + acadoWorkspace.evGx[245]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[246]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[247]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[248]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[249]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[250]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[251]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[35];
acadoVariables.x[43] += + acadoWorkspace.evGx[252]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[253]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[254]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[255]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[256]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[257]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[258]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[36];
acadoVariables.x[44] += + acadoWorkspace.evGx[259]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[260]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[261]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[262]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[263]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[264]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[265]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[37];
acadoVariables.x[45] += + acadoWorkspace.evGx[266]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[267]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[268]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[269]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[270]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[271]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[272]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[38];
acadoVariables.x[46] += + acadoWorkspace.evGx[273]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[274]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[275]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[276]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[277]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[278]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[279]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[39];
acadoVariables.x[47] += + acadoWorkspace.evGx[280]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[281]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[282]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[283]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[284]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[285]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[286]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[40];
acadoVariables.x[48] += + acadoWorkspace.evGx[287]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[288]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[289]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[290]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[291]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[292]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[293]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[41];
acadoVariables.x[49] += + acadoWorkspace.evGx[294]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[295]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[296]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[297]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[298]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[299]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[300]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[42];
acadoVariables.x[50] += + acadoWorkspace.evGx[301]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[302]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[303]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[304]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[305]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[306]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[307]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[43];
acadoVariables.x[51] += + acadoWorkspace.evGx[308]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[309]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[310]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[311]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[312]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[313]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[314]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[44];
acadoVariables.x[52] += + acadoWorkspace.evGx[315]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[316]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[317]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[318]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[319]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[320]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[321]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[45];
acadoVariables.x[53] += + acadoWorkspace.evGx[322]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[323]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[324]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[325]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[326]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[327]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[328]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[46];
acadoVariables.x[54] += + acadoWorkspace.evGx[329]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[330]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[331]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[332]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[333]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[334]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[335]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[47];
acadoVariables.x[55] += + acadoWorkspace.evGx[336]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[337]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[338]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[339]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[340]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[341]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[342]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[48];
acadoVariables.x[56] += + acadoWorkspace.evGx[343]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[344]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[345]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[346]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[347]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[348]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[349]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[49];
acadoVariables.x[57] += + acadoWorkspace.evGx[350]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[351]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[352]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[353]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[354]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[355]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[356]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[50];
acadoVariables.x[58] += + acadoWorkspace.evGx[357]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[358]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[359]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[360]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[361]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[362]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[363]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[51];
acadoVariables.x[59] += + acadoWorkspace.evGx[364]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[365]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[366]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[367]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[368]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[369]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[370]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[52];
acadoVariables.x[60] += + acadoWorkspace.evGx[371]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[372]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[373]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[374]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[375]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[376]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[377]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[53];
acadoVariables.x[61] += + acadoWorkspace.evGx[378]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[379]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[380]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[381]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[382]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[383]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[384]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[54];
acadoVariables.x[62] += + acadoWorkspace.evGx[385]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[386]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[387]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[388]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[389]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[390]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[391]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[55];
acadoVariables.x[63] += + acadoWorkspace.evGx[392]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[393]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[394]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[395]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[396]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[397]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[398]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[56];
acadoVariables.x[64] += + acadoWorkspace.evGx[399]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[400]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[401]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[402]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[403]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[404]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[405]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[57];
acadoVariables.x[65] += + acadoWorkspace.evGx[406]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[407]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[408]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[409]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[410]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[411]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[412]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[58];
acadoVariables.x[66] += + acadoWorkspace.evGx[413]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[414]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[415]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[416]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[417]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[418]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[419]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[59];
acadoVariables.x[67] += + acadoWorkspace.evGx[420]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[421]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[422]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[423]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[424]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[425]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[426]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[60];
acadoVariables.x[68] += + acadoWorkspace.evGx[427]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[428]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[429]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[430]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[431]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[432]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[433]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[61];
acadoVariables.x[69] += + acadoWorkspace.evGx[434]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[435]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[436]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[437]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[438]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[439]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[440]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[62];
acadoVariables.x[70] += + acadoWorkspace.evGx[441]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[442]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[443]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[444]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[445]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[446]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[447]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[63];
acadoVariables.x[71] += + acadoWorkspace.evGx[448]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[449]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[450]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[451]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[452]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[453]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[454]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[64];
acadoVariables.x[72] += + acadoWorkspace.evGx[455]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[456]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[457]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[458]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[459]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[460]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[461]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[65];
acadoVariables.x[73] += + acadoWorkspace.evGx[462]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[463]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[464]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[465]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[466]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[467]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[468]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[66];
acadoVariables.x[74] += + acadoWorkspace.evGx[469]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[470]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[471]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[472]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[473]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[474]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[475]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[67];
acadoVariables.x[75] += + acadoWorkspace.evGx[476]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[477]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[478]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[479]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[480]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[481]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[482]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[68];
acadoVariables.x[76] += + acadoWorkspace.evGx[483]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[484]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[485]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[486]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[487]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[488]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[489]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[69];

acado_multEDu( acadoWorkspace.E, acadoWorkspace.x, &(acadoVariables.x[ 7 ]) );
acado_multEDu( &(acadoWorkspace.E[ 49 ]), acadoWorkspace.x, &(acadoVariables.x[ 14 ]) );
acado_multEDu( &(acadoWorkspace.E[ 98 ]), &(acadoWorkspace.x[ 7 ]), &(acadoVariables.x[ 14 ]) );
acado_multEDu( &(acadoWorkspace.E[ 147 ]), acadoWorkspace.x, &(acadoVariables.x[ 21 ]) );
acado_multEDu( &(acadoWorkspace.E[ 196 ]), &(acadoWorkspace.x[ 7 ]), &(acadoVariables.x[ 21 ]) );
acado_multEDu( &(acadoWorkspace.E[ 245 ]), &(acadoWorkspace.x[ 14 ]), &(acadoVariables.x[ 21 ]) );
acado_multEDu( &(acadoWorkspace.E[ 294 ]), acadoWorkspace.x, &(acadoVariables.x[ 28 ]) );
acado_multEDu( &(acadoWorkspace.E[ 343 ]), &(acadoWorkspace.x[ 7 ]), &(acadoVariables.x[ 28 ]) );
acado_multEDu( &(acadoWorkspace.E[ 392 ]), &(acadoWorkspace.x[ 14 ]), &(acadoVariables.x[ 28 ]) );
acado_multEDu( &(acadoWorkspace.E[ 441 ]), &(acadoWorkspace.x[ 21 ]), &(acadoVariables.x[ 28 ]) );
acado_multEDu( &(acadoWorkspace.E[ 490 ]), acadoWorkspace.x, &(acadoVariables.x[ 35 ]) );
acado_multEDu( &(acadoWorkspace.E[ 539 ]), &(acadoWorkspace.x[ 7 ]), &(acadoVariables.x[ 35 ]) );
acado_multEDu( &(acadoWorkspace.E[ 588 ]), &(acadoWorkspace.x[ 14 ]), &(acadoVariables.x[ 35 ]) );
acado_multEDu( &(acadoWorkspace.E[ 637 ]), &(acadoWorkspace.x[ 21 ]), &(acadoVariables.x[ 35 ]) );
acado_multEDu( &(acadoWorkspace.E[ 686 ]), &(acadoWorkspace.x[ 28 ]), &(acadoVariables.x[ 35 ]) );
acado_multEDu( &(acadoWorkspace.E[ 735 ]), acadoWorkspace.x, &(acadoVariables.x[ 42 ]) );
acado_multEDu( &(acadoWorkspace.E[ 784 ]), &(acadoWorkspace.x[ 7 ]), &(acadoVariables.x[ 42 ]) );
acado_multEDu( &(acadoWorkspace.E[ 833 ]), &(acadoWorkspace.x[ 14 ]), &(acadoVariables.x[ 42 ]) );
acado_multEDu( &(acadoWorkspace.E[ 882 ]), &(acadoWorkspace.x[ 21 ]), &(acadoVariables.x[ 42 ]) );
acado_multEDu( &(acadoWorkspace.E[ 931 ]), &(acadoWorkspace.x[ 28 ]), &(acadoVariables.x[ 42 ]) );
acado_multEDu( &(acadoWorkspace.E[ 980 ]), &(acadoWorkspace.x[ 35 ]), &(acadoVariables.x[ 42 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1029 ]), acadoWorkspace.x, &(acadoVariables.x[ 49 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1078 ]), &(acadoWorkspace.x[ 7 ]), &(acadoVariables.x[ 49 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1127 ]), &(acadoWorkspace.x[ 14 ]), &(acadoVariables.x[ 49 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1176 ]), &(acadoWorkspace.x[ 21 ]), &(acadoVariables.x[ 49 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1225 ]), &(acadoWorkspace.x[ 28 ]), &(acadoVariables.x[ 49 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1274 ]), &(acadoWorkspace.x[ 35 ]), &(acadoVariables.x[ 49 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1323 ]), &(acadoWorkspace.x[ 42 ]), &(acadoVariables.x[ 49 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1372 ]), acadoWorkspace.x, &(acadoVariables.x[ 56 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1421 ]), &(acadoWorkspace.x[ 7 ]), &(acadoVariables.x[ 56 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1470 ]), &(acadoWorkspace.x[ 14 ]), &(acadoVariables.x[ 56 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1519 ]), &(acadoWorkspace.x[ 21 ]), &(acadoVariables.x[ 56 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1568 ]), &(acadoWorkspace.x[ 28 ]), &(acadoVariables.x[ 56 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1617 ]), &(acadoWorkspace.x[ 35 ]), &(acadoVariables.x[ 56 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1666 ]), &(acadoWorkspace.x[ 42 ]), &(acadoVariables.x[ 56 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1715 ]), &(acadoWorkspace.x[ 49 ]), &(acadoVariables.x[ 56 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1764 ]), acadoWorkspace.x, &(acadoVariables.x[ 63 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1813 ]), &(acadoWorkspace.x[ 7 ]), &(acadoVariables.x[ 63 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1862 ]), &(acadoWorkspace.x[ 14 ]), &(acadoVariables.x[ 63 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1911 ]), &(acadoWorkspace.x[ 21 ]), &(acadoVariables.x[ 63 ]) );
acado_multEDu( &(acadoWorkspace.E[ 1960 ]), &(acadoWorkspace.x[ 28 ]), &(acadoVariables.x[ 63 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2009 ]), &(acadoWorkspace.x[ 35 ]), &(acadoVariables.x[ 63 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2058 ]), &(acadoWorkspace.x[ 42 ]), &(acadoVariables.x[ 63 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2107 ]), &(acadoWorkspace.x[ 49 ]), &(acadoVariables.x[ 63 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2156 ]), &(acadoWorkspace.x[ 56 ]), &(acadoVariables.x[ 63 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2205 ]), acadoWorkspace.x, &(acadoVariables.x[ 70 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2254 ]), &(acadoWorkspace.x[ 7 ]), &(acadoVariables.x[ 70 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2303 ]), &(acadoWorkspace.x[ 14 ]), &(acadoVariables.x[ 70 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2352 ]), &(acadoWorkspace.x[ 21 ]), &(acadoVariables.x[ 70 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2401 ]), &(acadoWorkspace.x[ 28 ]), &(acadoVariables.x[ 70 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2450 ]), &(acadoWorkspace.x[ 35 ]), &(acadoVariables.x[ 70 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2499 ]), &(acadoWorkspace.x[ 42 ]), &(acadoVariables.x[ 70 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2548 ]), &(acadoWorkspace.x[ 49 ]), &(acadoVariables.x[ 70 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2597 ]), &(acadoWorkspace.x[ 56 ]), &(acadoVariables.x[ 70 ]) );
acado_multEDu( &(acadoWorkspace.E[ 2646 ]), &(acadoWorkspace.x[ 63 ]), &(acadoVariables.x[ 70 ]) );
}

int acado_preparationStep(  )
{
int ret;

ret = acado_modelSimulation();
acado_evaluateObjective(  );
acado_condensePrep(  );
return ret;
}

int acado_feedbackStep(  )
{
int tmp;

acado_condenseFdb(  );

tmp = acado_solve( );

acado_expand(  );
return tmp;
}

int acado_initializeSolver(  )
{
int ret;

/* This is a function which must be called once before any other function call! */


ret = 0;

memset(&acadoWorkspace, 0, sizeof( acadoWorkspace ));
return ret;
}

void acado_initializeNodesByForwardSimulation(  )
{
int index;
for (index = 0; index < 10; ++index)
{
acadoWorkspace.state[0] = acadoVariables.x[index * 7];
acadoWorkspace.state[1] = acadoVariables.x[index * 7 + 1];
acadoWorkspace.state[2] = acadoVariables.x[index * 7 + 2];
acadoWorkspace.state[3] = acadoVariables.x[index * 7 + 3];
acadoWorkspace.state[4] = acadoVariables.x[index * 7 + 4];
acadoWorkspace.state[5] = acadoVariables.x[index * 7 + 5];
acadoWorkspace.state[6] = acadoVariables.x[index * 7 + 6];
acadoWorkspace.state[105] = acadoVariables.u[index * 7];
acadoWorkspace.state[106] = acadoVariables.u[index * 7 + 1];
acadoWorkspace.state[107] = acadoVariables.u[index * 7 + 2];
acadoWorkspace.state[108] = acadoVariables.u[index * 7 + 3];
acadoWorkspace.state[109] = acadoVariables.u[index * 7 + 4];
acadoWorkspace.state[110] = acadoVariables.u[index * 7 + 5];
acadoWorkspace.state[111] = acadoVariables.u[index * 7 + 6];
acadoWorkspace.state[112] = acadoVariables.od[index * 59];
acadoWorkspace.state[113] = acadoVariables.od[index * 59 + 1];
acadoWorkspace.state[114] = acadoVariables.od[index * 59 + 2];
acadoWorkspace.state[115] = acadoVariables.od[index * 59 + 3];
acadoWorkspace.state[116] = acadoVariables.od[index * 59 + 4];
acadoWorkspace.state[117] = acadoVariables.od[index * 59 + 5];
acadoWorkspace.state[118] = acadoVariables.od[index * 59 + 6];
acadoWorkspace.state[119] = acadoVariables.od[index * 59 + 7];
acadoWorkspace.state[120] = acadoVariables.od[index * 59 + 8];
acadoWorkspace.state[121] = acadoVariables.od[index * 59 + 9];
acadoWorkspace.state[122] = acadoVariables.od[index * 59 + 10];
acadoWorkspace.state[123] = acadoVariables.od[index * 59 + 11];
acadoWorkspace.state[124] = acadoVariables.od[index * 59 + 12];
acadoWorkspace.state[125] = acadoVariables.od[index * 59 + 13];
acadoWorkspace.state[126] = acadoVariables.od[index * 59 + 14];
acadoWorkspace.state[127] = acadoVariables.od[index * 59 + 15];
acadoWorkspace.state[128] = acadoVariables.od[index * 59 + 16];
acadoWorkspace.state[129] = acadoVariables.od[index * 59 + 17];
acadoWorkspace.state[130] = acadoVariables.od[index * 59 + 18];
acadoWorkspace.state[131] = acadoVariables.od[index * 59 + 19];
acadoWorkspace.state[132] = acadoVariables.od[index * 59 + 20];
acadoWorkspace.state[133] = acadoVariables.od[index * 59 + 21];
acadoWorkspace.state[134] = acadoVariables.od[index * 59 + 22];
acadoWorkspace.state[135] = acadoVariables.od[index * 59 + 23];
acadoWorkspace.state[136] = acadoVariables.od[index * 59 + 24];
acadoWorkspace.state[137] = acadoVariables.od[index * 59 + 25];
acadoWorkspace.state[138] = acadoVariables.od[index * 59 + 26];
acadoWorkspace.state[139] = acadoVariables.od[index * 59 + 27];
acadoWorkspace.state[140] = acadoVariables.od[index * 59 + 28];
acadoWorkspace.state[141] = acadoVariables.od[index * 59 + 29];
acadoWorkspace.state[142] = acadoVariables.od[index * 59 + 30];
acadoWorkspace.state[143] = acadoVariables.od[index * 59 + 31];
acadoWorkspace.state[144] = acadoVariables.od[index * 59 + 32];
acadoWorkspace.state[145] = acadoVariables.od[index * 59 + 33];
acadoWorkspace.state[146] = acadoVariables.od[index * 59 + 34];
acadoWorkspace.state[147] = acadoVariables.od[index * 59 + 35];
acadoWorkspace.state[148] = acadoVariables.od[index * 59 + 36];
acadoWorkspace.state[149] = acadoVariables.od[index * 59 + 37];
acadoWorkspace.state[150] = acadoVariables.od[index * 59 + 38];
acadoWorkspace.state[151] = acadoVariables.od[index * 59 + 39];
acadoWorkspace.state[152] = acadoVariables.od[index * 59 + 40];
acadoWorkspace.state[153] = acadoVariables.od[index * 59 + 41];
acadoWorkspace.state[154] = acadoVariables.od[index * 59 + 42];
acadoWorkspace.state[155] = acadoVariables.od[index * 59 + 43];
acadoWorkspace.state[156] = acadoVariables.od[index * 59 + 44];
acadoWorkspace.state[157] = acadoVariables.od[index * 59 + 45];
acadoWorkspace.state[158] = acadoVariables.od[index * 59 + 46];
acadoWorkspace.state[159] = acadoVariables.od[index * 59 + 47];
acadoWorkspace.state[160] = acadoVariables.od[index * 59 + 48];
acadoWorkspace.state[161] = acadoVariables.od[index * 59 + 49];
acadoWorkspace.state[162] = acadoVariables.od[index * 59 + 50];
acadoWorkspace.state[163] = acadoVariables.od[index * 59 + 51];
acadoWorkspace.state[164] = acadoVariables.od[index * 59 + 52];
acadoWorkspace.state[165] = acadoVariables.od[index * 59 + 53];
acadoWorkspace.state[166] = acadoVariables.od[index * 59 + 54];
acadoWorkspace.state[167] = acadoVariables.od[index * 59 + 55];
acadoWorkspace.state[168] = acadoVariables.od[index * 59 + 56];
acadoWorkspace.state[169] = acadoVariables.od[index * 59 + 57];
acadoWorkspace.state[170] = acadoVariables.od[index * 59 + 58];

acado_integrate(acadoWorkspace.state, index == 0);

acadoVariables.x[index * 7 + 7] = acadoWorkspace.state[0];
acadoVariables.x[index * 7 + 8] = acadoWorkspace.state[1];
acadoVariables.x[index * 7 + 9] = acadoWorkspace.state[2];
acadoVariables.x[index * 7 + 10] = acadoWorkspace.state[3];
acadoVariables.x[index * 7 + 11] = acadoWorkspace.state[4];
acadoVariables.x[index * 7 + 12] = acadoWorkspace.state[5];
acadoVariables.x[index * 7 + 13] = acadoWorkspace.state[6];
}
}

void acado_shiftStates( int strategy, real_t* const xEnd, real_t* const uEnd )
{
int index;
for (index = 0; index < 10; ++index)
{
acadoVariables.x[index * 7] = acadoVariables.x[index * 7 + 7];
acadoVariables.x[index * 7 + 1] = acadoVariables.x[index * 7 + 8];
acadoVariables.x[index * 7 + 2] = acadoVariables.x[index * 7 + 9];
acadoVariables.x[index * 7 + 3] = acadoVariables.x[index * 7 + 10];
acadoVariables.x[index * 7 + 4] = acadoVariables.x[index * 7 + 11];
acadoVariables.x[index * 7 + 5] = acadoVariables.x[index * 7 + 12];
acadoVariables.x[index * 7 + 6] = acadoVariables.x[index * 7 + 13];
}

if (strategy == 1 && xEnd != 0)
{
acadoVariables.x[70] = xEnd[0];
acadoVariables.x[71] = xEnd[1];
acadoVariables.x[72] = xEnd[2];
acadoVariables.x[73] = xEnd[3];
acadoVariables.x[74] = xEnd[4];
acadoVariables.x[75] = xEnd[5];
acadoVariables.x[76] = xEnd[6];
}
else if (strategy == 2) 
{
acadoWorkspace.state[0] = acadoVariables.x[70];
acadoWorkspace.state[1] = acadoVariables.x[71];
acadoWorkspace.state[2] = acadoVariables.x[72];
acadoWorkspace.state[3] = acadoVariables.x[73];
acadoWorkspace.state[4] = acadoVariables.x[74];
acadoWorkspace.state[5] = acadoVariables.x[75];
acadoWorkspace.state[6] = acadoVariables.x[76];
if (uEnd != 0)
{
acadoWorkspace.state[105] = uEnd[0];
acadoWorkspace.state[106] = uEnd[1];
acadoWorkspace.state[107] = uEnd[2];
acadoWorkspace.state[108] = uEnd[3];
acadoWorkspace.state[109] = uEnd[4];
acadoWorkspace.state[110] = uEnd[5];
acadoWorkspace.state[111] = uEnd[6];
}
else
{
acadoWorkspace.state[105] = acadoVariables.u[63];
acadoWorkspace.state[106] = acadoVariables.u[64];
acadoWorkspace.state[107] = acadoVariables.u[65];
acadoWorkspace.state[108] = acadoVariables.u[66];
acadoWorkspace.state[109] = acadoVariables.u[67];
acadoWorkspace.state[110] = acadoVariables.u[68];
acadoWorkspace.state[111] = acadoVariables.u[69];
}
acadoWorkspace.state[112] = acadoVariables.od[590];
acadoWorkspace.state[113] = acadoVariables.od[591];
acadoWorkspace.state[114] = acadoVariables.od[592];
acadoWorkspace.state[115] = acadoVariables.od[593];
acadoWorkspace.state[116] = acadoVariables.od[594];
acadoWorkspace.state[117] = acadoVariables.od[595];
acadoWorkspace.state[118] = acadoVariables.od[596];
acadoWorkspace.state[119] = acadoVariables.od[597];
acadoWorkspace.state[120] = acadoVariables.od[598];
acadoWorkspace.state[121] = acadoVariables.od[599];
acadoWorkspace.state[122] = acadoVariables.od[600];
acadoWorkspace.state[123] = acadoVariables.od[601];
acadoWorkspace.state[124] = acadoVariables.od[602];
acadoWorkspace.state[125] = acadoVariables.od[603];
acadoWorkspace.state[126] = acadoVariables.od[604];
acadoWorkspace.state[127] = acadoVariables.od[605];
acadoWorkspace.state[128] = acadoVariables.od[606];
acadoWorkspace.state[129] = acadoVariables.od[607];
acadoWorkspace.state[130] = acadoVariables.od[608];
acadoWorkspace.state[131] = acadoVariables.od[609];
acadoWorkspace.state[132] = acadoVariables.od[610];
acadoWorkspace.state[133] = acadoVariables.od[611];
acadoWorkspace.state[134] = acadoVariables.od[612];
acadoWorkspace.state[135] = acadoVariables.od[613];
acadoWorkspace.state[136] = acadoVariables.od[614];
acadoWorkspace.state[137] = acadoVariables.od[615];
acadoWorkspace.state[138] = acadoVariables.od[616];
acadoWorkspace.state[139] = acadoVariables.od[617];
acadoWorkspace.state[140] = acadoVariables.od[618];
acadoWorkspace.state[141] = acadoVariables.od[619];
acadoWorkspace.state[142] = acadoVariables.od[620];
acadoWorkspace.state[143] = acadoVariables.od[621];
acadoWorkspace.state[144] = acadoVariables.od[622];
acadoWorkspace.state[145] = acadoVariables.od[623];
acadoWorkspace.state[146] = acadoVariables.od[624];
acadoWorkspace.state[147] = acadoVariables.od[625];
acadoWorkspace.state[148] = acadoVariables.od[626];
acadoWorkspace.state[149] = acadoVariables.od[627];
acadoWorkspace.state[150] = acadoVariables.od[628];
acadoWorkspace.state[151] = acadoVariables.od[629];
acadoWorkspace.state[152] = acadoVariables.od[630];
acadoWorkspace.state[153] = acadoVariables.od[631];
acadoWorkspace.state[154] = acadoVariables.od[632];
acadoWorkspace.state[155] = acadoVariables.od[633];
acadoWorkspace.state[156] = acadoVariables.od[634];
acadoWorkspace.state[157] = acadoVariables.od[635];
acadoWorkspace.state[158] = acadoVariables.od[636];
acadoWorkspace.state[159] = acadoVariables.od[637];
acadoWorkspace.state[160] = acadoVariables.od[638];
acadoWorkspace.state[161] = acadoVariables.od[639];
acadoWorkspace.state[162] = acadoVariables.od[640];
acadoWorkspace.state[163] = acadoVariables.od[641];
acadoWorkspace.state[164] = acadoVariables.od[642];
acadoWorkspace.state[165] = acadoVariables.od[643];
acadoWorkspace.state[166] = acadoVariables.od[644];
acadoWorkspace.state[167] = acadoVariables.od[645];
acadoWorkspace.state[168] = acadoVariables.od[646];
acadoWorkspace.state[169] = acadoVariables.od[647];
acadoWorkspace.state[170] = acadoVariables.od[648];

acado_integrate(acadoWorkspace.state, 1);

acadoVariables.x[70] = acadoWorkspace.state[0];
acadoVariables.x[71] = acadoWorkspace.state[1];
acadoVariables.x[72] = acadoWorkspace.state[2];
acadoVariables.x[73] = acadoWorkspace.state[3];
acadoVariables.x[74] = acadoWorkspace.state[4];
acadoVariables.x[75] = acadoWorkspace.state[5];
acadoVariables.x[76] = acadoWorkspace.state[6];
}
}

void acado_shiftControls( real_t* const uEnd )
{
int index;
for (index = 0; index < 9; ++index)
{
acadoVariables.u[index * 7] = acadoVariables.u[index * 7 + 7];
acadoVariables.u[index * 7 + 1] = acadoVariables.u[index * 7 + 8];
acadoVariables.u[index * 7 + 2] = acadoVariables.u[index * 7 + 9];
acadoVariables.u[index * 7 + 3] = acadoVariables.u[index * 7 + 10];
acadoVariables.u[index * 7 + 4] = acadoVariables.u[index * 7 + 11];
acadoVariables.u[index * 7 + 5] = acadoVariables.u[index * 7 + 12];
acadoVariables.u[index * 7 + 6] = acadoVariables.u[index * 7 + 13];
}

if (uEnd != 0)
{
acadoVariables.u[63] = uEnd[0];
acadoVariables.u[64] = uEnd[1];
acadoVariables.u[65] = uEnd[2];
acadoVariables.u[66] = uEnd[3];
acadoVariables.u[67] = uEnd[4];
acadoVariables.u[68] = uEnd[5];
acadoVariables.u[69] = uEnd[6];
}
}

real_t acado_getKKT(  )
{
real_t kkt;

int index;
real_t prd;

kkt = + acadoWorkspace.g[0]*acadoWorkspace.x[0] + acadoWorkspace.g[1]*acadoWorkspace.x[1] + acadoWorkspace.g[2]*acadoWorkspace.x[2] + acadoWorkspace.g[3]*acadoWorkspace.x[3] + acadoWorkspace.g[4]*acadoWorkspace.x[4] + acadoWorkspace.g[5]*acadoWorkspace.x[5] + acadoWorkspace.g[6]*acadoWorkspace.x[6] + acadoWorkspace.g[7]*acadoWorkspace.x[7] + acadoWorkspace.g[8]*acadoWorkspace.x[8] + acadoWorkspace.g[9]*acadoWorkspace.x[9] + acadoWorkspace.g[10]*acadoWorkspace.x[10] + acadoWorkspace.g[11]*acadoWorkspace.x[11] + acadoWorkspace.g[12]*acadoWorkspace.x[12] + acadoWorkspace.g[13]*acadoWorkspace.x[13] + acadoWorkspace.g[14]*acadoWorkspace.x[14] + acadoWorkspace.g[15]*acadoWorkspace.x[15] + acadoWorkspace.g[16]*acadoWorkspace.x[16] + acadoWorkspace.g[17]*acadoWorkspace.x[17] + acadoWorkspace.g[18]*acadoWorkspace.x[18] + acadoWorkspace.g[19]*acadoWorkspace.x[19] + acadoWorkspace.g[20]*acadoWorkspace.x[20] + acadoWorkspace.g[21]*acadoWorkspace.x[21] + acadoWorkspace.g[22]*acadoWorkspace.x[22] + acadoWorkspace.g[23]*acadoWorkspace.x[23] + acadoWorkspace.g[24]*acadoWorkspace.x[24] + acadoWorkspace.g[25]*acadoWorkspace.x[25] + acadoWorkspace.g[26]*acadoWorkspace.x[26] + acadoWorkspace.g[27]*acadoWorkspace.x[27] + acadoWorkspace.g[28]*acadoWorkspace.x[28] + acadoWorkspace.g[29]*acadoWorkspace.x[29] + acadoWorkspace.g[30]*acadoWorkspace.x[30] + acadoWorkspace.g[31]*acadoWorkspace.x[31] + acadoWorkspace.g[32]*acadoWorkspace.x[32] + acadoWorkspace.g[33]*acadoWorkspace.x[33] + acadoWorkspace.g[34]*acadoWorkspace.x[34] + acadoWorkspace.g[35]*acadoWorkspace.x[35] + acadoWorkspace.g[36]*acadoWorkspace.x[36] + acadoWorkspace.g[37]*acadoWorkspace.x[37] + acadoWorkspace.g[38]*acadoWorkspace.x[38] + acadoWorkspace.g[39]*acadoWorkspace.x[39] + acadoWorkspace.g[40]*acadoWorkspace.x[40] + acadoWorkspace.g[41]*acadoWorkspace.x[41] + acadoWorkspace.g[42]*acadoWorkspace.x[42] + acadoWorkspace.g[43]*acadoWorkspace.x[43] + acadoWorkspace.g[44]*acadoWorkspace.x[44] + acadoWorkspace.g[45]*acadoWorkspace.x[45] + acadoWorkspace.g[46]*acadoWorkspace.x[46] + acadoWorkspace.g[47]*acadoWorkspace.x[47] + acadoWorkspace.g[48]*acadoWorkspace.x[48] + acadoWorkspace.g[49]*acadoWorkspace.x[49] + acadoWorkspace.g[50]*acadoWorkspace.x[50] + acadoWorkspace.g[51]*acadoWorkspace.x[51] + acadoWorkspace.g[52]*acadoWorkspace.x[52] + acadoWorkspace.g[53]*acadoWorkspace.x[53] + acadoWorkspace.g[54]*acadoWorkspace.x[54] + acadoWorkspace.g[55]*acadoWorkspace.x[55] + acadoWorkspace.g[56]*acadoWorkspace.x[56] + acadoWorkspace.g[57]*acadoWorkspace.x[57] + acadoWorkspace.g[58]*acadoWorkspace.x[58] + acadoWorkspace.g[59]*acadoWorkspace.x[59] + acadoWorkspace.g[60]*acadoWorkspace.x[60] + acadoWorkspace.g[61]*acadoWorkspace.x[61] + acadoWorkspace.g[62]*acadoWorkspace.x[62] + acadoWorkspace.g[63]*acadoWorkspace.x[63] + acadoWorkspace.g[64]*acadoWorkspace.x[64] + acadoWorkspace.g[65]*acadoWorkspace.x[65] + acadoWorkspace.g[66]*acadoWorkspace.x[66] + acadoWorkspace.g[67]*acadoWorkspace.x[67] + acadoWorkspace.g[68]*acadoWorkspace.x[68] + acadoWorkspace.g[69]*acadoWorkspace.x[69];
kkt = fabs( kkt );
for (index = 0; index < 70; ++index)
{
prd = acadoWorkspace.y[index];
if (prd > 1e-12)
kkt += fabs(acadoWorkspace.lb[index] * prd);
else if (prd < -1e-12)
kkt += fabs(acadoWorkspace.ub[index] * prd);
}
for (index = 0; index < 30; ++index)
{
prd = acadoWorkspace.y[index + 70];
if (prd > 1e-12)
kkt += fabs(acadoWorkspace.lbA[index] * prd);
else if (prd < -1e-12)
kkt += fabs(acadoWorkspace.ubA[index] * prd);
}
return kkt;
}

real_t acado_getObjective(  )
{
real_t objVal;

int lRun1;
/** Row vector of size: 13 */
real_t tmpDy[ 13 ];

/** Row vector of size: 6 */
real_t tmpDyN[ 6 ];

for (lRun1 = 0; lRun1 < 10; ++lRun1)
{
acadoWorkspace.objValueIn[0] = acadoVariables.x[lRun1 * 7];
acadoWorkspace.objValueIn[1] = acadoVariables.x[lRun1 * 7 + 1];
acadoWorkspace.objValueIn[2] = acadoVariables.x[lRun1 * 7 + 2];
acadoWorkspace.objValueIn[3] = acadoVariables.x[lRun1 * 7 + 3];
acadoWorkspace.objValueIn[4] = acadoVariables.x[lRun1 * 7 + 4];
acadoWorkspace.objValueIn[5] = acadoVariables.x[lRun1 * 7 + 5];
acadoWorkspace.objValueIn[6] = acadoVariables.x[lRun1 * 7 + 6];
acadoWorkspace.objValueIn[7] = acadoVariables.u[lRun1 * 7];
acadoWorkspace.objValueIn[8] = acadoVariables.u[lRun1 * 7 + 1];
acadoWorkspace.objValueIn[9] = acadoVariables.u[lRun1 * 7 + 2];
acadoWorkspace.objValueIn[10] = acadoVariables.u[lRun1 * 7 + 3];
acadoWorkspace.objValueIn[11] = acadoVariables.u[lRun1 * 7 + 4];
acadoWorkspace.objValueIn[12] = acadoVariables.u[lRun1 * 7 + 5];
acadoWorkspace.objValueIn[13] = acadoVariables.u[lRun1 * 7 + 6];
acadoWorkspace.objValueIn[14] = acadoVariables.od[lRun1 * 59];
acadoWorkspace.objValueIn[15] = acadoVariables.od[lRun1 * 59 + 1];
acadoWorkspace.objValueIn[16] = acadoVariables.od[lRun1 * 59 + 2];
acadoWorkspace.objValueIn[17] = acadoVariables.od[lRun1 * 59 + 3];
acadoWorkspace.objValueIn[18] = acadoVariables.od[lRun1 * 59 + 4];
acadoWorkspace.objValueIn[19] = acadoVariables.od[lRun1 * 59 + 5];
acadoWorkspace.objValueIn[20] = acadoVariables.od[lRun1 * 59 + 6];
acadoWorkspace.objValueIn[21] = acadoVariables.od[lRun1 * 59 + 7];
acadoWorkspace.objValueIn[22] = acadoVariables.od[lRun1 * 59 + 8];
acadoWorkspace.objValueIn[23] = acadoVariables.od[lRun1 * 59 + 9];
acadoWorkspace.objValueIn[24] = acadoVariables.od[lRun1 * 59 + 10];
acadoWorkspace.objValueIn[25] = acadoVariables.od[lRun1 * 59 + 11];
acadoWorkspace.objValueIn[26] = acadoVariables.od[lRun1 * 59 + 12];
acadoWorkspace.objValueIn[27] = acadoVariables.od[lRun1 * 59 + 13];
acadoWorkspace.objValueIn[28] = acadoVariables.od[lRun1 * 59 + 14];
acadoWorkspace.objValueIn[29] = acadoVariables.od[lRun1 * 59 + 15];
acadoWorkspace.objValueIn[30] = acadoVariables.od[lRun1 * 59 + 16];
acadoWorkspace.objValueIn[31] = acadoVariables.od[lRun1 * 59 + 17];
acadoWorkspace.objValueIn[32] = acadoVariables.od[lRun1 * 59 + 18];
acadoWorkspace.objValueIn[33] = acadoVariables.od[lRun1 * 59 + 19];
acadoWorkspace.objValueIn[34] = acadoVariables.od[lRun1 * 59 + 20];
acadoWorkspace.objValueIn[35] = acadoVariables.od[lRun1 * 59 + 21];
acadoWorkspace.objValueIn[36] = acadoVariables.od[lRun1 * 59 + 22];
acadoWorkspace.objValueIn[37] = acadoVariables.od[lRun1 * 59 + 23];
acadoWorkspace.objValueIn[38] = acadoVariables.od[lRun1 * 59 + 24];
acadoWorkspace.objValueIn[39] = acadoVariables.od[lRun1 * 59 + 25];
acadoWorkspace.objValueIn[40] = acadoVariables.od[lRun1 * 59 + 26];
acadoWorkspace.objValueIn[41] = acadoVariables.od[lRun1 * 59 + 27];
acadoWorkspace.objValueIn[42] = acadoVariables.od[lRun1 * 59 + 28];
acadoWorkspace.objValueIn[43] = acadoVariables.od[lRun1 * 59 + 29];
acadoWorkspace.objValueIn[44] = acadoVariables.od[lRun1 * 59 + 30];
acadoWorkspace.objValueIn[45] = acadoVariables.od[lRun1 * 59 + 31];
acadoWorkspace.objValueIn[46] = acadoVariables.od[lRun1 * 59 + 32];
acadoWorkspace.objValueIn[47] = acadoVariables.od[lRun1 * 59 + 33];
acadoWorkspace.objValueIn[48] = acadoVariables.od[lRun1 * 59 + 34];
acadoWorkspace.objValueIn[49] = acadoVariables.od[lRun1 * 59 + 35];
acadoWorkspace.objValueIn[50] = acadoVariables.od[lRun1 * 59 + 36];
acadoWorkspace.objValueIn[51] = acadoVariables.od[lRun1 * 59 + 37];
acadoWorkspace.objValueIn[52] = acadoVariables.od[lRun1 * 59 + 38];
acadoWorkspace.objValueIn[53] = acadoVariables.od[lRun1 * 59 + 39];
acadoWorkspace.objValueIn[54] = acadoVariables.od[lRun1 * 59 + 40];
acadoWorkspace.objValueIn[55] = acadoVariables.od[lRun1 * 59 + 41];
acadoWorkspace.objValueIn[56] = acadoVariables.od[lRun1 * 59 + 42];
acadoWorkspace.objValueIn[57] = acadoVariables.od[lRun1 * 59 + 43];
acadoWorkspace.objValueIn[58] = acadoVariables.od[lRun1 * 59 + 44];
acadoWorkspace.objValueIn[59] = acadoVariables.od[lRun1 * 59 + 45];
acadoWorkspace.objValueIn[60] = acadoVariables.od[lRun1 * 59 + 46];
acadoWorkspace.objValueIn[61] = acadoVariables.od[lRun1 * 59 + 47];
acadoWorkspace.objValueIn[62] = acadoVariables.od[lRun1 * 59 + 48];
acadoWorkspace.objValueIn[63] = acadoVariables.od[lRun1 * 59 + 49];
acadoWorkspace.objValueIn[64] = acadoVariables.od[lRun1 * 59 + 50];
acadoWorkspace.objValueIn[65] = acadoVariables.od[lRun1 * 59 + 51];
acadoWorkspace.objValueIn[66] = acadoVariables.od[lRun1 * 59 + 52];
acadoWorkspace.objValueIn[67] = acadoVariables.od[lRun1 * 59 + 53];
acadoWorkspace.objValueIn[68] = acadoVariables.od[lRun1 * 59 + 54];
acadoWorkspace.objValueIn[69] = acadoVariables.od[lRun1 * 59 + 55];
acadoWorkspace.objValueIn[70] = acadoVariables.od[lRun1 * 59 + 56];
acadoWorkspace.objValueIn[71] = acadoVariables.od[lRun1 * 59 + 57];
acadoWorkspace.objValueIn[72] = acadoVariables.od[lRun1 * 59 + 58];

acado_evaluateLSQ( acadoWorkspace.objValueIn, acadoWorkspace.objValueOut );
acadoWorkspace.Dy[lRun1 * 13] = acadoWorkspace.objValueOut[0] - acadoVariables.y[lRun1 * 13];
acadoWorkspace.Dy[lRun1 * 13 + 1] = acadoWorkspace.objValueOut[1] - acadoVariables.y[lRun1 * 13 + 1];
acadoWorkspace.Dy[lRun1 * 13 + 2] = acadoWorkspace.objValueOut[2] - acadoVariables.y[lRun1 * 13 + 2];
acadoWorkspace.Dy[lRun1 * 13 + 3] = acadoWorkspace.objValueOut[3] - acadoVariables.y[lRun1 * 13 + 3];
acadoWorkspace.Dy[lRun1 * 13 + 4] = acadoWorkspace.objValueOut[4] - acadoVariables.y[lRun1 * 13 + 4];
acadoWorkspace.Dy[lRun1 * 13 + 5] = acadoWorkspace.objValueOut[5] - acadoVariables.y[lRun1 * 13 + 5];
acadoWorkspace.Dy[lRun1 * 13 + 6] = acadoWorkspace.objValueOut[6] - acadoVariables.y[lRun1 * 13 + 6];
acadoWorkspace.Dy[lRun1 * 13 + 7] = acadoWorkspace.objValueOut[7] - acadoVariables.y[lRun1 * 13 + 7];
acadoWorkspace.Dy[lRun1 * 13 + 8] = acadoWorkspace.objValueOut[8] - acadoVariables.y[lRun1 * 13 + 8];
acadoWorkspace.Dy[lRun1 * 13 + 9] = acadoWorkspace.objValueOut[9] - acadoVariables.y[lRun1 * 13 + 9];
acadoWorkspace.Dy[lRun1 * 13 + 10] = acadoWorkspace.objValueOut[10] - acadoVariables.y[lRun1 * 13 + 10];
acadoWorkspace.Dy[lRun1 * 13 + 11] = acadoWorkspace.objValueOut[11] - acadoVariables.y[lRun1 * 13 + 11];
acadoWorkspace.Dy[lRun1 * 13 + 12] = acadoWorkspace.objValueOut[12] - acadoVariables.y[lRun1 * 13 + 12];
}
acadoWorkspace.objValueIn[0] = acadoVariables.x[70];
acadoWorkspace.objValueIn[1] = acadoVariables.x[71];
acadoWorkspace.objValueIn[2] = acadoVariables.x[72];
acadoWorkspace.objValueIn[3] = acadoVariables.x[73];
acadoWorkspace.objValueIn[4] = acadoVariables.x[74];
acadoWorkspace.objValueIn[5] = acadoVariables.x[75];
acadoWorkspace.objValueIn[6] = acadoVariables.x[76];
acadoWorkspace.objValueIn[7] = acadoVariables.od[590];
acadoWorkspace.objValueIn[8] = acadoVariables.od[591];
acadoWorkspace.objValueIn[9] = acadoVariables.od[592];
acadoWorkspace.objValueIn[10] = acadoVariables.od[593];
acadoWorkspace.objValueIn[11] = acadoVariables.od[594];
acadoWorkspace.objValueIn[12] = acadoVariables.od[595];
acadoWorkspace.objValueIn[13] = acadoVariables.od[596];
acadoWorkspace.objValueIn[14] = acadoVariables.od[597];
acadoWorkspace.objValueIn[15] = acadoVariables.od[598];
acadoWorkspace.objValueIn[16] = acadoVariables.od[599];
acadoWorkspace.objValueIn[17] = acadoVariables.od[600];
acadoWorkspace.objValueIn[18] = acadoVariables.od[601];
acadoWorkspace.objValueIn[19] = acadoVariables.od[602];
acadoWorkspace.objValueIn[20] = acadoVariables.od[603];
acadoWorkspace.objValueIn[21] = acadoVariables.od[604];
acadoWorkspace.objValueIn[22] = acadoVariables.od[605];
acadoWorkspace.objValueIn[23] = acadoVariables.od[606];
acadoWorkspace.objValueIn[24] = acadoVariables.od[607];
acadoWorkspace.objValueIn[25] = acadoVariables.od[608];
acadoWorkspace.objValueIn[26] = acadoVariables.od[609];
acadoWorkspace.objValueIn[27] = acadoVariables.od[610];
acadoWorkspace.objValueIn[28] = acadoVariables.od[611];
acadoWorkspace.objValueIn[29] = acadoVariables.od[612];
acadoWorkspace.objValueIn[30] = acadoVariables.od[613];
acadoWorkspace.objValueIn[31] = acadoVariables.od[614];
acadoWorkspace.objValueIn[32] = acadoVariables.od[615];
acadoWorkspace.objValueIn[33] = acadoVariables.od[616];
acadoWorkspace.objValueIn[34] = acadoVariables.od[617];
acadoWorkspace.objValueIn[35] = acadoVariables.od[618];
acadoWorkspace.objValueIn[36] = acadoVariables.od[619];
acadoWorkspace.objValueIn[37] = acadoVariables.od[620];
acadoWorkspace.objValueIn[38] = acadoVariables.od[621];
acadoWorkspace.objValueIn[39] = acadoVariables.od[622];
acadoWorkspace.objValueIn[40] = acadoVariables.od[623];
acadoWorkspace.objValueIn[41] = acadoVariables.od[624];
acadoWorkspace.objValueIn[42] = acadoVariables.od[625];
acadoWorkspace.objValueIn[43] = acadoVariables.od[626];
acadoWorkspace.objValueIn[44] = acadoVariables.od[627];
acadoWorkspace.objValueIn[45] = acadoVariables.od[628];
acadoWorkspace.objValueIn[46] = acadoVariables.od[629];
acadoWorkspace.objValueIn[47] = acadoVariables.od[630];
acadoWorkspace.objValueIn[48] = acadoVariables.od[631];
acadoWorkspace.objValueIn[49] = acadoVariables.od[632];
acadoWorkspace.objValueIn[50] = acadoVariables.od[633];
acadoWorkspace.objValueIn[51] = acadoVariables.od[634];
acadoWorkspace.objValueIn[52] = acadoVariables.od[635];
acadoWorkspace.objValueIn[53] = acadoVariables.od[636];
acadoWorkspace.objValueIn[54] = acadoVariables.od[637];
acadoWorkspace.objValueIn[55] = acadoVariables.od[638];
acadoWorkspace.objValueIn[56] = acadoVariables.od[639];
acadoWorkspace.objValueIn[57] = acadoVariables.od[640];
acadoWorkspace.objValueIn[58] = acadoVariables.od[641];
acadoWorkspace.objValueIn[59] = acadoVariables.od[642];
acadoWorkspace.objValueIn[60] = acadoVariables.od[643];
acadoWorkspace.objValueIn[61] = acadoVariables.od[644];
acadoWorkspace.objValueIn[62] = acadoVariables.od[645];
acadoWorkspace.objValueIn[63] = acadoVariables.od[646];
acadoWorkspace.objValueIn[64] = acadoVariables.od[647];
acadoWorkspace.objValueIn[65] = acadoVariables.od[648];
acado_evaluateLSQEndTerm( acadoWorkspace.objValueIn, acadoWorkspace.objValueOut );
acadoWorkspace.DyN[0] = acadoWorkspace.objValueOut[0] - acadoVariables.yN[0];
acadoWorkspace.DyN[1] = acadoWorkspace.objValueOut[1] - acadoVariables.yN[1];
acadoWorkspace.DyN[2] = acadoWorkspace.objValueOut[2] - acadoVariables.yN[2];
acadoWorkspace.DyN[3] = acadoWorkspace.objValueOut[3] - acadoVariables.yN[3];
acadoWorkspace.DyN[4] = acadoWorkspace.objValueOut[4] - acadoVariables.yN[4];
acadoWorkspace.DyN[5] = acadoWorkspace.objValueOut[5] - acadoVariables.yN[5];
objVal = 0.0000000000000000e+00;
for (lRun1 = 0; lRun1 < 10; ++lRun1)
{
tmpDy[0] = + acadoWorkspace.Dy[lRun1 * 13]*(real_t)2.0000000000000000e+01;
tmpDy[1] = + acadoWorkspace.Dy[lRun1 * 13 + 1]*(real_t)2.0000000000000000e+01;
tmpDy[2] = + acadoWorkspace.Dy[lRun1 * 13 + 2]*(real_t)1.5000000000000000e+01;
tmpDy[3] = + acadoWorkspace.Dy[lRun1 * 13 + 3]*(real_t)1.5000000000000000e+01;
tmpDy[4] = + acadoWorkspace.Dy[lRun1 * 13 + 4]*(real_t)1.0000000000000000e+01;
tmpDy[5] = + acadoWorkspace.Dy[lRun1 * 13 + 5]*(real_t)1.0000000000000000e+01;
tmpDy[6] = + acadoWorkspace.Dy[lRun1 * 13 + 6];
tmpDy[7] = + acadoWorkspace.Dy[lRun1 * 13 + 7];
tmpDy[8] = + acadoWorkspace.Dy[lRun1 * 13 + 8];
tmpDy[9] = + acadoWorkspace.Dy[lRun1 * 13 + 9];
tmpDy[10] = + acadoWorkspace.Dy[lRun1 * 13 + 10];
tmpDy[11] = + acadoWorkspace.Dy[lRun1 * 13 + 11];
tmpDy[12] = + acadoWorkspace.Dy[lRun1 * 13 + 12]*(real_t)5.0000000000000000e+02;
objVal += + acadoWorkspace.Dy[lRun1 * 13]*tmpDy[0] + acadoWorkspace.Dy[lRun1 * 13 + 1]*tmpDy[1] + acadoWorkspace.Dy[lRun1 * 13 + 2]*tmpDy[2] + acadoWorkspace.Dy[lRun1 * 13 + 3]*tmpDy[3] + acadoWorkspace.Dy[lRun1 * 13 + 4]*tmpDy[4] + acadoWorkspace.Dy[lRun1 * 13 + 5]*tmpDy[5] + acadoWorkspace.Dy[lRun1 * 13 + 6]*tmpDy[6] + acadoWorkspace.Dy[lRun1 * 13 + 7]*tmpDy[7] + acadoWorkspace.Dy[lRun1 * 13 + 8]*tmpDy[8] + acadoWorkspace.Dy[lRun1 * 13 + 9]*tmpDy[9] + acadoWorkspace.Dy[lRun1 * 13 + 10]*tmpDy[10] + acadoWorkspace.Dy[lRun1 * 13 + 11]*tmpDy[11] + acadoWorkspace.Dy[lRun1 * 13 + 12]*tmpDy[12];
}

tmpDyN[0] = + acadoWorkspace.DyN[0];
tmpDyN[1] = + acadoWorkspace.DyN[1];
tmpDyN[2] = + acadoWorkspace.DyN[2];
tmpDyN[3] = + acadoWorkspace.DyN[3];
tmpDyN[4] = + acadoWorkspace.DyN[4];
tmpDyN[5] = + acadoWorkspace.DyN[5];
objVal += + acadoWorkspace.DyN[0]*tmpDyN[0] + acadoWorkspace.DyN[1]*tmpDyN[1] + acadoWorkspace.DyN[2]*tmpDyN[2] + acadoWorkspace.DyN[3]*tmpDyN[3] + acadoWorkspace.DyN[4]*tmpDyN[4] + acadoWorkspace.DyN[5]*tmpDyN[5];

objVal *= 0.5;
return objVal;
}

