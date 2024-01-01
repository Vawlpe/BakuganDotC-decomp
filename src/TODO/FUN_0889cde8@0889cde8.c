#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889cde8(float param_1,undefined4 *param_2,undefined (*param_3) [16],undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 in_V04;
  undefined4 in_V08;
  undefined4 in_V0C;
  undefined4 in_V74;
  
  param_2[1] = (float)param_4[1] + ((float)param_5[1] - (float)param_4[1]) * param_1;
  param_2[2] = (float)param_4[2] + ((float)param_5[2] - (float)param_4[2]) * param_1;
  uVar3 = vuc2i_s(*param_4);
  auVar1._12_4_ = in_V0C;
  auVar1._8_4_ = in_V08;
  auVar1._4_4_ = in_V04;
  auVar1._0_4_ = uVar3;
  auVar1 = vi2f_q(auVar1,0x1f);
  *(int *)*param_3 = auVar1._0_4_;
  *(int *)(*param_3 + 4) = auVar1._4_4_;
  *(int *)(*param_3 + 8) = auVar1._8_4_;
  *(int *)(*param_3 + 0xc) = auVar1._12_4_;
  uVar3 = vuc2i_s(*param_5);
  auVar2._4_12_ = auVar1._4_12_;
  auVar2._0_4_ = uVar3;
  auVar1 = vi2f_q(auVar2,0x1f);
  auVar1 = vsub_q(auVar1,*param_3);
  auVar1 = vscl_q(auVar1,param_1);
  auVar1 = vadd_q(*param_3,auVar1);
  *(int *)*param_3 = auVar1._0_4_;
  *(int *)(*param_3 + 4) = auVar1._4_4_;
  *(int *)(*param_3 + 8) = auVar1._8_4_;
  *(int *)(*param_3 + 0xc) = auVar1._12_4_;
  auVar1 = vsat0_q(*param_3);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar3 = vi2uc_q(auVar1);
  *param_2 = uVar3;
  return;
}

