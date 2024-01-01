#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08915c68(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_2 == '\0') {
    iVar3 = 0xe;
    iVar4 = 0x38;
    iVar5 = param_1 + 0x29c;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0xf);
    iVar3 = 0x10;
    iVar4 = 0x40;
    iVar5 = param_1 + 0x2ec;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0x11);
    uVar1 = FUN_0892bc18(*(uint *)(param_1 + 0x16a8) & 0xff);
    uVar1 = uVar1 & 0xff;
    FUN_089f4a90((float)(uVar1 / 3),(float)(uVar1 % 3),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xa4));
    FUN_089f4a90(0,(float)uVar1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xa0));
    FUN_0892c8a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xa8),*(uint *)(param_1 + 0x16a8) & 0xff
                );
    iVar4 = 0x28;
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar5 = 0xa0;
    iVar2 = param_1 + 0x6ac;
    do {
      *(uint *)(*(int *)(iVar3 + iVar5) + 0xd0) = *(uint *)(*(int *)(iVar3 + iVar5) + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar2 = iVar2 + 0x28;
      iVar3 = *(int *)(param_1 + 0x1c);
    } while (iVar4 < 0x2b);
    *(undefined4 *)(*(int *)(iVar3 + 0x38) + 0x128) = 2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0x128) = 2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa0) + 0x128) = 2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa4) + 0x128) = 2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa8) + 0x128) = 2;
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar4 = *(int *)(iVar3 + 0xa0);
    fVar7 = *(float *)(iVar4 + 0x60);
    fVar6 = *(float *)(iVar4 + 100);
    fVar11 = *(float *)(*(int *)(iVar3 + 0xa4) + 100);
    fVar9 = *(float *)(*(int *)(iVar3 + 0xa4) + 0x60);
    fVar13 = *(float *)(iVar4 + 0x60);
    fVar12 = *(float *)(iVar4 + 100);
    fVar8 = *(float *)(*(int *)(iVar3 + 0xa8) + 100);
    fVar10 = *(float *)(*(int *)(iVar3 + 0xa8) + 0x60);
    FUN_089f4c84(iVar4);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa4) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa0) + 0x60) + (fVar7 - fVar9);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa4) + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa0) + 100) + ((fVar6 - fVar11) - 1.0);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa8) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa0) + 0x60) + (fVar13 - fVar10);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa8) + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa0) + 100) + ((fVar12 - fVar8) - 2.0);
  }
  else {
    iVar3 = 0xe;
    iVar4 = 0x38;
    iVar5 = param_1 + 0x29c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0xf);
    iVar3 = 0x10;
    iVar4 = 0x40;
    iVar5 = param_1 + 0x2ec;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0x11);
    iVar3 = 0x28;
    iVar4 = 0xa0;
    iVar5 = param_1 + 0x6ac;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0x2b);
  }
  return;
}

