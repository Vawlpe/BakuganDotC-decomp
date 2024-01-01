#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08809238(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
LAB_088092d4:
      FUN_089bf7a8(param_1,1);
      return;
    }
    iVar2 = FUN_089cc058();
    if (iVar2 != 0) {
      uVar1 = FUN_089cc080();
      FUN_089cc460(uVar1,1);
      uVar1 = FUN_089cc080();
      iVar2 = FUN_089cc630(uVar1,1);
      *(int *)(param_1 + 0x10) = iVar2;
      (**(code **)(*(int *)(iVar2 + 0x10) + 0x14))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x10),3);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      FUN_089bea68(5);
    }
  }
  else if (iVar2 < 2) {
    if (((*(int *)(param_1 + 0x10) != 0) && (iVar2 = FUN_089cc778(), iVar2 != 0)) &&
       (iVar2 = FUN_0880d2e0(), iVar2 != 0)) {
      iVar2 = FUN_089cc798(*(undefined4 *)(param_1 + 0x10));
      FUN_089beaa8(5);
      if (iVar2 == 1) {
        uVar1 = FUN_0880cc48();
        FUN_0880ceb8(uVar1);
        uVar1 = FUN_0880cc48();
        FUN_0880d0e8(uVar1,0x40000000);
        iVar2 = *(int *)(param_1 + 0x14);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x14);
      }
      *(int *)(param_1 + 0x14) = iVar2 + 1;
    }
  }
  else {
    if (2 < iVar2) goto LAB_088092d4;
    iVar2 = FUN_089cc058(param_1);
    if (iVar2 != 0) {
      uVar1 = FUN_089cc080();
      FUN_089cc5a8(uVar1,1);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
  }
  return;
}

