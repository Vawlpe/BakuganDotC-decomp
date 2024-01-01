#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088aa174(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1fc);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 100))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x60));
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1fc);
    }
    else {
      FUN_088a75ec(param_1);
      iVar1 = *(int *)(param_1 + 0x1fc);
    }
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(int *)(param_1 + 0x1fc) = iVar1 + 1;
  }
  else if (1 < iVar1) {
    if (2 < iVar1) {
      return;
    }
    if (*(int *)(param_1 + 0x308) != 0) {
      *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + -1;
      return;
    }
    *(undefined *)(param_1 + 0x282) = 1;
    return;
  }
  *(uint *)(*(int *)(param_1 + 0x140) + 0x130) = *(uint *)(*(int *)(param_1 + 0x140) + 0x130) | 2;
  *(undefined4 *)(param_1 + 0x308) = 0xfa;
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
  return;
}

