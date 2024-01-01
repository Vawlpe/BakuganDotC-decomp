#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08850840(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = FUN_0882c220(0);
  if (iVar1 == 0) {
    uVar2 = FUN_089f2178(0);
    local_30 = 0x3f800000;
    local_2c = 0x3f800000;
    local_28 = 0x3f800000;
    local_24 = 0x3f800000;
    FUN_089f1be8(uVar2,&local_30,1,0);
  }
  else {
    uVar2 = FUN_089f2178(0x42dc0000);
    FUN_089f1458(uVar2);
    iVar1 = FUN_0882c15c();
    FUN_089f303c(uVar2,&DAT_08a6651c,iVar1 + 0x474,2,1);
    FUN_08850260(param_1);
  }
  uVar2 = FUN_089f2178(0x44834000);
  if (0.0 < *(float *)(param_1 + 0x4fc)) {
    FUN_089f2ddc(uVar2,param_1 + 0x4f0);
  }
  return;
}

