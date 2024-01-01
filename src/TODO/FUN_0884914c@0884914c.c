#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884914c(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 in_V7C;
  
  fVar2 = *(float *)(param_1 + 0x2d4) + 0.1;
  fVar1 = *(float *)(param_1 + 0x2d8);
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x2d4) = fVar2;
  if (0.5 < fVar2) {
    fVar1 = fVar1 + 0.075;
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0x2d8) = fVar1;
  }
  uVar3 = vmul_s((1.0 - fVar1) * 3.141593,in_V7C);
  fVar4 = (float)vcos_s(uVar3);
  uVar3 = vmul_s(fVar1 * 9.424778,in_V7C);
  fVar1 = (float)vsin_s(uVar3);
  fVar1 = (1.0 - fVar4) * 0.5 * fVar1 * 500.0;
  if (*(int *)(param_1 + 0x2ec) != 0) {
    *(float *)(param_1 + 0x2d0) =
         *(float *)(param_1 + 0x2d0) +
         ((fVar1 + 700.0) - *(float *)(param_1 + 0x2d0)) * fVar2 * fVar2 * 0.5;
    return;
  }
  *(float *)(param_1 + 0x2d0) =
       *(float *)(param_1 + 0x2d0) +
       ((fVar1 + 300.0) - *(float *)(param_1 + 0x2d0)) * fVar2 * fVar2 * 0.5;
  return;
}

