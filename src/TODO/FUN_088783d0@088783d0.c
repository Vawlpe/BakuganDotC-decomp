#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088783d0(float param_1,int param_2,undefined (*param_3) [16],undefined (*param_4) [12],
                undefined4 param_5,undefined4 param_6,char param_7,uint param_8)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [16];
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
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 in_V7D;
  undefined4 uVar22;
  
  uVar17 = *(uint *)(*(int *)(*(int *)(param_2 + 0xb0) + 0x20c) + 0x134);
  DAT_08b00680 = *(undefined4 *)*param_3;
  DAT_08b00684 = *(undefined4 *)(*param_3 + 4);
  DAT_08b00688 = *(undefined4 *)(*param_3 + 8);
  DAT_08b00690 = *(undefined4 *)*param_4;
  DAT_08b00694 = *(undefined4 *)(*param_4 + 4);
  DAT_08b00698 = *(undefined4 *)(*param_4 + 8);
  DAT_08b006a0 = param_1 * 0.5;
  if ((*(int *)(param_2 + 0xf4) == 0) || (param_7 != '\0')) {
    auVar1 = vsub_t(*(undefined (*) [12])*param_3,
                    *(undefined (*) [12])(*(int *)(param_2 + 0xb0) + 0x20));
    auVar3._4_4_ = 0;
    auVar3._0_4_ = auVar1._0_4_;
    auVar3._8_4_ = auVar1._8_4_;
    auVar3 = vadd_t(*param_4,auVar3);
    DAT_08b00690 = auVar3._0_4_;
    DAT_08b00694 = auVar3._4_4_;
    DAT_08b00698 = auVar3._8_4_;
    auVar14._4_4_ = 0;
    auVar14._0_4_ = auVar1._0_4_;
    auVar14._8_4_ = auVar1._8_4_;
    auVar3 = vsub_t(*(undefined (*) [12])*param_3,auVar14);
    DAT_08b00680 = auVar3._0_4_;
    DAT_08b00684 = auVar3._4_4_;
    DAT_08b00688 = auVar3._8_4_;
  }
  DAT_08b0068c = DAT_08b006a0 * DAT_08b006a0;
  auVar5._4_4_ = DAT_08b00694;
  auVar5._0_4_ = DAT_08b00690;
  auVar5._8_4_ = DAT_08b00698;
  auVar1._4_4_ = DAT_08b00694;
  auVar1._0_4_ = DAT_08b00690;
  auVar1._8_4_ = DAT_08b00698;
  uVar19 = vdot_t(auVar1,auVar5);
  DAT_08b0069c = vsqrt_s(uVar19);
  DAT_08aba944 = &DAT_08b006b0;
  DAT_08aba948 = *(undefined4 *)(param_2 + 0xb0);
  DAT_08aba954 = atan2f(*(undefined4 *)(*param_4 + 8),*(undefined4 *)*param_4);
  DAT_08aba940 = 0;
  iVar18 = 0;
  DAT_08ab02f0 = param_6;
  DAT_08aba958 = param_5;
  if (param_1 < 30.0) {
    iVar16 = FUN_0881a83c(0x2fb72500,&DAT_08b006b0,0);
    if (iVar16 == 0) goto LAB_0887860c;
    iVar18 = 1;
    DAT_08aba930 = DAT_08b00280;
    DAT_08aba938 = DAT_08b00288;
    DAT_08aba93c = DAT_08b0028c;
    DAT_08aba934 = DAT_08b00284 + 10.0;
    auVar2._12_4_ = DAT_08b0028c;
    auVar2._8_4_ = DAT_08b00288;
    auVar2._4_4_ = DAT_08b00284;
    auVar2._0_4_ = DAT_08b00280;
    auVar2 = vsub_q(auVar2,*param_3);
    uVar19 = vdot_t(auVar2._0_12_,auVar2._0_12_);
    fVar21 = (float)vsqrt_s(uVar19);
    auVar8._4_4_ = DAT_08b00694;
    auVar8._0_4_ = DAT_08b00690;
    auVar8._8_4_ = DAT_08b00698;
    auVar7._4_4_ = DAT_08b00694;
    auVar7._0_4_ = DAT_08b00690;
    auVar7._8_4_ = DAT_08b00698;
    auVar6._4_4_ = DAT_08b00694;
    auVar6._0_4_ = DAT_08b00690;
    auVar6._8_4_ = DAT_08b00698;
    uVar19 = vdot_t(auVar6,auVar7);
    uVar22 = vcmp_s(8,uVar19,DAT_08b00690);
    vrsq_s(uVar19);
    uVar19 = vcmovt_s(in_V7D,(byte)uVar22 & 1);
    uVar19 = vmul_s(uVar19,fVar21 + 50.0);
    auVar3 = vscl_t(auVar8,uVar19);
    DAT_08b00690 = auVar3._0_4_;
    DAT_08b00694 = auVar3._4_4_;
    DAT_08b00698 = auVar3._8_4_;
    DAT_08b0068c = DAT_08b006a0 * DAT_08b006a0;
    uVar19 = vdot_t(auVar3,auVar3);
    DAT_08b0069c = vsqrt_s(uVar19);
  }
  DAT_08aba940 = 0;
LAB_0887860c:
  iVar16 = FUN_0881aa28(0x1bf0300,&DAT_08aba930,1,0);
  if (iVar16 != 0) {
    iVar18 = 1;
    DAT_08aba930 = DAT_08b00280;
    DAT_08aba938 = DAT_08b00288;
    DAT_08aba93c = DAT_08b0028c;
    DAT_08aba934 = DAT_08b00284 + 10.0;
    DAT_08aba940 = 0;
    auVar4._12_4_ = DAT_08b0028c;
    auVar4._8_4_ = DAT_08b00288;
    auVar4._4_4_ = DAT_08b00284;
    auVar4._0_4_ = DAT_08b00280;
    auVar2 = vsub_q(auVar4,*param_3);
    uVar19 = vdot_t(auVar2._0_12_,auVar2._0_12_);
    fVar21 = (float)vsqrt_s(uVar19);
    auVar11._4_4_ = DAT_08b00694;
    auVar11._0_4_ = DAT_08b00690;
    auVar11._8_4_ = DAT_08b00698;
    auVar10._4_4_ = DAT_08b00694;
    auVar10._0_4_ = DAT_08b00690;
    auVar10._8_4_ = DAT_08b00698;
    auVar9._4_4_ = DAT_08b00694;
    auVar9._0_4_ = DAT_08b00690;
    auVar9._8_4_ = DAT_08b00698;
    uVar19 = vdot_t(auVar9,auVar10);
    uVar22 = vcmp_s(8,uVar19,DAT_08b00690);
    vrsq_s(uVar19);
    uVar19 = vcmovt_s(in_V7D,(byte)uVar22 & 1);
    uVar19 = vmul_s(uVar19,fVar21 + 50.0);
    auVar3 = vscl_t(auVar11,uVar19);
    DAT_08b00690 = auVar3._0_4_;
    DAT_08b00694 = auVar3._4_4_;
    DAT_08b00698 = auVar3._8_4_;
  }
  uVar15 = DAT_08aba93c;
  uVar22 = DAT_08aba938;
  fVar21 = DAT_08aba934;
  uVar19 = DAT_08aba930;
  DAT_08b0068c = param_1 * param_1;
  auVar13._4_4_ = DAT_08b00694;
  auVar13._0_4_ = DAT_08b00690;
  auVar13._8_4_ = DAT_08b00698;
  auVar12._4_4_ = DAT_08b00694;
  auVar12._0_4_ = DAT_08b00690;
  auVar12._8_4_ = DAT_08b00698;
  uVar20 = vdot_t(auVar12,auVar13);
  DAT_08b0069c = vsqrt_s(uVar20);
  DAT_08b006a0 = param_1;
  iVar16 = FUN_0881aa28(param_8 & ~(1 << (uVar17 & 0x1f)) & 0x3e,&DAT_08aba930,1,0);
  if (iVar16 == 0) {
    if (DAT_08ab02fc != 0) {
      uVar20 = *(undefined4 *)(DAT_08ab02fc + 0x138);
      iVar16 = FUN_08860188(uVar20);
      if (iVar16 != 0) {
        FUN_088631c4(uVar20,*(undefined4 *)(param_2 + 0xb8),*(undefined4 *)(param_2 + 0xb0));
      }
    }
  }
  else if (DAT_08aba940 != 0) {
    iVar18 = 1;
  }
  DAT_08aba930 = uVar19;
  DAT_08aba934 = fVar21;
  DAT_08aba938 = uVar22;
  DAT_08aba93c = uVar15;
  if ((*(int *)(param_2 + 0xf4) != 0) && (iVar18 != 0)) {
    FUN_08877060(param_2,*(undefined4 *)(param_2 + 0x154),&DAT_08aba930,0,0);
  }
  return iVar18;
}

