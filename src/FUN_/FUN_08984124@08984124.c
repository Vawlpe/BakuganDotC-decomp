#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08984124(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  if ((param_3 & 0xff) == 0xff) {
    FUN_089b4c84(auStack_50,"card_L_001");
  }
  else {
    FUN_089b4c84(auStack_50,"card_L_%03d",(param_3 & 0xff) + 1);
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar1;
  return;
}

