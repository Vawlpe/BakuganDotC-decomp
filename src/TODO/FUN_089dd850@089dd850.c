#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dd850(undefined4 param_1,int param_2,int param_3)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_V06;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_V0A;
  undefined4 uVar13;
  undefined4 in_V0B;
  undefined4 in_V0E;
  undefined4 in_V0F;
  uint uVar14;
  
  pauVar1 = (undefined (*) [16])(param_2 + 4);
  pauVar2 = (undefined (*) [16])(param_3 + 4);
  uVar11 = vcst_s(3);
  uVar9 = vfim_s(0x3bfc);
  vpfxd(4,5,5,5);
  uVar8 = vdot_q(*pauVar1,*pauVar2);
  auVar4 = vsub_q(*pauVar2,*pauVar1);
  auVar3 = vadd_q(*pauVar2,*pauVar1);
  vpfxs(0,0,8,0);
  vpfxt(0,0x10,1,4);
  auVar6._12_4_ = in_V0E;
  auVar6._8_4_ = in_V0A;
  auVar6._4_4_ = in_V06;
  auVar6._0_4_ = uVar8;
  auVar7._12_4_ = in_V0F;
  auVar7._8_4_ = in_V0B;
  auVar7._4_4_ = uVar11;
  auVar7._0_4_ = uVar9;
  uVar14 = vcmp_q(2,auVar6,auVar7);
  uVar9 = vmul_s(uVar8,uVar8);
  vpfxs(0x10,0x11,0x12,0x13);
  auVar6 = vcmovt_q(*pauVar2,(byte)(uVar14 >> 3) & 1);
  auVar4 = vscl_q(auVar4,param_1);
  auVar3 = vscl_q(auVar3,param_1);
  uVar9 = vocp_s(uVar9);
  vadd_q(*pauVar1,auVar4);
  if (((uVar14 & 1) != 0) && (vsub_q(*pauVar1,auVar3), (uVar14 >> 1 & 1) == 0)) {
    uVar11 = vasin_s(uVar8);
    uVar13 = vsqrt_s(uVar9);
    uVar8 = vocp_s(param_1);
    vpfxs(8,0,0,0);
    uVar9 = vocp_s(uVar11);
    if ((uVar14 >> 2 & 1) == 0) {
      uVar9 = vasin_s(uVar13);
    }
    uVar5 = vscl_p(CONCAT44(param_1,uVar8),uVar9);
    uVar8 = vsin_s(uVar9);
    uVar9 = vsin_s((int)uVar5);
    uVar13 = vsin_s((int)((ulonglong)uVar5 >> 0x20));
    uVar10 = vrcp_s(uVar8);
    uVar8 = vdot_p(CONCAT44(auVar6._0_4_,*(undefined4 *)*pauVar1),CONCAT44(uVar13,uVar9));
    uVar11 = vdot_p(CONCAT44(auVar6._4_4_,*(undefined4 *)(param_2 + 8)),CONCAT44(uVar13,uVar9));
    uVar12 = vdot_p(CONCAT44(auVar6._8_4_,*(undefined4 *)(param_2 + 0xc)),CONCAT44(uVar13,uVar9));
    uVar9 = vdot_p(CONCAT44(auVar6._12_4_,*(undefined4 *)(param_2 + 0x10)),CONCAT44(uVar13,uVar9));
    auVar3._12_4_ = uVar9;
    auVar3._8_4_ = uVar12;
    auVar3._4_4_ = uVar11;
    auVar3._0_4_ = uVar8;
    vscl_q(auVar3,uVar10);
  }
  return;
}

