#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898c7f0(undefined4 param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  if (param_3 == '\0') {
    FUN_089b4c84(auStack_50,"collection_special_15");
    *(undefined4 *)(param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(param_2 + 0xb4) = 0x3f000000;
    *(undefined4 *)(param_2 + 0xb8) = 0x3f000000;
  }
  else {
    FUN_089b4c84(auStack_50,"cha_spherename_colle_%02d",param_3);
    *(undefined4 *)(param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0xb0) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xb4) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xb8) = 0x3f800000;
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar1;
  return;
}

