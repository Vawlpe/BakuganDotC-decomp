#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c97a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(int *)(param_1 + 0x24) = param_2;
  uVar3 = (uint)*(ushort *)(param_2 + 8);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(0);
  uVar2 = FUN_089d7d74(uVar3 << 3,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x24) + 10);
  if (uVar4 != 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(0);
    uVar2 = FUN_089d7d74(uVar4 << 2,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    memset_jak(uVar2,0,(uint)*(ushort *)(*(int *)(param_1 + 0x24) + 10) << 2);
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(0);
  uVar2 = FUN_089d7d74(0x500,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  memset_jak(uVar2,0,0x500);
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x24) + 0xc);
  if (uVar4 != 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(0);
    uVar2 = FUN_089d7d74(((int)(uVar4 + 0x1f) >> 5) << 2,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    memset_jak(uVar2,0,((int)(*(ushort *)(*(int *)(param_1 + 0x24) + 0xc) + 0x1f) >> 5) << 2);
  }
  iVar7 = 0;
  if (uVar3 != 0) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      *(undefined2 *)(*(int *)(param_1 + 0x28) + iVar6 + 4) = 1;
      *(undefined2 *)(*(int *)(param_1 + 0x28) + iVar6 + 6) =
           *(undefined2 *)(*(int *)(param_1 + 0x24) + iVar5 + 0x10);
      iVar7 = iVar7 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar6) = 0;
      iVar6 = iVar6 + 8;
      iVar5 = iVar5 + 2;
    } while (iVar7 < (int)uVar3);
  }
  return;
}

