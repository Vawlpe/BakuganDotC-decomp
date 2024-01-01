#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ecfc4(int param_1,short param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (int)param_2 << 0xc;
  uVar1 = FUN_08a0d21c((int)param_2 << 0x18,uVar2 >> 0x14 | ((int)uVar2 >> 0x1f) << 0xc,0x64000,0);
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x40) = uVar1;
  return;
}

