#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b36c8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = 0;
  iVar6 = 0;
  do {
    iVar4 = iVar4 + 1;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
    iVar6 = iVar6 + 4;
  } while (iVar4 < 0x4d);
  *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) = *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) | 1;
  iVar6 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
  iVar4 = *(int *)(param_1 + 0x1c);
  while( true ) {
    *(uint *)(*(int *)(iVar4 + 4) + 0xd0) = *(uint *)(*(int *)(iVar4 + 4) + 0xd0) | 1;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar7 != 0) {
      FUN_089f3aa8(iVar7);
      iVar4 = iVar7;
    }
    iVar7 = (iVar6 + 0x4d) * 4;
    *(int *)(*(int *)(param_1 + 0x1c) + iVar7) = iVar4;
    FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    uVar2 = DAT_08b001bc;
    uVar1 = DAT_08b001b8;
    uVar3 = DAT_08b001b4;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
    *(undefined4 *)(iVar4 + 0xb0) = DAT_08b001b0;
    *(undefined4 *)(iVar4 + 0xb4) = uVar3;
    *(undefined4 *)(iVar4 + 0xb8) = uVar1;
    *(undefined4 *)(iVar4 + 0xbc) = uVar2;
    pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x68);
    *pfVar5 = *pfVar5 - 1.0;
    iVar6 = iVar6 + 1;
    if (7 < iVar6) break;
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x134) + 0x60);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x134) + 100);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x138) + 100);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x13c) + 0x60);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x13c) + 100);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x140) + 0x60);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x144) + 0x60);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x148) + 0x60);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x148) + 100);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14c) + 100);
  iVar6 = 0;
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x150) + 0x60);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x150) + 100);
  *pfVar5 = *pfVar5 + 2.0;
  iVar4 = *(int *)(param_1 + 0x1c);
  while( true ) {
    *(uint *)(*(int *)(iVar4 + 8) + 0xd0) = *(uint *)(*(int *)(iVar4 + 8) + 0xd0) | 1;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar7 != 0) {
      FUN_089f3aa8(iVar7);
      iVar4 = iVar7;
    }
    iVar7 = (iVar6 + 0x55) * 4;
    *(int *)(*(int *)(param_1 + 0x1c) + iVar7) = iVar4;
    FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    uVar2 = DAT_08b001bc;
    uVar1 = DAT_08b001b8;
    uVar3 = DAT_08b001b4;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
    *(undefined4 *)(iVar4 + 0xb0) = DAT_08b001b0;
    *(undefined4 *)(iVar4 + 0xb4) = uVar3;
    *(undefined4 *)(iVar4 + 0xb8) = uVar1;
    *(undefined4 *)(iVar4 + 0xbc) = uVar2;
    pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 0x68);
    *pfVar5 = *pfVar5 - 1.0;
    iVar6 = iVar6 + 1;
    if (7 < iVar6) break;
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x154) + 0x60);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x154) + 100);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x158) + 100);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x15c) + 0x60);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x15c) + 100);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x160) + 0x60);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x164) + 0x60);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x168) + 0x60);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x168) + 100);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x16c) + 100);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x170) + 0x60);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x170) + 100);
  *pfVar5 = *pfVar5 + 2.0;
  FUN_089f4bf4((float)(*(int *)(param_1 + 0x70) + -1),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10));
  iVar6 = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 100) = 0x43570000;
  iVar4 = *(int *)(param_1 + 0x1c);
  while( true ) {
    *(uint *)(*(int *)(iVar4 + 0x10) + 0xd0) = *(uint *)(*(int *)(iVar4 + 0x10) + 0xd0) | 1;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar7 != 0) {
      FUN_089f3aa8(iVar7);
      iVar4 = iVar7;
    }
    iVar7 = (iVar6 + 0x5d) * 4;
    *(int *)(*(int *)(param_1 + 0x1c) + iVar7) = iVar4;
    FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    uVar2 = DAT_08b001bc;
    uVar1 = DAT_08b001b8;
    uVar3 = DAT_08b001b4;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
    *(undefined4 *)(iVar4 + 0xb0) = DAT_08b001b0;
    *(undefined4 *)(iVar4 + 0xb4) = uVar3;
    *(undefined4 *)(iVar4 + 0xb8) = uVar1;
    *(undefined4 *)(iVar4 + 0xbc) = uVar2;
    pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x68);
    *pfVar5 = *pfVar5 - 1.0;
    iVar6 = iVar6 + 1;
    if (7 < iVar6) break;
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x174) + 0x60);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x174) + 100);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x178) + 100);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x17c) + 0x60);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x17c) + 100);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x180) + 0x60);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x184) + 0x60);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x188) + 0x60);
  *pfVar5 = *pfVar5 - 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x188) + 100);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18c) + 100);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 400) + 0x60);
  *pfVar5 = *pfVar5 + 2.0;
  pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 400) + 100);
  *pfVar5 = *pfVar5 + 2.0;
  FUN_089f5c80(*(undefined4 *)(param_1 + 0x18),0x20);
  FUN_089b32b8(param_1,*(undefined4 *)(param_1 + 0x70));
  iVar4 = 5;
  iVar6 = 0x14;
  do {
    iVar4 = iVar4 + 1;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
    iVar6 = iVar6 + 4;
  } while (iVar4 < 0xb);
  iVar4 = 0xd;
  iVar6 = 0x34;
  do {
    iVar4 = iVar4 + 1;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
    iVar6 = iVar6 + 4;
  } while (iVar4 < 0x19);
  if (((((*(int *)(param_1 + 0x70) == 1) || (*(int *)(param_1 + 0x70) == 3)) ||
       (*(int *)(param_1 + 0x70) == 4)) ||
      ((*(int *)(param_1 + 0x70) == 6 || (*(int *)(param_1 + 0x70) == 0xe)))) ||
     ((*(int *)(param_1 + 0x70) == 0xf ||
      ((*(int *)(param_1 + 0x70) == 0x10 || (*(int *)(param_1 + 0x70) == 0x12)))))) {
    iVar4 = 0x19;
    iVar6 = 100;
    do {
      iVar4 = iVar4 + 1;
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
      iVar6 = iVar6 + 4;
    } while (iVar4 < 0x1f);
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  else {
    pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0x60);
    fVar9 = *pfVar5;
    fVar8 = (float)FUN_089f4944();
    *pfVar5 = fVar9 + (fVar8 * 1.5 - 2.0);
    pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe4) + 0x60);
    fVar9 = *pfVar5;
    fVar8 = (float)FUN_089f4944();
    *pfVar5 = fVar9 + (fVar8 * 1.5 - 2.0);
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  FUN_089f4bf4(0x3f800000,*(undefined4 *)(iVar4 + 0x114));
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x114);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x124) + 0xbc) = 0x3f000000;
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x124);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x128) + 100) = 0x43880000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x128) + 0xbc) = 0x3f000000;
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x128);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 300));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 300));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 300) + 0xbc) = 0x3f000000;
  iVar6 = 0x11c;
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 300);
  iVar4 = 0x47;
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
  do {
    iVar4 = iVar4 + 1;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
    iVar6 = iVar6 + 4;
  } while (iVar4 < 0x49);
  return;
}

