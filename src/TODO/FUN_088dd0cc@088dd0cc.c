#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dd0cc(int param_1,undefined4 *param_2,undefined (*param_3) [12],char param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 in_V7D;
  float local_7c;
  
  fVar10 = 1.0;
  if (DAT_08b002b4 < 7) {
    if (0.3 <= ABS(DAT_08b00294)) {
      fVar9 = *(float *)(param_1 + 0x20);
      goto LAB_088dd1a8;
    }
    uVar11 = vzero_s();
    auVar1._8_4_ = DAT_08b00298;
    auVar1._4_4_ = uVar11;
    auVar1._0_4_ = DAT_08b00290;
    auVar2._8_4_ = DAT_08b00298;
    auVar2._4_4_ = uVar11;
    auVar2._0_4_ = DAT_08b00290;
    uVar11 = vdot_t(auVar1,auVar2);
    uVar11 = vsqrt_s(uVar11);
    fVar10 = (float)atan2f(ABS(DAT_08b00294),uVar11);
    fVar10 = fVar10 * 0.7 + 1.0;
    DAT_08b00294 = 0.0;
  }
  fVar9 = *(float *)(param_1 + 0x20);
LAB_088dd1a8:
  uVar11 = DAT_08b0028c;
  auVar6._4_4_ = DAT_08b00294;
  auVar6._0_4_ = DAT_08b00290;
  auVar6._8_4_ = DAT_08b00298;
  auVar1 = vscl_t(auVar6,fVar9 + 0.001);
  auVar1 = vscl_t(auVar1,fVar10);
  auVar5._8_4_ = DAT_08b00288;
  auVar5._4_4_ = DAT_08b00284;
  auVar5._0_4_ = DAT_08b00280;
  auVar1 = vadd_t(auVar5,auVar1);
  local_7c = auVar1._4_4_;
  if (param_4 == '\0') {
    local_7c = local_7c - *(float *)(param_1 + 0x20);
  }
  auVar7._4_4_ = DAT_08b00294;
  auVar7._0_4_ = DAT_08b00290;
  auVar7._8_4_ = DAT_08b00298;
  vpfxs(0x12,1,0,3);
  auVar2 = vmov_t(auVar7);
  fVar10 = (float)vdot_t(*param_3,auVar2);
  auVar2 = vscl_t(auVar2,fVar10 * 0.04);
  *(int *)*param_3 = auVar2._0_4_;
  *(int *)(*param_3 + 4) = auVar2._4_4_;
  *(int *)(*param_3 + 8) = auVar2._8_4_;
  *(undefined4 *)param_3[1] = in_V7D;
  *(undefined4 *)(*param_3 + 4) = 0;
  auVar8._4_4_ = local_7c;
  auVar8._0_4_ = auVar1._0_4_;
  auVar8._8_4_ = auVar1._8_4_;
  auVar1 = vadd_t(auVar8,*param_3);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = uVar11;
  if (param_4 == '\0') {
    uVar11 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = uVar11;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x20);
    (**(code **)(*(int *)(param_1 + 4) + 0x4c))(param_1 + *(short *)(*(int *)(param_1 + 4) + 0x48));
  }
  else {
    uVar11 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = uVar11;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    (**(code **)(*(int *)(param_1 + 4) + 0x4c))(param_1 + *(short *)(*(int *)(param_1 + 4) + 0x48));
  }
  return;
}

