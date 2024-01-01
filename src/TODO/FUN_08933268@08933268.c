#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08933268(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  
  local_18 = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = local_18;
  if (iVar4 != 0) {
    FUN_089de2e4(iVar4,"menu_daiza.gmo",0);
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x1a84) = iVar5;
  local_30 = 0x3f19999a;
  local_2c = 0x3f19999a;
  local_28 = 0x3f19999a;
  local_24 = 0x3f800000;
  FUN_089e0344(0x41000000,iVar5,&local_30,0);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a84) + 0x130);
  *(undefined4 *)(iVar5 + 0xa8) = 0x3e8a3d71;
  *(undefined4 *)(iVar5 + 0x94) = 0x3e8a3d71;
  *(undefined4 *)(iVar5 + 0x80) = 0x3e8a3d71;
  *(undefined4 *)(*(int *)(param_1 + 0x1a84) + 0x20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1a84) + 0x24) = 0xc2200000;
  iVar5 = *(int *)(param_1 + 0x1a84);
  iVar4 = *(int *)(iVar5 + 0x130);
  uVar3 = *(undefined4 *)(iVar5 + 0x24);
  uVar1 = *(undefined4 *)(iVar5 + 0x28);
  uVar2 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(iVar4 + 0xb4) = uVar3;
  *(undefined4 *)(iVar4 + 0xb8) = uVar1;
  *(undefined4 *)(iVar4 + 0xbc) = uVar2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a84) + 0x130) + 0xbc) = 0x3f800000;
  return;
}

