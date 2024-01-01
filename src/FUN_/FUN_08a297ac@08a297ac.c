#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a297ac(undefined4 *param_1,undefined4 *param_2,undefined (*param_3) [16])

{
  undefined auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(param_1 + 4);
  auVar1._4_4_ = param_1[1];
  auVar1._0_4_ = *param_1;
  auVar1 = vtfm4_q(auVar1,*param_3);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = auVar1._12_4_;
  return;
}

