#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c004c(int *param_1,int **param_2,int *param_3,int **param_4)

{
  if (param_3 != (int *)0x0) {
    *param_2 = (int *)(param_2 + 2);
    param_2[2] = (int *)*param_3;
    *(int *)((int)*param_2 + 4) = param_3[1];
    *(int *)((int)*param_2 + 8) = param_3[2];
  }
  if (param_4 != (int **)0x0) {
    param_2[1] = (int *)(param_2 + 5);
    param_2[5] = *param_4;
    param_2[1][1] = (int)param_4[1];
    param_2[1][2] = (int)param_4[2];
  }
  param_2[8] = param_1;
  return;
}

