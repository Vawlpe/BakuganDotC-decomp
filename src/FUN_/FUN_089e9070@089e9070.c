#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e9070(int param_1,int param_2,undefined4 *param_3)

{
  undefined auVar1 [12];
  float fVar2;
  float fVar3;
  undefined4 in_V7D;
  
  auVar1 = vsub_t(*(undefined (*) [12])(param_2 + 0x10),*(undefined (*) [12])(param_1 + 0x10));
  fVar3 = (float)vdot_t(auVar1,*(undefined (*) [12])(param_2 + 0x20));
  fVar2 = (float)vdot_t(auVar1,auVar1);
  fVar2 = fVar2 - *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20);
  if (((fVar2 <= 0.0) || (fVar3 <= 0.0)) && (fVar2 = fVar3 * fVar3 - fVar2, 0.0 <= fVar2)) {
    fVar2 = -fVar3 - SQRT(fVar2);
    auVar1._4_4_ = fVar2;
    auVar1._0_4_ = fVar2;
    auVar1._8_4_ = fVar2;
    auVar1 = vmul_t(*(undefined (*) [12])(param_2 + 0x20),auVar1);
    *param_3 = auVar1._0_4_;
    param_3[1] = auVar1._4_4_;
    param_3[2] = auVar1._8_4_;
    param_3[3] = in_V7D;
    return 1;
  }
  return 0;
}

