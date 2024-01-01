#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cc978(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined auVar8 [36];
  int iVar9;
  undefined (*pauVar10) [12];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar13;
  
  iVar9 = FUN_088e1948();
  uVar12 = vmul_s(*(undefined4 *)(iVar9 + 0x34),in_V7C);
  auVar4 = vrot_q(uVar12,1,0,3,0);
  uVar6 = auVar4._0_4_;
  uVar7 = auVar4._4_4_;
  auVar1 = vidt_q();
  uVar11 = auVar1._0_4_;
  uVar13 = auVar1._4_4_;
  auVar5 = vrot_q(uVar12,2,0,1,0);
  auVar2 = vidt_q();
  vzero_t();
  auVar8._32_4_ = auVar5._8_4_;
  auVar8._28_4_ = auVar1._8_4_;
  auVar8._24_4_ = auVar4._8_4_;
  auVar8._20_4_ = auVar5._4_4_;
  auVar8._16_4_ = uVar13;
  auVar8._12_4_ = uVar7;
  auVar8._8_4_ = auVar5._0_4_;
  auVar8._4_4_ = uVar11;
  auVar8._0_4_ = uVar6;
  auVar3 = vtfm3_t(auVar8,auVar2._0_12_);
  vneg_t(auVar3);
  auVar1._12_4_ = uVar13;
  auVar1._8_4_ = uVar7;
  auVar1._4_4_ = uVar11;
  auVar1._0_4_ = uVar6;
  auVar1 = vtfm4_q(auVar1,*(undefined (*) [16])(param_1 + 0x30));
  auVar2._12_4_ = uVar13;
  auVar2._8_4_ = uVar7;
  auVar4._8_4_ = 0x3f000000;
  auVar4._0_8_ = 0x3f800000bf800000;
  auVar4._12_4_ = 0;
  auVar2._4_4_ = uVar11;
  auVar2._0_4_ = uVar6;
  auVar2 = vtfm4_q(auVar2,auVar4);
  auVar3 = auVar2._0_12_;
  uVar11 = vdot_t(auVar3,auVar3);
  uVar13 = vcmp_s(8,uVar11,auVar2._0_4_);
  vrsq_s(uVar11);
  uVar11 = vcmovt_s(in_V7D,(byte)uVar13 & 1);
  vpfxd(4,4,4,5);
  auVar3 = vscl_t(auVar3,uVar11);
  auVar3 = vscl_t(auVar3,0x41c00000);
  auVar3 = vscl_t(auVar3,0x3f4ccccd);
  uVar11 = *(undefined4 *)(iVar9 + 0x2c);
  auVar3 = vadd_t(*(undefined (*) [12])(iVar9 + 0x20),auVar3);
  *(int *)(param_1 + 0x20) = auVar3._0_4_;
  *(int *)(param_1 + 0x24) = auVar3._4_4_;
  *(int *)(param_1 + 0x28) = auVar3._8_4_;
  *(undefined4 *)(param_1 + 0x2c) = uVar11;
  pauVar10 = (undefined (*) [12])(param_1 + 0x10);
  if (*(int *)(iVar9 + 0x4d4) == 0) {
    uVar11 = *(undefined4 *)(iVar9 + 0x24);
    uVar13 = *(undefined4 *)(iVar9 + 0x28);
    uVar6 = *(undefined4 *)(iVar9 + 0x2c);
    *(undefined4 *)*pauVar10 = *(undefined4 *)*(undefined (*) [12])(iVar9 + 0x20);
    *(undefined4 *)(param_1 + 0x14) = uVar11;
    *(undefined4 *)(param_1 + 0x18) = uVar13;
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x24);
    auVar3 = vscl_t(auVar1._0_12_,0x41c00000);
    uVar11 = *(undefined4 *)(param_1 + 0x1c);
    auVar3 = vadd_t(*pauVar10,auVar3);
    *(int *)*pauVar10 = auVar3._0_4_;
    *(int *)(param_1 + 0x14) = auVar3._4_4_;
    *(int *)(param_1 + 0x18) = auVar3._8_4_;
    *(undefined4 *)(param_1 + 0x1c) = uVar11;
  }
  else {
    uVar11 = *(undefined4 *)(iVar9 + 0x4e4);
    uVar13 = *(undefined4 *)(iVar9 + 0x4e8);
    uVar6 = *(undefined4 *)(iVar9 + 0x4ec);
    *(undefined4 *)*pauVar10 = *(undefined4 *)(iVar9 + 0x4e0);
    *(undefined4 *)(param_1 + 0x14) = uVar11;
    *(undefined4 *)(param_1 + 0x18) = uVar13;
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
  }
  return;
}

