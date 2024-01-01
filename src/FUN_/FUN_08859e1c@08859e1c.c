#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08859e1c(int param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  FUN_089e056c(0x3f800000,param_1,0);
  FUN_089e0694(0x3f000000,param_1,"mat_spel");
  if (*(int *)(param_1 + 0x6bc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x6bc) + 0x6c) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0xa84) = 0x3f800000;
  FUN_08859e08(param_1);
  *(undefined *)(param_1 + 0xa7a) = 1;
  *(undefined *)(param_1 + 0xa79) = 0;
  return;
}

