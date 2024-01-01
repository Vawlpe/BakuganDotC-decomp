#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890b040(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [12];
  int iVar5;
  int iVar6;
  undefined (*pauVar7) [12];
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined *puVar16;
  float fVar17;
  undefined4 in_V7C;
  undefined auStack_1f0 [64];
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float local_d0;
  float local_cc;
  int local_c8;
  int local_60;
  undefined (*local_5c) [12];
  undefined (*local_58) [12];
  undefined (*local_54) [12];
  int local_50;
  int local_4c;
  int local_48;
  undefined *local_44;
  
  iVar9 = *(int *)(param_1 + 0x18);
  local_54 = (undefined (*) [12])(param_1 + 0x1e0);
  local_58 = (undefined (*) [12])(param_1 + 0x210);
  iVar13 = 0;
  uVar15 = 1;
  if (iVar9 < 0x12) {
    if (0x10 < iVar9) {
      iVar13 = 0;
      uVar15 = 1;
    }
  }
  else if (iVar9 < 0x13) {
    iVar13 = 1;
    uVar15 = 1;
  }
  else if (iVar9 < 0x14) {
    iVar13 = 2;
    uVar15 = 4;
  }
  uVar8 = FUN_089f2178(0x44bb8000);
  FUN_089f1458(uVar8);
  FUN_089f303c(uVar8,&DAT_08a9b468 + iVar13 * 10,&DAT_08a9b488 + iVar13 * 0x14,uVar15,1);
  FUN_089f4944(*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x20));
  FUN_089f494c(*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x20));
  fVar17 = *(float *)(param_1 + 0x1cc) + 0.005;
  *(float *)(param_1 + 0x1cc) = fVar17;
  fVar17 = fVar17 * 0.2 + 1.0;
  FUN_089f4954(fVar17,fVar17,0,*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x20),0);
  uVar15 = vmul_s(*(float *)(param_1 + 0x1cc) * 12.0 * 3.141593,in_V7C);
  local_d0 = (float)vcos_s(uVar15);
  *(float *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x24) + 0xbc) =
       (1.0 - local_d0) * 0.5 * 0.4 + 0.6;
  local_c8 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 4);
  iVar9 = *(int *)(param_1 + 0x1d8);
  local_5c = (undefined (*) [12])(local_c8 + 0x90);
  if (iVar9 < 1) {
    if (-1 < iVar9) {
      if (*(float *)(param_1 + 0x200) < 0.0) {
        if (-0.5 <= *(float *)(param_1 + 0x1f0)) {
          *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x200);
          fVar17 = *(float *)(param_1 + 0x1e0);
        }
        else {
          fVar17 = *(float *)(param_1 + 0x1e0);
        }
        fVar17 = fVar17 + *(float *)(param_1 + 0x1f0);
        *(float *)(param_1 + 0x1e0) = fVar17;
        if (fVar17 <= -40.0) {
          *(float *)(param_1 + 0x200) = -*(float *)(param_1 + 0x200);
        }
        if (-0.06283186 < *(float *)(local_c8 + 0x88)) {
          *(float *)(local_c8 + 0x88) = *(float *)(local_c8 + 0x88) - 0.001570796;
        }
      }
      else {
        if (*(float *)(param_1 + 0x1f0) <= 0.5) {
          *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x200);
          fVar17 = *(float *)(param_1 + 0x1e0);
        }
        else {
          fVar17 = *(float *)(param_1 + 0x1e0);
        }
        fVar17 = fVar17 + *(float *)(param_1 + 0x1f0);
        *(float *)(param_1 + 0x1e0) = fVar17;
        if (60.0 <= fVar17) {
          *(float *)(param_1 + 0x200) = -*(float *)(param_1 + 0x200);
        }
        if (*(float *)(local_c8 + 0x88) < 0.06283186) {
          *(float *)(local_c8 + 0x88) = *(float *)(local_c8 + 0x88) + 0.001570796;
        }
      }
      if (*(float *)(param_1 + 0x204) < 0.0) {
        if (-0.2 <= *(float *)(param_1 + 500)) {
          *(float *)(param_1 + 500) = *(float *)(param_1 + 500) + *(float *)(param_1 + 0x204);
          fVar17 = *(float *)(param_1 + 0x1e4);
        }
        else {
          fVar17 = *(float *)(param_1 + 0x1e4);
        }
        fVar17 = fVar17 + *(float *)(param_1 + 500);
        *(float *)(param_1 + 0x1e4) = fVar17;
        if (fVar17 <= -10.0) {
          *(float *)(param_1 + 0x204) = -*(float *)(param_1 + 0x204);
        }
      }
      else {
        if (*(float *)(param_1 + 500) <= 0.2) {
          *(float *)(param_1 + 500) = *(float *)(param_1 + 500) + *(float *)(param_1 + 0x204);
          fVar17 = *(float *)(param_1 + 0x1e4);
        }
        else {
          fVar17 = *(float *)(param_1 + 0x1e4);
        }
        fVar17 = fVar17 + *(float *)(param_1 + 500);
        *(float *)(param_1 + 0x1e4) = fVar17;
        if (5.0 <= fVar17) {
          *(float *)(param_1 + 0x204) = -*(float *)(param_1 + 0x204);
        }
      }
      fVar17 = *(float *)(WeirdBuff + 0x34);
      if ((fVar17 < 0.0) && (fVar17 = fVar17 + 0.2, 0.0 < fVar17)) {
        fVar17 = 0.0;
      }
      if ((0.0 < fVar17) && (fVar17 = fVar17 - 0.2, fVar17 < 0.0)) {
        fVar17 = 0.0;
      }
      fVar17 = *(float *)(param_1 + 0x220) - fVar17 * 0.003;
      *(float *)(param_1 + 0x220) = fVar17;
      if (fVar17 < -0.3926991) {
        fVar12 = -0.3926991;
      }
      else {
        fVar12 = 0.3926991;
        if (fVar17 <= 0.3926991) {
          fVar12 = fVar17;
        }
      }
      *(float *)(param_1 + 0x220) = fVar12;
      uVar15 = vmul_s(fVar12 * 3.141593 + 1.570796,in_V7C);
      local_cc = (float)vcos_s(uVar15);
      *(float *)(param_1 + 0x214) = local_cc * 50.0;
    }
  }
  else if (iVar9 < 2) {
    if (*(float *)(local_c8 + 0x88) != 0.0) {
      *(float *)(local_c8 + 0x88) = *(float *)(local_c8 + 0x88) * 0.3;
    }
    iVar9 = *(int *)(param_1 + 0x1d4) + 1;
    *(int *)(param_1 + 0x1d4) = iVar9;
    *(float *)(param_1 + 0x1e4) = *(float *)(param_1 + 0x1e4) + 4.0;
    if (5 < iVar9) {
      *(undefined4 *)(param_1 + 0x1f0) = 0xc1000000;
      *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    }
  }
  else if (iVar9 < 3) {
    if (-70.0 < *(float *)(param_1 + 0x1e4)) {
      *(float *)(param_1 + 0x1e4) = *(float *)(param_1 + 0x1e4) - 8.0;
      fVar17 = *(float *)(param_1 + 0x1f0);
    }
    else {
      fVar17 = *(float *)(param_1 + 0x1f0);
    }
    if (fVar17 < 0.0) {
      if (*(float *)(param_1 + 0x1e0) < -50.0) {
        *(undefined4 *)(param_1 + 0x1f0) = 0x41000000;
      }
      fVar17 = *(float *)(param_1 + 0x1e0);
    }
    else {
      fVar17 = *(float *)(param_1 + 0x1e0);
    }
    *(float *)(param_1 + 0x1e0) = fVar17 + *(float *)(param_1 + 0x1f0);
    *(float *)(local_c8 + 0x80) = *(float *)(local_c8 + 0x80) - 0.05;
    *(float *)(local_c8 + 0x84) = *(float *)(local_c8 + 0x84) - 0.05;
    if (*(float *)(local_c8 + 0x80) < 0.0) {
      *(undefined4 *)(local_c8 + 0x80) = 0;
      *(undefined4 *)(local_c8 + 0x84) = 0;
    }
  }
  *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x220) * 0.99;
  uVar15 = *(undefined4 *)(local_c8 + 0x68);
  auVar1 = vadd_t(*local_5c,*local_54);
  auVar1 = vadd_t(auVar1,*local_58);
  *(int *)(local_c8 + 0x60) = auVar1._0_4_;
  *(int *)(local_c8 + 100) = auVar1._4_4_;
  *(int *)(local_c8 + 0x68) = auVar1._8_4_;
  *(undefined4 *)(local_c8 + 0x6c) = *(undefined4 *)(local_c8 + 0x9c);
  *(undefined4 *)(local_c8 + 0x68) = uVar15;
  local_60 = param_1;
  FUN_089f4954(*(undefined4 *)(local_c8 + 0x80),*(undefined4 *)(local_c8 + 0x84),
               *(undefined4 *)(local_c8 + 0x88),local_c8,0);
  iVar13 = 0;
  iVar9 = 0;
  do {
    iVar5 = local_c8;
    iVar14 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar9 + 8);
    pfVar10 = (float *)(iVar14 + 0x80);
    pfVar11 = (float *)(iVar14 + 0x84);
    if (*(int *)(local_60 + 0x1d0) < 6) {
      *pfVar10 = *pfVar10 + 0.05;
      *pfVar11 = *pfVar11 - 0.02;
    }
    else {
      *pfVar10 = *pfVar10 - 0.05;
      *pfVar11 = *pfVar11 + 0.02;
    }
    local_50 = iVar9;
    local_4c = iVar13;
    FUN_089f4954(*(float *)(iVar14 + 0x80) * *(float *)(local_c8 + 0x80),
                 *(float *)(iVar14 + 0x84) * *(float *)(local_c8 + 0x84),
                 *(float *)(iVar14 + 0x88) + *(float *)(local_c8 + 0x88),iVar14,0);
    pauVar7 = local_5c;
    local_168 = 0;
    local_16c = 0;
    local_170 = 0;
    local_164 = 0;
    uStack_1a4 = *(undefined4 *)(iVar14 + 0x9c);
    auVar1 = vsub_t(*(undefined (*) [12])(iVar14 + 0x90),*local_5c);
    local_1b0 = auVar1._0_4_;
    uStack_1ac = auVar1._4_4_;
    uStack_1a8 = auVar1._8_4_;
    uVar15 = vdot_t(auVar1,auVar1);
    uVar15 = vsqrt_s(uVar15);
    local_160 = local_1b0;
    local_15c = uStack_1ac;
    uStack_158 = uStack_1a8;
    uStack_154 = uStack_1a4;
    fVar17 = (float)atan2f(uStack_1ac,local_1b0);
    iVar6 = local_60;
    uVar8 = vmul_s(*(float *)(iVar5 + 0x88) + fVar17,in_V7C);
    auVar3 = vrot_q(uVar8,1,2,0,0);
    auVar2 = vscl_t(auVar3._0_12_,uVar15);
    local_150 = auVar2._0_4_;
    local_14c = auVar2._4_4_;
    local_148 = auVar2._8_4_;
    auVar1._4_4_ = local_15c;
    auVar1._0_4_ = local_160;
    auVar1._8_4_ = uStack_158;
    auVar1 = vsub_t(auVar2,auVar1);
    local_170 = auVar1._0_4_;
    local_16c = auVar1._4_4_;
    local_168 = auVar1._8_4_;
    uVar15 = *(undefined4 *)(iVar14 + 0x68);
    uStack_1a4 = *(undefined4 *)pauVar7[1];
    auVar1 = vadd_t(*pauVar7,*local_54);
    local_190 = auVar1._0_4_;
    uStack_18c = auVar1._4_4_;
    uStack_188 = auVar1._8_4_;
    auVar1 = vadd_t(auVar1,*local_58);
    local_1a0 = auVar1._0_4_;
    uStack_19c = auVar1._4_4_;
    uStack_198 = auVar1._8_4_;
    auVar2 = vscl_t(auVar2,*(undefined4 *)(iVar5 + 0x80));
    local_180 = auVar2._0_4_;
    uStack_17c = auVar2._4_4_;
    uStack_178 = auVar2._8_4_;
    auVar1 = vadd_t(auVar1,auVar2);
    local_1b0 = auVar1._0_4_;
    uStack_1ac = auVar1._4_4_;
    uStack_1a8 = auVar1._8_4_;
    *(undefined4 *)(iVar14 + 0x60) = local_1b0;
    *(undefined4 *)(iVar14 + 100) = uStack_1ac;
    *(undefined4 *)(iVar14 + 0x68) = uStack_1a8;
    *(undefined4 *)(iVar14 + 0x6c) = uStack_1a4;
    *(undefined4 *)(iVar14 + 0x68) = uVar15;
    iVar13 = local_4c + 1;
    iVar9 = local_50 + 4;
    uStack_194 = uStack_1a4;
    uStack_184 = uStack_1a4;
  } while (iVar13 < 4);
  iVar9 = *(int *)(local_60 + 0x1d0) + 1;
  *(int *)(local_60 + 0x1d0) = iVar9;
  if (0xb < iVar9) {
    *(undefined4 *)(local_60 + 0x1d0) = 0;
  }
  puVar16 = auStack_1f0;
  FUN_089b4c84(puVar16,"propeller_%02d",*(int *)(local_60 + 0x224) / 2);
  local_48 = 0;
  local_50 = 0;
  *(int *)(iVar6 + 0x224) = (*(int *)(iVar6 + 0x224) + 1) % 6;
  do {
    iVar9 = local_c8;
    iVar13 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + local_50 + 0x44);
    local_44 = puVar16;
    FUN_089f4954(*(float *)(iVar13 + 0x80) * *(float *)(local_c8 + 0x80),
                 *(float *)(iVar13 + 0x84) * *(float *)(local_c8 + 0x84),
                 *(float *)(iVar13 + 0x88) + *(float *)(local_c8 + 0x88),iVar13,0);
    pauVar7 = local_5c;
    uStack_134 = *(undefined4 *)(iVar13 + 0x9c);
    auVar1 = vsub_t(*(undefined (*) [12])(iVar13 + 0x90),*local_5c);
    local_140 = auVar1._0_4_;
    uStack_13c = auVar1._4_4_;
    uStack_138 = auVar1._8_4_;
    uVar15 = vdot_t(auVar1,auVar1);
    uVar15 = vsqrt_s(uVar15);
    local_100 = local_140;
    local_fc = uStack_13c;
    uStack_f8 = uStack_138;
    uStack_f4 = uStack_134;
    fVar17 = (float)atan2f(uStack_13c,local_140);
    puVar16 = local_44;
    uVar8 = vmul_s(*(float *)(iVar9 + 0x88) + fVar17,in_V7C);
    auVar3 = vrot_q(uVar8,1,2,0,0);
    auVar2 = vscl_t(auVar3._0_12_,uVar15);
    local_f0 = auVar2._0_4_;
    local_ec = auVar2._4_4_;
    local_e8 = auVar2._8_4_;
    auVar4._4_4_ = local_fc;
    auVar4._0_4_ = local_100;
    auVar4._8_4_ = uStack_f8;
    auVar1 = vsub_t(auVar2,auVar4);
    local_e0 = auVar1._0_4_;
    uStack_dc = auVar1._4_4_;
    uStack_d8 = auVar1._8_4_;
    uVar15 = *(undefined4 *)(iVar13 + 0x68);
    uStack_134 = *(undefined4 *)pauVar7[1];
    auVar1 = vadd_t(*pauVar7,*local_54);
    local_120 = auVar1._0_4_;
    uStack_11c = auVar1._4_4_;
    uStack_118 = auVar1._8_4_;
    auVar1 = vadd_t(auVar1,*local_58);
    local_130 = auVar1._0_4_;
    uStack_12c = auVar1._4_4_;
    uStack_128 = auVar1._8_4_;
    auVar2 = vscl_t(auVar2,*(undefined4 *)(iVar9 + 0x80));
    local_110 = auVar2._0_4_;
    uStack_10c = auVar2._4_4_;
    uStack_108 = auVar2._8_4_;
    auVar1 = vadd_t(auVar1,auVar2);
    local_140 = auVar1._0_4_;
    uStack_13c = auVar1._4_4_;
    uStack_138 = auVar1._8_4_;
    *(undefined4 *)(iVar13 + 0x60) = local_140;
    *(undefined4 *)(iVar13 + 100) = uStack_13c;
    *(undefined4 *)(iVar13 + 0x68) = uStack_138;
    *(undefined4 *)(iVar13 + 0x6c) = uStack_134;
    *(undefined4 *)(iVar13 + 0x68) = uVar15;
    uStack_124 = uStack_134;
    uStack_114 = uStack_134;
    uVar15 = FUN_089f7720(local_44);
    *(undefined4 *)(iVar13 + 0xd4) = uVar15;
    local_48 = local_48 + 1;
    local_50 = local_50 + 4;
  } while (local_48 < 4);
  return;
}

