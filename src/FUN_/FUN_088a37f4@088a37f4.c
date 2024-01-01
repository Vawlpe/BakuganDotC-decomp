#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a37f4(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 != 0) {
    if (param_2 != '\0') {
      *(undefined4 *)(iVar1 + 0x134) = 9;
      iVar1 = *(int *)(param_1 + 0x140);
      *(undefined4 *)(iVar1 + 0x148) = 0;
      *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) & 0xfffffffe;
      *(uint *)(*(int *)(param_1 + 0x140) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x140) + 0x130) & 0xffffffbf;
      *(uint *)(*(int *)(param_1 + 0x140) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x140) + 0x130) & 0xfffffffb;
      return;
    }
    *(undefined4 *)(iVar1 + 0x134) = 7;
    iVar1 = *(int *)(param_1 + 0x140);
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 1;
    *(uint *)(*(int *)(param_1 + 0x140) + 0x130) =
         *(uint *)(*(int *)(param_1 + 0x140) + 0x130) | 0x40;
    *(uint *)(*(int *)(param_1 + 0x140) + 0x130) = *(uint *)(*(int *)(param_1 + 0x140) + 0x130) | 4;
  }
  return;
}

