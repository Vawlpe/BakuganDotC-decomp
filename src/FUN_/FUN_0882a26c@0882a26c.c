#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_0882a26c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x44] = 0xffffffff;
  uVar2 = DAT_08b0019c;
  uVar1 = DAT_08b00198;
  uVar3 = DAT_08b00194;
  param_1[0x48] = DAT_08b00190;
  param_1[0x49] = uVar3;
  param_1[0x4a] = uVar1;
  param_1[0x4b] = uVar2;
  param_1[0x4b] = 0;
  *(undefined *)(param_1 + 0x4c) = 0;
  uVar3 = FUN_089f7720("swordblur");
  param_1[0x4d] = uVar3;
  return param_1;
}

