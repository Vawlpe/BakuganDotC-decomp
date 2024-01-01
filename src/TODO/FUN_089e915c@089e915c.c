#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089e915c(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined auStack_10 [4];
  
  fVar1 = (float)FUN_089e8894(param_2,param_1 + 0x10,auStack_10,param_3);
  return fVar1 < *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20);
}

