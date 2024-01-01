#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
vmmul_q_transp3(undefined4 *param_1,undefined (*param_2) [64],undefined (*param_3) [64])

{
  undefined auVar1 [64];
  
  auVar1 = vmmul_q(*param_3,*param_2);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  param_1[4] = auVar1._16_4_;
  param_1[5] = auVar1._20_4_;
  param_1[6] = auVar1._24_4_;
  param_1[7] = auVar1._28_4_;
  param_1[8] = auVar1._32_4_;
  param_1[9] = auVar1._36_4_;
  param_1[10] = auVar1._40_4_;
  param_1[0xb] = auVar1._44_4_;
  param_1[0xc] = auVar1._48_4_;
  param_1[0xd] = auVar1._52_4_;
  param_1[0xe] = auVar1._56_4_;
  param_1[0xf] = auVar1._60_4_;
  return param_1;
}

