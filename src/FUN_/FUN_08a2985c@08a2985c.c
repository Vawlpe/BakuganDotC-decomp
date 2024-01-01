#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2985c(undefined4 param_1,undefined (*param_2) [16],undefined4 *param_3,
                 undefined (*param_4) [16])

{
  undefined auVar1 [16];
  
  auVar1 = vsub_q(*param_4,*param_2);
  auVar1 = vscl_q(auVar1,param_1);
  auVar1 = vadd_q(*param_2,auVar1);
  *param_3 = auVar1._0_4_;
  param_3[1] = auVar1._4_4_;
  param_3[2] = auVar1._8_4_;
  param_3[3] = auVar1._12_4_;
  return;
}

