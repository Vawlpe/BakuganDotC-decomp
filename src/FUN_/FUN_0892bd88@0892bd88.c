#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892bd88(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  if ((param_2 & 0xff) == 0) {
    FUN_089b4c84(auStack_50,"cha_name_baku_%02d",0);
  }
  else {
    FUN_089b4c84(auStack_50,"cha_name_baku_%02d",(param_2 & 0xff) - 1);
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  return;
}

