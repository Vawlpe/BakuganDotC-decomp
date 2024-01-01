#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089feab4(int param_1)

{
  undefined auVar1 [16];
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if ((*(uint *)(param_1 + 0x9c) & 4) == 0) {
    fVar5 = 0.5;
    if (0.51 < *(float *)(param_1 + 0x100)) {
      fVar5 = *(float *)(param_1 + 0x100) + (0.5 - *(float *)(param_1 + 0x100)) * 0.4;
    }
    fVar4 = *(float *)(param_1 + 0xfc);
  }
  else {
    fVar5 = 1.0;
    if (*(float *)(param_1 + 0x100) < 0.99) {
      fVar5 = *(float *)(param_1 + 0x100) + (1.0 - *(float *)(param_1 + 0x100)) * 0.4;
    }
    fVar4 = *(float *)(param_1 + 0xfc);
  }
  *(float *)(param_1 + 0x100) = fVar5;
  fVar5 = *(float *)(param_1 + 0x11c);
  iVar2 = 0;
  do {
    auVar1 = vscl_q(*(undefined (*) [16])(param_1 + 0x110),*(undefined4 *)(param_1 + 0x100));
    *(int *)(iVar3 + 0xb0) = auVar1._0_4_;
    *(int *)(iVar3 + 0xb4) = auVar1._4_4_;
    *(int *)(iVar3 + 0xb8) = auVar1._8_4_;
    *(int *)(iVar3 + 0xbc) = auVar1._12_4_;
    *(float *)(iVar3 + 0xbc) = fVar4 * fVar5;
    iVar2 = iVar2 + 1;
    iVar3 = *(int *)(iVar3 + 4);
  } while (iVar2 < 8);
  fVar4 = *(float *)(param_1 + 0xfc);
  fVar5 = *(float *)(param_1 + 300);
  iVar3 = *(int *)(param_1 + 0xac);
  auVar1 = vscl_q(*(undefined (*) [16])(param_1 + 0x120),*(undefined4 *)(param_1 + 0x100));
  *(int *)(iVar3 + 0xb0) = auVar1._0_4_;
  *(int *)(iVar3 + 0xb4) = auVar1._4_4_;
  *(int *)(iVar3 + 0xb8) = auVar1._8_4_;
  *(int *)(iVar3 + 0xbc) = auVar1._12_4_;
  *(float *)(*(int *)(param_1 + 0xac) + 0xbc) = fVar4 * fVar5;
  return;
}

