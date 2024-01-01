#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089e41b8(undefined (*param_1) [12],undefined (*param_2) [12],undefined (*param_3) [12],
            undefined (*param_4) [12],undefined4 *param_5)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  auVar1 = vsub_t(*param_2,*param_1);
  auVar2 = vsub_t(*param_3,*param_1);
  auVar3 = vsub_t(*param_4,*param_1);
  fVar8 = (float)vdot_t(auVar1,auVar3);
  fVar9 = (float)vdot_t(auVar2,auVar3);
  if ((fVar8 <= 0.0) && (fVar9 <= 0.0)) {
    uVar4 = *(undefined4 *)(*param_1 + 4);
    uVar5 = *(undefined4 *)(*param_1 + 8);
    uVar6 = *(undefined4 *)param_1[1];
    *param_5 = *(undefined4 *)*param_1;
    param_5[1] = uVar4;
    param_5[2] = uVar5;
    param_5[3] = uVar6;
    return 2;
  }
  auVar3 = vsub_t(*param_4,*param_2);
  fVar10 = (float)vdot_t(auVar1,auVar3);
  fVar11 = (float)vdot_t(auVar2,auVar3);
  if ((0.0 <= fVar10) && (fVar11 <= fVar10)) {
    uVar4 = *(undefined4 *)(*param_2 + 4);
    uVar5 = *(undefined4 *)(*param_2 + 8);
    uVar6 = *(undefined4 *)param_2[1];
    *param_5 = *(undefined4 *)*param_2;
    param_5[1] = uVar4;
    param_5[2] = uVar5;
    param_5[3] = uVar6;
    return 2;
  }
  fVar7 = fVar8 * fVar11 - fVar9 * fVar10;
  if (((fVar7 <= 0.0) && (0.0 <= fVar8)) && (fVar10 <= 0.0)) {
    auVar1 = vscl_t(auVar1,fVar8 / (fVar8 - fVar10));
    uVar4 = *(undefined4 *)param_1[1];
    auVar1 = vadd_t(*param_1,auVar1);
    *param_5 = auVar1._0_4_;
    param_5[1] = auVar1._4_4_;
    param_5[2] = auVar1._8_4_;
    param_5[3] = uVar4;
    return 1;
  }
  auVar3 = vsub_t(*param_4,*param_3);
  fVar12 = (float)vdot_t(auVar1,auVar3);
  fVar13 = (float)vdot_t(auVar2,auVar3);
  if ((0.0 <= fVar13) && (fVar12 <= fVar13)) {
    uVar4 = *(undefined4 *)(*param_3 + 4);
    uVar5 = *(undefined4 *)(*param_3 + 8);
    uVar6 = *(undefined4 *)param_3[1];
    *param_5 = *(undefined4 *)*param_3;
    param_5[1] = uVar4;
    param_5[2] = uVar5;
    param_5[3] = uVar6;
    return 2;
  }
  fVar8 = fVar9 * fVar12 - fVar8 * fVar13;
  if (((fVar8 <= 0.0) && (0.0 <= fVar9)) && (fVar13 <= 0.0)) {
    auVar1 = vscl_t(auVar2,fVar9 / (fVar9 - fVar13));
    uVar4 = *(undefined4 *)param_1[1];
    auVar1 = vadd_t(*param_1,auVar1);
    *param_5 = auVar1._0_4_;
    param_5[1] = auVar1._4_4_;
    param_5[2] = auVar1._8_4_;
    param_5[3] = uVar4;
    return 1;
  }
  fVar9 = fVar10 * fVar13 - fVar11 * fVar12;
  if (((fVar9 <= 0.0) && (fVar11 = fVar11 - fVar10, 0.0 <= fVar11)) && (0.0 <= fVar12 - fVar13)) {
    auVar1 = vsub_t(*param_3,*param_2);
    auVar1 = vscl_t(auVar1,fVar11 / (fVar11 + (fVar12 - fVar13)));
    uVar4 = *(undefined4 *)param_2[1];
    auVar1 = vadd_t(*param_2,auVar1);
    *param_5 = auVar1._0_4_;
    param_5[1] = auVar1._4_4_;
    param_5[2] = auVar1._8_4_;
    param_5[3] = uVar4;
    return 1;
  }
  fVar9 = 1.0 / (fVar9 + fVar8 + fVar7);
  auVar1 = vscl_t(auVar1,fVar9 * fVar8);
  uVar4 = *(undefined4 *)param_1[1];
  auVar1 = vadd_t(*param_1,auVar1);
  auVar2 = vscl_t(auVar2,fVar9 * fVar7);
  auVar1 = vadd_t(auVar1,auVar2);
  *param_5 = auVar1._0_4_;
  param_5[1] = auVar1._4_4_;
  param_5[2] = auVar1._8_4_;
  param_5[3] = uVar4;
  return 0;
}

