#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891fcdc(undefined4 param_1,int param_2,undefined param_3,uint param_4)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  FUN_089b4c84(auStack_50,"fix_f%01d_%02d",param_3,(param_4 & 0xff) + 1);
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar1;
  return;
}

