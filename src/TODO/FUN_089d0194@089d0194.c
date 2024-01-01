#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_089d0194(undefined *param_1,undefined *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_089bb728(DAT_08ac5938[1]);
  FUN_08a31188(*DAT_08ac5938,param_1,1000);
  if (param_2 != (undefined *)0x0) {
    iVar3 = 0;
    puVar4 = param_2;
    do {
      iVar2 = iVar3 + 1;
      param_1[iVar3 + 0x38] = *puVar4;
      puVar4 = param_2 + iVar2;
      iVar3 = iVar2;
    } while (iVar2 < 6);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  memset_jak(param_1 + 0x40,0,0x34);
  FUN_089bb790(DAT_08ac5938[1]);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089bb5dc(iVar2,"CONetChara",2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 8) = iVar3;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar4 = (undefined *)FUN_089d7d74(0x800,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined **)(param_1 + 0xf0) = puVar4;
  memset_jak(puVar4,0,0x800);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar4 = (undefined *)FUN_089d7d74(0x800,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined **)(param_1 + 0xf8) = puVar4;
  memset_jak(puVar4,0,0x800);
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

