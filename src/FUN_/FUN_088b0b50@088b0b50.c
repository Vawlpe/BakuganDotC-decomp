#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b0b50(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x334);
    *(undefined **)(param_1 + 0x14) = &DAT_08af2ae4;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x164) + 0xc))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x164) + 8),3);
      *(undefined4 *)(param_1 + 0x334) = 0;
    }
    FUN_088ab4c8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

