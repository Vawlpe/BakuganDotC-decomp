#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089703a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_089701fc(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_0880d308();
    iVar1 = FUN_0880d354();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 4;
      *(undefined *)(param_1 + 0xb88) = 0;
    }
  }
  return;
}

