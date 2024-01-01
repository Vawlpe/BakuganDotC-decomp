#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089e8894(int param_1,undefined (*param_2) [16],undefined4 *param_3,undefined (*param_4) [16])

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined (*pauVar3) [12];
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V7D;
  undefined4 in_V7F;
  
  auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x10),*(undefined (*) [12])*param_2);
  pauVar3 = (undefined (*) [12])(param_1 + 0x20);
  fVar4 = (float)vdot_t(*pauVar3,*pauVar3);
  fVar5 = (float)vdot_t(*pauVar3,auVar1);
  uVar6 = vmin_s(-fVar5 / fVar4,in_V7F);
  uVar6 = vmax_s(uVar6,in_V7D);
  *param_3 = uVar6;
  auVar1._4_4_ = uVar6;
  auVar1._0_4_ = uVar6;
  auVar1._8_4_ = uVar6;
  auVar1 = vmul_t(*pauVar3,auVar1);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x10),auVar1);
  *(int *)*param_4 = auVar1._0_4_;
  *(int *)(*param_4 + 4) = auVar1._4_4_;
  *(int *)(*param_4 + 8) = auVar1._8_4_;
  *(undefined4 *)(*param_4 + 0xc) = uVar6;
  auVar2 = vsub_q(*param_4,*param_2);
  uVar6 = vdot_t(auVar2._0_12_,auVar2._0_12_);
  return uVar6;
}

