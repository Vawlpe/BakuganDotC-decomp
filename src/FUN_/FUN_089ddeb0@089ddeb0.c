#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ddeb0(undefined4 param_1,undefined (*param_2) [16],char param_3,int param_4)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined4 in_V00;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_V04;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_V08;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_V0C;
  undefined auVar7 [12];
  
  if ((param_4 == 0x49) || (param_4 == 0x4a)) {
    uVar12 = vcst_s(6);
    auVar3._8_4_ = in_V08;
    auVar3._4_4_ = in_V04;
    auVar3._0_4_ = in_V00;
    auVar3 = vscl_t(auVar3,uVar12);
    uVar12 = vcos_s(auVar3._0_4_);
    uVar13 = vsin_s(auVar3._0_4_);
    uVar14 = vcos_s(auVar3._4_4_);
    uVar15 = vsin_s(auVar3._4_4_);
    uVar16 = vcos_s(auVar3._8_4_);
    uVar17 = vsin_s(auVar3._8_4_);
    uVar2 = vmul_p(CONCAT44(uVar13,uVar12),CONCAT44(uVar15,uVar14));
    auVar4._8_4_ = uVar16;
    auVar4._4_4_ = uVar14;
    auVar4._0_4_ = uVar12;
    auVar5._8_4_ = uVar16;
    auVar5._4_4_ = uVar14;
    auVar5._0_4_ = uVar12;
    auVar3 = vcrs_t(auVar4,auVar5);
    auVar6._8_4_ = uVar17;
    auVar6._4_4_ = uVar15;
    auVar6._0_4_ = uVar13;
    auVar7._8_4_ = uVar17;
    auVar7._4_4_ = uVar15;
    auVar7._0_4_ = uVar13;
    auVar4 = vcrs_t(auVar6,auVar7);
    uVar2 = vmul_p(uVar2,CONCAT44(uVar17,uVar16));
    auVar8._8_4_ = uVar17;
    auVar8._4_4_ = uVar15;
    auVar8._0_4_ = uVar13;
    auVar3 = vmul_t(auVar3,auVar8);
    auVar9._8_4_ = uVar16;
    auVar9._4_4_ = uVar14;
    auVar9._0_4_ = uVar12;
    auVar4 = vmul_t(auVar4,auVar9);
    vpfxt(0,0x11,0x12,3);
    if (param_4 == 0x49) {
      vpfxt(0x10,1,0x12,3);
    }
    auVar1._12_4_ = (int)uVar2;
    auVar1._8_4_ = auVar3._8_4_;
    auVar1._4_4_ = auVar3._4_4_;
    auVar1._0_4_ = auVar3._0_4_;
    auVar10._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    auVar10._8_4_ = auVar4._8_4_;
    auVar10._4_4_ = auVar4._4_4_;
    auVar10._0_4_ = auVar4._0_4_;
    auVar1 = vadd_q(auVar1,auVar10);
    in_V00 = auVar1._0_4_;
    in_V04 = auVar1._4_4_;
    in_V08 = auVar1._8_4_;
    in_V0C = auVar1._12_4_;
    param_4 = 0x4b;
  }
  if (param_3 != '\0') {
    if (param_4 == 0x4b) {
      FUN_089dde08(param_2);
    }
    else {
      auVar11._12_4_ = in_V0C;
      auVar11._8_4_ = in_V08;
      auVar11._4_4_ = in_V04;
      auVar11._0_4_ = in_V00;
      auVar1 = vmov_q(auVar11);
      auVar1 = vsub_q(auVar1,*param_2);
      auVar1 = vscl_q(auVar1,param_1);
      auVar1 = vadd_q(*param_2,auVar1);
      in_V00 = auVar1._0_4_;
      in_V04 = auVar1._4_4_;
      in_V08 = auVar1._8_4_;
      in_V0C = auVar1._12_4_;
    }
  }
  *(undefined4 *)*param_2 = in_V00;
  *(undefined4 *)(*param_2 + 4) = in_V04;
  *(undefined4 *)(*param_2 + 8) = in_V08;
  *(undefined4 *)(*param_2 + 0xc) = in_V0C;
  return;
}

