#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c97a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  *(int *)(param_1 + 0x24) = param_2;
  uVar4 = (uint)*(ushort *)(param_2 + 8);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(0);
  uVar2 = FUN_089d7d74(uVar4 << 3,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x24) + 10);
  if (uVar5 != 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(0);
    puVar3 = (undefined *)FUN_089d7d74(uVar5 << 2,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined **)(param_1 + 0x34) = puVar3;
    memset_jak(puVar3,0,(uint)*(ushort *)(*(int *)(param_1 + 0x24) + 10) << 2);
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(0);
  puVar3 = (undefined *)FUN_089d7d74(0x500,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined **)(param_1 + 0x3c) = puVar3;
  memset_jak(puVar3,0,0x500);
  uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x24) + 0xc);
  if (uVar5 != 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(0);
    puVar3 = (undefined *)FUN_089d7d74(((int)(uVar5 + 0x1f) >> 5) << 2,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined **)(param_1 + 0x38) = puVar3;
    memset_jak(puVar3,0,((int)(*(ushort *)(*(int *)(param_1 + 0x24) + 0xc) + 0x1f) >> 5) << 2);
  }
  iVar8 = 0;
  if (uVar4 != 0) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      *(undefined2 *)(*(int *)(param_1 + 0x28) + iVar7 + 4) = 1;
      *(undefined2 *)(*(int *)(param_1 + 0x28) + iVar7 + 6) =
           *(undefined2 *)(*(int *)(param_1 + 0x24) + iVar6 + 0x10);
      iVar8 = iVar8 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar7) = 0;
      iVar7 = iVar7 + 8;
      iVar6 = iVar6 + 2;
    } while (iVar8 < (int)uVar4);
  }
  return;
}

