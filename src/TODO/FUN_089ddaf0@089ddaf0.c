#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ddaf0(undefined4 param_1,int param_2,int param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar8 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_V06;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_V0A;
  undefined4 uVar20;
  undefined4 in_V0B;
  undefined4 in_V0E;
  undefined4 in_V0F;
  undefined4 in_V18;
  undefined4 in_V19;
  undefined4 in_V1C;
  undefined4 in_V1D;
  uint uVar21;
  undefined auVar7 [16];
  undefined auVar9 [16];
  
  uVar3 = vh2f_p(*(undefined8 *)(param_2 + 2));
  uVar14 = (undefined4)uVar3;
  uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar3 = vh2f_p(*(undefined8 *)(param_3 + 2));
  uVar20 = (undefined4)uVar3;
  uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar19 = vcst_s(3);
  uVar16 = vfim_s(0x3bfc);
  vpfxd(4,5,5,5);
  auVar1._12_4_ = in_V1C;
  auVar1._8_4_ = in_V18;
  auVar1._4_4_ = uVar17;
  auVar1._0_4_ = uVar14;
  auVar2._12_4_ = in_V1D;
  auVar2._8_4_ = in_V19;
  auVar2._4_4_ = uVar18;
  auVar2._0_4_ = uVar20;
  uVar15 = vdot_q(auVar1,auVar2);
  auVar5._12_4_ = in_V1D;
  auVar5._8_4_ = in_V19;
  auVar5._4_4_ = uVar18;
  auVar5._0_4_ = uVar20;
  auVar4._12_4_ = in_V1C;
  auVar4._8_4_ = in_V18;
  auVar4._4_4_ = uVar17;
  auVar4._0_4_ = uVar14;
  auVar2 = vsub_q(auVar5,auVar4);
  auVar6._12_4_ = in_V1D;
  auVar6._8_4_ = in_V19;
  auVar6._4_4_ = uVar18;
  auVar6._0_4_ = uVar20;
  auVar7._12_4_ = in_V1C;
  auVar7._8_4_ = in_V18;
  auVar7._4_4_ = uVar17;
  auVar7._0_4_ = uVar14;
  auVar1 = vadd_q(auVar6,auVar7);
  vpfxs(0,0,8,0);
  vpfxt(0,0x10,1,4);
  auVar8._12_4_ = in_V0E;
  auVar8._8_4_ = in_V0A;
  auVar8._4_4_ = in_V06;
  auVar8._0_4_ = uVar15;
  auVar9._12_4_ = in_V0F;
  auVar9._8_4_ = in_V0B;
  auVar9._4_4_ = uVar19;
  auVar9._0_4_ = uVar16;
  uVar21 = vcmp_q(2,auVar8,auVar9);
  uVar16 = vmul_s(uVar15,uVar15);
  vpfxs(0x10,0x11,0x12,0x13);
  auVar10._12_4_ = in_V1D;
  auVar10._8_4_ = in_V19;
  auVar10._4_4_ = uVar18;
  auVar10._0_4_ = uVar20;
  auVar4 = vcmovt_q(auVar10,(byte)(uVar21 >> 3) & 1);
  auVar2 = vscl_q(auVar2,param_1);
  auVar1 = vscl_q(auVar1,param_1);
  uVar20 = vocp_s(uVar16);
  auVar11._12_4_ = in_V1C;
  auVar11._8_4_ = in_V18;
  auVar11._4_4_ = uVar17;
  auVar11._0_4_ = uVar14;
  vadd_q(auVar11,auVar2);
  if (((uVar21 & 1) != 0) &&
     (auVar12._12_4_ = in_V1C, auVar12._8_4_ = in_V18, auVar12._4_4_ = uVar17,
     auVar12._0_4_ = uVar14, vsub_q(auVar12,auVar1), (uVar21 >> 1 & 1) == 0)) {
    uVar18 = vasin_s(uVar15);
    uVar15 = vsqrt_s(uVar20);
    uVar20 = vocp_s(param_1);
    vpfxs(8,0,0,0);
    uVar18 = vocp_s(uVar18);
    if ((uVar21 >> 2 & 1) == 0) {
      uVar18 = vasin_s(uVar15);
    }
    uVar3 = vscl_p(CONCAT44(param_1,uVar20),uVar18);
    uVar15 = vsin_s(uVar18);
    uVar20 = vsin_s((int)uVar3);
    uVar18 = vsin_s((int)((ulonglong)uVar3 >> 0x20));
    uVar15 = vrcp_s(uVar15);
    uVar14 = vdot_p(CONCAT44(auVar4._0_4_,uVar14),CONCAT44(uVar18,uVar20));
    uVar17 = vdot_p(CONCAT44(auVar4._4_4_,uVar17),CONCAT44(uVar18,uVar20));
    uVar16 = vdot_p(CONCAT44(auVar4._8_4_,in_V18),CONCAT44(uVar18,uVar20));
    uVar20 = vdot_p(CONCAT44(auVar4._12_4_,in_V1C),CONCAT44(uVar18,uVar20));
    auVar13._12_4_ = uVar20;
    auVar13._8_4_ = uVar16;
    auVar13._4_4_ = uVar17;
    auVar13._0_4_ = uVar14;
    vscl_q(auVar13,uVar15);
  }
  return;
}

