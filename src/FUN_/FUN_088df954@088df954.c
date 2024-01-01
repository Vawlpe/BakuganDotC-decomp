#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088df954(int param_1,float *param_2)

{
  undefined4 uVar1;
  
  uVar1 = atan2f(*(float *)(param_1 + 0x28) - param_2[2],*(float *)(param_1 + 0x20) - *param_2);
  FUN_088df840(uVar1,param_1);
  return;
}

