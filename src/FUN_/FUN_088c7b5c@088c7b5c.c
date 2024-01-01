#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088c7b5c(int param_1)

{
  undefined auVar1 [16];
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 in_V7C;
  
  iVar2 = *(int *)(param_1 + 0x16c);
  if (1 < iVar2) {
    if (iVar2 != 100) {
      return 0;
    }
    if (param_1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
    }
    return 1;
  }
  if (iVar2 < 0) {
    return 0;
  }
  if (iVar2 < 1) {
    if (DAT_08abea1c != '\0') {
      *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0xbc) < 1.0) {
      *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) + 0.2;
    }
    else {
      *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
      *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
    }
    *(undefined4 *)(param_1 + 0x17c) = 0x3fa66666;
    return 0;
  }
  if (*(int *)(param_1 + 0x174) < 1) {
    return 0;
  }
  if (*(float *)(param_1 + 0x60) <= *(float *)(*(int *)(param_1 + 0x160) + 0x20) + 12.0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x174) + -1 == *(int *)(*(int *)(param_1 + 0x160) + 0x13c)) &&
     (*(int *)(*(int *)(param_1 + 0x160) + 0x48) == 3)) {
    iVar2 = FUN_088cc1fc(*(undefined4 *)(param_1 + 0x160));
    if (0 < iVar2) {
      if (iVar2 < 4) {
        if (0.0 < *(float *)(param_1 + 0x17c)) {
          *(float *)(param_1 + 0x17c) = *(float *)(param_1 + 0x17c) - 0.05;
        }
        *(float *)(param_1 + 0xb0) = 1.0 - *(float *)(param_1 + 0x17c);
        *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0x17c);
        *(undefined4 *)(param_1 + 0xb4) = 0;
        auVar1 = vsat0_q(*(undefined (*) [16])(param_1 + 0xb0));
        *(int *)*(undefined (*) [16])(param_1 + 0xb0) = auVar1._0_4_;
        *(int *)(param_1 + 0xb4) = auVar1._4_4_;
        *(int *)(param_1 + 0xb8) = auVar1._8_4_;
        *(int *)(param_1 + 0xbc) = auVar1._12_4_;
        fVar3 = *(float *)(param_1 + 0x178);
      }
      else {
        fVar3 = *(float *)(param_1 + 0x178);
      }
      goto LAB_088c7de4;
    }
    if (iVar2 < 0) {
      fVar3 = *(float *)(param_1 + 0x178);
      goto LAB_088c7de4;
    }
    if ((*(int *)(param_1 + 0x170) + *(int *)(*(int *)(param_1 + 0x160) + 0x148) & 0x1fU) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x3fa66666;
      if (*(float *)(param_1 + 0x178) == 0.0) {
        FUN_089f43d4(0x3f000000,param_1);
      }
      *(undefined4 *)(param_1 + 0x178) = 0x40490fdb;
    }
    else {
      fVar3 = *(float *)(param_1 + 0xb0) - 0.07;
      *(float *)(param_1 + 0xb0) = fVar3;
      if (fVar3 < 0.0) {
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0xb0) - 0.2;
    *(float *)(param_1 + 0xb0) = fVar3;
    if (fVar3 < 0.0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  fVar3 = *(float *)(param_1 + 0x178);
LAB_088c7de4:
  if (0.0 < fVar3) {
    fVar3 = *(float *)(param_1 + 0x178) - 0.2617994;
    *(float *)(param_1 + 0x178) = fVar3;
    if (fVar3 <= 0.0) {
      *(undefined4 *)(param_1 + 0x178) = 0;
      FUN_089f43d4(0xbf000000,param_1);
      FUN_089f4534(0x41800000,0x41800000,param_1);
    }
    else {
      uVar4 = vmul_s(*(undefined4 *)(param_1 + 0x178),in_V7C);
      fVar3 = (float)vsin_s(uVar4);
      fVar3 = fVar3 * 8.0 + 16.0;
      FUN_089f4534(fVar3,fVar3,param_1);
    }
  }
  return 0;
}

