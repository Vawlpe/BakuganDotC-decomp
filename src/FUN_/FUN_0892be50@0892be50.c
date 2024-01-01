#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892be50(void)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar2 = (int *)FUN_0880cc48();
  uVar6 = *(uint *)(*piVar2 + 0x48c) & 0xff;
  uVar3 = FUN_0880cc48();
  FUN_0880cd9c(uVar3,3,uVar6);
  uVar3 = FUN_0880cc48();
  FUN_0880cd9c(uVar3,4,0xffffffff);
  uVar3 = FUN_0880cc48();
  FUN_0880cd9c(uVar3,5,0xffffffff);
  uVar3 = FUN_0880cc48();
  FUN_0880cd9c(uVar3,6,0xffffffff);
  iVar8 = 0;
  iVar7 = 0;
  do {
    piVar2 = (int *)FUN_0880cc48();
    bVar1 = *(byte *)(*piVar2 + uVar6 * 2 + iVar8 + 0x4e4);
    iVar4 = FUN_0880cc48();
    if (*(int *)(iVar4 + 4) != 0) {
      *(uint *)(*(int *)(iVar4 + 4) + iVar7 + 0xd8) = (uint)bVar1;
    }
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
  } while (iVar8 < 2);
  iVar8 = 1;
  iVar7 = 8;
  do {
    iVar9 = 0;
    iVar4 = 0;
    do {
      iVar5 = FUN_0880cc48();
      if (*(int *)(iVar5 + 4) != 0) {
        *(undefined4 *)(*(int *)(iVar5 + 4) + iVar7 + iVar4 + 0xd8) = 0xff;
      }
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar9 < 2);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 8;
  } while (iVar8 < 4);
  iVar8 = 0;
  iVar7 = 0;
  do {
    iVar4 = 0;
    iVar9 = 0;
    do {
      iVar5 = FUN_0880cc48();
      if (*(int *)(iVar5 + 4) != 0) {
        *(undefined4 *)(*(int *)(iVar5 + 4) + iVar7 + iVar9 + 0xf8) = 0xff;
      }
      iVar4 = iVar4 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar4 < 2);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 8;
  } while (iVar8 < 4);
  iVar7 = FUN_0880cc48();
  if (*(int *)(iVar7 + 4) != 0) {
    *(undefined4 *)(*(int *)(iVar7 + 4) + 0x118) = 100;
  }
  iVar7 = 1;
  iVar8 = 4;
  do {
    iVar4 = FUN_0880cc48();
    if (*(int *)(iVar4 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar4 + 4) + iVar8 + 0x118) = 100;
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar7 < 4);
  return;
}

