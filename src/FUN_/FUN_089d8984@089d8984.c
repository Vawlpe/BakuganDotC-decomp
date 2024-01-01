#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089d8984(int *param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      param_2[1] = (int)param_1;
      *param_2 = (int)param_1;
      param_2[2] = 1;
      param_1[4] = (int)param_2;
      return param_1;
    }
    *(int **)(param_2[1] + 4) = param_1;
    *param_1 = param_2[1];
    param_2[1] = (int)param_1;
    param_2[2] = param_2[2] + 1;
    param_1[4] = (int)param_2;
  }
  return param_1;
}

