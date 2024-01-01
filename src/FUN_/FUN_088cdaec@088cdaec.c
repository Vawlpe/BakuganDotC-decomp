#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cdaec(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined auStack_110 [256];
  
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_089b4c84(auStack_110,"f%01d_%02d.qsd",param_2,param_3);
    uVar1 = FUN_089be054(DAT_08ac520c,auStack_110);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
  }
  return;
}

