#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dde08(undefined4 param_1,undefined (*param_2) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 in_V00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_V04;
  undefined4 in_V06;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_V08;
  undefined4 uVar11;
  undefined4 in_V0A;
  undefined4 uVar12;
  undefined4 in_V0B;
  undefined4 in_V0C;
  undefined4 in_V0E;
  undefined4 in_V0F;
  uint uVar13;
  undefined auVar6 [16];
  
  auVar1._12_4_ = in_V0C;
  auVar1._8_4_ = in_V08;
  auVar1._4_4_ = in_V04;
  auVar1._0_4_ = in_V00;
  auVar4 = vmov_q(auVar1);
  uVar10 = vcst_s(3);
  uVar8 = vfim_s(0x3bfc);
  vpfxd(4,5,5,5);
  uVar7 = vdot_q(*param_2,auVar4);
  auVar2 = vsub_q(auVar4,*param_2);
  auVar1 = vadd_q(auVar4,*param_2);
  vpfxs(0,0,8,0);
  vpfxt(0,0x10,1,4);
  auVar5._12_4_ = in_V0E;
  auVar5._8_4_ = in_V0A;
  auVar5._4_4_ = in_V06;
  auVar5._0_4_ = uVar7;
  auVar6._12_4_ = in_V0F;
  auVar6._8_4_ = in_V0B;
  auVar6._4_4_ = uVar10;
  auVar6._0_4_ = uVar8;
  uVar13 = vcmp_q(2,auVar5,auVar6);
  uVar8 = vmul_s(uVar7,uVar7);
  vpfxs(0x10,0x11,0x12,0x13);
  auVar4 = vcmovt_q(auVar4,(byte)(uVar13 >> 3) & 1);
  auVar2 = vscl_q(auVar2,param_1);
  auVar1 = vscl_q(auVar1,param_1);
  uVar8 = vocp_s(uVar8);
  vadd_q(*param_2,auVar2);
  if (((uVar13 & 1) != 0) && (vsub_q(*param_2,auVar1), (uVar13 >> 1 & 1) == 0)) {
    uVar10 = vasin_s(uVar7);
    uVar12 = vsqrt_s(uVar8);
    uVar7 = vocp_s(param_1);
    vpfxs(8,0,0,0);
    uVar8 = vocp_s(uVar10);
    if ((uVar13 >> 2 & 1) == 0) {
      uVar8 = vasin_s(uVar12);
    }
    uVar3 = vscl_p(CONCAT44(param_1,uVar7),uVar8);
    uVar7 = vsin_s(uVar8);
    uVar8 = vsin_s((int)uVar3);
    uVar12 = vsin_s((int)((ulonglong)uVar3 >> 0x20));
    uVar9 = vrcp_s(uVar7);
    uVar7 = vdot_p(CONCAT44(auVar4._0_4_,*(undefined4 *)*param_2),CONCAT44(uVar12,uVar8));
    uVar10 = vdot_p(CONCAT44(auVar4._4_4_,*(undefined4 *)(*param_2 + 4)),CONCAT44(uVar12,uVar8));
    uVar11 = vdot_p(CONCAT44(auVar4._8_4_,*(undefined4 *)(*param_2 + 8)),CONCAT44(uVar12,uVar8));
    uVar8 = vdot_p(CONCAT44(auVar4._12_4_,*(undefined4 *)(*param_2 + 0xc)),CONCAT44(uVar12,uVar8));
    auVar2._12_4_ = uVar8;
    auVar2._8_4_ = uVar11;
    auVar2._4_4_ = uVar10;
    auVar2._0_4_ = uVar7;
    vscl_q(auVar2,uVar9);
  }
  return;
}

