#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089980d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_28;
  
  iVar5 = param_1 + 0x1f10;
  FUN_089e29e4(iVar5);
  *(undefined4 *)(param_1 + 0x1f70) = 0;
  *(undefined4 *)(param_1 + 0x1f74) = 0;
  *(undefined4 *)(param_1 + 0x1f78) = 0;
  *(undefined4 *)(param_1 + 0x1f7c) = 0;
  *(undefined4 *)(param_1 + 0x1f60) = 0;
  *(undefined4 *)(param_1 + 0x1f64) = 0;
  *(undefined4 *)(param_1 + 0x1f68) = 0x43160000;
  *(undefined4 *)(param_1 + 0x1f6c) = 0;
  FUN_089e3008(0xc2dc0000,0,iVar5);
  FUN_089e2b14(iVar5,0xffffffff);
  local_28 = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = local_28;
  if (iVar4 != 0) {
    FUN_089de2e4(iVar4,"menu_worldmap.gmo",0);
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x1f04) = iVar5;
  *(undefined *)(iVar5 + 0xbc) = 1;
  local_40 = 0x3ecccccd;
  local_3c = 0x3ecccccd;
  local_38 = 0x3ecccccd;
  local_34 = 0x3f800000;
  FUN_089e0344(0x41000000,*(undefined4 *)(param_1 + 0x1f04),&local_40,0);
  *(undefined4 *)(*(int *)(param_1 + 0x1f04) + 0x28) = 0xc1f00000;
  iVar5 = *(int *)(param_1 + 0x1f04);
  iVar4 = *(int *)(iVar5 + 0x130);
  uVar3 = *(undefined4 *)(iVar5 + 0x24);
  uVar1 = *(undefined4 *)(iVar5 + 0x28);
  uVar2 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(iVar4 + 0xb4) = uVar3;
  *(undefined4 *)(iVar4 + 0xb8) = uVar1;
  *(undefined4 *)(iVar4 + 0xbc) = uVar2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f04) + 0x130) + 0xbc) = 0x3f800000;
  FUN_08998040(param_1);
  FUN_08998088(param_1);
  iVar5 = FUN_089ded60(*(undefined4 *)(param_1 + 0x1f04),"_01_worldmap");
  *(int *)(param_1 + 0x21e0) = iVar5;
  *(int *)(param_1 + 0x21e4) = iVar5 + 0x80;
  iVar5 = FUN_089ded60(*(undefined4 *)(param_1 + 0x1f04),"_02_worldmap");
  *(int *)(param_1 + 0x21e0) = iVar5;
  *(int *)(param_1 + 0x21e8) = iVar5 + 0x80;
  *(undefined4 *)(*(int *)(param_1 + 0x1f04) + 0x6c) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1f04) + 0x130);
  *(undefined4 *)(iVar5 + 0xa8) = 0x3fc00000;
  *(undefined4 *)(iVar5 + 0x94) = 0x3fc00000;
  *(undefined4 *)(iVar5 + 0x80) = 0x3fc00000;
  return;
}

