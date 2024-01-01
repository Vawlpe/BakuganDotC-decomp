#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088c8400(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 in_V7C;
  
  iVar1 = FUN_088cc1fc(*(undefined4 *)(param_1 + 0x160));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x16c) = 3;
  }
  iVar1 = *(int *)(param_1 + 0x16c);
  if (iVar1 < 2) {
    if (iVar1 < 0) {
      fVar2 = *(float *)(param_1 + 0x94);
      goto LAB_088c84b8;
    }
    fVar2 = *(float *)(param_1 + 0xbc);
    if (0 < iVar1) {
      *(float *)(param_1 + 0xbc) = fVar2 - 0.018;
      if (fVar2 - 0.018 <= 0.0) {
        if (param_1 != 0) {
          (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
        }
        return 1;
      }
      fVar2 = *(float *)(param_1 + 0x17c) - 0.25;
      *(float *)(param_1 + 0x17c) = fVar2;
      FUN_089f4534(fVar2,fVar2,param_1);
      fVar2 = *(float *)(param_1 + 0x94);
      goto LAB_088c84b8;
    }
    if (fVar2 < 1.0) {
      *(float *)(param_1 + 0xbc) = fVar2 + 0.2;
    }
    else {
      *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
      *(int *)(param_1 + 0x16c) = iVar1 + 1;
    }
  }
  else if (2 < iVar1) {
    if (3 < iVar1) {
      fVar2 = *(float *)(param_1 + 0x94);
      goto LAB_088c84b8;
    }
    fVar2 = *(float *)(param_1 + 0x17c);
    if (1.0 < fVar2) {
      fVar2 = fVar2 - 1.0;
      *(float *)(param_1 + 0x17c) = fVar2;
    }
    FUN_089f4534(fVar2,fVar2,param_1);
    if (*(float *)(param_1 + 0xbc) <= 0.0) {
      if (param_1 == 0) {
        return 1;
      }
      (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
      return 1;
    }
    *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) - 0.3;
  }
  fVar2 = *(float *)(param_1 + 0x94);
LAB_088c84b8:
  iVar1 = *(int *)(param_1 + 0x160);
  fVar2 = fVar2 + ((*(float *)(iVar1 + 0x138) +
                   *(float *)(iVar1 + 0x54) * (float)*(int *)(iVar1 + 0x13c)) - fVar2) * 0.7;
  *(float *)(param_1 + 0x94) = fVar2;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x20);
  *(float *)(param_1 + 100) = fVar2;
  fVar2 = *(float *)(param_1 + 0x178) + 0.1;
  *(float *)(param_1 + 0x178) = fVar2;
  fVar2 = (float)(-*(int *)(param_1 + 0x170) & 0x1f) * 0.19635 - fVar2;
  uVar3 = vmul_s(fVar2,in_V7C);
  fVar4 = (float)vcos_s(uVar3);
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + fVar4 * 6.0;
  uVar3 = vmul_s(fVar2,in_V7C);
  fVar2 = (float)vsin_s(uVar3);
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + fVar2 * 6.0;
  return 0;
}

