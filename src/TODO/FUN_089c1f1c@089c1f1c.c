#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c1f1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  FUN_089c1f14(param_4,param_4 + 0x34);
  return;
}

