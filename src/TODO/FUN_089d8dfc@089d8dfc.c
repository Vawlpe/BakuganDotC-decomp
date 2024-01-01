#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089d8dfc(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    *(int **)(param_2[1] + 4) = param_1;
    *param_1 = param_2[1];
    param_2[1] = (int)param_1;
    param_2[2] = param_2[2] + 1;
    param_1[5] = (int)param_2;
    param_1[1] = 0;
    return param_1;
  }
  param_2[1] = (int)param_1;
  *param_2 = (int)param_1;
  param_2[2] = 1;
  param_1[5] = (int)param_2;
  param_1[1] = 0;
  return param_1;
}

