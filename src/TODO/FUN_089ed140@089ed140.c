#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ed140(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined uVar1;
  
  *param_1 = param_2;
  if (param_3 != 0) {
    param_1[5] = param_3;
  }
  uVar1 = FUN_089f7960(param_1[5],param_2,param_1[4],1);
  *(undefined *)(param_1 + 6) = uVar1;
  return;
}

