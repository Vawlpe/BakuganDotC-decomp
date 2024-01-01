#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bd478(int param_1)

{
  undefined auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  
  if (*(int *)(param_1 + 0x2a0) != 0) {
    uVar3 = vmin_s(*(float *)(param_1 + 0x360) - 0.0625,in_V7F);
    fVar2 = (float)vmax_s(uVar3,in_V7D);
    *(float *)(param_1 + 0x360) = fVar2;
    uVar3 = vmul_s(fVar2 * fVar2 * 3.141593,in_V7C);
    fVar2 = (float)vcos_s(uVar3);
    fVar2 = (1.0 - fVar2) * 0.5;
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x370),*(undefined (*) [16])(param_1 + 0x390));
    auVar1 = vscl_q(auVar1,fVar2);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x390),auVar1);
    *(int *)(param_1 + 0x50) = auVar1._0_4_;
    *(int *)(param_1 + 0x54) = auVar1._4_4_;
    *(int *)(param_1 + 0x58) = auVar1._8_4_;
    *(int *)(param_1 + 0x5c) = auVar1._12_4_;
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x380),*(undefined (*) [16])(param_1 + 0x3a0));
    auVar1 = vscl_q(auVar1,fVar2);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x3a0),auVar1);
    *(int *)(param_1 + 0x60) = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(int *)(param_1 + 0x6c) = auVar1._12_4_;
    if (*(float *)(param_1 + 0x360) <= 0.0) {
      FUN_088b9eac(param_1,0);
    }
  }
  return;
}

