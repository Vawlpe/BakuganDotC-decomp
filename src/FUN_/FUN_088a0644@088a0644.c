#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a0644(int param_1,uint param_2,undefined (*param_3) [12],undefined4 *param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [64];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined auVar9 [12];
  int iVar10;
  uint uVar11;
  undefined (*pauVar12) [12];
  undefined (*pauVar13) [12];
  undefined (*pauVar14) [12];
  float *pfVar15;
  float *pfVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar25;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_12c;
  
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    iVar10 = FUN_088e1948();
    *(undefined *)(param_1 + 0x2c0) = 1;
    uVar17 = *(undefined4 *)(param_1 + 0x2c);
    uVar18 = *param_4;
    uVar19 = param_4[1];
    uVar20 = param_4[2];
    auVar1 = vsub_t(*(undefined (*) [12])(iVar10 + 0x20),*(undefined (*) [12])(param_1 + 0x20));
    uVar24 = vdot_t(auVar1,auVar1);
    uVar25 = vcmp_s(8,uVar24,auVar1._0_4_);
    vrsq_s(uVar24);
    uVar24 = vcmovt_s(in_V7D,(byte)uVar25 & 1);
    vpfxd(4,4,4,5);
    vscl_t(auVar1,uVar24);
    uVar24 = *(undefined4 *)*param_3;
    fVar21 = *(float *)(*param_3 + 4);
    uVar25 = *(undefined4 *)(*param_3 + 8);
    auVar1 = *param_3;
    pauVar14 = (undefined (*) [12])(param_1 + 0x270);
    *(undefined4 *)*pauVar14 = uVar18;
    *(undefined4 *)(param_1 + 0x274) = uVar19;
    *(undefined4 *)(param_1 + 0x278) = uVar20;
    *(undefined4 *)(param_1 + 0x27c) = uVar17;
    pauVar13 = (undefined (*) [12])(param_1 + 0x290);
    *(undefined4 *)*pauVar13 = uVar18;
    *(undefined4 *)(param_1 + 0x294) = uVar19;
    *(undefined4 *)(param_1 + 0x298) = uVar20;
    *(undefined4 *)(param_1 + 0x29c) = uVar17;
    *(undefined4 *)(param_1 + 0x2b0) = uVar24;
    *(float *)(param_1 + 0x2b4) = fVar21;
    *(undefined4 *)(param_1 + 0x2b8) = uVar25;
    *(undefined4 *)(param_1 + 700) = in_V7D;
    pfVar16 = (float *)(param_1 + 0x274);
    pauVar12 = (undefined (*) [12])(param_1 + 0x280);
    pfVar15 = (float *)(param_1 + 0x284);
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    *pfVar16 = *pfVar16 + 14.0;
    auVar1 = vscl_t(auVar1,0x41500000);
    fVar22 = auVar1._0_4_;
    local_1d8 = auVar1._8_4_;
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x2b0),0x40000000);
    *(int *)*(undefined (*) [12])(param_1 + 0x2b0) = auVar1._0_4_;
    *(int *)(param_1 + 0x2b4) = auVar1._4_4_;
    *(int *)(param_1 + 0x2b8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 700) = in_V7D;
    local_1e0 = fVar22;
    local_1dc = fVar21;
    if (0 < (int)param_2) {
      uVar11 = param_2 & 1;
      if ((int)param_2 < 0) {
        uVar11 = -uVar11;
      }
      if (uVar11 == 0) {
        uVar17 = 0x3f490fdb;
      }
      else {
        uVar17 = 0xbf490fdb;
      }
      auVar5 = vmidt_q();
      uVar17 = vmul_s(uVar17,in_V7C);
      auVar6 = vrot_q(uVar17,1,0,3,0);
      auVar3 = vidt_q();
      auVar7 = vrot_q(uVar17,2,0,1,0);
      auVar4 = vidt_q();
      auVar8._4_4_ = auVar5._16_4_;
      auVar8._0_4_ = auVar5._0_4_;
      auVar8._8_4_ = auVar5._32_4_;
      auVar8._12_4_ = auVar5._48_4_;
      auVar8._16_4_ = auVar5._4_4_;
      auVar8._20_4_ = auVar5._20_4_;
      auVar8._24_4_ = auVar5._36_4_;
      auVar8._28_4_ = auVar5._52_4_;
      auVar8._32_4_ = auVar5._8_4_;
      auVar8._36_4_ = auVar5._24_4_;
      auVar8._40_4_ = auVar5._40_4_;
      auVar8._44_4_ = auVar5._56_4_;
      auVar8._48_4_ = auVar5._12_4_;
      auVar8._52_4_ = auVar5._28_4_;
      auVar8._56_4_ = auVar5._44_4_;
      auVar8._60_4_ = auVar5._60_4_;
      auVar5._48_16_ = auVar4;
      auVar5._44_4_ = auVar7._12_4_;
      auVar5._40_4_ = auVar7._8_4_;
      auVar5._36_4_ = auVar7._4_4_;
      auVar5._32_4_ = auVar7._0_4_;
      auVar5._28_4_ = auVar3._12_4_;
      auVar5._24_4_ = auVar3._8_4_;
      auVar5._20_4_ = auVar3._4_4_;
      auVar5._16_4_ = auVar3._0_4_;
      auVar5._12_4_ = auVar6._12_4_;
      auVar5._8_4_ = auVar6._8_4_;
      auVar5._4_4_ = auVar6._4_4_;
      auVar5._0_4_ = auVar6._0_4_;
      auVar5 = vmmul_q(auVar8,auVar5);
      local_1e0 = auVar5._0_4_ * fVar22 + auVar5._4_4_ * fVar21 + auVar5._8_4_ * local_1d8;
      local_1dc = auVar5._16_4_ * fVar22 + auVar5._20_4_ * fVar21 + auVar5._24_4_ * local_1d8;
      local_1d8 = auVar5._32_4_ * fVar22 + auVar5._36_4_ * fVar21 + auVar5._40_4_ * local_1d8;
      fVar21 = *(float *)(param_1 + 0x2b0);
      fVar22 = *(float *)(param_1 + 0x2b4);
      fVar23 = *(float *)(param_1 + 0x2b8);
      *(float *)(param_1 + 0x2b0) =
           auVar5._0_4_ * fVar21 + auVar5._4_4_ * fVar22 + auVar5._8_4_ * fVar23;
      *(float *)(param_1 + 0x2b4) =
           auVar5._16_4_ * fVar21 + auVar5._20_4_ * fVar22 + auVar5._24_4_ * fVar23;
      *(float *)(param_1 + 0x2b8) =
           auVar5._32_4_ * fVar21 + auVar5._36_4_ * fVar22 + auVar5._40_4_ * fVar23;
    }
    uVar17 = *(undefined4 *)(param_1 + 0x29c);
    auVar1._4_4_ = local_1dc;
    auVar1._0_4_ = local_1e0;
    auVar1._8_4_ = local_1d8;
    auVar1 = vadd_t(*pauVar13,auVar1);
    *(int *)*pauVar13 = auVar1._0_4_;
    *(int *)(param_1 + 0x294) = auVar1._4_4_;
    *(int *)(param_1 + 0x298) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x29c) = uVar17;
    auVar2 = vsub_t(*pauVar13,*pauVar14);
    uVar17 = *(undefined4 *)(param_1 + 0x29c);
    auVar1 = vadd_t(*pauVar13,*pauVar14);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(param_1 + 0x284) = auVar1._4_4_;
    *(int *)(param_1 + 0x288) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x28c) = uVar17;
    auVar1 = vscl_t(*pauVar12,0x3f000000);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(param_1 + 0x284) = auVar1._4_4_;
    *(int *)(param_1 + 0x288) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x28c) = in_V7D;
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    *pfVar15 = *pfVar15 + (*pfVar16 - *(float *)(param_1 + 0x294)) * 0.5;
    auVar1 = vsub_t(*pauVar13,*pauVar12);
    uVar17 = vdot_t(auVar1,auVar1);
    uVar18 = vcmp_s(8,uVar17,auVar1._0_4_);
    vrsq_s(uVar17);
    uVar17 = vcmovt_s(in_V7D,(byte)uVar18 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar1,uVar17);
    auVar1 = vscl_t(auVar1,0x43fa0000);
    auVar1 = vadd_t(*pauVar12,auVar1);
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    DAT_08b00410 = *(undefined4 *)*pauVar12;
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    DAT_08b00414 = *pfVar15;
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    DAT_08b00418 = *(undefined4 *)(param_1 + 0x288);
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    DAT_08b0041c = 0;
    auVar9._4_4_ = DAT_08b00414;
    auVar9._0_4_ = DAT_08b00410;
    auVar9._8_4_ = DAT_08b00418;
    auVar1 = vsub_t(auVar1,auVar9);
    DAT_08b00420 = auVar1._0_4_;
    DAT_08b00424 = auVar1._4_4_;
    DAT_08b00428 = auVar1._8_4_;
    DAT_08b0042c = 0;
    iVar10 = FUN_0881a83c(0x1bf077e,&DAT_08b009c0,0);
    uVar18 = DAT_08b0028c;
    uVar17 = DAT_08b00288;
    if (iVar10 != 0) {
      local_12c = DAT_08b00284;
      if (DAT_08b00284 < (float)param_4[1]) {
        local_12c = (float)param_4[1];
      }
      *(undefined4 *)(param_1 + 0x290) = DAT_08b00280;
      *(float *)(param_1 + 0x294) = local_12c;
      *(undefined4 *)(param_1 + 0x298) = uVar17;
      *(undefined4 *)(param_1 + 0x29c) = uVar18;
    }
    uVar17 = *(undefined4 *)(param_1 + 0x29c);
    auVar1 = vadd_t(*pauVar13,*pauVar14);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(param_1 + 0x284) = auVar1._4_4_;
    *(int *)(param_1 + 0x288) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x28c) = uVar17;
    auVar1 = vscl_t(*pauVar12,0x3f000000);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(param_1 + 0x284) = auVar1._4_4_;
    *(int *)(param_1 + 0x288) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x28c) = in_V7D;
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    *pfVar15 = *pfVar15 + (*pfVar16 - *(float *)(param_1 + 0x294)) * DAT_08abd524;
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    *(float *)(param_1 + 0x2c8) = *pfVar15;
    auVar1 = vsub_t(*pauVar13,*pauVar14);
    uVar17 = vdot_t(auVar2,auVar2);
    fVar22 = (float)vsqrt_s(uVar17);
    uVar17 = vdot_t(auVar1,auVar1);
    fVar21 = (float)vsqrt_s(uVar17);
    if (fVar22 <= 1e-05) {
      fVar22 = 1e-05;
    }
    if (fVar21 <= 1e-05) {
      fVar21 = 1e-05;
    }
    fVar22 = fVar22 / fVar21;
    if (fVar22 < 1.0) {
      fVar22 = 1.0;
    }
    iVar10 = (int)DAT_08abd520;
    *(undefined2 *)(param_1 + 0x2ce) = 0;
    *(undefined *)(param_1 + 0x2d0) = 0;
    *(short *)(param_1 + 0x2cc) = (short)(int)((float)iVar10 * fVar22);
    *(undefined4 *)(param_1 + 0x2c4) = DAT_08abd528;
    iVar10 = FUN_088243d8(DAT_08ac5c70,0xe,*(int *)(param_1 + 0x130) + 0xb0);
    *(undefined4 *)(iVar10 + 0xd8) = 4;
    *(undefined4 *)(iVar10 + 0x1d4) = 0x40800000;
    *(undefined4 *)(iVar10 + 0x70) = 0x40000000;
    *(undefined4 *)(iVar10 + 0x74) = 0x40000000;
    *(undefined4 *)(iVar10 + 0x78) = 0x40000000;
    *(undefined4 *)(iVar10 + 0x7c) = 0;
    *(undefined *)(param_1 + 0x2c1) = 1;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x270);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x274);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x278);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}

