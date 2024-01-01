#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08a2954c(undefined4 *param_1,float *param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_V73;
  undefined4 in_V77;
  undefined4 in_V7B;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar8;
  
  if (*param_2 * *param_2 + param_2[2] * param_2[2] < 1e-05) {
    bVar4 = false;
    if (0.0001 < param_2[1] * param_2[1]) {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    *param_1 = in_V73;
    param_1[1] = in_V77;
    param_1[2] = in_V7B;
    param_1[3] = in_V7F;
  }
  else {
    fVar5 = param_2[2];
    fVar6 = -*param_2;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = fVar5;
    auVar3._8_4_ = fVar6;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = fVar5;
    auVar2._8_4_ = fVar6;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = fVar5;
    auVar1._8_4_ = fVar6;
    uVar7 = vdot_t(auVar1,auVar2);
    uVar8 = vcmp_s(8,uVar7,fVar5);
    vrsq_s(uVar7);
    uVar7 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar3,uVar7);
    uVar7 = FUN_08a05468(param_2[1]);
    uVar8 = vcst_s(6);
    uVar7 = vmul_s(uVar8,uVar7);
    uVar8 = vcos_s(uVar7);
    uVar7 = vsin_s(uVar7);
    auVar1 = vscl_t(auVar1,uVar7);
    *param_1 = auVar1._0_4_;
    param_1[1] = auVar1._4_4_;
    param_1[2] = auVar1._8_4_;
    param_1[3] = uVar8;
  }
  return param_1;
}

