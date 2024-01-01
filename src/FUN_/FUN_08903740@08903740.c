#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08903740(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af466c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(undefined *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x14) = param_3;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x1a4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08904738(iVar2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  FUN_089049c8(iVar3,*(undefined4 *)(param_1 + 0x18));
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x3c0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_088fdc34(iVar2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x50) = iVar3;
  if (param_3 == 0) {
    param_3 = FUN_088660e0();
  }
  FUN_088fded4(*(undefined4 *)(param_1 + 0x50),param_3);
  FUN_088fe138(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x40) = 0x41f00000;
  if (*(int *)(param_1 + 0x18) < 0x28) {
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x2a4) = 999;
    *(undefined *)(param_1 + 0x4e) = 0;
    iVar3 = *(int *)(param_1 + 0x50);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x2a4) = 0x3e6;
    *(undefined *)(param_1 + 0x4e) = 1;
    iVar3 = *(int *)(param_1 + 0x50);
  }
  *(undefined *)(iVar3 + 0x34c) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return param_1;
}

