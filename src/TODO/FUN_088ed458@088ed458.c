#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ed458(int param_1,uint param_2,short param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (int)param_3 << 0xc;
  uVar1 = FUN_08a0d21c((int)param_3 << 0x18,uVar2 >> 0x14 | ((int)uVar2 >> 0x1f) << 0xc,0x64000,0);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + (param_2 & 0xff) * 100 + 0xc) = uVar1;
  return;
}

