#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ac580(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 700)) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x164) + iVar2) == 0) {
          iVar1 = *(int *)(param_1 + 700);
        }
        else {
          iVar1 = *(int *)(*(int *)(param_1 + 0x164) + iVar2);
          puVar4 = (undefined4 *)(iVar1 + 0x60);
          FUN_08a29834(*(int *)(param_1 + 0x130) + 0x80,&local_20,iVar1 + 0x90);
          *puVar4 = local_20;
          puVar4[1] = uStack_1c;
          puVar4[2] = uStack_18;
          puVar4[3] = uStack_14;
          iVar1 = *(int *)(param_1 + 700);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < iVar1);
    }
  }
  return;
}

