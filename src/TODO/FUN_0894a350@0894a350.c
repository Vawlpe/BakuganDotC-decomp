#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894a350(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x7c) == 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_0894a1a0(param_1,5,*(int *)(param_1 + 0x78) + 4);
    iVar1 = 0;
    do {
      iVar5 = (iVar1 + 0x83) * 4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + (iVar1 + 0x33) * 4 + 0x100) + 100);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0x3f800000;
      iVar5 = iVar1 + 0x33;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 0xbc) = 0;
    } while (iVar1 < 0x10);
    iVar1 = 1;
    piVar3 = &DAT_08a9d144;
    do {
      piVar3 = piVar3 + 1;
      iVar5 = (*piVar3 + 5) * 4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *piVar3 * 4 + 0x10) + 100);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0x3f800000;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *piVar3 * 4) + 0xbc) = 0;
    } while (iVar1 < 6);
    iVar1 = 0;
    iVar5 = 0;
    do {
      FUN_0894a1a0(param_1,iVar1,*(int *)(param_1 + 0x78) + iVar1 + -1);
      iVar2 = 0;
      do {
        pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + (iVar2 + 0x33 + iVar5) * 4) + 100);
        iVar2 = iVar2 + 1;
        *pfVar4 = *pfVar4 - 23.0;
      } while (iVar2 < 0x10);
      iVar2 = 1;
      piVar3 = &DAT_08a9d144;
      do {
        piVar3 = piVar3 + 1;
        pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + (*piVar3 + iVar1) * 4) + 100);
        iVar2 = iVar2 + 1;
        *pfVar4 = *pfVar4 - 23.0;
      } while (iVar2 < 6);
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar1 < 5);
  }
  else if (*(int *)(param_1 + 0x7c) == 2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_0894a1a0(param_1,5,*(undefined4 *)(param_1 + 0x78));
    iVar1 = 0;
    do {
      iVar5 = (iVar1 + 0x83) * 4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + (iVar1 + 0x33) * 4) + 100);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0x3f800000;
      iVar5 = iVar1 + 0x33;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 4 + 0x100) + 0xbc) = 0;
    } while (iVar1 < 0x10);
    iVar1 = 1;
    piVar3 = &DAT_08a9d144;
    do {
      piVar3 = piVar3 + 1;
      iVar5 = (*piVar3 + 5) * 4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *piVar3 * 4) + 100);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0x3f800000;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *piVar3 * 4 + 0x10) + 0xbc) = 0;
    } while (iVar1 < 6);
    iVar1 = 0;
    iVar5 = 0;
    do {
      FUN_0894a1a0(param_1,iVar1,*(int *)(param_1 + 0x78) + iVar1 + 1);
      iVar2 = 0;
      do {
        pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + (iVar2 + 0x33 + iVar5) * 4) + 100);
        iVar2 = iVar2 + 1;
        *pfVar4 = *pfVar4 + 23.0;
      } while (iVar2 < 0x10);
      iVar2 = 1;
      piVar3 = &DAT_08a9d144;
      do {
        piVar3 = piVar3 + 1;
        pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + (*piVar3 + iVar1) * 4) + 100);
        iVar2 = iVar2 + 1;
        *pfVar4 = *pfVar4 + 23.0;
      } while (iVar2 < 6);
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar1 < 5);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}

