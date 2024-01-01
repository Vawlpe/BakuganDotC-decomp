#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08a13ee8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *param_1 = uVar2;
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  uVar2 = param_2[4];
  param_1[7] = param_2[7];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  param_1[4] = uVar2;
  uVar1 = param_2[9];
  uVar3 = param_2[10];
  uVar2 = param_2[8];
  param_1[0xb] = param_2[0xb];
  param_1[9] = uVar1;
  param_1[10] = uVar3;
  param_1[8] = uVar2;
  uVar1 = param_2[0xc];
  uVar3 = param_2[0xd];
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar2;
  return param_1;
}

