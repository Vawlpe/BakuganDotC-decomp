#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089dd600(undefined4 *param_1,undefined (*param_2) [16],undefined (*param_3) [12])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined4 uVar5;
  undefined auVar6 [36];
  undefined4 in_V0F;
  
  uVar5 = *(undefined4 *)param_3[1];
  auVar1 = vscl_q(*param_2,uVar5);
  auVar2 = vscl_q(param_2[1],uVar5);
  auVar3 = vscl_q(param_2[2],uVar5);
  auVar6._24_12_ = *(undefined (*) [12])param_2[2];
  auVar6._20_4_ = *(undefined4 *)(param_2[1] + 8);
  auVar6._16_4_ = *(undefined4 *)(param_2[1] + 4);
  auVar6._12_4_ = *(undefined4 *)param_2[1];
  auVar6._8_4_ = *(undefined4 *)(*param_2 + 8);
  auVar6._4_4_ = *(undefined4 *)(*param_2 + 4);
  auVar6._0_4_ = *(undefined4 *)*param_2;
  auVar4 = vhtfm3_t(auVar6,*param_3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  param_1[4] = auVar2._0_4_;
  param_1[5] = auVar2._4_4_;
  param_1[6] = auVar2._8_4_;
  param_1[7] = auVar2._12_4_;
  param_1[8] = auVar3._0_4_;
  param_1[9] = auVar3._4_4_;
  param_1[10] = auVar3._8_4_;
  param_1[0xb] = auVar3._12_4_;
  param_1[0xc] = auVar4._0_4_;
  param_1[0xd] = auVar4._4_4_;
  param_1[0xe] = auVar4._8_4_;
  param_1[0xf] = in_V0F;
  return param_1;
}

