#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088baebc(int param_1)

{
  bool bVar1;
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [12];
  undefined auVar11 [12];
  undefined auVar12 [12];
  undefined auVar13 [12];
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [12];
  int iVar17;
  int iVar18;
  undefined (*pauVar19) [12];
  undefined (*pauVar20) [12];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar26;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  
  auVar3 = vsub_q(*(undefined (*) [16])(param_1 + 0x2d0),*(undefined (*) [16])(param_1 + 0x2c0));
  fVar25 = (float)vdot_t(auVar3._0_12_,auVar3._0_12_);
  pauVar19 = (undefined (*) [12])(param_1 + 0x50);
  pauVar20 = (undefined (*) [12])(param_1 + 0x60);
  DAT_08b0069c = *(undefined4 *)(param_1 + 0x5c);
  auVar2 = vsub_t(*pauVar19,*pauVar20);
  local_d0 = auVar2._0_4_;
  uStack_cc = auVar2._4_4_;
  uStack_c8 = auVar2._8_4_;
  DAT_08b006a0 = 0x40533333;
  DAT_08b00680 = *(undefined4 *)*pauVar20;
  DAT_08b00688 = *(undefined4 *)(param_1 + 0x68);
  DAT_08b0068c = *(undefined4 *)(param_1 + 0x6c);
  DAT_08b00684 = *(float *)(param_1 + 100) + 8.0;
  bVar1 = false;
  fVar21 = 1.0;
  DAT_08b00690 = local_d0;
  DAT_08b00694 = uStack_cc;
  DAT_08b00698 = uStack_c8;
  iVar17 = FUN_0881a83c(0x37bf0700,&DAT_08b006b0,1);
  if (iVar17 != 0) {
    auVar2._4_4_ = DAT_08b00694;
    auVar2._0_4_ = DAT_08b00690;
    auVar2._8_4_ = DAT_08b00698;
    auVar2 = vscl_t(auVar2,DAT_08b002a4);
    auVar7._4_4_ = DAT_08b00694;
    auVar7._0_4_ = DAT_08b00690;
    auVar7._8_4_ = DAT_08b00698;
    auVar6._4_4_ = DAT_08b00694;
    auVar6._0_4_ = DAT_08b00690;
    auVar6._8_4_ = DAT_08b00698;
    auVar4._4_4_ = DAT_08b00694;
    auVar4._0_4_ = DAT_08b00690;
    auVar4._8_4_ = DAT_08b00698;
    uVar24 = vdot_t(auVar4,auVar6);
    uVar26 = vcmp_s(8,uVar24,DAT_08b00690);
    vrsq_s(uVar24);
    uVar24 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
    uVar24 = vmul_s(uVar24,0x40800000);
    auVar4 = vscl_t(auVar7,uVar24);
    DAT_08b00690 = auVar4._0_4_;
    DAT_08b00694 = auVar4._4_4_;
    DAT_08b00698 = auVar4._8_4_;
    auVar2 = vadd_t(auVar2,auVar4);
    uVar24 = vdot_t(auVar2,auVar2);
    fVar21 = (float)vsqrt_s(uVar24);
    bVar1 = fVar21 < *(float *)(param_1 + 0x308);
    DAT_08b0069c = in_V7D;
    if (bVar1) {
      *(float *)(param_1 + 0x308) = fVar21;
      uVar24 = DAT_08b0068c;
      auVar5._4_4_ = DAT_08b00684;
      auVar5._0_4_ = DAT_08b00680;
      auVar5._8_4_ = DAT_08b00688;
      auVar2 = vadd_t(auVar5,auVar2);
      *(int *)*pauVar19 = auVar2._0_4_;
      *(int *)(param_1 + 0x54) = auVar2._4_4_;
      *(int *)(param_1 + 0x58) = auVar2._8_4_;
      *(undefined4 *)(param_1 + 0x5c) = uVar24;
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - 8.0;
      *(undefined4 *)(param_1 + 0x30c) = 0x1e;
    }
    auVar2 = vsub_t(*pauVar19,*pauVar20);
    local_d0 = auVar2._0_4_;
    uStack_cc = auVar2._4_4_;
    uStack_c8 = auVar2._8_4_;
  }
  if (bVar1) goto LAB_088bb2a0;
  if (*(int *)(param_1 + 0x30c) < 1) {
    iVar17 = *(int *)(param_1 + 0x30c);
LAB_088bb0dc:
    iVar18 = 0;
    if (iVar17 < 1) {
      iVar18 = *(int *)(param_1 + 0x30c);
    }
    *(int *)(param_1 + 0x30c) = iVar18;
    *(int *)(param_1 + 0x30c) = iVar18 + -1;
    fVar21 = DAT_08abd800;
    uVar24 = vmin_s((float)-(iVar18 + -1) * 0.03333334,in_V7F);
    fVar22 = (float)vmax_s(uVar24,in_V7D);
    auVar10._4_4_ = DAT_08b00694;
    auVar10._0_4_ = DAT_08b00690;
    auVar10._8_4_ = DAT_08b00698;
    auVar9._4_4_ = DAT_08b00694;
    auVar9._0_4_ = DAT_08b00690;
    auVar9._8_4_ = DAT_08b00698;
    auVar8._4_4_ = DAT_08b00694;
    auVar8._0_4_ = DAT_08b00690;
    auVar8._8_4_ = DAT_08b00698;
    uVar24 = vdot_t(auVar8,auVar9);
    uVar26 = vcmp_s(8,uVar24,DAT_08b00690);
    vrsq_s(uVar24);
    uVar24 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
    uVar24 = vmul_s(uVar24,DAT_08abd800);
    auVar2 = vscl_t(auVar10,uVar24);
    DAT_08b00690 = auVar2._0_4_;
    DAT_08b00694 = auVar2._4_4_;
    DAT_08b00698 = auVar2._8_4_;
    DAT_08b0069c = in_V7D;
    iVar17 = FUN_0881a83c(0x37bf0700,&DAT_08b006b0,1);
    if (iVar17 != 0) {
      auVar11._4_4_ = DAT_08b00694;
      auVar11._0_4_ = DAT_08b00690;
      auVar11._8_4_ = DAT_08b00698;
      auVar2 = vscl_t(auVar11,DAT_08b002a4);
      auVar14._4_4_ = DAT_08b00694;
      auVar14._0_4_ = DAT_08b00690;
      auVar14._8_4_ = DAT_08b00698;
      auVar13._4_4_ = DAT_08b00694;
      auVar13._0_4_ = DAT_08b00690;
      auVar13._8_4_ = DAT_08b00698;
      auVar12._4_4_ = DAT_08b00694;
      auVar12._0_4_ = DAT_08b00690;
      auVar12._8_4_ = DAT_08b00698;
      uVar24 = vdot_t(auVar12,auVar13);
      uVar26 = vcmp_s(8,uVar24,DAT_08b00690);
      vrsq_s(uVar24);
      uVar24 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
      uVar24 = vmul_s(uVar24,0x40800000);
      auVar4 = vscl_t(auVar14,uVar24);
      DAT_08b00690 = auVar4._0_4_;
      DAT_08b00694 = auVar4._4_4_;
      DAT_08b00698 = auVar4._8_4_;
      auVar2 = vadd_t(auVar2,auVar4);
      uVar24 = vdot_t(auVar2,auVar2);
      fVar23 = (float)vsqrt_s(uVar24);
      DAT_08b0069c = in_V7D;
      if (fVar23 < fVar21) {
        uVar24 = vdot_t(auVar2,auVar2);
        fVar21 = (float)vsqrt_s(uVar24);
      }
    }
    uVar24 = vmul_s(fVar22 * 3.141593,in_V7C);
    fVar22 = (float)vcos_s(uVar24);
    fVar22 = (1.0 - fVar22) * 0.5 * (fVar21 - *(float *)(param_1 + 0x308)) * 0.1;
    if (fVar25 <= 0.1) {
LAB_088bb27c:
      fVar25 = *(float *)(param_1 + 0x308);
    }
    else {
      fVar22 = SQRT(fVar25);
      fVar21 = fVar21 - *(float *)(param_1 + 0x308);
      if (fVar22 < fVar21) goto LAB_088bb27c;
      fVar25 = *(float *)(param_1 + 0x308);
      fVar22 = fVar21;
    }
    *(float *)(param_1 + 0x308) = fVar25 + fVar22;
  }
  else {
    if (fVar25 > 0.1) {
      iVar17 = *(int *)(param_1 + 0x30c);
      goto LAB_088bb0dc;
    }
    *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + -1;
  }
  auVar16._4_4_ = uStack_cc;
  auVar16._0_4_ = local_d0;
  auVar16._8_4_ = uStack_c8;
  auVar15._4_4_ = uStack_cc;
  auVar15._0_4_ = local_d0;
  auVar15._8_4_ = uStack_c8;
  uVar24 = vdot_t(auVar15,auVar16);
  fVar21 = (float)vsqrt_s(uVar24);
LAB_088bb2a0:
  if (fVar21 < 7.8) {
    *(float *)(param_1 + 0x40) = fVar21 * 0.3;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x4079999a;
  }
  return;
}

