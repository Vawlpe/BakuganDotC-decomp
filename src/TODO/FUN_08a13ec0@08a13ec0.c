#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08a13ec0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  return param_1;
}

