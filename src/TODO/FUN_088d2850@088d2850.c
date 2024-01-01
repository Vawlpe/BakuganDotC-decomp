#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d2850(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x114);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x98);
  uVar1 = *(undefined4 *)(iVar5 + 100);
  uVar2 = *(undefined4 *)(iVar5 + 0x68);
  uVar3 = *(undefined4 *)(iVar5 + 0x6c);
  *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)(iVar5 + 0x60);
  *(undefined4 *)(iVar7 + 100) = uVar1;
  *(undefined4 *)(iVar7 + 0x68) = uVar2;
  *(undefined4 *)(iVar7 + 0x6c) = uVar3;
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x11c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x98);
  uVar1 = *(undefined4 *)(iVar5 + 100);
  uVar2 = *(undefined4 *)(iVar5 + 0x68);
  uVar3 = *(undefined4 *)(iVar5 + 0x6c);
  *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)(iVar5 + 0x60);
  *(undefined4 *)(iVar7 + 100) = uVar1;
  *(undefined4 *)(iVar7 + 0x68) = uVar2;
  *(undefined4 *)(iVar7 + 0x6c) = uVar3;
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x118);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x9c);
  uVar1 = *(undefined4 *)(iVar5 + 100);
  uVar2 = *(undefined4 *)(iVar5 + 0x68);
  uVar3 = *(undefined4 *)(iVar5 + 0x6c);
  *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)(iVar5 + 0x60);
  *(undefined4 *)(iVar7 + 100) = uVar1;
  *(undefined4 *)(iVar7 + 0x68) = uVar2;
  *(undefined4 *)(iVar7 + 0x6c) = uVar3;
  fVar9 = (float)FUN_089f4944(**(undefined4 **)(param_1 + 0x1c));
  fVar10 = (float)FUN_089f494c(**(undefined4 **)(param_1 + 0x1c));
  pfVar6 = (float *)(**(int **)(param_1 + 0x1c) + 0x60);
  fVar17 = fVar9 * 0.25 + 90.0;
  *pfVar6 = *pfVar6 - fVar17;
  pfVar6 = (float *)(**(int **)(param_1 + 0x1c) + 100);
  *pfVar6 = *pfVar6 - (fVar10 * 0.25 - 90.0);
  *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) = *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) | 1;
  fVar13 = *(float *)(*(int *)(param_1 + 0x74) + 0x20);
  fVar12 = *(float *)(param_1 + 0x88);
  fVar15 = *(float *)(param_1 + 0x90);
  fVar14 = *(float *)(param_1 + 0x80);
  fVar16 = *(float *)(param_1 + 0xb4);
  fVar18 = *(float *)(**(int **)(param_1 + 0x1c) + 0x60);
  fVar9 = (float)FUN_089f4944();
  fVar11 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x60) =
       (fVar18 + fVar9 * 0.5 + fVar11 * 0.5) - (((fVar13 - fVar12) * fVar15) / fVar14 - fVar16);
  fVar13 = *(float *)(*(int *)(param_1 + 0x74) + 0x28);
  fVar12 = *(float *)(param_1 + 0x8c);
  fVar15 = *(float *)(param_1 + 0x94);
  fVar14 = *(float *)(param_1 + 0x84);
  fVar16 = *(float *)(param_1 + 0xb8);
  fVar18 = *(float *)(**(int **)(param_1 + 0x1c) + 100);
  fVar9 = (float)FUN_089f494c();
  fVar11 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100) =
       (fVar18 + fVar9 * 0.5 + fVar11 * 0.5) - (((fVar13 - fVar12) * fVar15) / fVar14 - fVar16);
  *(float *)((*(int **)(param_1 + 0x1c))[0x43] + 0x60) =
       *(float *)(**(int **)(param_1 + 0x1c) + 0x60) + 16.5 + 90.0;
  *(float *)((*(int **)(param_1 + 0x1c))[0x43] + 100) =
       (*(float *)(**(int **)(param_1 + 0x1c) + 100) + 16.5) - 90.0;
  FUN_089f4bf4(0x40000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xa8));
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xa0);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa0) + 0x60);
  *pfVar6 = *pfVar6 - 90.0;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa0) + 100);
  *pfVar6 = *pfVar6 + 90.0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x78);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x78) + 0x60);
  *pfVar6 = *pfVar6 - 90.0;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x78) + 100);
  *pfVar6 = *pfVar6 + 90.0;
  iVar5 = FUN_088f505c(0x38d);
  if (iVar5 != 0) {
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
    *(undefined4 *)(iVar5 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
    FUN_089f480c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48));
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x70) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x70) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x70);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    FUN_089f4bf4(0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70));
  }
  iVar5 = FUN_088f505c(0x38e);
  if (iVar5 != 0) {
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc));
    FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc));
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
    *(undefined4 *)(iVar5 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
    FUN_089f480c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44));
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x4c) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x4c) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x4c);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x6c);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    FUN_089f4bf4(0x40400000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x6c));
  }
  iVar5 = FUN_088e1490(*(undefined4 *)(param_1 + 0x74));
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  else {
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x9c);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x74) + 0x60);
    *pfVar6 = *pfVar6 + 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x74) + 100);
    *pfVar6 = *pfVar6 + 90.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x74);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  pfVar6 = (float *)(*(int *)(iVar5 + 0x18) + 0x60);
  fVar9 = (fVar10 * 0.25 - 5.0) + 90.0;
  *pfVar6 = *pfVar6 - fVar17;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100);
  *pfVar6 = *pfVar6 - fVar9;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0x60);
  *pfVar6 = *pfVar6 - fVar17;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 100);
  *pfVar6 = *pfVar6 - fVar9;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 0x60);
  *pfVar6 = *pfVar6 - fVar17;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 100);
  *pfVar6 = *pfVar6 - fVar9;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0x60);
  *pfVar6 = *pfVar6 - fVar17;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 100);
  *pfVar6 = *pfVar6 - fVar9;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60);
  *pfVar6 = *pfVar6 - fVar17;
  pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 100);
  *pfVar6 = *pfVar6 - fVar9;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  piVar4 = (int *)_DONE_Get_DAT_08AAC9E0();
  iVar5 = (int)*(char *)(*piVar4 + 0x410);
  if (iVar5 < 10) {
    FUN_089f4a90((float)(iVar5 / 5),(float)(iVar5 % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x28));
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60) =
         (*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0x60) + 6.0) - 2.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
  }
  else {
    FUN_089f4a90((float)((iVar5 / 10) / 5),(float)((iVar5 / 10) % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x24));
    FUN_089f4a90((float)((iVar5 % 10) / 5),(float)((iVar5 % 10) % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x28));
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0x60) + 12.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  }
  fVar10 = *(float *)(**(int **)(param_1 + 0x1c) + 0x60);
  fVar9 = (float)FUN_089f4944();
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0x60) = fVar10 + fVar9 * 0.5 + 90.0;
  fVar10 = *(float *)(**(int **)(param_1 + 0x1c) + 100);
  fVar9 = (float)FUN_089f494c();
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 100) = (fVar10 + fVar9 * 0.5) - 90.0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 100) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 100);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0x60) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x60);
  if (*(float *)(*(int *)(param_1 + 0x74) + 0x3bc) == 0.0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x54);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  *(undefined4 *)(*(int *)(iVar5 + 0x110) + 100) = *(undefined4 *)(*(int *)(iVar5 + 0x10) + 100);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x110) + 0x60) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x60);
  if (*(float *)(*(int *)(param_1 + 0x74) + 0x3c0) == 0.0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x110);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  *(undefined4 *)(*(int *)(iVar5 + 0xb4) + 100) = 0xc2400000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xb8) + 100) = 0xc2400000;
  FUN_088d1adc(param_1);
  iVar5 = 0x36;
  iVar7 = 0xd8;
  do {
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
    *(undefined4 *)(iVar8 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0xbc) = 0x3f800000;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60);
    iVar5 = iVar5 + 1;
    *pfVar6 = *pfVar6 - 90.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 100);
    iVar7 = iVar7 + 4;
    *pfVar6 = *pfVar6 - 90.0;
  } while (iVar5 < 0x3e);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  iVar5 = 0x48;
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
  if (0x48 < *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0xd0) + 0x48) {
    iVar7 = 0x120;
    do {
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      iVar5 = iVar5 + 1;
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0xd0) + 0x48);
  }
  iVar5 = 0;
  iVar7 = 0;
  do {
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0x3ecccccd;
    iVar7 = iVar7 + 4;
  } while (iVar5 < 0x48);
  return;
}

