#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890beec(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 in_V7C;
  
  iVar2 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x54);
  iVar1 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x58);
  *(float *)(iVar2 + 0x88) = *(float *)(iVar2 + 0x88) - *(float *)(param_1 + 0x230);
  FUN_089f4954(*(undefined4 *)(iVar2 + 0x80),*(undefined4 *)(iVar2 + 0x84),
               *(undefined4 *)(iVar2 + 0x88),iVar2,0);
  fVar3 = *(float *)(param_1 + 0x230) + 0.01;
  if (0.25 < fVar3) {
    uVar4 = 0x3e800000;
  }
  else {
    if (-0.25 <= fVar3) {
      *(float *)(param_1 + 0x230) = fVar3;
      goto LAB_0890bfb4;
    }
    uVar4 = 0xbe800000;
  }
  *(undefined4 *)(param_1 + 0x230) = uVar4;
LAB_0890bfb4:
  if (*(float *)(iVar2 + 0xbc) < 1.0) {
    fVar3 = *(float *)(iVar2 + 0xbc) + 0.1;
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    *(float *)(iVar2 + 0xbc) = fVar3;
    fVar3 = *(float *)(param_1 + 0x234);
  }
  else {
    fVar3 = *(float *)(param_1 + 0x234);
  }
  *(float *)(param_1 + 0x234) = fVar3 + 0.1;
  if (6.283185 < fVar3 + 0.1) {
    *(float *)(param_1 + 0x234) = *(float *)(param_1 + 0x234) - 6.283185;
  }
  uVar4 = vmul_s(*(undefined4 *)(param_1 + 0x234),in_V7C);
  fVar3 = (float)vsin_s(uVar4);
  *(float *)(iVar1 + 0xbc) = fVar3 * 0.15 + 0.8;
  return;
}

