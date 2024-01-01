#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08854e78(int param_1,int param_2,int param_3)

{
  param_1 = param_1 + param_2 * 4;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
  return;
}

