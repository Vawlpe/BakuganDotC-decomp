#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088f8c48(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_088fc33c();
  *param_1 = &DAT_08af6e98;
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x30);
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  uVar3 = DAT_08abfaac;
  uVar2 = DAT_08abfaa8;
  uVar1 = DAT_08abfaa4;
  param_1[0x1c] = DAT_08abfaa0;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  *param_1 = &DAT_08af44cc;
  param_1[0x20] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x30);
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x20);
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  return param_1;
}

