#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088484f4(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  int iVar13;
  uint uVar14;
  undefined (*pauVar15) [16];
  undefined (*pauVar16) [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar25;
  
  if (*(int *)(param_1 + 0x2a0) != 0) {
    iVar13 = FUN_0880d354();
    pauVar15 = (undefined (*) [16])(param_1 + 0x2b0);
    pauVar16 = (undefined (*) [16])(param_1 + 0x50);
    if ((iVar13 == 0) &&
       (uVar14 = FUN_08884cc8(*(undefined4 *)(*(int *)(param_1 + 0x2a0) + 0x168)),
       (uVar14 & 0x1000000) != 0)) {
      FUN_088474a0(param_1,1);
    }
    iVar13 = *(int *)(param_1 + 0x2a0);
    uVar23 = *(undefined4 *)(iVar13 + 0x20);
    fVar20 = *(float *)(iVar13 + 0x24);
    uVar5 = *(undefined4 *)(iVar13 + 0x28);
    uVar7 = *(undefined4 *)(iVar13 + 0x2c);
    fVar19 = *(float *)(*(int *)(param_1 + 0x400) + 4);
    uVar25 = *(undefined4 *)(param_1 + 0x2b4);
    uVar6 = *(undefined4 *)(param_1 + 0x2b8);
    uVar8 = *(undefined4 *)(param_1 + 700);
    *(undefined4 *)*(undefined (*) [16])(param_1 + 0x2c0) = *(undefined4 *)*pauVar15;
    *(undefined4 *)(param_1 + 0x2c4) = uVar25;
    *(undefined4 *)(param_1 + 0x2c8) = uVar6;
    *(undefined4 *)(param_1 + 0x2cc) = uVar8;
    auVar2._4_4_ = fVar20 + fVar19;
    auVar2._0_4_ = uVar23;
    auVar2._8_4_ = uVar5;
    auVar2._12_4_ = uVar7;
    auVar2 = vsub_q(auVar2,*pauVar15);
    auVar2 = vscl_q(auVar2,0x3eb33333);
    auVar2 = vadd_q(*pauVar15,auVar2);
    *(int *)*pauVar15 = auVar2._0_4_;
    *(int *)(param_1 + 0x2b4) = auVar2._4_4_;
    *(int *)(param_1 + 0x2b8) = auVar2._8_4_;
    *(int *)(param_1 + 700) = auVar2._12_4_;
    fVar20 = *(float *)(*(int *)(param_1 + 0x2a0) + 0x34) + 3.141593;
    if (3.141593 < fVar20) {
      fVar20 = fVar20 - 6.283185;
    }
    else if (fVar20 <= -3.141593) {
      fVar20 = fVar20 + 6.283185;
    }
    fVar20 = *(float *)(param_1 + 0x300) - fVar20;
    fVar20 = fVar20 - (float)(int)(fVar20 * 0.3183099) * 6.283185;
    if (fVar20 < 0.0) {
      fVar20 = fVar20 + 6.283185;
    }
    if (3.141593 <= fVar20) {
      fVar20 = 6.283185 - fVar20;
    }
    else {
      fVar20 = -fVar20;
    }
    fVar20 = *(float *)(param_1 + 0x300) + fVar20 * 0.3;
    *(float *)(param_1 + 0x300) = fVar20;
    if (3.141593 < fVar20) {
      *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x300) - 6.283185;
    }
    else if (*(float *)(param_1 + 0x300) <= -3.141593) {
      *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x300) + 6.283185;
    }
    auVar2 = vsub_q(*(undefined (*) [16])(param_1 + 0x2c0),*pauVar15);
    fVar20 = (float)vdot_t(auVar2._0_12_,auVar2._0_12_);
    if (fVar20 < 1.0) {
      if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x16c) & 0x1000) == 0) {
        iVar13 = *(int *)(param_1 + 0x304);
      }
      else {
        *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 2;
        iVar13 = *(int *)(param_1 + 0x304);
      }
      *(int *)(param_1 + 0x304) = iVar13 + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x304) = 0;
    }
    fVar17 = (float)FUN_08846ed0(*(float *)(param_1 + 0x2b4) -
                                 *(float *)(*(int *)(param_1 + 0x400) + 4),
                                 *(undefined4 *)(param_1 + 0x344));
    auVar1 = vsub_t(*(undefined (*) [12])*pauVar16,*(undefined (*) [12])*pauVar15);
    fVar20 = auVar1._0_4_;
    fVar19 = auVar1._8_4_;
    uVar23 = vdot_t(auVar1,auVar1);
    fVar24 = (float)vsqrt_s(uVar23);
    fVar21 = **(float **)(param_1 + 0x400);
    fVar18 = (float)atan2f(auVar1._4_4_,SQRT(fVar20 * fVar20 + fVar19 * fVar19));
    fVar20 = (float)atan2f(fVar19,fVar20);
    if (*(int *)(param_1 + 0x304) < 1) {
      *(float *)(param_1 + 0x308) = *(float *)(param_1 + 0x308) * 0.8;
    }
    else {
      fVar19 = (float)*(int *)(param_1 + 0x304) * 0.02222222;
      if (1.0 < fVar19) {
        fVar19 = 1.0;
      }
      fVar22 = fVar20 - *(float *)(param_1 + 0x300);
      fVar22 = fVar22 - (float)(int)(fVar22 * 0.3183099) * 6.283185;
      if (fVar22 < 0.0) {
        fVar22 = fVar22 + 6.283185;
      }
      if (3.141593 <= fVar22) {
        fVar22 = 6.283185 - fVar22;
      }
      else {
        fVar22 = -fVar22;
      }
      uVar23 = vmul_s(fVar19 * fVar19 * 3.141593,in_V7C);
      fVar19 = (float)vcos_s(uVar23);
      fVar19 = *(float *)(param_1 + 0x308) - fVar22 * (1.0 - fVar19) * 0.5 * 0.2;
      fVar19 = fVar19 - (float)(int)(fVar19 * 0.3183099) * 6.283185;
      if (fVar19 < 0.0) {
        fVar19 = fVar19 + 6.283185;
      }
      if (3.141593 <= fVar19) {
        fVar19 = 6.283185 - fVar19;
      }
      else {
        fVar19 = -fVar19;
      }
      *(float *)(param_1 + 0x308) = *(float *)(param_1 + 0x308) + fVar19 * 0.2;
    }
    uVar23 = vmul_s(fVar20 + *(float *)(param_1 + 0x308),in_V7C);
    auVar2 = vrot_q(uVar23,1,0,2,0);
    auVar1 = vscl_t(auVar2._0_12_,fVar24 + (fVar21 - fVar24) * 0.4);
    vpfxs(2,1,0x10,3);
    auVar3 = vmov_t(auVar1);
    uVar23 = vdot_t(auVar3,auVar3);
    uVar25 = vcmp_s(8,uVar23,auVar3._0_4_);
    vrsq_s(uVar23);
    uVar23 = vcmovt_s(in_V7D,(byte)uVar25 & 1);
    vpfxd(4,4,4,5);
    auVar3 = vscl_t(auVar3,uVar23);
    uVar23 = vcst_s(6);
    uVar23 = vmul_s(uVar23,-fVar18 + (-fVar17 - -fVar18) * 0.2);
    uVar25 = vcos_s(uVar23);
    uVar23 = vsin_s(uVar23);
    auVar3 = vscl_t(auVar3,uVar23);
    fVar20 = *(float *)(param_1 + 0x30c) + 0.1;
    if (1.0 < fVar20) {
      fVar20 = 1.0;
    }
    *(float *)(param_1 + 0x30c) = fVar20;
    auVar12._12_4_ = uVar25;
    auVar12._0_12_ = auVar3;
    auVar11._12_4_ = uVar25;
    auVar11._0_12_ = auVar3;
    vpfxs(0x10,0x11,0x12,3);
    auVar4 = vmov_q(auVar11);
    uVar23 = vmov_s(in_V73);
    auVar9._12_4_ = uVar23;
    auVar9._8_4_ = auVar1._8_4_;
    auVar9._4_4_ = auVar1._4_4_;
    auVar9._0_4_ = auVar1._0_4_;
    auVar2 = vqmul_q(auVar12,auVar9);
    auVar2 = vqmul_q(auVar2,auVar4);
    auVar1 = vadd_t(*(undefined (*) [12])*pauVar15,auVar2._0_12_);
    auVar10._12_4_ = *(undefined4 *)(param_1 + 700);
    auVar10._0_12_ = auVar1;
    auVar2 = vsub_q(auVar10,*pauVar16);
    auVar2 = vscl_q(auVar2,fVar20 * fVar20);
    auVar2 = vadd_q(*pauVar16,auVar2);
    *(int *)*pauVar16 = auVar2._0_4_;
    *(int *)(param_1 + 0x54) = auVar2._4_4_;
    *(int *)(param_1 + 0x58) = auVar2._8_4_;
    *(int *)(param_1 + 0x5c) = auVar2._12_4_;
    pauVar16 = (undefined (*) [16])(param_1 + 0x60);
    auVar2 = vsub_q(*pauVar15,*pauVar16);
    auVar2 = vscl_q(auVar2,fVar20 * fVar20);
    auVar2 = vadd_q(*pauVar16,auVar2);
    *(int *)*pauVar16 = auVar2._0_4_;
    *(int *)(param_1 + 100) = auVar2._4_4_;
    *(int *)(param_1 + 0x68) = auVar2._8_4_;
    *(int *)(param_1 + 0x6c) = auVar2._12_4_;
    pauVar15 = (undefined (*) [16])(param_1 + 0x80);
    auVar4._12_4_ = DAT_08b001ac;
    auVar4._8_4_ = DAT_08b001a8;
    auVar4._4_4_ = DAT_08b001a4;
    auVar4._0_4_ = DAT_08b001a0;
    auVar2 = vsub_q(auVar4,*pauVar15);
    auVar2 = vscl_q(auVar2,0x3e4ccccd);
    auVar2 = vadd_q(*pauVar15,auVar2);
    *(int *)*pauVar15 = auVar2._0_4_;
    *(int *)(param_1 + 0x84) = auVar2._4_4_;
    *(int *)(param_1 + 0x88) = auVar2._8_4_;
    *(int *)(param_1 + 0x8c) = auVar2._12_4_;
    uVar23 = vdot_t(*(undefined (*) [12])*pauVar15,*(undefined (*) [12])*pauVar15);
    uVar25 = vcmp_s(8,uVar23,*(undefined4 *)*pauVar15);
    vrsq_s(uVar23);
    uVar23 = vcmovt_s(in_V7D,(byte)uVar25 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar15,uVar23);
    *(int *)*pauVar15 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = in_V7D;
    iVar13 = FUN_08860344(*(undefined4 *)(param_1 + 0x2a0));
    if (iVar13 != 0) {
      FUN_088476e8(param_1,0);
    }
    FUN_08848028(param_1);
  }
  return;
}

