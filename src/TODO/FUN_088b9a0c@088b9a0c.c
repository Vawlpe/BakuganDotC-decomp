#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b9a0c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_08af2ce4;
    FUN_088b9a04(param_1);
    iVar1 = *(int *)(param_1 + 0x5c4);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x5c8);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x2c) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x2c) + 8),3);
      *(undefined4 *)(param_1 + 0x5c4) = 0;
      iVar1 = *(int *)(param_1 + 0x5c8);
    }
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8),3);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
    }
    FUN_088f65f4();
    FUN_088fbf00();
    FUN_088cc7a4(param_1 + 0x400,2);
    FUN_088c9094(param_1 + 0x3d0,2);
    FUN_088c8810(param_1 + 0x3c0,2);
    FUN_089e2950(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

