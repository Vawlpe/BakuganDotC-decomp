#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f1740(undefined4 param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = (int)param_2 << 0xc;
  DAT_08b00d24 = FUN_08a0d21c((int)param_2 << 0x18,uVar1 >> 0x14 | ((int)uVar1 >> 0x1f) << 0xc,
                              0x64000,0);
  return;
}

