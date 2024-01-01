#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088fc770(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_088fc33c();
  *param_1 = &DAT_08af6e58;
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x30);
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  return param_1;
}

