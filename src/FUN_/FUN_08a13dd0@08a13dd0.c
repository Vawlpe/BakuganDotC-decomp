#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08a13dd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 in_V04;
  undefined4 in_V08;
  undefined4 in_V0C;
  
  uVar2 = vuc2i_s(*param_2);
  auVar1._12_4_ = in_V0C;
  auVar1._8_4_ = in_V08;
  auVar1._4_4_ = in_V04;
  auVar1._0_4_ = uVar2;
  auVar1 = vi2f_q(auVar1,0x1f);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  return param_1;
}

