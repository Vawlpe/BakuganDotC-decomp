#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088fc33c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &DAT_08af4554;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[4] = 0x41200000;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[8] = param_2[4];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar3 = DAT_08abfd3c;
  uVar2 = DAT_08abfd38;
  uVar1 = DAT_08abfd34;
  param_1[0xc] = DAT_08abfd30;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[0x10] = param_2[8];
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  uVar3 = DAT_08abfd3c;
  uVar2 = DAT_08abfd38;
  uVar1 = DAT_08abfd34;
  param_1[0x14] = DAT_08abfd30;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  return param_1;
}

