#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_088c6ed8(float param_1,undefined4 param_2,undefined (*param_3) [12],undefined4 *param_4,
                 undefined (*param_5) [12],undefined (*param_6) [12])

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
  
  auVar1 = vsub_t(*param_6,*param_5);
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
  DAT_08b00680 = *(undefined4 *)*param_6;
  DAT_08b00688 = *(undefined4 *)(*param_6 + 8);
  DAT_08b00684 = *(undefined4 *)(*param_5 + 4);
  auVar9._4_4_ = DAT_08b00684;
  auVar9._0_4_ = DAT_08b00680;
  auVar9._8_4_ = DAT_08b00688;
  auVar1 = vsub_t(*param_5,auVar9);
  auVar8._4_4_ = local_9c;
  auVar8._0_4_ = local_a0;
  auVar8._8_4_ = local_98;
  auVar3 = vscl_t(auVar8,-param_1);
  auVar1 = vadd_t(auVar1,auVar3);
  DAT_08b00690 = auVar1._0_4_;
  DAT_08b00694 = auVar1._4_4_;
  DAT_08b00698 = auVar1._8_4_;
  DAT_08b0068c = param_1 * param_1;
  uVar12 = vdot_t(auVar1,auVar1);
  DAT_08b0069c = vsqrt_s(uVar12);
  DAT_08b006a0 = param_1;
  iVar10 = FUN_0881a83c(0x1bf0740,&DAT_08b00de0,0);
  uVar4 = DAT_08b0028c;
  uVar13 = DAT_08b00288;
  uVar12 = DAT_08b00284;
  if (iVar10 == 0) {
    uVar12 = *(undefined4 *)(*param_5 + 4);
    uVar13 = *(undefined4 *)(*param_5 + 8);
    uVar4 = *(undefined4 *)param_5[1];
    *(undefined4 *)*param_3 = *(undefined4 *)*param_5;
    *(undefined4 *)(*param_3 + 4) = uVar12;
    *(undefined4 *)(*param_3 + 8) = uVar13;
    *(undefined4 *)param_3[1] = uVar4;
  }
  else {
    *(undefined4 *)*param_3 = DAT_08b00280;
    *(undefined4 *)(*param_3 + 4) = uVar12;
    *(undefined4 *)(*param_3 + 8) = uVar13;
    *(undefined4 *)param_3[1] = uVar4;
    auVar1 = vscl_t(_DAT_08b00290,param_1);
    uVar12 = *(undefined4 *)param_3[1];
    auVar1 = vadd_t(*param_3,auVar1);
    *(int *)*param_3 = auVar1._0_4_;
    *(int *)(*param_3 + 4) = auVar1._4_4_;
    *(int *)(*param_3 + 8) = auVar1._8_4_;
    *(undefined4 *)param_3[1] = uVar12;
  }
  uVar12 = *(undefined4 *)(*param_6 + 4);
  uVar13 = *(undefined4 *)(*param_6 + 8);
  uVar4 = *(undefined4 *)param_6[1];
  *param_4 = *(undefined4 *)*param_6;
  param_4[1] = uVar12;
  param_4[2] = uVar13;
  param_4[3] = uVar4;
  return;
}

