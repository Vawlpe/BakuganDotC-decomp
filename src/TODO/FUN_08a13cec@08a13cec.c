#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_08a13cec(undefined4 *param_1,undefined (*param_2) [64],undefined (*param_3) [16],
            undefined (*param_4) [12])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined auVar5 [12];
  undefined4 uVar6;
  undefined auVar7 [36];
  undefined4 in_V2F;
  
  uVar6 = *(undefined4 *)param_4[1];
  auVar7._24_12_ = *(undefined (*) [12])param_3[2];
  auVar7._20_4_ = *(undefined4 *)(param_3[1] + 8);
  auVar7._16_4_ = *(undefined4 *)(param_3[1] + 4);
  auVar7._12_4_ = *(undefined4 *)param_3[1];
  auVar7._8_4_ = *(undefined4 *)(*param_3 + 8);
  auVar7._4_4_ = *(undefined4 *)(*param_3 + 4);
  auVar7._0_4_ = *(undefined4 *)*param_3;
  auVar5 = vhtfm3_t(auVar7,*param_4);
  auVar1 = vscl_q(*param_3,uVar6);
  auVar2 = vscl_q(param_3[1],uVar6);
  auVar3 = vscl_q(param_3[2],uVar6);
  auVar4._60_4_ = in_V2F;
  auVar4._56_4_ = auVar5._8_4_;
  auVar4._52_4_ = auVar5._4_4_;
  auVar4._48_4_ = auVar5._0_4_;
  auVar4._44_4_ = auVar3._12_4_;
  auVar4._40_4_ = auVar3._8_4_;
  auVar4._36_4_ = auVar3._4_4_;
  auVar4._32_4_ = auVar3._0_4_;
  auVar4._28_4_ = auVar2._12_4_;
  auVar4._24_4_ = auVar2._8_4_;
  auVar4._20_4_ = auVar2._4_4_;
  auVar4._16_4_ = auVar2._0_4_;
  auVar4._12_4_ = auVar1._12_4_;
  auVar4._8_4_ = auVar1._8_4_;
  auVar4._4_4_ = auVar1._4_4_;
  auVar4._0_4_ = auVar1._0_4_;
  auVar4 = vmmul_q(auVar4,*param_2);
  *param_1 = auVar4._0_4_;
  param_1[1] = auVar4._4_4_;
  param_1[2] = auVar4._8_4_;
  param_1[3] = auVar4._12_4_;
  param_1[4] = auVar4._16_4_;
  param_1[5] = auVar4._20_4_;
  param_1[6] = auVar4._24_4_;
  param_1[7] = auVar4._28_4_;
  param_1[8] = auVar4._32_4_;
  param_1[9] = auVar4._36_4_;
  param_1[10] = auVar4._40_4_;
  param_1[0xb] = auVar4._44_4_;
  param_1[0xc] = auVar4._48_4_;
  param_1[0xd] = auVar4._52_4_;
  param_1[0xe] = auVar4._56_4_;
  param_1[0xf] = auVar4._60_4_;
  return param_1;
}

