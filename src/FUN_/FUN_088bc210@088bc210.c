#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bc210(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined (*pauVar12) [16];
  int iVar13;
  undefined (*pauVar14) [16];
  undefined (*pauVar15) [16];
  undefined (*pauVar16) [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar25;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  undefined4 uStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_6c;
  float local_48;
  float local_44;
  
  if (*(int *)(param_1 + 0x2a0) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x5c4) != 0) {
    FUN_088bb320(param_1);
    FUN_088bb53c(param_1 + 0x50);
    return;
  }
  iVar13 = *(int *)(param_1 + 0x304);
  if (1 < iVar13) {
    if (2 < iVar13) {
      return;
    }
    if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x168) & 0x1000000) == 0) {
      *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
    }
    FUN_088bb624(param_1);
    return;
  }
  if (iVar13 < 0) {
    return;
  }
  pauVar14 = (undefined (*) [16])(param_1 + 0x50);
  pauVar15 = (undefined (*) [16])(param_1 + 0x2c0);
  pauVar16 = (undefined (*) [16])(param_1 + 0x60);
  if (iVar13 < 1) {
    iVar13 = *(int *)(param_1 + 0x2a0);
    uVar24 = *(undefined4 *)(iVar13 + 0x20);
    uVar25 = *(undefined4 *)(iVar13 + 0x28);
    uVar5 = *(undefined4 *)(iVar13 + 0x2c);
    fVar21 = *(float *)(iVar13 + 0x24) + DAT_08abd804;
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)*pauVar15;
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2c4);
    *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x2c8);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2cc);
    auVar2._4_4_ = fVar21;
    auVar2._0_4_ = uVar24;
    auVar2._8_4_ = uVar25;
    auVar2._12_4_ = uVar5;
    auVar2 = vsub_q(auVar2,*pauVar15);
    auVar2 = vscl_q(auVar2,0x3f000000);
    auVar2 = vadd_q(*pauVar15,auVar2);
    *(int *)*pauVar15 = auVar2._0_4_;
    *(int *)(param_1 + 0x2c4) = auVar2._4_4_;
    *(int *)(param_1 + 0x2c8) = auVar2._8_4_;
    *(int *)(param_1 + 0x2cc) = auVar2._12_4_;
    fVar21 = *(float *)(param_1 + 0x2f0) - (*(float *)(*(int *)(param_1 + 0x2a0) + 0x34) + 3.141593)
    ;
    fVar21 = fVar21 - (float)(int)(fVar21 * 0.3183099) * 6.283185;
    if (fVar21 < 0.0) {
      fVar21 = fVar21 + 6.283185;
    }
    fVar22 = 0.1;
    if (3.141593 <= fVar21) {
      fVar21 = 6.283185 - fVar21;
    }
    else {
      fVar21 = -fVar21;
    }
    fVar21 = *(float *)(param_1 + 0x2f0) + fVar21 * 0.3;
    *(float *)(param_1 + 0x2f0) = fVar21;
    if (3.141593 < fVar21) {
      *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) - 6.283185;
    }
    else if (*(float *)(param_1 + 0x2f0) <= -3.141593) {
      *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) + 6.283185;
    }
    uStack_f4 = *(undefined4 *)(param_1 + 0x5c);
    auVar1 = vsub_t(*(undefined (*) [12])*pauVar14,*(undefined (*) [12])*pauVar15);
    fVar21 = auVar1._0_4_;
    uStack_fc = auVar1._4_4_;
    fVar18 = auVar1._8_4_;
    uVar24 = vdot_t(auVar1,auVar1);
    fVar23 = (float)vsqrt_s(uVar24);
    fVar19 = *(float *)(param_1 + 0x308);
    local_100 = fVar21;
    fStack_f8 = fVar18;
    fVar17 = (float)atan2f(uStack_fc,SQRT(fVar21 * fVar21 + fVar18 * fVar18));
    fVar20 = *(float *)(param_1 + 0x2f8);
    fVar21 = (float)atan2f(fVar18,fVar21);
    if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x168) & 0x100000) == 0) {
      if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x168) & 0x200000) == 0) {
        fVar22 = *(float *)(param_1 + 0x2f4) * 0.75;
      }
      else {
        fVar18 = *(float *)(param_1 + 0x2f4) + 0.01;
        if (fVar18 <= 0.1) {
          fVar22 = fVar18;
        }
      }
      *(float *)(param_1 + 0x2f4) = fVar22;
    }
    else {
      fVar18 = *(float *)(param_1 + 0x2f4) - 0.01;
      fVar22 = -0.1;
      if (-0.1 <= fVar18) {
        fVar22 = fVar18;
      }
      *(float *)(param_1 + 0x2f4) = fVar22;
    }
    uVar24 = vmul_s(fVar21 + fVar22,in_V7C);
    auVar2 = vrot_q(uVar24,1,0,2,0);
    auVar1 = vscl_t(auVar2._0_12_,fVar23 + (fVar19 - fVar23) * 0.4);
    vpfxs(2,1,0x10,3);
    auVar3 = vmov_t(auVar1);
    fVar21 = *(float *)(param_1 + 0x2fc) + 0.1;
    if (1.0 < fVar21) {
      fVar21 = 1.0;
    }
    *(float *)(param_1 + 0x2fc) = fVar21;
    fVar21 = fVar21 * fVar21;
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)*pauVar14;
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x5c);
    uVar24 = vdot_t(auVar3,auVar3);
    uVar25 = vcmp_s(8,uVar24,auVar3._0_4_);
    vrsq_s(uVar24);
    uVar24 = vcmovt_s(in_V7D,(byte)uVar25 & 1);
    vpfxd(4,4,4,5);
    auVar3 = vscl_t(auVar3,uVar24);
    local_120 = auVar3._0_4_;
    uStack_11c = auVar3._4_4_;
    uStack_118 = auVar3._8_4_;
    pauVar12 = (undefined (*) [16])
               FUN_08a29520(-fVar17 + (-fVar20 - -fVar17) * 0.2,&local_110,&local_120);
    vpfxs(0x10,0x11,0x12,3);
    auVar4 = vmov_q(*pauVar12);
    uVar24 = vmov_s(in_V73);
    auVar6._12_4_ = uVar24;
    auVar6._8_4_ = auVar1._8_4_;
    auVar6._4_4_ = auVar1._4_4_;
    auVar6._0_4_ = auVar1._0_4_;
    auVar2 = vqmul_q(*pauVar12,auVar6);
    auVar2 = vqmul_q(auVar2,auVar4);
    local_f0 = auVar2._0_4_;
    uStack_ec = auVar2._4_4_;
    uStack_e8 = auVar2._8_4_;
    uStack_e4 = auVar2._12_4_;
    uStack_f4 = *(undefined4 *)(param_1 + 0x2cc);
    auVar1 = vadd_t(*(undefined (*) [12])*pauVar15,auVar2._0_12_);
    local_100 = auVar1._0_4_;
    uStack_fc = auVar1._4_4_;
    fStack_f8 = auVar1._8_4_;
    auVar4._12_4_ = uStack_f4;
    auVar4._0_12_ = auVar1;
    auVar2 = vsub_q(auVar4,*pauVar14);
    auVar2 = vscl_q(auVar2,fVar21);
    auVar2 = vadd_q(*pauVar14,auVar2);
    *(int *)*pauVar14 = auVar2._0_4_;
    *(int *)(param_1 + 0x54) = auVar2._4_4_;
    *(int *)(param_1 + 0x58) = auVar2._8_4_;
    *(int *)(param_1 + 0x5c) = auVar2._12_4_;
    auVar2 = vsub_q(*pauVar15,*pauVar16);
    auVar2 = vscl_q(auVar2,fVar21);
    auVar2 = vadd_q(*pauVar16,auVar2);
    *(int *)*pauVar16 = auVar2._0_4_;
    *(int *)(param_1 + 100) = auVar2._4_4_;
    *(int *)(param_1 + 0x68) = auVar2._8_4_;
    *(int *)(param_1 + 0x6c) = auVar2._12_4_;
    FUN_088baebc(param_1);
    return;
  }
  iVar13 = *(int *)(param_1 + 0x2a0);
  uVar24 = *(undefined4 *)(iVar13 + 0x20);
  uVar25 = *(undefined4 *)(iVar13 + 0x28);
  uVar5 = *(undefined4 *)(iVar13 + 0x2c);
  fVar21 = *(float *)(iVar13 + 0x24) + DAT_08abd804;
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)*pauVar15;
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2cc);
  auVar8._4_4_ = fVar21;
  auVar8._0_4_ = uVar24;
  auVar8._8_4_ = uVar25;
  auVar8._12_4_ = uVar5;
  auVar2 = vsub_q(auVar8,*pauVar15);
  auVar2 = vscl_q(auVar2,0x3eb33333);
  auVar2 = vadd_q(*pauVar15,auVar2);
  *(int *)*pauVar15 = auVar2._0_4_;
  *(int *)(param_1 + 0x2c4) = auVar2._4_4_;
  *(int *)(param_1 + 0x2c8) = auVar2._8_4_;
  *(int *)(param_1 + 0x2cc) = auVar2._12_4_;
  fVar21 = *(float *)(param_1 + 0x2f0) - (*(float *)(*(int *)(param_1 + 0x2a0) + 0x34) + 3.141593);
  fVar21 = fVar21 - (float)(int)(fVar21 * 0.3183099) * 6.283185;
  if (fVar21 < 0.0) {
    fVar21 = fVar21 + 6.283185;
  }
  if (3.141593 <= fVar21) {
    fVar21 = 6.283185 - fVar21;
  }
  else {
    fVar21 = -fVar21;
  }
  fVar21 = *(float *)(param_1 + 0x2f0) + fVar21 * 0.3;
  *(float *)(param_1 + 0x2f0) = fVar21;
  if (3.141593 < fVar21) {
    *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) - 6.283185;
  }
  else {
    if (-3.141593 < *(float *)(param_1 + 0x2f0)) {
      fVar21 = *(float *)(param_1 + 0x2f8);
      goto LAB_088bc7d8;
    }
    *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) + 6.283185;
  }
  fVar21 = *(float *)(param_1 + 0x2f8);
LAB_088bc7d8:
  *(float *)(param_1 + 0x2f8) = fVar21 + (0.122173 - fVar21) * 0.2;
  uStack_d4 = *(undefined4 *)(param_1 + 0x5c);
  auVar1 = vsub_t(*(undefined (*) [12])*pauVar14,*(undefined (*) [12])*pauVar15);
  fVar21 = auVar1._0_4_;
  uStack_dc = auVar1._4_4_;
  fVar22 = auVar1._8_4_;
  uVar24 = vdot_t(auVar1,auVar1);
  local_48 = (float)vsqrt_s(uVar24);
  local_48 = local_48 + (*(float *)(param_1 + 0x308) - local_48) * 0.4;
  local_e0 = fVar21;
  fStack_d8 = fVar22;
  fVar18 = (float)atan2f(uStack_dc,SQRT(fVar21 * fVar21 + fVar22 * fVar22));
  local_44 = -fVar18 + (-*(float *)(param_1 + 0x2f8) - -fVar18) * 0.2;
  fVar21 = (float)atan2f(fVar22,fVar21);
  fVar22 = fVar21 - *(float *)(param_1 + 0x2f0);
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
  uVar24 = vmul_s(0x40490fdb,in_V7C);
  local_6c = (float)vcos_s(uVar24);
  fVar22 = (1.0 - local_6c) * 0.5 * fVar22 * 0.3;
  if (ABS(fVar22) < 0.01) {
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
  }
  else if (0.04 < ABS(fVar22)) {
    fVar22 = *(float *)(param_1 + 0x2f4) - fVar22;
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
    fVar22 = *(float *)(param_1 + 0x2f4) + fVar22 * 0.2;
    *(float *)(param_1 + 0x2f4) = fVar22;
    if (fVar22 < 0.0) {
      fVar22 = *(float *)(param_1 + 0x2f4);
      if (fVar22 < -0.8) {
        fVar22 = -0.8;
      }
    }
    else {
      fVar22 = *(float *)(param_1 + 0x2f4);
      if (0.8 < fVar22) {
        fVar22 = 0.8;
      }
    }
    *(float *)(param_1 + 0x2f4) = fVar22;
  }
  else {
    fVar22 = *(float *)(param_1 + 0x2f4) * 0.5;
    *(float *)(param_1 + 0x2f4) = fVar22;
    if (fVar22 < 0.0) {
      fVar22 = *(float *)(param_1 + 0x2f4);
      if (-0.03 < fVar22) {
        fVar22 = -0.03;
      }
      *(float *)(param_1 + 0x2f4) = fVar22;
    }
    else {
      fVar22 = 0.03;
      if (0.03 <= *(float *)(param_1 + 0x2f4)) {
        fVar22 = *(float *)(param_1 + 0x2f4);
      }
      *(float *)(param_1 + 0x2f4) = fVar22;
    }
  }
  uVar24 = vmul_s(fVar21 + *(float *)(param_1 + 0x2f4),in_V7C);
  auVar2 = vrot_q(uVar24,1,0,2,0);
  auVar1 = vscl_t(auVar2._0_12_,local_48);
  vpfxs(2,1,0x10,3);
  auVar3 = vmov_t(auVar1);
  fVar21 = *(float *)(param_1 + 0x2fc) + 0.1;
  if (1.0 < fVar21) {
    fVar21 = 1.0;
  }
  *(float *)(param_1 + 0x2fc) = fVar21;
  uVar24 = vdot_t(auVar3,auVar3);
  uVar25 = vcmp_s(8,uVar24,auVar3._0_4_);
  vrsq_s(uVar24);
  uVar24 = vcmovt_s(in_V7D,(byte)uVar25 & 1);
  vpfxd(4,4,4,5);
  auVar3 = vscl_t(auVar3,uVar24);
  local_120 = auVar3._0_4_;
  uStack_11c = auVar3._4_4_;
  uStack_118 = auVar3._8_4_;
  uVar24 = vcst_s(6);
  uVar24 = vmul_s(uVar24,local_44);
  uStack_104 = vcos_s(uVar24);
  uVar24 = vsin_s(uVar24);
  auVar3 = vscl_t(auVar3,uVar24);
  local_110 = auVar3._0_4_;
  uStack_10c = auVar3._4_4_;
  uStack_108 = auVar3._8_4_;
  auVar10._12_4_ = uStack_104;
  auVar10._0_12_ = auVar3;
  auVar9._12_4_ = uStack_104;
  auVar9._0_12_ = auVar3;
  vpfxs(0x10,0x11,0x12,3);
  auVar4 = vmov_q(auVar9);
  uVar24 = vmov_s(in_V73);
  auVar7._12_4_ = uVar24;
  auVar7._8_4_ = auVar1._8_4_;
  auVar7._4_4_ = auVar1._4_4_;
  auVar7._0_4_ = auVar1._0_4_;
  auVar2 = vqmul_q(auVar10,auVar7);
  auVar2 = vqmul_q(auVar2,auVar4);
  local_d0 = auVar2._0_4_;
  uStack_cc = auVar2._4_4_;
  uStack_c8 = auVar2._8_4_;
  uStack_c4 = auVar2._12_4_;
  uStack_d4 = *(undefined4 *)(param_1 + 0x2cc);
  auVar1 = vadd_t(*(undefined (*) [12])*pauVar15,auVar2._0_12_);
  local_e0 = auVar1._0_4_;
  uStack_dc = auVar1._4_4_;
  fStack_d8 = auVar1._8_4_;
  auVar11._12_4_ = uStack_d4;
  auVar11._0_12_ = auVar1;
  auVar2 = vsub_q(auVar11,*pauVar14);
  auVar2 = vscl_q(auVar2,fVar21 * fVar21);
  auVar2 = vadd_q(*pauVar14,auVar2);
  *(int *)*pauVar14 = auVar2._0_4_;
  *(int *)(param_1 + 0x54) = auVar2._4_4_;
  *(int *)(param_1 + 0x58) = auVar2._8_4_;
  *(int *)(param_1 + 0x5c) = auVar2._12_4_;
  auVar2 = vsub_q(*pauVar15,*pauVar16);
  auVar2 = vscl_q(auVar2,fVar21 * fVar21);
  auVar2 = vadd_q(*pauVar16,auVar2);
  *(int *)*pauVar16 = auVar2._0_4_;
  *(int *)(param_1 + 100) = auVar2._4_4_;
  *(int *)(param_1 + 0x68) = auVar2._8_4_;
  *(int *)(param_1 + 0x6c) = auVar2._12_4_;
  FUN_088baebc(param_1);
  return;
}

