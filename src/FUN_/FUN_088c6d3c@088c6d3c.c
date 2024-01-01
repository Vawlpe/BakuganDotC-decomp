#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_088c6d3c(undefined4 param_1,undefined (*param_2) [12],undefined4 *param_3,
                 undefined (*param_4) [12],undefined (*param_5) [12])

{
  undefined auVar1 [12];
  uint uVar2;
  undefined auVar3 [12];
  undefined4 uVar4;
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 in_V7D;
  undefined4 uVar13;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  
  auVar1 = vsub_t(*param_5,*param_4);
  uVar2 = auVar1._0_4_;
  uVar12 = auVar1._8_4_;
  local_9c = 0;
  auVar3._4_4_ = 0;
  auVar3._0_4_ = uVar2;
  auVar3._8_4_ = uVar12;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = uVar2;
  auVar1._8_4_ = uVar12;
  fVar11 = (float)vdot_t(auVar1,auVar3);
  if (fVar11 < 1e-05) {
    local_98 = 0;
    local_a0 = 0x3f800000;
  }
  else {
    auVar7._4_4_ = 0;
    auVar7._0_4_ = uVar2;
    auVar7._8_4_ = uVar12;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = uVar2;
    auVar6._8_4_ = uVar12;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = uVar2;
    auVar5._8_4_ = uVar12;
    uVar12 = vdot_t(auVar5,auVar6);
    uVar13 = vcmp_s(8,uVar12,uVar2);
    vrsq_s(uVar12);
    uVar12 = vcmovt_s(in_V7D,(byte)uVar13 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar7,uVar12);
    local_a0 = auVar1._0_4_;
    local_9c = auVar1._4_4_;
    local_98 = auVar1._8_4_;
  }
  DAT_08b00410 = *(undefined4 *)*param_5;
  DAT_08b00418 = *(undefined4 *)(*param_5 + 8);
  DAT_08b0041c = *(undefined4 *)param_5[1];
  DAT_08b00414 = *(undefined4 *)(*param_4 + 4);
  DAT_08b0042c = *(undefined4 *)param_4[1];
  auVar9._4_4_ = DAT_08b00414;
  auVar9._0_4_ = DAT_08b00410;
  auVar9._8_4_ = DAT_08b00418;
  auVar1 = vsub_t(*param_4,auVar9);
  auVar8._4_4_ = local_9c;
  auVar8._0_4_ = local_a0;
  auVar8._8_4_ = local_98;
  auVar3 = vscl_t(auVar8,0xc0400000);
  auVar1 = vadd_t(auVar1,auVar3);
  DAT_08b00420 = auVar1._0_4_;
  DAT_08b00424 = auVar1._4_4_;
  DAT_08b00428 = auVar1._8_4_;
  iVar10 = FUN_0881a83c(0x1bf0740,&DAT_08b009c0,0);
  uVar4 = DAT_08b0028c;
  uVar13 = DAT_08b00288;
  uVar12 = DAT_08b00284;
  if (iVar10 == 0) {
    uVar12 = *(undefined4 *)(*param_4 + 4);
    uVar13 = *(undefined4 *)(*param_4 + 8);
    uVar4 = *(undefined4 *)param_4[1];
    *(undefined4 *)*param_2 = *(undefined4 *)*param_4;
    *(undefined4 *)(*param_2 + 4) = uVar12;
    *(undefined4 *)(*param_2 + 8) = uVar13;
    *(undefined4 *)param_2[1] = uVar4;
  }
  else {
    *(undefined4 *)*param_2 = DAT_08b00280;
    *(undefined4 *)(*param_2 + 4) = uVar12;
    *(undefined4 *)(*param_2 + 8) = uVar13;
    *(undefined4 *)param_2[1] = uVar4;
    auVar1 = vscl_t(_DAT_08b00290,0x40400000);
    uVar12 = *(undefined4 *)param_2[1];
    auVar1 = vadd_t(*param_2,auVar1);
    *(int *)*param_2 = auVar1._0_4_;
    *(int *)(*param_2 + 4) = auVar1._4_4_;
    *(int *)(*param_2 + 8) = auVar1._8_4_;
    *(undefined4 *)param_2[1] = uVar12;
  }
  uVar12 = *(undefined4 *)(*param_5 + 4);
  uVar13 = *(undefined4 *)(*param_5 + 8);
  uVar4 = *(undefined4 *)param_5[1];
  *param_3 = *(undefined4 *)*param_5;
  param_3[1] = uVar12;
  param_3[2] = uVar13;
  param_3[3] = uVar4;
  return;
}

