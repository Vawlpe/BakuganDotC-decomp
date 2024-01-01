#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089ea224(undefined (*param_1) [12],undefined4 *param_2)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1[2] + 4);
  auVar1 = vsub_t(*(undefined (*) [12])(param_1[1] + 4),*param_1);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = uVar2;
  return param_2;
}

