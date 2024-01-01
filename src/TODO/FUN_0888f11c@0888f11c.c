#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888f11c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined *)(param_1 + 0xa1c) = 0;
  if (*(int *)(param_1 + 0x96c) != 0) {
    iVar1 = FUN_0888ef14(param_1,*(undefined4 *)(param_1 + 0x1a0),*(int *)(param_1 + 0x96c));
    if (iVar1 == 0) {
      uVar2 = *(uint *)(param_1 + 0x9d4);
      goto LAB_0888f1f8;
    }
    *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x400;
    if (iVar1 == 3 || iVar1 == 4) {
      *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xfffffbff;
    }
    iVar1 = FUN_0888ef80(param_1,iVar1);
    if (iVar1 != 0) {
      iVar1 = FUN_0888f028(0x44098000,param_1);
      if (iVar1 == 0) {
        uVar2 = *(uint *)(param_1 + 0x9d4);
        goto LAB_0888f1f8;
      }
      iVar1 = *(int *)(param_1 + 0x96c);
      if (iVar1 == 0) {
        uVar2 = *(uint *)(param_1 + 0x9d4);
        goto LAB_0888f1f8;
      }
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x54))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x50));
      if (iVar1 == 0) {
        uVar2 = *(uint *)(param_1 + 0x9d4);
        goto LAB_0888f1f8;
      }
      *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xfffffbff;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x9d4);
LAB_0888f1f8:
  *(bool *)(param_1 + 0xa1c) = (uVar2 & 0x400) != 0;
  return;
}

