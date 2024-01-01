#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ef0bc(int param_1,undefined4 param_2,undefined param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  
  *(undefined *)(param_1 + 0x268) = param_3;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  puVar6 = (undefined4 *)0x0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar3 = (undefined4 *)FUN_089d7d74(4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar6 = puVar3;
  }
  *(undefined4 **)(param_1 + 0x28) = puVar6;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x68,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar8 = 0;
  if (iVar4 != 0) {
    FUN_08a028a0(iVar4,0x68);
    iVar8 = iVar4;
  }
  *(int *)(param_1 + 0x2c) = iVar8;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(1000,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar7 = 0;
  iVar8 = 0;
  do {
    iVar8 = uVar7 * 4 + iVar8 * 3;
    memset_jak(*(int *)(param_1 + 0x30) + iVar8,0,0x30);
    memset_jak(*(int *)(param_1 + 0x30) + iVar8 + 0x4c,0,0x18);
    *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar8 + 0x30) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar8 + 0x44) = 0x1000;
    uVar5 = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar8 + 0x48) = 0;
    iVar4 = *(int *)(param_1 + 0x30);
    while( true ) {
      *(undefined4 *)(iVar4 + iVar8 + uVar5 * 4 + 0x34) = 0x1000;
      uVar5 = uVar5 + 1 & 0xff;
      if (3 < uVar5) break;
      iVar4 = *(int *)(param_1 + 0x30);
    }
    uVar7 = uVar7 + 1 & 0xff;
    iVar8 = uVar7 << 5;
  } while (uVar7 < 10);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x54,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar8 = 0;
  if (iVar4 != 0) {
    FUN_088eabd0(iVar4);
    iVar8 = iVar4;
  }
  *(int *)(param_1 + 0x3c) = iVar8;
  FUN_088eae4c();
  puVar6 = (undefined4 *)FUN_089be054(DAT_08ac520c,param_4);
  *(undefined4 **)(param_1 + 0x10) = puVar6;
  *(undefined4 *)(param_1 + 0x14) = *puVar6;
  *(undefined4 **)(param_1 + 0x18) = puVar6 + 1;
  *(undefined4 **)(param_1 + 0x1c) = puVar6 + 1 + *(int *)(param_1 + 0x14);
  *(undefined *)(param_1 + 0x264) = 1;
  return;
}

