#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089e8964(int param_1,int param_2,float *param_3,float *param_4,undefined (*param_5) [16],
            undefined (*param_6) [16])

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined (*pauVar4) [12];
  undefined (*pauVar5) [12];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 in_V7D;
  undefined4 in_V7F;
  float local_28;
  
  auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x10),*(undefined (*) [12])(param_2 + 0x10));
  pauVar5 = (undefined (*) [12])(param_1 + 0x20);
  fVar7 = (float)vdot_t(*pauVar5,*pauVar5);
  pauVar4 = (undefined (*) [12])(param_2 + 0x20);
  fVar8 = (float)vdot_t(*pauVar4,*pauVar4);
  fVar9 = (float)vdot_t(*pauVar4,auVar1);
  fVar10 = (float)vdot_t(*pauVar5,auVar1);
  fVar11 = (float)vdot_t(*pauVar5,*pauVar4);
  fVar6 = fVar7 * fVar8 - fVar11 * fVar11;
  if (fVar6 == 0.0) {
    local_28 = 0.5;
  }
  else {
    uVar12 = vmin_s((fVar11 * fVar9 - fVar10 * fVar8) / fVar6,in_V7F);
    local_28 = (float)vmax_s(uVar12,in_V7D);
  }
  *param_3 = local_28;
  fVar9 = fVar11 * local_28 + fVar9;
  if (fVar9 < 0.0) {
    *param_4 = 0.0;
    uVar12 = vmin_s(-fVar10 / fVar7,in_V7F);
    fVar6 = (float)vmax_s(uVar12,in_V7D);
    *param_3 = fVar6;
  }
  else if (fVar8 < fVar9) {
    uVar12 = vmin_s((fVar11 - fVar10) / fVar7,in_V7F);
    fVar6 = (float)vmax_s(uVar12,in_V7D);
    *param_3 = fVar6;
  }
  else {
    *param_4 = fVar9 / fVar8;
  }
  fVar6 = *param_3;
  auVar1._4_4_ = fVar6;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = fVar6;
  auVar1 = vmul_t(*pauVar5,auVar1);
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x10),auVar1);
  *(int *)*param_5 = auVar1._0_4_;
  *(int *)(*param_5 + 4) = auVar1._4_4_;
  *(int *)(*param_5 + 8) = auVar1._8_4_;
  *(undefined4 *)(*param_5 + 0xc) = uVar12;
  fVar6 = *param_4;
  auVar3._4_4_ = fVar6;
  auVar3._0_4_ = fVar6;
  auVar3._8_4_ = fVar6;
  auVar1 = vmul_t(*pauVar4,auVar3);
  uVar12 = *(undefined4 *)(param_2 + 0x1c);
  auVar1 = vadd_t(*(undefined (*) [12])(param_2 + 0x10),auVar1);
  *(int *)*param_6 = auVar1._0_4_;
  *(int *)(*param_6 + 4) = auVar1._4_4_;
  *(int *)(*param_6 + 8) = auVar1._8_4_;
  *(undefined4 *)(*param_6 + 0xc) = uVar12;
  auVar2 = vsub_q(*param_5,*param_6);
  uVar12 = vdot_t(auVar2._0_12_,auVar2._0_12_);
  return uVar12;
}

