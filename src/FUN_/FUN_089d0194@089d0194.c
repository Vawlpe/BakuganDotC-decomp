#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_089d0194(undefined *param_1,undefined *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  FUN_089bb728(DAT_08ac5938[1]);
  FUN_08a31188(*DAT_08ac5938,param_1,1000);
  if (param_2 != (undefined *)0x0) {
    iVar4 = 0;
    puVar5 = param_2;
    do {
      iVar3 = iVar4 + 1;
      param_1[iVar4 + 0x38] = *puVar5;
      puVar5 = param_2 + iVar3;
      iVar4 = iVar3;
    } while (iVar3 < 6);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  memset_jak(param_1 + 0x40,0,0x34);
  FUN_089bb790(DAT_08ac5938[1]);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089bb5dc(iVar3,"CONetChara",2);
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 8) = iVar4;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x800,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  memset_jak(uVar2,0,0x800);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x800,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  memset_jak(uVar2,0,0x800);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  memset_jak(param_1 + 0x100,0,0x10);
  *(undefined4 *)(param_1 + 0x110) = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[0x120] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  FUN_089d06a8(param_1);
  return param_1;
}

