#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fdedc(undefined4 param_1,int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [12];
  undefined (*pauVar6) [16];
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  undefined4 in_V7D;
  
  auVar1 = vsub_t(*(undefined (*) [12])(param_2 + 0x60),*(undefined (*) [12])(param_2 + 0x50));
  fVar7 = (float)atan2f(auVar1._8_4_,auVar1._0_4_);
  uVar8 = vmul_s(param_1,in_V7C);
  uVar8 = vsin_s(uVar8);
  uVar9 = vmul_s(param_1,in_V7C);
  uVar9 = vcos_s(uVar9);
  uVar10 = vmul_s(fVar7 + 1.570796,in_V7C);
  auVar5._4_4_ = uVar9;
  auVar5._0_4_ = uVar8;
  auVar5._8_4_ = 0;
  auVar1._4_4_ = uVar9;
  auVar1._0_4_ = uVar8;
  auVar1._8_4_ = 0;
  auVar2._4_4_ = uVar9;
  auVar2._0_4_ = uVar8;
  auVar2._8_8_ = 0;
  auVar2 = vmov_q(auVar2);
  auVar3 = vrot_q(uVar10,1,0,3,0);
  auVar4 = vrot_q(uVar10,2,0,1,0);
  uVar8 = vdot_t(auVar1,auVar3._0_12_);
  uVar9 = vdot_t(auVar5,auVar4._0_12_);
  pauVar6 = (undefined (*) [16])(param_2 + 0x80);
  auVar3._4_4_ = auVar2._4_4_;
  auVar3._0_4_ = uVar8;
  auVar3._8_4_ = uVar9;
  auVar3._12_4_ = auVar2._12_4_;
  auVar2 = vsub_q(auVar3,*pauVar6);
  auVar2 = vscl_q(auVar2,0x3e99999a);
  auVar2 = vadd_q(*pauVar6,auVar2);
  *(int *)*pauVar6 = auVar2._0_4_;
  *(int *)(param_2 + 0x84) = auVar2._4_4_;
  *(int *)(param_2 + 0x88) = auVar2._8_4_;
  *(int *)(param_2 + 0x8c) = auVar2._12_4_;
  uVar8 = vdot_t(*(undefined (*) [12])*pauVar6,*(undefined (*) [12])*pauVar6);
  uVar9 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar6);
  vrsq_s(uVar8);
  uVar8 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*(undefined (*) [12])*pauVar6,uVar8);
  *(int *)*pauVar6 = auVar1._0_4_;
  *(int *)(param_2 + 0x84) = auVar1._4_4_;
  *(int *)(param_2 + 0x88) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0x8c) = in_V7D;
  return;
}

