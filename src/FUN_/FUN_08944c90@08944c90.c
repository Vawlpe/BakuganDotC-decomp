#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08944c90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089f3aa8(iVar2);
    iVar3 = iVar2;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x78) = iVar3;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x78));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x78));
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x78);
  uVar8 = FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60));
  uVar9 = FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60));
  FUN_089f4924(uVar8,uVar9,uVar1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x78) + 100) = 0x43900000;
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar6 = 0;
  do {
    *(uint *)(*(int *)(iVar3 + iVar6) + 0xd0) =
         *(uint *)(*(int *)(iVar3 + iVar6) + 0xd0) & 0xfffffffe;
    iVar2 = iVar2 + 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
    iVar6 = iVar6 + 4;
    *(undefined4 *)(iVar3 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0xb8) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
    iVar3 = *(int *)(param_1 + 0x1c);
  } while (iVar2 < 0x1f);
  iVar2 = 4;
  iVar6 = 0x10;
  do {
    piVar4 = (int *)(iVar3 + iVar6);
    iVar2 = iVar2 + 1;
    iVar6 = iVar6 + 4;
    *(uint *)(*piVar4 + 0xd0) = *(uint *)(*piVar4 + 0xd0) | 1;
    iVar3 = *(int *)(param_1 + 0x1c);
  } while (iVar2 < 8);
  FUN_089f4c84(*(undefined4 *)(iVar3 + 0x14));
  iVar3 = 6;
  iVar2 = 0x18;
  do {
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    iVar3 = iVar3 + 1;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 8);
  uVar7 = 10;
  iVar3 = 0x28;
  do {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    if ((uVar7 & 1) == 0) {
      pfVar5 = (float *)(iVar2 + 0x60);
      *pfVar5 = *pfVar5 - DAT_08ac33e0;
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3);
    }
    else {
      pfVar5 = (float *)(iVar2 + 0x60);
      *pfVar5 = *pfVar5 + DAT_08ac33e0;
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3);
    }
    FUN_089f46dc(uVar1);
    FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    uVar7 = uVar7 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0;
    iVar3 = iVar3 + 4;
  } while ((int)uVar7 < 0x17);
  return;
}

