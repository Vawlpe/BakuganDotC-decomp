#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bee7c(float *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  float fVar4;
  undefined4 uVar5;
  undefined4 in_V7F;
  
  uVar5 = vmov_s(in_V7F);
  auVar3._8_8_ = *(undefined8 *)(param_2 + 4);
  auVar3._4_4_ = param_2[1];
  auVar3._0_4_ = *param_2;
  auVar2._12_4_ = uVar5;
  auVar2._8_4_ = param_3[2];
  auVar2._4_4_ = param_3[1];
  auVar2._0_4_ = *param_3;
  auVar2 = vtfm4_q(auVar3,auVar2);
  vmov_q(auVar2);
  fVar4 = (float)vrcp_s(auVar2._12_4_);
  auVar1 = vscl_t(auVar2._0_12_,fVar4);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = fVar4;
  *param_1 = (*param_1 * 480.0 + 480.0) * 0.5;
  param_1[1] = (param_1[1] * -272.0 + 272.0) * 0.5;
  return;
}

