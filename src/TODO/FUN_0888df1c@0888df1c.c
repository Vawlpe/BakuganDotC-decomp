#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888df1c(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x1a8) != param_2) {
    *(int *)(param_1 + 0x1a8) = param_2;
    *(undefined4 *)(param_1 + 0x1ac) = param_3;
    FUN_0888d118(param_1);
    FUN_0888dadc(param_1);
    FUN_0888daf8(param_1);
  }
  return;
}

