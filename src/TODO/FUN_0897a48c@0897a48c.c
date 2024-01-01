#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897a48c(undefined4 param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  if (param_3 == '\0') {
    FUN_089b4c84(auStack_50,"waku_4_b");
  }
  else {
    FUN_089b4c84(auStack_50,"waku_4_a");
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar1;
  return;
}

