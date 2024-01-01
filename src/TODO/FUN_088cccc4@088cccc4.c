#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cccc4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined auStack_20 [8];
  
  iVar4 = FUN_088e1948();
  FUN_088c6ce4(auStack_20);
  FUN_088c6ed8(0x40800000,auStack_20,param_2,param_3,param_1 + 0x20,iVar4 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *param_3 = *(undefined4 *)(param_1 + 0x10);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  FUN_088c6cec(auStack_20,2);
  return;
}

