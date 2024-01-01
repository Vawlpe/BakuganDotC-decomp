#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bb624(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [12];
  undefined auVar10 [12];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined (*pauVar14) [16];
  int iVar15;
  float fVar16;
  undefined (*pauVar17) [16];
  undefined (*pauVar18) [16];
  undefined (*pauVar19) [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float local_110;
  undefined4 uStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  undefined4 uStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  float local_a8;
  float local_48;
  float local_44;
  
  if (*(int *)(param_1 + 0x2a0) == 0) {
    return;
  }
  iVar15 = *(int *)(param_1 + 0x304);
  if (0 < iVar15) {
    if (1 < iVar15) {
      return;
    }
    pauVar17 = (undefined (*) [16])(param_1 + 0x2c0);
    fVar16 = 0.1;
    pauVar18 = (undefined (*) [16])(param_1 + 0x50);
    pauVar19 = (undefined (*) [16])(param_1 + 0x60);
    if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x168) & 0x1000000) == 0) {
      *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
    }
    iVar15 = *(int *)(param_1 + 0x2a0);
    fVar24 = *(float *)(iVar15 + 0x20);
    fVar20 = *(float *)(iVar15 + 0x28);
    uVar25 = *(undefined4 *)(iVar15 + 0x2c);
    fVar23 = 1.570796 - *(float *)(param_1 + 0x150);
    if (3.141593 < fVar23) {
      fVar23 = fVar23 - 6.283185;
    }
    else if (fVar23 <= -3.141593) {
      fVar23 = fVar23 + 6.283185;
    }
    uVar27 = vmul_s(fVar23,in_V7C);
    auVar4 = vrot_q(uVar27,1,0,2,0);
    uStack_c4 = auVar4._12_4_;
    auVar1 = vscl_t(auVar4._0_12_,0xc1000000);
    local_d0 = auVar1._0_4_;
    uStack_cc = auVar1._4_4_;
    local_c8 = auVar1._8_4_;
    fVar23 = *(float *)(iVar15 + 0x24) + DAT_08abd824;
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)*pauVar17;
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2c4);
    *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x2c8);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2cc);
    auVar4._4_4_ = fVar23;
    auVar4._0_4_ = fVar24 + local_d0;
    auVar4._8_4_ = fVar20 + local_c8;
    auVar4._12_4_ = uVar25;
    auVar4 = vsub_q(auVar4,*pauVar17);
    auVar4 = vscl_q(auVar4,0x3eb33333);
    auVar4 = vadd_q(*pauVar17,auVar4);
    *(int *)*pauVar17 = auVar4._0_4_;
    *(int *)(param_1 + 0x2c4) = auVar4._4_4_;
    *(int *)(param_1 + 0x2c8) = auVar4._8_4_;
    *(int *)(param_1 + 0x2cc) = auVar4._12_4_;
    fVar24 = *(float *)(param_1 + 0x2f0) - (*(float *)(*(int *)(param_1 + 0x2a0) + 0x34) + 3.141593)
    ;
    fVar24 = fVar24 - (float)(int)(fVar24 * 0.3183099) * 6.283185;
    if (fVar24 < 0.0) {
      fVar24 = fVar24 + 6.283185;
    }
    if (3.141593 <= fVar24) {
      fVar24 = 6.283185 - fVar24;
    }
    else {
      fVar24 = -fVar24;
    }
    fVar24 = *(float *)(param_1 + 0x2f0) + fVar24 * 0.3;
    *(float *)(param_1 + 0x2f0) = fVar24;
    if (3.141593 < fVar24) {
      *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) - 6.283185;
    }
    else if (*(float *)(param_1 + 0x2f0) <= -3.141593) {
      *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) + 6.283185;
    }
    if (*(float *)(DAT_08ac5928 + 0x34) < -0.8) {
      fVar20 = *(float *)(param_1 + 0x2f8) - 0.06;
      fVar24 = -0.6108652;
      if (-0.6108652 <= fVar20) {
        fVar24 = fVar20;
      }
      *(float *)(param_1 + 0x2f8) = fVar24;
    }
    else if (0.8 < *(float *)(DAT_08ac5928 + 0x34)) {
      fVar20 = *(float *)(param_1 + 0x2f8) + 0.06;
      fVar24 = 0.6108652;
      if (fVar20 <= 0.6108652) {
        fVar24 = fVar20;
      }
      *(float *)(param_1 + 0x2f8) = fVar24;
    }
    uStack_e4 = *(undefined4 *)(param_1 + 0x5c);
    auVar1 = vsub_t(*(undefined (*) [12])*pauVar18,*(undefined (*) [12])*pauVar17);
    fVar24 = auVar1._0_4_;
    uStack_ec = auVar1._4_4_;
    fVar20 = auVar1._8_4_;
    uVar25 = vdot_t(auVar1,auVar1);
    fVar26 = (float)vsqrt_s(uVar25);
    fVar21 = DAT_08abd818 - fVar26;
    local_f0 = fVar24;
    fStack_e8 = fVar20;
    fVar23 = (float)atan2f(uStack_ec,SQRT(fVar24 * fVar24 + fVar20 * fVar20));
    fVar22 = *(float *)(param_1 + 0x2f8);
    fVar24 = (float)atan2f(fVar20,fVar24);
    if (((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x168) & 0x100000) != 0) ||
       (0.8 < *(float *)(DAT_08ac5928 + 0x30))) {
      fVar20 = *(float *)(param_1 + 0x2f4) - 0.01;
      fVar16 = -0.1;
      if (-0.1 <= fVar20) {
        fVar16 = fVar20;
      }
      *(float *)(param_1 + 0x2f4) = fVar16;
    }
    else {
      if (((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x168) & 0x200000) != 0) ||
         (*(float *)(DAT_08ac5928 + 0x30) < -0.8)) {
        fVar20 = *(float *)(param_1 + 0x2f4) + 0.01;
        if (fVar20 <= 0.1) {
          fVar16 = fVar20;
        }
      }
      else {
        fVar16 = *(float *)(param_1 + 0x2f4) * 0.75;
      }
      *(float *)(param_1 + 0x2f4) = fVar16;
    }
    uVar25 = vmul_s(fVar24 + fVar16,in_V7C);
    auVar4 = vrot_q(uVar25,1,0,2,0);
    uStack_124 = auVar4._12_4_;
    auVar1 = vscl_t(auVar4._0_12_,fVar26 + fVar21 * 0.4);
    vpfxs(2,1,0x10,3);
    auVar2 = vmov_t(auVar1);
    local_130 = auVar2._0_4_;
    uStack_12c = auVar2._4_4_;
    uStack_128 = auVar2._8_4_;
    if (*(int *)(param_1 + 0x304) == 1) {
      fVar16 = (float)atan2f(auVar1._8_4_,auVar1._0_4_);
      *(float *)(*(int *)(param_1 + 0x2a0) + 0x34) = fVar16 + 3.141593;
      fVar16 = *(float *)(param_1 + 0x2fc);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x2fc);
    }
    fVar16 = fVar16 + 0.1;
    if (1.0 < fVar16) {
      fVar16 = 1.0;
    }
    *(float *)(param_1 + 0x2fc) = fVar16;
    auVar10._4_4_ = uStack_12c;
    auVar10._0_4_ = local_130;
    auVar10._8_4_ = uStack_128;
    auVar9._4_4_ = uStack_12c;
    auVar9._0_4_ = local_130;
    auVar9._8_4_ = uStack_128;
    auVar2._4_4_ = uStack_12c;
    auVar2._0_4_ = local_130;
    auVar2._8_4_ = uStack_128;
    uVar25 = vdot_t(auVar2,auVar9);
    uVar27 = vcmp_s(8,uVar25,local_130);
    vrsq_s(uVar25);
    uVar25 = vcmovt_s(in_V7D,(byte)uVar27 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar10,uVar25);
    local_130 = auVar2._0_4_;
    uStack_12c = auVar2._4_4_;
    uStack_128 = auVar2._8_4_;
    uVar25 = vcst_s(6);
    uVar25 = vmul_s(uVar25,-fVar23 + (-fVar22 - -fVar23) * 0.2);
    uStack_114 = vcos_s(uVar25);
    uVar25 = vsin_s(uVar25);
    auVar2 = vscl_t(auVar2,uVar25);
    local_120 = auVar2._0_4_;
    uStack_11c = auVar2._4_4_;
    uStack_118 = auVar2._8_4_;
    auVar11._12_4_ = uStack_114;
    auVar11._0_12_ = auVar2;
    auVar3._12_4_ = uStack_114;
    auVar3._0_12_ = auVar2;
    vpfxs(0x10,0x11,0x12,3);
    auVar3 = vmov_q(auVar3);
    uVar25 = vmov_s(in_V73);
    auVar7._12_4_ = uVar25;
    auVar7._8_4_ = auVar1._8_4_;
    auVar7._4_4_ = auVar1._4_4_;
    auVar7._0_4_ = auVar1._0_4_;
    auVar4 = vqmul_q(auVar11,auVar7);
    auVar4 = vqmul_q(auVar4,auVar3);
    local_e0 = auVar4._0_4_;
    uStack_dc = auVar4._4_4_;
    uStack_d8 = auVar4._8_4_;
    uStack_d4 = auVar4._12_4_;
    uStack_e4 = *(undefined4 *)(param_1 + 0x2cc);
    auVar1 = vadd_t(*(undefined (*) [12])*pauVar17,auVar4._0_12_);
    local_f0 = auVar1._0_4_;
    uStack_ec = auVar1._4_4_;
    fStack_e8 = auVar1._8_4_;
    auVar13._12_4_ = uStack_e4;
    auVar13._0_12_ = auVar1;
    auVar4 = vsub_q(auVar13,*pauVar18);
    auVar4 = vscl_q(auVar4,fVar16 * fVar16);
    auVar4 = vadd_q(*pauVar18,auVar4);
    *(int *)*pauVar18 = auVar4._0_4_;
    *(int *)(param_1 + 0x54) = auVar4._4_4_;
    *(int *)(param_1 + 0x58) = auVar4._8_4_;
    *(int *)(param_1 + 0x5c) = auVar4._12_4_;
    auVar4 = vsub_q(*pauVar17,*pauVar19);
    auVar4 = vscl_q(auVar4,fVar16 * fVar16);
    auVar4 = vadd_q(*pauVar19,auVar4);
    *(int *)*pauVar19 = auVar4._0_4_;
    *(int *)(param_1 + 100) = auVar4._4_4_;
    *(int *)(param_1 + 0x68) = auVar4._8_4_;
    *(int *)(param_1 + 0x6c) = auVar4._12_4_;
    FUN_088baebc(param_1);
    return;
  }
  if (iVar15 < 0) {
    return;
  }
  iVar15 = *(int *)(param_1 + 0x2a0);
  uVar25 = *(undefined4 *)(iVar15 + 0x20);
  uVar27 = *(undefined4 *)(iVar15 + 0x28);
  uVar5 = *(undefined4 *)(iVar15 + 0x2c);
  fVar16 = *(float *)(iVar15 + 0x24) + DAT_08abd804;
  pauVar19 = (undefined (*) [16])(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)*pauVar19;
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2cc);
  auVar8._4_4_ = fVar16;
  auVar8._0_4_ = uVar25;
  auVar8._8_4_ = uVar27;
  auVar8._12_4_ = uVar5;
  auVar4 = vsub_q(auVar8,*pauVar19);
  auVar4 = vscl_q(auVar4,0x3eb33333);
  auVar4 = vadd_q(*pauVar19,auVar4);
  *(int *)*pauVar19 = auVar4._0_4_;
  *(int *)(param_1 + 0x2c4) = auVar4._4_4_;
  *(int *)(param_1 + 0x2c8) = auVar4._8_4_;
  *(int *)(param_1 + 0x2cc) = auVar4._12_4_;
  fVar16 = *(float *)(param_1 + 0x2f0) - (*(float *)(*(int *)(param_1 + 0x2a0) + 0x34) + 3.141593);
  fVar16 = fVar16 - (float)(int)(fVar16 * 0.3183099) * 6.283185;
  pauVar18 = (undefined (*) [16])(param_1 + 0x50);
  pauVar17 = (undefined (*) [16])(param_1 + 0x60);
  if (fVar16 < 0.0) {
    fVar16 = fVar16 + 6.283185;
  }
  if (3.141593 <= fVar16) {
    fVar16 = 6.283185 - fVar16;
  }
  else {
    fVar16 = -fVar16;
  }
  fVar16 = *(float *)(param_1 + 0x2f0) + fVar16 * 0.3;
  *(float *)(param_1 + 0x2f0) = fVar16;
  if (3.141593 < fVar16) {
    *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) - 6.283185;
  }
  else {
    if (-3.141593 < *(float *)(param_1 + 0x2f0)) {
      fVar16 = *(float *)(param_1 + 0x2f8);
      goto LAB_088bb80c;
    }
    *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) + 6.283185;
  }
  fVar16 = *(float *)(param_1 + 0x2f8);
LAB_088bb80c:
  *(float *)(param_1 + 0x2f8) = fVar16 + (0.122173 - fVar16) * 0.2;
  uStack_104 = *(undefined4 *)(param_1 + 0x5c);
  auVar1 = vsub_t(*(undefined (*) [12])*pauVar18,*(undefined (*) [12])*pauVar19);
  fVar16 = auVar1._0_4_;
  uStack_10c = auVar1._4_4_;
  fVar24 = auVar1._8_4_;
  uVar25 = vdot_t(auVar1,auVar1);
  local_48 = (float)vsqrt_s(uVar25);
  local_48 = local_48 + (*(float *)(param_1 + 0x308) - local_48) * 0.4;
  local_110 = fVar16;
  fStack_108 = fVar24;
  fVar20 = (float)atan2f(uStack_10c,SQRT(fVar16 * fVar16 + fVar24 * fVar24));
  local_44 = -fVar20 + (-*(float *)(param_1 + 0x2f8) - -fVar20) * 0.2;
  fVar16 = (float)atan2f(fVar24,fVar16);
  fVar24 = fVar16 - *(float *)(param_1 + 0x2f0);
  fVar24 = fVar24 - (float)(int)(fVar24 * 0.3183099) * 6.283185;
  if (fVar24 < 0.0) {
    fVar24 = fVar24 + 6.283185;
  }
  if (3.141593 <= fVar24) {
    fVar24 = 6.283185 - fVar24;
  }
  else {
    fVar24 = -fVar24;
  }
  uVar25 = vmul_s(0x40490fdb,in_V7C);
  local_a8 = (float)vcos_s(uVar25);
  fVar24 = (1.0 - local_a8) * 0.5 * fVar24 * 0.3;
  if (ABS(fVar24) < 0.01) {
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x168) & 0x1000000) == 0) {
      *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
    }
  }
  else if (0.04 < ABS(fVar24)) {
    fVar24 = *(float *)(param_1 + 0x2f4) - fVar24;
    fVar24 = fVar24 - (float)(int)(fVar24 * 0.3183099) * 6.283185;
    if (fVar24 < 0.0) {
      fVar24 = fVar24 + 6.283185;
    }
    if (3.141593 <= fVar24) {
      fVar24 = 6.283185 - fVar24;
    }
    else {
      fVar24 = -fVar24;
    }
    fVar24 = *(float *)(param_1 + 0x2f4) + fVar24 * 0.2;
    *(float *)(param_1 + 0x2f4) = fVar24;
    if (fVar24 < 0.0) {
      fVar24 = *(float *)(param_1 + 0x2f4);
      if (fVar24 < -0.8) {
        fVar24 = -0.8;
      }
    }
    else {
      fVar24 = *(float *)(param_1 + 0x2f4);
      if (0.8 < fVar24) {
        fVar24 = 0.8;
      }
    }
    *(float *)(param_1 + 0x2f4) = fVar24;
  }
  else {
    fVar24 = *(float *)(param_1 + 0x2f4) * 0.5;
    *(float *)(param_1 + 0x2f4) = fVar24;
    if (fVar24 < 0.0) {
      fVar24 = *(float *)(param_1 + 0x2f4);
      if (-0.03 < fVar24) {
        fVar24 = -0.03;
      }
      *(float *)(param_1 + 0x2f4) = fVar24;
    }
    else {
      fVar24 = 0.03;
      if (0.03 <= *(float *)(param_1 + 0x2f4)) {
        fVar24 = *(float *)(param_1 + 0x2f4);
      }
      *(float *)(param_1 + 0x2f4) = fVar24;
    }
  }
  uVar25 = vmul_s(fVar16 + *(float *)(param_1 + 0x2f4),in_V7C);
  auVar4 = vrot_q(uVar25,1,0,2,0);
  auVar1 = vscl_t(auVar4._0_12_,local_48);
  vpfxs(2,1,0x10,3);
  auVar2 = vmov_t(auVar1);
  fVar16 = *(float *)(param_1 + 0x2fc) + 0.1;
  if (1.0 < fVar16) {
    fVar16 = 1.0;
  }
  *(float *)(param_1 + 0x2fc) = fVar16;
  fVar16 = fVar16 * fVar16;
  uVar25 = vdot_t(auVar2,auVar2);
  uVar27 = vcmp_s(8,uVar25,auVar2._0_4_);
  vrsq_s(uVar25);
  uVar25 = vcmovt_s(in_V7D,(byte)uVar27 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar2,uVar25);
  local_130 = auVar2._0_4_;
  uStack_12c = auVar2._4_4_;
  uStack_128 = auVar2._8_4_;
  pauVar14 = (undefined (*) [16])FUN_08a29520(local_44,&local_120,&local_130);
  vpfxs(0x10,0x11,0x12,3);
  auVar3 = vmov_q(*pauVar14);
  uVar25 = vmov_s(in_V73);
  auVar6._12_4_ = uVar25;
  auVar6._8_4_ = auVar1._8_4_;
  auVar6._4_4_ = auVar1._4_4_;
  auVar6._0_4_ = auVar1._0_4_;
  auVar4 = vqmul_q(*pauVar14,auVar6);
  auVar4 = vqmul_q(auVar4,auVar3);
  local_100 = auVar4._0_4_;
  uStack_fc = auVar4._4_4_;
  uStack_f8 = auVar4._8_4_;
  uStack_f4 = auVar4._12_4_;
  uStack_104 = *(undefined4 *)(param_1 + 0x2cc);
  auVar1 = vadd_t(*(undefined (*) [12])*pauVar19,auVar4._0_12_);
  local_110 = auVar1._0_4_;
  uStack_10c = auVar1._4_4_;
  fStack_108 = auVar1._8_4_;
  auVar12._12_4_ = uStack_104;
  auVar12._0_12_ = auVar1;
  auVar4 = vsub_q(auVar12,*pauVar18);
  auVar4 = vscl_q(auVar4,fVar16);
  auVar4 = vadd_q(*pauVar18,auVar4);
  *(int *)*pauVar18 = auVar4._0_4_;
  *(int *)(param_1 + 0x54) = auVar4._4_4_;
  *(int *)(param_1 + 0x58) = auVar4._8_4_;
  *(int *)(param_1 + 0x5c) = auVar4._12_4_;
  auVar4 = vsub_q(*pauVar19,*pauVar17);
  auVar4 = vscl_q(auVar4,fVar16);
  auVar4 = vadd_q(*pauVar17,auVar4);
  *(int *)*pauVar17 = auVar4._0_4_;
  *(int *)(param_1 + 100) = auVar4._4_4_;
  *(int *)(param_1 + 0x68) = auVar4._8_4_;
  *(int *)(param_1 + 0x6c) = auVar4._12_4_;
  FUN_088baebc(param_1);
  return;
}

