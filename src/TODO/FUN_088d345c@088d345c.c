#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d345c(int param_1)

{
  undefined auVar1 [12];
  uint uVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_V7D;
  undefined4 uVar9;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  if (iVar5 < 1) {
    if (-1 < iVar5) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      DAT_08abec9c = 1;
      if (*(int *)(DAT_08ac58c4 + 4) == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 3;
        FUN_089f4bf4(0x40000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xa8));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xb4) + 100) = 0xc2400000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xb8) + 100) = 0xc2400000;
        return;
      }
      FUN_088e1184(*(undefined4 *)(param_1 + 0x74));
      FUN_088d2850(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  else if (iVar5 < 2) {
    pfVar6 = (float *)(**(int **)(param_1 + 0x1c) + 0x60);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(**(int **)(param_1 + 0x1c) + 100);
    *pfVar6 = *pfVar6 - 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x60);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0x60);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 100);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 0x60);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 100);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0x60);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 100);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 100);
    *pfVar6 = *pfVar6 + 15.0;
    iVar5 = FUN_088f505c(0x38d);
    if (iVar5 != 0) {
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x70) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x70) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x110) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x110) + 100);
      *pfVar6 = *pfVar6 - 15.0;
    }
    iVar5 = FUN_088f505c(0x38e);
    if (iVar5 != 0) {
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x4c) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x4c) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 100);
      *pfVar6 = *pfVar6 - 15.0;
    }
    iVar5 = FUN_088e1490(*(undefined4 *)(param_1 + 0x74));
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x1c);
    }
    else {
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x74) + 0x60);
      *pfVar6 = *pfVar6 - 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x74) + 100);
      *pfVar6 = *pfVar6 - 15.0;
      iVar5 = *(int *)(param_1 + 0x1c);
    }
    pfVar6 = (float *)(*(int *)(iVar5 + 0xa0) + 0x60);
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa0) + 100);
    iVar7 = 0x36;
    *pfVar6 = *pfVar6 - 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x78) + 0x60);
    iVar5 = 0xd8;
    *pfVar6 = *pfVar6 + 15.0;
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x78) + 100);
    *pfVar6 = *pfVar6 - 15.0;
    do {
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x60);
      iVar7 = iVar7 + 1;
      *pfVar6 = *pfVar6 + 15.0;
      pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100);
      iVar5 = iVar5 + 4;
      *pfVar6 = *pfVar6 + 15.0;
    } while (iVar7 < 0x3e);
    iVar5 = *(int *)(param_1 + 200) + 0xf;
    *(int *)(param_1 + 200) = iVar5;
    if (0x59 < iVar5) {
      *(undefined4 *)(param_1 + 200) = 0;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  else if (iVar5 < 3) {
    iVar7 = 0;
    iVar5 = 0;
    do {
      iVar7 = iVar7 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0x3f800000;
      iVar5 = iVar5 + 4;
    } while (iVar7 < 0x48);
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10c);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    uVar2 = *(uint *)(DAT_08ac5c90 + 0x70);
    uVar8 = *(undefined4 *)(DAT_08ac5c90 + 0x78);
    auVar4._4_4_ = 0;
    auVar4._0_4_ = uVar2;
    auVar4._8_4_ = uVar8;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = uVar2;
    auVar3._8_4_ = uVar8;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = uVar2;
    auVar1._8_4_ = uVar8;
    uVar8 = vdot_t(auVar1,auVar3);
    uVar9 = vcmp_s(8,uVar8,uVar2);
    vrsq_s(uVar8);
    uVar8 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar4,uVar8);
    *(int *)(param_1 + 0xc0) = auVar1._0_4_;
    *(int *)(param_1 + 0xc4) = auVar1._8_4_;
    FUN_088d0a0c(param_1);
    FUN_088d0b94(param_1);
    FUN_088d0e54(param_1);
    FUN_088d21b8(param_1);
    FUN_088d2380(param_1);
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

