#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897a5d8(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_50 [64];
  
  param_3 = param_3 & 0xff;
  if (param_3 == 0) {
    FUN_089b4c84(auStack_50,"collection_special_15");
    *(undefined4 *)(param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(param_2 + 0xb4) = 0x3f000000;
    *(undefined4 *)(param_2 + 0xb8) = 0x3f000000;
  }
  else {
    iVar1 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
    if (iVar1 == 0) {
      FUN_089b4c84(auStack_50,"collection_special_%02d",
                   param_3 + (int)*(char *)(param_1 + 0xee1) / 3);
    }
    else {
      FUN_089b4c84(auStack_50,"cha_spherename_colle_%02d",param_3);
    }
    *(undefined4 *)(param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0xb0) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xb4) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xb8) = 0x3f800000;
  }
  uVar2 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar2;
  return;
}

