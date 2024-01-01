#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a3e8c(int param_1,uint param_2,int param_3)

{
  if (param_2 < 3) {
    FUN_089bf314(param_1,param_2,param_3);
    return;
  }
  if ((param_2 == 3) && (*(int *)(param_1 + 0x28) != param_3)) {
    *(int *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

