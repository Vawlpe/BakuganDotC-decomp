#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cbd70(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = (int)param_2;
  memset_jak(param_2,0);
  *param_2 = param_3;
  uVar1 = FUN_0880cc48();
  uVar1 = FUN_0880dba8(uVar1);
  param_2[1] = uVar1;
  param_2[2] = 1;
  param_2[3] = 0x11;
  param_2[4] = 0x13;
  param_2[5] = 0x12;
  param_2[6] = 0x10;
  return;
}

