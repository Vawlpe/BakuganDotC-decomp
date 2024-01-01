#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088715b0(int param_1,undefined param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x16c) & 0x20) == 0) {
    FUN_088706f0(param_1,7,param_2);
  }
  else {
    FUN_088629ec(param_1);
    iVar1 = FUN_08888b50(param_1 + 0x434);
    if ((iVar1 != 0) && ((*(uint *)(param_1 + 0x144) & 0x100) == 0)) {
      *(undefined *)(param_1 + 0x658) = 0;
      *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xffffffef;
      iVar1 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar1 + 0x148) = 0;
      *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 1;
      FUN_088706f0(param_1,7,param_2);
      FUN_08876f38(param_1);
      if ((*(uint *)(param_1 + 0x148) & 0x10) != 0) {
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xffffffef;
      }
      iVar1 = 6;
      do {
        FUN_088865ac(param_1 + 0x434,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0xb);
    }
  }
  return;
}

