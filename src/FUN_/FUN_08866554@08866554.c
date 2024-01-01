#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08866554(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined auVar3 [12];
  bool bVar5;
  undefined auVar6 [12];
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined auVar4 [12];
  
  iVar11 = *(int *)(param_1 + 0x15c);
  if (*(int *)(param_1 + 0x140) == 0xb) {
    return;
  }
  iVar7 = FUN_08865e3c(param_1);
  if (iVar7 != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x144) & 0x30000000) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x140) == 0x14) {
    return;
  }
  if (*(int *)(param_1 + 0x140) == 0x10) {
    return;
  }
  bVar5 = false;
  if ((*(int *)(param_1 + 0x140) != 0xf) && (*(int *)(param_1 + 0x140) != 0x11)) {
    bVar5 = true;
  }
  iVar7 = FUN_08860344(param_1);
  if (iVar7 == 0) {
    if (((((bVar5) && (*(int *)(param_1 + 0x140) != 6)) && (*(int *)(param_1 + 0x140) != 0x10)) &&
        ((*(int *)(param_1 + 0x168) != 0 && (*(char *)(*(int *)(param_1 + 0x168) + 0xc) == '\0'))))
       && (iVar7 = *(int *)(param_1 + 0x598) + -1, *(int *)(param_1 + 0x598) = iVar7, iVar7 < 1)) {
      *(undefined4 *)(param_1 + 0x598) = 0xffffffff;
    }
    iVar7 = FUN_0880d354();
    if (((iVar7 == 0) && (*(char *)(param_1 + 0x1d1) != '\0')) &&
       ((iVar7 = FUN_0884b248(), iVar7 != 0 &&
        (iVar7 = FUN_0884b268(), *(int *)(iVar7 + 0x440) == 1)))) {
      FUN_08863070(param_1,1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x598) = 0x1e0;
    if (*(char *)(param_1 + 0x158) != '\0') {
      *(undefined *)(param_1 + 0x1d0) = 0;
    }
  }
  if (bVar5) {
    if ((*(uint *)(param_1 + 0x16c) & 0x1000) == 0) {
      if ((*(uint *)(param_1 + 0x16c) & 0x40) != 0) {
        FUN_08863070(param_1,1);
      }
    }
    else {
      iVar7 = FUN_08860344(param_1);
      if (iVar7 != 0) {
        *(undefined *)(param_1 + 0x1d1) = 0;
      }
      if (*(int *)(param_1 + 0x170) == 0) {
        *(undefined4 *)(param_1 + 0x15c) = 0;
      }
      else {
        FUN_08854e78(*(undefined4 *)(param_1 + 0x170),0x11,1);
        *(undefined4 *)(param_1 + 0x15c) = 0;
      }
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
  }
  iVar7 = FUN_08860344(param_1);
  if (iVar7 == 0) {
    if (*(int *)(param_1 + 0x15c) == 0) {
      uVar10 = *(uint *)(param_1 + 0x144);
      goto LAB_08866964;
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    FUN_08863070(param_1,1);
  }
  else {
    if ((*(byte *)(iVar7 + 0x4c1) | *(byte *)(iVar7 + 0x476)) == 0) {
      iVar9 = *(int *)(param_1 + 0x15c);
    }
    else {
      iVar9 = FUN_0885dd98(param_1);
      if (iVar9 == 0) {
        if (*(int *)(param_1 + 0x140) == 0xb) {
          iVar9 = *(int *)(param_1 + 0x15c);
        }
        else {
          *(undefined4 *)(param_1 + 0x160) = 0;
          FUN_08863070(param_1,1);
          iVar9 = *(int *)(param_1 + 0x15c);
        }
      }
      else {
        iVar9 = FUN_0885dd98(param_1);
        if (iVar9 != 0) {
          if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
            uVar8 = FUN_0880cc48();
            FUN_0880d0ac(uVar8,7);
            *(undefined4 *)(param_1 + 0x15c) = 0;
            *(undefined4 *)(param_1 + 0x160) = 0;
          }
          else {
            *(undefined4 *)(param_1 + 0x15c) = 0;
            *(undefined4 *)(param_1 + 0x160) = 0;
          }
        }
        iVar9 = *(int *)(param_1 + 0x15c);
      }
    }
    if (iVar9 == 0) {
      uVar10 = *(uint *)(param_1 + 0x144);
      goto LAB_08866964;
    }
    auVar1 = vsub_t(*(undefined (*) [12])(iVar7 + 0x20),*(undefined (*) [12])(param_1 + 0x20));
    uVar8 = auVar1._0_4_;
    uVar2 = auVar1._8_4_;
    uVar14 = vdot_t(auVar1,auVar1);
    uVar14 = vsqrt_s(uVar14);
    *(undefined4 *)(param_1 + 0x180) = uVar14;
    fVar13 = *(float *)(*(int *)(param_1 + 0x4bc) + 0xc) + *(float *)(*(int *)(iVar7 + 0x4bc) + 0xc)
    ;
    if (150.0 < fVar13) {
      fVar13 = 150.0;
    }
    fVar12 = fVar13 * fVar13 * 0.7;
    uVar14 = vzero_s();
    auVar3._8_4_ = uVar2;
    auVar3._4_4_ = uVar14;
    auVar3._0_4_ = uVar8;
    auVar4._8_4_ = uVar2;
    auVar4._4_4_ = uVar14;
    auVar4._0_4_ = uVar8;
    fVar15 = (float)vdot_t(auVar3,auVar4);
    fVar15 = fVar15 - fVar12;
    *(bool *)(param_1 + 0x194) = fVar15 < 0.0;
    *(float *)(param_1 + 400) = 1.0 - fVar15 / fVar12;
    fVar12 = auVar1._4_4_ * 0.85;
    auVar6._4_4_ = fVar12;
    auVar6._0_4_ = uVar8;
    auVar6._8_4_ = uVar2;
    auVar1._4_4_ = fVar12;
    auVar1._0_4_ = uVar8;
    auVar1._8_4_ = uVar2;
    fVar12 = (float)vdot_t(auVar1,auVar6);
    *(bool *)(param_1 + 0x195) = fVar12 < (fVar13 + 150.0) * (fVar13 + 150.0) * 0.75;
  }
  uVar10 = *(uint *)(param_1 + 0x144);
LAB_08866964:
  if (((uVar10 & 0x400000) != 0) && (*(int *)(param_1 + 0x15c) != iVar11)) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x4000;
  }
  return;
}

