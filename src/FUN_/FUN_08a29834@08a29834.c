#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a29834(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  
  uVar3 = vfim_s(0x3c00);
  auVar2._8_8_ = *(undefined8 *)(param_1 + 4);
  auVar2._4_4_ = param_1[1];
  auVar2._0_4_ = *param_1;
  auVar1._12_4_ = uVar3;
  auVar1._8_4_ = param_3[2];
  auVar1._4_4_ = param_3[1];
  auVar1._0_4_ = *param_3;
  auVar1 = vtfm4_q(auVar2,auVar1);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = auVar1._12_4_;
  return;
}

