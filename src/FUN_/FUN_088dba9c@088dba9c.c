#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088dbae0)

void FUN_088dba9c(int param_1)

{
  undefined4 uVar1;
  
  if ((-1 < *(int *)(param_1 + 0x16c)) && (*(int *)(param_1 + 0x16c) == 0)) {
    (*(code *)&LAB_088dbbe8)(param_1);
  }
  if (0.0 < *(float *)(param_1 + 0x6c)) {
    FUN_088db980(param_1);
    FUN_088db9a4(param_1);
    FUN_088db9f8(param_1);
    uVar1 = *(undefined4 *)(param_1 + 400);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 400);
  }
  FUN_089df788(uVar1,param_1);
  FUN_088d935c(param_1);
  return;
}

