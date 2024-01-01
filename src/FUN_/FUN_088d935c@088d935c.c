#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d935c(int param_1)

{
  int iVar1;
  
  *(undefined *)(param_1 + 0x164) = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 0x2c))
                    (0x41b80000,0x43f00000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x28),
                     *(int *)(param_1 + 0x130) + 0xb0,param_1 + 0x6c);
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0x164) = 1;
  }
  FUN_089df8a4(param_1);
  return;
}

