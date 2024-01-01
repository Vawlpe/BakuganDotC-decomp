#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b5384(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar4 = 0;
    *(undefined **)(param_1 + 0x14) = &DAT_08af2c34;
    iVar1 = *(int *)(param_1 + 0x19c);
    if (0 < *(int *)(param_1 + 0xec)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(iVar1 + iVar3 + 0x164);
        (**(code **)(iVar2 + 0xc))(iVar1 + iVar3 + (int)*(short *)(iVar2 + 8),2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x170;
        iVar1 = *(int *)(param_1 + 0x19c);
      } while (iVar4 < *(int *)(param_1 + 0xec));
    }
    if (iVar1 + -0x10 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c8);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1 + -0x10,0,0);
      FUN_089d866c();
      iVar1 = *(int *)(param_1 + 0x1c8);
    }
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x1c8) = 0;
    }
    FUN_089de34c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

