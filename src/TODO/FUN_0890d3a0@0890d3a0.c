#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890d3a0(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar6 = -1;
  iVar7 = 0x10;
  puVar8 = &DAT_08a91c80;
  do {
    iVar1 = FUN_089c9b48(*puVar8,DAT_08ac58c8);
    iVar7 = iVar7 + -1;
    if (iVar1 != 0) {
      iVar6 = puVar8[1];
      break;
    }
    puVar8 = puVar8 + -2;
  } while (-1 < iVar7);
  if ((iVar6 == 0) || (iVar6 == 0xd)) {
    *(undefined4 *)(param_1 + 0x18) = 0x12;
  }
  else if ((iVar6 == 0x12) || (iVar6 == 10)) {
    *(undefined4 *)(param_1 + 0x18) = 0x13;
  }
  iVar7 = 0;
  iVar1 = 0;
  do {
    iVar4 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar1);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
    iVar4 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar1);
    *(undefined4 *)(iVar4 + 0x80) = in_V72;
    *(undefined4 *)(iVar4 + 0x84) = in_V76;
    *(undefined4 *)(iVar4 + 0x88) = in_V7A;
    *(undefined4 *)(iVar4 + 0x8c) = in_V7E;
    iVar4 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar1);
    *(undefined4 *)(iVar4 + 0x90) = in_V72;
    *(undefined4 *)(iVar4 + 0x94) = in_V76;
    *(undefined4 *)(iVar4 + 0x98) = in_V7A;
    *(undefined4 *)(iVar4 + 0x9c) = in_V7E;
    iVar7 = iVar7 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar7 < 0x17);
  *(uint *)(**(int **)(DAT_08ac0e80 + 4) + 0xd0) =
       *(uint *)(**(int **)(DAT_08ac0e80 + 4) + 0xd0) & 0xfffffffe;
  if (*(int *)(param_1 + 0x18) != 0x12) {
    iVar7 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x18);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
    iVar7 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x1c);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
  }
  pfVar2 = (float *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x18) + 0x68);
  *pfVar2 = *pfVar2 + 2.0;
  pfVar2 = (float *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x1c) + 0x68);
  *pfVar2 = *pfVar2 + 2.0;
  pfVar2 = (float *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x28) + 0x68);
  *pfVar2 = *pfVar2 - 10.0;
  pfVar2 = (float *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x24) + 0x68);
  *pfVar2 = *pfVar2 - 10.0;
  fVar9 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x20));
  uVar5 = *(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x20);
  fVar10 = (float)FUN_089f494c(uVar5);
  FUN_089f4924(fVar9 * 2.0,fVar10 * 2.0,uVar5);
  FUN_089f46dc(*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x20));
  iVar7 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x20);
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 0x20;
  FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x20));
  uVar3 = 0xffffffff;
  *(undefined4 *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x20) + 0xbc) = 0x3f000000;
  if ((-1 < iVar6) && (iVar6 < 0x18)) {
    uVar3 = (int)(iVar6 + ((uint)(iVar6 >> 2) >> 0x1e)) >> 2;
  }
  if ((int)uVar3 < 0) {
    iVar6 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x28);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  }
  else if (uVar3 < 6) {
    if (uVar3 == 1) {
      FUN_089f4bf4(0x3f800000,*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x28));
    }
    else if (uVar3 == 2) {
      FUN_089f4bf4(0x40000000,*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x28));
    }
    else if (uVar3 == 3) {
      FUN_089f4bf4(0x40400000,*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x28));
    }
    else if (uVar3 == 4) {
      FUN_089f4bf4(0x40800000,*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x28));
    }
    else if (uVar3 == 5) {
      FUN_089f4bf4(0x40c00000,*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x28));
    }
    else {
      FUN_089f4bf4(0,*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x28));
    }
  }
  iVar6 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 4);
  FUN_089f46dc(iVar6);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
  FUN_089f43d4(0x3f000000,iVar6);
  *(undefined4 *)(iVar6 + 0x80) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x84) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x88) = 0;
  *(undefined4 *)(iVar6 + 0x8c) = 0;
  FUN_089f4954(*(undefined4 *)(iVar6 + 0x80),*(undefined4 *)(iVar6 + 0x84),
               *(undefined4 *)(iVar6 + 0x88),iVar6,0);
  *(undefined4 *)(iVar6 + 0x90) = *(undefined4 *)(iVar6 + 0x60);
  *(undefined4 *)(iVar6 + 0x94) = *(undefined4 *)(iVar6 + 100);
  *(undefined4 *)(iVar6 + 0x98) = *(undefined4 *)(iVar6 + 0x68);
  *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar6 + 0x6c);
  iVar7 = 0;
  iVar1 = 0;
  do {
    iVar4 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar1 + 8);
    FUN_089f46dc(iVar4);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 0x20;
    FUN_089f43d4(0x3f000000,iVar4);
    pfVar2 = (float *)(iVar4 + 0x60);
    if (iVar7 < 2) {
      if (-1 < iVar7) {
        if (iVar7 < 1) {
          *(undefined4 *)(iVar4 + 0x80) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0x84) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0x88) = 0x3f060a92;
          *(undefined4 *)(iVar4 + 0x8c) = 0;
          *pfVar2 = *pfVar2 - 16.0;
        }
        else {
          *(undefined4 *)(iVar4 + 0x80) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0x84) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0x88) = 0xbf060a92;
          *(undefined4 *)(iVar4 + 0x8c) = 0;
          *pfVar2 = *pfVar2 + 16.0;
        }
      }
    }
    else if (iVar7 < 3) {
      *(undefined4 *)(iVar4 + 0x80) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x84) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x88) = 0x3f060a92;
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *pfVar2 = *pfVar2 - 16.0;
    }
    else if (iVar7 < 4) {
      *(undefined4 *)(iVar4 + 0x80) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x84) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x88) = 0xbf060a92;
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *pfVar2 = *pfVar2 + 16.0;
    }
    *(float *)(iVar4 + 100) = *(float *)(iVar4 + 100) - 8.0;
    FUN_089f4954(*(undefined4 *)(iVar4 + 0x80),*(undefined4 *)(iVar4 + 0x84),
                 *(undefined4 *)(iVar4 + 0x88),iVar4,0);
    *(float *)(iVar4 + 0x90) = *pfVar2;
    *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar4 + 100);
    *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(iVar4 + 0x68);
    *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(iVar4 + 0x6c);
    iVar7 = iVar7 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar7 < 4);
  iVar7 = 0;
  iVar1 = 0;
  do {
    iVar4 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar1 + 0x44);
    FUN_089f46dc(iVar4);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 0x20;
    FUN_089f43d4(0x3f000000,iVar4);
    *(undefined4 *)(iVar4 + 0x80) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x84) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x8c) = 0;
    FUN_089f4954(*(undefined4 *)(iVar6 + 0x80),*(undefined4 *)(iVar6 + 0x84),
                 *(undefined4 *)(iVar6 + 0x88),iVar4,0);
    *(float *)(iVar4 + 0x68) = *(float *)(iVar4 + 0x68) + 10.0;
    *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar4 + 100);
    *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(iVar4 + 0x68);
    *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(iVar4 + 0x6c);
    iVar7 = iVar7 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar7 < 4);
  return;
}

