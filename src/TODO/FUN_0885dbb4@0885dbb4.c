#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885dbb4(int param_1)

{
  int iVar1;
  
  *(undefined *)(param_1 + 0x700) = 1;
  *(undefined4 *)(param_1 + 0x6f8) = 1;
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0xc4942000;
  iVar1 = *(int *)(param_1 + 0x20c);
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 1;
    *(undefined4 *)(iVar1 + 0x148) = 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x208);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 0x40;
  }
  return;
}

