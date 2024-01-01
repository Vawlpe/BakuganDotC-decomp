#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f0678(int param_1,uint param_2,short param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  param_2 = param_2 & 0xff;
  if (param_2 == 100) {
    param_2 = (uint)*(byte *)(param_1 + 0x2d4);
  }
  uVar2 = (int)param_3 << 0xc;
  uVar1 = FUN_08a0d21c((int)param_3 << 0x18,uVar2 >> 0x14 | ((int)uVar2 >> 0x1f) << 0xc,0x64000,0);
  *(undefined4 *)
   (*(int *)(param_1 + 0x284) + (uint)*(byte *)(param_1 + param_2 + 0x292) * 0x4c + 0x14) = uVar1;
  return;
}

