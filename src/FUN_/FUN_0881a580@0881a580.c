#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881a580(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x130);
  if ((uVar1 & 0x10) == 0) {
    if (*(int *)(param_1 + 0x140) != 0) {
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + -1;
    }
    iVar2 = *(int *)(param_1 + 0x148) + -1;
    if ((*(int *)(param_1 + 0x148) != 0) && (*(int *)(param_1 + 0x148) = iVar2, iVar2 == 0)) {
      *(uint *)(param_1 + 0x130) = uVar1 & 0xfffffffe;
    }
  }
  else {
    *(uint *)(param_1 + 0x130) = uVar1 & 0xffffffef | 1;
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x174) + 2;
    if ((*(int *)(param_1 + 0x16c) != 0x16) && (*(int *)(param_1 + 0x16c) != 0x19)) {
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x174);
      return;
    }
  }
  return;
}

