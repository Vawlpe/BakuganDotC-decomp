#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08859ea0(int param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  FUN_089e056c(0x3f800000,param_1,0);
  FUN_089e0694(0x3f000000,param_1,"mat_spel");
  *(undefined4 *)(param_1 + 0xa84) = 0x3f800000;
  if (*(int *)(param_1 + 0x6bc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x6bc) + 0x6c) = 0x3f800000;
  }
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xa74) = 0;
  *(undefined *)(param_1 + 0xa78) = 0;
  return;
}

