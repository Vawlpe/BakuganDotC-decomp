#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089ed070(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[5] = param_3;
  uVar1 = FUN_089d79a4(param_2 << 2,1);
  param_1[4] = uVar1;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined *)(param_1 + 6) = 0;
  return param_1;
}

