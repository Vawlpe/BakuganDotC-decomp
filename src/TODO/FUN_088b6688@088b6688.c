#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b6688(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af2c84;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_08824658(DAT_08b00b98,0xffffffff,param_1 + 0x20);
    }
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    }
    FUN_089d87bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

