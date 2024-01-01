#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fbd68(int param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_089fbf50();
  if (iVar1 == 0) {
    iVar1 = 0;
    if (DAT_08ac61e0 != 0) {
      iVar1 = FUN_089d76ac();
    }
    if (iVar1 == 0) {
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(param_3);
      iVar3 = FUN_089d7d74(0x28,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      iVar1 = 0;
      if (iVar3 != 0) {
        FUN_089d8b38(iVar3,0);
        *(undefined **)(iVar3 + 0x20) = &DAT_08af7058;
        *(undefined4 *)(iVar3 + 0x24) = param_2;
        iVar1 = iVar3;
      }
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      FUN_089d8b38(iVar1,0);
      *(undefined **)(iVar1 + 0x20) = &DAT_08af7058;
      *(undefined4 *)(iVar1 + 0x24) = param_2;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x50) = iVar1;
    }
    else {
      FUN_089d8c60(iVar1,iVar3,0);
    }
  }
  return;
}

