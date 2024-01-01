#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a10a34(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != param_2)) {
    FUN_08a1078c(1,*(int *)(param_1 + 8));
    FUN_08a0ffa4(1,param_2);
    *(int *)(param_1 + 8) = param_2;
  }
  return;
}

