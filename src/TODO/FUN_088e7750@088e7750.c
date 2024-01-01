#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e7750(int param_1)

{
  undefined auVar1 [16];
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = FUN_088e7364(param_1,1);
  if (iVar2 != 0) {
    return;
  }
  bVar4 = false;
  if (*(int *)(param_1 + 0x3a8) < 1) {
LAB_088e77c4:
    iVar2 = *(int *)(param_1 + 0x3a8);
  }
  else {
    if (0 < *(int *)(param_1 + 0x3b0)) {
      bVar4 = true;
      iVar2 = *(int *)(param_1 + 0x3b0) + -1;
      *(int *)(param_1 + 0x3b0) = iVar2;
      if (iVar2 == 0) {
        FUN_088e5bec(param_1,0x2a,0,1);
      }
      goto LAB_088e77c4;
    }
    iVar2 = *(int *)(param_1 + 0x3a8);
  }
  if (0 < iVar2) {
    if (1 < iVar2) {
      if (2 < iVar2) {
        return;
      }
      if (bVar4) {
        return;
      }
      *(undefined *)(param_1 + 0x355) = 1;
      iVar2 = FUN_088e1948();
      if (iVar2 == 0) {
        return;
      }
      if (*(char *)(iVar2 + 0x355) != '\0') {
        return;
      }
      iVar2 = FUN_088e1948();
      if (iVar2 == 0) {
        return;
      }
      *(undefined *)(iVar2 + 0x355) = 1;
      if (DAT_08b00bd8._1_1_ != '\0') {
        return;
      }
      FUN_088e14d4();
      return;
    }
    iVar2 = FUN_088e1948();
    if (iVar2 == 0) {
      return;
    }
    iVar3 = FUN_088be274();
    bVar4 = false;
    if ((0x12 < *(int *)(iVar3 + 0x61c)) && (*(int *)(iVar3 + 0x61c) < 0x17)) {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_088def24(0x3e4ccccd,param_1,0,1,0);
      FUN_089c207c(*(undefined4 *)(param_1 + 300),0x2c0003e);
      *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
      return;
    }
    iVar3 = FUN_088be274();
    if (*(char *)(iVar3 + 0x701) == '\0') {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x94))
                        (*(float *)(param_1 + 0x410) * 2.0,0x41700000,
                         param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x90),
                         (float *)(iVar2 + 0x20),1,0);
      if (iVar2 == 0) {
        return;
      }
      *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
      return;
    }
    uVar5 = atan2f(*(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28),
                   *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20));
    fVar7 = (float)FUN_088defe8(uVar5,0x3f800000,*(undefined4 *)(param_1 + 0x424),param_1);
    if (0.01 <= fVar7 * fVar7) {
      return;
    }
    FUN_088def24(0x3e4ccccd,param_1,0,1,0);
    *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
    return;
  }
  if (iVar2 < 0) {
    return;
  }
  *(undefined *)(DAT_08abf710 + 0x88) = 1;
  FUN_088e5bec(param_1,0x2a,1,1);
  *(undefined4 *)(param_1 + 0x3b0) = 0x1e;
  *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
  iVar2 = FUN_088e1948();
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x140) != 9) {
      FUN_088e2788(iVar2,9,0);
    }
    *(undefined *)(param_1 + 0x354) = 1;
    if (*(char *)(iVar2 + 0x354) != '\0') {
      iVar3 = *(int *)(param_1 + 0x350);
      goto LAB_088e7884;
    }
    *(undefined *)(iVar2 + 0x354) = 1;
    *(undefined *)(iVar2 + 0x540) = *(undefined *)(param_1 + 0x34c);
    *(int *)(iVar2 + 0x544) = param_1 + 0x20;
  }
  iVar3 = *(int *)(param_1 + 0x350);
LAB_088e7884:
  fVar7 = DAT_08abf6e0;
  if ((iVar3 != 0) && (iVar3 = FUN_088e76a0(param_1), iVar3 != 0)) {
    iVar3 = FUN_088be274();
    *(undefined *)(iVar3 + 0x701) = 1;
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(iVar2 + 0x20));
    fVar7 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
    fVar6 = (fVar7 / (*(float *)(param_1 + 0x408) * *(float *)(param_1 + 0x408))) *
            (DAT_08abf6e4 - DAT_08abf6e0) + DAT_08abf6e0;
    fVar7 = DAT_08abf6e4;
    if (fVar6 <= DAT_08abf6e4) {
      fVar7 = fVar6;
    }
  }
  iVar2 = FUN_088be274();
  *(float *)(iVar2 + 0x704) = fVar7;
  return;
}

