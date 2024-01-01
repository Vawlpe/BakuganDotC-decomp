#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f91b8(int param_1)

{
  undefined8 uVar1;
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [64];
  undefined auVar11 [64];
  int *piVar12;
  undefined (*pauVar13) [12];
  undefined (*pauVar14) [16];
  int iVar15;
  undefined (*pauVar16) [16];
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 in_V7D;
  uint uVar25;
  
  piVar12 = *(int **)(param_1 + 0x90);
  pauVar14 = (undefined (*) [16])(*piVar12 + 0x10);
  iVar15 = piVar12[1];
  pauVar16 = (undefined (*) [16])(iVar15 + 0x10);
  iVar17 = piVar12[8];
  uVar23 = *(undefined4 *)*pauVar16;
  uVar20 = *(undefined4 *)(iVar15 + 0x14);
  uVar22 = *(undefined4 *)(iVar15 + 0x18);
  uVar24 = *(undefined4 *)(iVar15 + 0x1c);
  uVar19 = vcst_s(3);
  vpfxd(4,5,5,5);
  uVar18 = vdot_q(*pauVar14,*pauVar16);
  uVar21 = vfim_s(0x3bfc);
  uVar25 = vcmp_s(6,uVar18,uVar21);
  uVar21 = vocp_s(iVar17);
  if ((uVar25 & 1) == 0) {
    vpfxs(8,1,2,3);
    uVar25 = vcmp_s(2,uVar18,uVar19);
    vpfxs(8,1,2,3);
    uVar23 = vasin_s(uVar18);
    if ((uVar25 & 1) == 0) {
      uVar23 = vmul_s(uVar18,uVar18);
      uVar23 = vocp_s(uVar23);
      uVar23 = vsqrt_s(uVar23);
      uVar23 = vasin_s(uVar23);
    }
    else {
      uVar23 = vocp_s(uVar23);
    }
    uVar20 = vzero_s();
    uVar1 = vscl_p(CONCAT44(iVar17,uVar21),uVar23);
    uVar21 = vcmp_s(2,uVar18,uVar20);
    auVar2._8_4_ = uVar23;
    auVar2._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    auVar2._0_4_ = (int)uVar1;
    auVar2 = vsin_t(auVar2);
    vpfxs(0x10,0x11,0x12,0x13);
    auVar3 = vcmovt_q(*pauVar16,(byte)uVar21 & 1);
    uVar23 = auVar3._0_4_;
    uVar20 = auVar3._4_4_;
    uVar22 = auVar3._8_4_;
    uVar24 = auVar3._12_4_;
    uVar25 = vcmp_s(2,auVar2._8_4_,0x3851b717);
    uVar21 = vrcp_s(auVar2._8_4_);
    uVar1 = vscl_p(auVar2._0_8_,uVar21);
    uVar21 = (undefined4)uVar1;
    iVar17 = (int)((ulonglong)uVar1 >> 0x20);
    if ((uVar25 & 1) != 0) {
      vmov_q(*pauVar14);
      goto LAB_088f9280;
    }
  }
  auVar3 = vscl_q(*pauVar14,uVar21);
  auVar4._12_4_ = uVar24;
  auVar4._8_4_ = uVar22;
  auVar4._4_4_ = uVar20;
  auVar4._0_4_ = uVar23;
  auVar4 = vscl_q(auVar4,iVar17);
  vadd_q(auVar3,auVar4);
LAB_088f9280:
  vpfxs(3,2,0x11,0x10);
  auVar3 = vmov_q(*pauVar14);
  vpfxs(0x12,3,0,0x11);
  auVar4 = vmov_q(*pauVar14);
  vpfxs(1,0x10,3,0x12);
  auVar5 = vmov_q(*pauVar14);
  vpfxs(3,2,0x11,0);
  auVar6 = vmov_q(*pauVar14);
  vpfxs(0x12,3,0,1);
  auVar7 = vmov_q(*pauVar14);
  vpfxs(1,0x10,3,2);
  auVar8 = vmov_q(*pauVar14);
  vpfxs(0x10,0x11,0x12,3);
  auVar9 = vmov_q(*pauVar14);
  auVar10._48_16_ = auVar9;
  auVar10._44_4_ = auVar8._12_4_;
  auVar10._40_4_ = auVar8._8_4_;
  auVar10._36_4_ = auVar8._4_4_;
  auVar10._32_4_ = auVar8._0_4_;
  auVar10._28_4_ = auVar7._12_4_;
  auVar10._24_4_ = auVar7._8_4_;
  auVar10._20_4_ = auVar7._4_4_;
  auVar10._16_4_ = auVar7._0_4_;
  auVar10._12_4_ = auVar6._12_4_;
  auVar10._8_4_ = auVar6._8_4_;
  auVar10._4_4_ = auVar6._4_4_;
  auVar10._0_4_ = auVar6._0_4_;
  auVar11._48_16_ = *pauVar14;
  auVar11._44_4_ = auVar5._12_4_;
  auVar11._40_4_ = auVar5._8_4_;
  auVar11._36_4_ = auVar5._4_4_;
  auVar11._32_4_ = auVar5._0_4_;
  auVar11._28_4_ = auVar4._12_4_;
  auVar11._24_4_ = auVar4._8_4_;
  auVar11._20_4_ = auVar4._4_4_;
  auVar11._16_4_ = auVar4._0_4_;
  auVar11._12_4_ = auVar3._12_4_;
  auVar11._8_4_ = auVar3._8_4_;
  auVar11._4_4_ = auVar3._4_4_;
  auVar11._0_4_ = auVar3._0_4_;
  auVar10 = vmmul_q(auVar10,auVar11);
  vidt_q();
  vidt_q();
  auVar5._8_8_ = auVar10._16_8_;
  auVar5._4_4_ = auVar10._4_4_;
  auVar5._0_4_ = auVar10._0_4_;
  auVar3._12_4_ = DAT_08abfb5c;
  auVar3._8_4_ = DAT_08abfb58;
  auVar3._4_4_ = DAT_08abfb54;
  auVar3._0_4_ = DAT_08abfb50;
  auVar3 = vtfm4_q(auVar5,auVar3);
  *(int *)(param_1 + 0x40) = auVar3._0_4_;
  *(int *)(param_1 + 0x44) = auVar3._4_4_;
  *(int *)(param_1 + 0x48) = auVar3._8_4_;
  *(int *)(param_1 + 0x4c) = auVar3._12_4_;
  pauVar13 = (undefined (*) [12])(param_1 + 0x40);
  auVar2 = vscl_t(*pauVar13,*(undefined4 *)(param_1 + 0x94));
  *(int *)*pauVar13 = auVar2._0_4_;
  *(int *)(param_1 + 0x44) = auVar2._4_4_;
  *(int *)(param_1 + 0x48) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x4c) = in_V7D;
  uVar21 = *(undefined4 *)(param_1 + 0x4c);
  auVar2 = vadd_t(*pauVar13,**(undefined (**) [12])(param_1 + 4));
  *(int *)*pauVar13 = auVar2._0_4_;
  *(int *)(param_1 + 0x44) = auVar2._4_4_;
  *(int *)(param_1 + 0x48) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x4c) = uVar21;
  return;
}

