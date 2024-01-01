#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined (*) [16] FUN_08a2971c(undefined (*param_1) [16])

{
  undefined auVar1 [16];
  
  auVar1 = vsat0_q(*param_1);
  *(int *)*param_1 = auVar1._0_4_;
  *(int *)(*param_1 + 4) = auVar1._4_4_;
  *(int *)(*param_1 + 8) = auVar1._8_4_;
  *(int *)(*param_1 + 0xc) = auVar1._12_4_;
  return param_1;
}

