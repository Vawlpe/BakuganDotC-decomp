#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08860604(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20c);
  if (param_2 != '\0') {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x208);
    }
    else {
      *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 1;
      *(undefined4 *)(iVar1 + 0x148) = 0xffffffff;
      iVar1 = *(int *)(param_1 + 0x208);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x168);
    }
    else {
      *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 0x40;
      iVar1 = *(int *)(param_1 + 0x168);
    }
    *(undefined *)(iVar1 + 0xc) = 1;
    return;
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x208);
  }
  else {
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) & 0xfffffffe;
    *(undefined4 *)(iVar1 + 0x148) = 0;
    iVar1 = *(int *)(param_1 + 0x208);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x168);
  }
  else {
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) & 0xffffffbf;
    iVar1 = *(int *)(param_1 + 0x168);
  }
  *(undefined *)(iVar1 + 0xc) = 0;
  return;
}

