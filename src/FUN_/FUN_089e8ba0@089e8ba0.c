#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089e8ba0(int param_1,int param_2,float *param_3,float *param_4,undefined (*param_5) [16],
            undefined (*param_6) [16])

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [12];
  undefined (*pauVar6) [12];
  undefined (*pauVar7) [12];
  undefined (*pauVar8) [12];
  undefined (*pauVar9) [12];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 in_V7D;
  undefined4 in_V7F;
  float local_28;
  
  pauVar9 = (undefined (*) [12])(param_1 + 0x10);
  pauVar7 = (undefined (*) [12])(param_2 + 0x10);
  auVar1 = vsub_t(*pauVar9,*pauVar7);
  pauVar6 = (undefined (*) [12])(param_1 + 0x20);
  fVar11 = (float)vdot_t(*pauVar6,*pauVar6);
  pauVar8 = (undefined (*) [12])(param_2 + 0x20);
  fVar12 = (float)vdot_t(*pauVar8,*pauVar8);
  fVar13 = (float)vdot_t(*pauVar8,auVar1);
  if ((fVar11 <= 0.0001) && (fVar12 <= 0.0001)) {
    *param_4 = 0.0;
    *param_3 = 0.0;
    uVar16 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)*param_5 = *(undefined4 *)*pauVar9;
    *(undefined4 *)(*param_5 + 4) = uVar16;
    *(undefined4 *)(*param_5 + 8) = uVar3;
    *(undefined4 *)(*param_5 + 0xc) = uVar4;
    uVar16 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)*param_6 = *(undefined4 *)*pauVar7;
    *(undefined4 *)(*param_6 + 4) = uVar16;
    *(undefined4 *)(*param_6 + 8) = uVar3;
    *(undefined4 *)(*param_6 + 0xc) = uVar4;
    auVar2 = vsub_q(*param_5,*param_6);
    uVar16 = vdot_t(auVar2._0_12_,auVar2._0_12_);
    return uVar16;
  }
  if (fVar11 <= 0.0001) {
    *param_3 = 0.0;
    *param_4 = fVar13 / fVar12;
    uVar16 = vmin_s(fVar13 / fVar12,in_V7F);
    fVar12 = (float)vmax_s(uVar16,in_V7D);
    *param_4 = fVar12;
  }
  else {
    fVar14 = (float)vdot_t(*pauVar6,auVar1);
    if (fVar12 <= 0.0001) {
      *param_4 = 0.0;
      uVar16 = vmin_s(-fVar14 / fVar11,in_V7F);
      fVar12 = (float)vmax_s(uVar16,in_V7D);
      *param_3 = fVar12;
    }
    else {
      fVar15 = (float)vdot_t(*pauVar6,*pauVar8);
      fVar10 = fVar11 * fVar12 - fVar15 * fVar15;
      if (fVar10 == 0.0) {
        local_28 = 0.5;
      }
      else {
        uVar16 = vmin_s((fVar15 * fVar13 - fVar14 * fVar12) / fVar10,in_V7F);
        local_28 = (float)vmax_s(uVar16,in_V7D);
      }
      *param_3 = local_28;
      fVar12 = (fVar15 * local_28 + fVar13) / fVar12;
      *param_4 = fVar12;
      if (fVar12 < 0.0) {
        *param_4 = 0.0;
        uVar16 = vmin_s(-fVar14 / fVar11,in_V7F);
        fVar12 = (float)vmax_s(uVar16,in_V7D);
        *param_3 = fVar12;
      }
      else if (1.0 < *param_4) {
        *param_4 = 1.0;
        uVar16 = vmin_s((fVar15 - fVar14) / fVar11,in_V7F);
        fVar12 = (float)vmax_s(uVar16,in_V7D);
        *param_3 = fVar12;
      }
    }
  }
  fVar12 = *param_3;
  auVar1._4_4_ = fVar12;
  auVar1._0_4_ = fVar12;
  auVar1._8_4_ = fVar12;
  auVar1 = vmul_t(*pauVar6,auVar1);
  uVar16 = *(undefined4 *)(param_1 + 0x1c);
  auVar1 = vadd_t(*pauVar9,auVar1);
  *(int *)*param_5 = auVar1._0_4_;
  *(int *)(*param_5 + 4) = auVar1._4_4_;
  *(int *)(*param_5 + 8) = auVar1._8_4_;
  *(undefined4 *)(*param_5 + 0xc) = uVar16;
  fVar12 = *param_4;
  auVar5._4_4_ = fVar12;
  auVar5._0_4_ = fVar12;
  auVar5._8_4_ = fVar12;
  auVar1 = vmul_t(*pauVar8,auVar5);
  uVar16 = *(undefined4 *)(param_2 + 0x1c);
  auVar1 = vadd_t(*pauVar7,auVar1);
  *(int *)*param_6 = auVar1._0_4_;
  *(int *)(*param_6 + 4) = auVar1._4_4_;
  *(int *)(*param_6 + 8) = auVar1._8_4_;
  *(undefined4 *)(*param_6 + 0xc) = uVar16;
  auVar2 = vsub_q(*param_5,*param_6);
  uVar16 = vdot_t(auVar2._0_12_,auVar2._0_12_);
  return uVar16;
}

