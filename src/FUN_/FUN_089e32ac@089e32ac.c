#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e32ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 in_V7C;
  
  iVar1 = *(int *)(param_1 + 0x210);
  if (iVar1 < 0) {
    *(int *)(param_1 + 0x210) = iVar1 + 1;
    *(float *)(param_1 + 0x214) = *(float *)(param_1 + 0x214) - *(float *)(param_1 + 0x220);
    if (iVar1 + 1 == 0) {
      *(undefined4 *)(param_1 + 0x214) = 0;
    }
    uVar2 = vmul_s(*(float *)(param_1 + 0x21c) * 3.0,in_V7C);
    fVar3 = (float)vsin_s(uVar2);
    uVar2 = vmul_s(*(float *)(param_1 + 0x21c) - 1.570796,in_V7C);
    fVar4 = (float)vsin_s(uVar2);
    FUN_089e3008(*(undefined4 *)(param_1 + 0x15c),
                 (fVar3 + fVar4 + 1.0) * *(float *)(param_1 + 0x214),param_1);
    fVar3 = *(float *)(param_1 + 0x21c) + *(float *)(param_1 + 0x218);
    *(float *)(param_1 + 0x21c) = fVar3;
    if (3.141593 < fVar3) {
      *(float *)(param_1 + 0x21c) = fVar3 - 6.283185;
    }
    else if (fVar3 <= -3.141593) {
      *(float *)(param_1 + 0x21c) = fVar3 + 6.283185;
    }
  }
  else if (0 < iVar1) {
    *(int *)(param_1 + 0x210) = iVar1 + -1;
    *(float *)(param_1 + 0x214) = *(float *)(param_1 + 0x214) - *(float *)(param_1 + 0x220);
    if (iVar1 + -1 == 0) {
      *(undefined4 *)(param_1 + 0x214) = 0;
    }
    uVar2 = vmul_s(*(undefined4 *)(param_1 + 0x21c),in_V7C);
    fVar3 = (float)vsin_s(uVar2);
    FUN_089e3008(*(undefined4 *)(param_1 + 0x15c),fVar3 * *(float *)(param_1 + 0x214),param_1);
    fVar3 = *(float *)(param_1 + 0x21c) + *(float *)(param_1 + 0x218);
    *(float *)(param_1 + 0x21c) = fVar3;
    if (3.141593 < fVar3) {
      *(float *)(param_1 + 0x21c) = fVar3 - 6.283185;
    }
    else if (fVar3 <= -3.141593) {
      *(float *)(param_1 + 0x21c) = fVar3 + 6.283185;
    }
  }
  return;
}

