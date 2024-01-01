#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08a29654(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined auVar1 [64];
  undefined auVar2 [64];
  
  auVar1._60_4_ = param_2[0xf];
  auVar1._56_4_ = param_2[0xb];
  auVar1._52_4_ = param_2[7];
  auVar1._48_4_ = param_2[3];
  auVar1._44_4_ = param_2[0xe];
  auVar1._40_4_ = param_2[10];
  auVar1._36_4_ = param_2[6];
  auVar1._32_4_ = param_2[2];
  auVar1._28_4_ = param_2[0xd];
  auVar1._24_4_ = param_2[9];
  auVar1._20_4_ = param_2[5];
  auVar1._16_4_ = param_2[1];
  auVar1._12_4_ = param_2[0xc];
  auVar1._8_4_ = param_2[8];
  auVar1._4_4_ = param_2[4];
  auVar1._0_4_ = *param_2;
  auVar2._60_4_ = param_3[0xf];
  auVar2._56_4_ = param_3[0xb];
  auVar2._52_4_ = param_3[7];
  auVar2._48_4_ = param_3[3];
  auVar2._44_4_ = param_3[0xe];
  auVar2._40_4_ = param_3[10];
  auVar2._36_4_ = param_3[6];
  auVar2._32_4_ = param_3[2];
  auVar2._28_4_ = param_3[0xd];
  auVar2._24_4_ = param_3[9];
  auVar2._20_4_ = param_3[5];
  auVar2._16_4_ = param_3[1];
  auVar2._12_4_ = param_3[0xc];
  auVar2._8_4_ = param_3[8];
  auVar2._4_4_ = param_3[4];
  auVar2._0_4_ = *param_3;
  auVar1 = vmmul_q(auVar1,auVar2);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._16_4_;
  param_1[2] = auVar1._32_4_;
  param_1[3] = auVar1._48_4_;
  param_1[4] = auVar1._4_4_;
  param_1[5] = auVar1._20_4_;
  param_1[6] = auVar1._36_4_;
  param_1[7] = auVar1._52_4_;
  param_1[8] = auVar1._8_4_;
  param_1[9] = auVar1._24_4_;
  param_1[10] = auVar1._40_4_;
  param_1[0xb] = auVar1._56_4_;
  param_1[0xc] = auVar1._12_4_;
  param_1[0xd] = auVar1._28_4_;
  param_1[0xe] = auVar1._44_4_;
  param_1[0xf] = auVar1._60_4_;
  return param_1;
}

