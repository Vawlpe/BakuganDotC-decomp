#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08849544(int param_1)

{
  bool bVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [16];
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined auVar10 [12];
  undefined auVar12 [16];
  bool bVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [12];
  undefined auVar21 [12];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined (*pauVar24) [12];
  undefined (*pauVar25) [16];
  int iVar26;
  int iVar27;
  undefined (*pauVar28) [16];
  float fVar29;
  undefined (*pauVar30) [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar42;
  float local_19c;
  undefined auStack_190 [4];
  float local_18c;
  float local_188;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_150;
  float local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  float local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_ec;
  float local_e8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_88;
  float local_60;
  float local_5c;
  undefined (*local_58) [12];
  float local_54;
  undefined (*local_50) [16];
  undefined auVar11 [12];
  
  if (*(int *)(param_1 + 0x2a0) == 0) {
    return;
  }
  iVar26 = FUN_08860344(*(undefined4 *)(param_1 + 0x2a0));
  if (iVar26 == 0) {
    FUN_088474a0(param_1,0);
    return;
  }
  iVar26 = FUN_08860344(*(undefined4 *)(param_1 + 0x2a0));
  local_5c = 1.2;
  local_58 = (undefined (*) [12])(param_1 + 0x2b0);
  local_50 = (undefined (*) [16])(param_1 + 0x50);
  pauVar30 = (undefined (*) [16])(param_1 + 0x2d0);
  if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x144) & 0x4400000) == 0) {
    iVar27 = *(int *)(param_1 + 0x34c);
  }
  else {
    *(undefined4 *)(param_1 + 0x34c) = 0x10;
    iVar27 = *(int *)(param_1 + 0x34c);
  }
  if (iVar27 == 0) {
    *(undefined *)(param_1 + 0x324) = 0;
    if (*(int *)(param_1 + 0x2a4) == iVar26) {
      fVar33 = *(float *)(param_1 + 0x318) - 0.05;
    }
    else {
      fVar33 = 0.0;
    }
    *(float *)(param_1 + 0x318) = fVar33;
  }
  else {
    *(int *)(param_1 + 0x34c) = *(int *)(param_1 + 0x34c) + -1;
    *(undefined *)(param_1 + 0x324) = 1;
    if (*(int *)(param_1 + 0x2a4) == iVar26) {
      fVar33 = *(float *)(param_1 + 0x318) + 0.05;
    }
    else {
      fVar33 = 1.0;
    }
    *(float *)(param_1 + 0x318) = fVar33;
  }
  uVar41 = vmin_s(*(undefined4 *)(param_1 + 0x318),in_V7F);
  local_130 = vmax_s(uVar41,in_V7D);
  *(undefined4 *)(param_1 + 0x318) = local_130;
  if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x144) & 0x4000000) == 0) {
    fVar33 = *(float *)(param_1 + 0x31c) - 0.05;
  }
  else {
    fVar33 = *(float *)(param_1 + 0x31c) + 0.1;
  }
  *(float *)(param_1 + 0x31c) = fVar33;
  uVar41 = vmin_s(fVar33,in_V7F);
  local_12c = vmax_s(uVar41,in_V7D);
  *(undefined4 *)(param_1 + 0x31c) = local_12c;
  bVar1 = DAT_08aba77f == '\0';
  if (bVar1) {
    *(undefined4 *)(param_1 + 800) = 0x3f800000;
    if (*(int *)(param_1 + 0x2a4) == iVar26) {
      fVar33 = *(float *)(param_1 + 800) + 0.05;
    }
    else {
      fVar33 = 1.0;
    }
    *(float *)(param_1 + 800) = fVar33;
LAB_0884980c:
    *(int *)(param_1 + 0x2a4) = iVar26;
  }
  else {
    if (*(int *)(param_1 + 0x2a4) != iVar26) {
      *(undefined4 *)(param_1 + 800) = 0;
      goto LAB_0884980c;
    }
    if (0.0 < *(float *)(param_1 + 800)) {
      *(float *)(param_1 + 800) = *(float *)(param_1 + 800) - 0.05;
      goto LAB_0884980c;
    }
    if (*(float *)(param_1 + 800) < 0.0) {
      *(float *)(param_1 + 800) = *(float *)(param_1 + 800) + 0.05;
      goto LAB_0884980c;
    }
    *(int *)(param_1 + 0x2a4) = iVar26;
  }
  uVar41 = *(undefined4 *)(iVar26 + 0x20);
  local_19c = *(float *)(iVar26 + 0x24);
  uVar42 = *(undefined4 *)(iVar26 + 0x28);
  uVar8 = *(undefined4 *)(iVar26 + 0x2c);
  if (*(int *)(iVar26 + 8) == 0x22) {
    local_19c = local_19c - 100.0;
    iVar27 = *(int *)(param_1 + 0x2a0);
  }
  else {
    iVar27 = *(int *)(param_1 + 0x2a0);
  }
  auVar4._4_4_ = local_19c;
  auVar4._0_4_ = uVar41;
  auVar4._8_4_ = uVar42;
  auVar4._12_4_ = uVar8;
  auVar4 = vsub_q(auVar4,*(undefined (*) [16])(iVar27 + 0x20));
  uVar40 = vzero_s();
  auVar2._8_4_ = auVar4._8_4_;
  auVar2._4_4_ = uVar40;
  auVar2._0_4_ = auVar4._0_4_;
  auVar3._8_4_ = auVar4._8_4_;
  auVar3._4_4_ = uVar40;
  auVar3._0_4_ = auVar4._0_4_;
  uVar40 = vdot_t(auVar2,auVar3);
  fVar33 = (float)vsqrt_s(uVar40);
  if (fVar33 * 0.0007692308 <= 1.2) {
    local_5c = fVar33 * 0.0007692308;
  }
  local_5c = 1.2 - local_5c;
  if (1.0 < local_5c) {
    local_5c = 1.0;
  }
  fVar34 = local_19c - *(float *)(*(int *)(param_1 + 0x2a0) + 0x24);
  if (0.0 < fVar34) {
    if (800.0 < fVar33) {
      fVar33 = (fVar33 - 800.0) * 0.0008;
      if (1.0 < fVar33) {
        fVar33 = 0.8;
      }
      else {
        fVar33 = fVar33 * 0.8;
      }
      local_19c = local_19c - fVar33 * fVar34;
      iVar27 = *(int *)(param_1 + 0x2a0);
    }
    else {
      iVar27 = *(int *)(param_1 + 0x2a0);
    }
  }
  else {
    iVar27 = *(int *)(param_1 + 0x2a0);
  }
  fVar34 = (local_19c - *(float *)(iVar27 + 0x24)) * 0.1;
  fVar33 = *(float *)(*(int *)(param_1 + 0x400) + 0xc);
  if (fVar34 < -100.0) {
    fVar33 = -100.0;
  }
  else if (fVar34 <= fVar33) {
    fVar33 = fVar34;
  }
  if (fVar33 < 0.0) {
    fVar33 = fVar33 * 0.5;
  }
  fVar33 = local_5c * fVar33;
  *(float *)(param_1 + 0x314) =
       *(float *)(param_1 + 0x314) +
       ((*(float *)(*(int *)(param_1 + 0x400) + 0xc) - fVar33) - *(float *)(param_1 + 0x314)) * 0.1;
  iVar27 = *(int *)(param_1 + 0x2a0);
  fVar34 = *(float *)(iVar27 + 0x20);
  fVar6 = *(float *)(iVar27 + 0x28);
  uVar9 = *(undefined4 *)(iVar27 + 0x2c);
  fVar35 = *(float *)(iVar27 + 0x24) + *(float *)(param_1 + 0x314);
  uVar40 = *(undefined4 *)(*(int *)(param_1 + 0x2a0) + 0x80);
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x2a0) + 0x88);
  uVar39 = vzero_s();
  auVar10._8_4_ = uVar7;
  auVar10._4_4_ = uVar39;
  auVar10._0_4_ = uVar40;
  auVar11._8_4_ = uVar7;
  auVar11._4_4_ = uVar39;
  auVar11._0_4_ = uVar40;
  fVar38 = (float)vdot_t(auVar10,auVar11);
  bVar13 = false;
  local_54 = 0.0;
  iVar27 = *(int *)(param_1 + 0x2a0);
  local_150 = *(undefined4 *)(iVar27 + 0x20);
  uStack_148 = *(undefined4 *)(iVar27 + 0x28);
  uStack_144 = *(undefined4 *)(iVar27 + 0x2c);
  local_14c = *(float *)(iVar27 + 0x24) + *(float *)(*(int *)(param_1 + 0x400) + 0xc);
  FUN_089e3584(param_1,auStack_190);
  fVar29 = 0.2;
  if ((int)(0.67 - local_188) < 1) {
    fVar36 = 0.0;
  }
  else {
    fVar36 = (0.67 - local_188) * 10.0;
  }
  if (0.0 < fVar36) {
    local_54 = (fVar36 - 0.4) * 10.0;
    if ((int)local_54 < 1) {
      local_54 = 0.0;
    }
    if (fVar36 * 0.08 <= 0.2) {
      fVar29 = fVar36 * 0.08;
    }
    if (fVar38 > 841.0) {
      fVar29 = fVar29 * 3.0;
    }
    bVar13 = true;
    fVar36 = *(float *)(param_1 + 0x310) + fVar36 * 0.1;
    *(float *)(param_1 + 0x334) = *(float *)(param_1 + 0x334) - fVar29;
    if (1.0 < fVar36) {
      fVar36 = 1.0;
    }
    *(float *)(param_1 + 0x310) = fVar36;
  }
  if (bVar13) {
    local_104 = *(float *)(param_1 + 0x338) * 0.92;
  }
  else {
    uVar40 = vmin_s(*(float *)(param_1 + 0x338) + 0.03333334,in_V7F);
    local_108 = (float)vmax_s(uVar40,in_V7D);
    local_104 = local_108;
  }
  *(float *)(param_1 + 0x338) = local_104;
  uVar40 = vmul_s(local_104 * 3.141593,in_V7C);
  local_100 = (float)vcos_s(uVar40);
  fVar29 = *(float *)(param_1 + 0x334) + (1.0 - local_100) * 0.5 * 0.2;
  *(float *)(param_1 + 0x334) = fVar29;
  uVar40 = vmin_s(fVar29,in_V7F);
  local_fc = vmax_s(uVar40,in_V7D);
  *(undefined4 *)(param_1 + 0x334) = local_fc;
  if (fVar38 <= 841.0) {
    if (!bVar13) {
      *(float *)(param_1 + 0x310) = *(float *)(param_1 + 0x310) * 0.9;
    }
  }
  else {
    fVar29 = *(float *)(param_1 + 0x310) + 0.1;
    if (1.0 < fVar29) {
      fVar29 = 1.0;
    }
    *(float *)(param_1 + 0x310) = fVar29;
  }
  fVar29 = *(float *)(param_1 + 0x310) * 0.6 + 0.35;
  if ((((*(char *)(*(int *)(param_1 + 0x2a0) + 0x194) == '\0') ||
       ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x144) & 0x40000) != 0)) ||
      ((*(uint *)(iVar26 + 0x144) & 0x40000) != 0)) ||
     (((15.0 < fVar33 || (*(int *)(*(int *)(param_1 + 0x2a0) + 0x140) == 0xb)) ||
      (bVar13 = false, *(int *)(iVar26 + 0x140) == 0xb)))) {
    bVar13 = true;
  }
  if (bVar13) {
    uVar40 = *(undefined4 *)(*local_58 + 4);
    uVar7 = *(undefined4 *)(*local_58 + 8);
    uVar39 = *(undefined4 *)local_58[1];
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)*local_58;
    *(undefined4 *)(param_1 + 0x2c4) = uVar40;
    *(undefined4 *)(param_1 + 0x2c8) = uVar7;
    *(undefined4 *)(param_1 + 0x2cc) = uVar39;
    *(float *)(param_1 + 0x2b0) =
         *(float *)(param_1 + 0x2b0) + (fVar34 - *(float *)(param_1 + 0x2b0)) * fVar29;
    *(float *)(param_1 + 0x2b8) =
         *(float *)(param_1 + 0x2b8) + (fVar6 - *(float *)(param_1 + 0x2b8)) * fVar29;
    fVar33 = fVar29 * 0.6;
    if (230.0 < local_18c) {
      fVar33 = fVar29 * ((local_18c - 230.0) * 0.008 + 0.6);
      if (1.0 < fVar33) {
        fVar33 = 1.0;
      }
      fVar38 = *(float *)(param_1 + 0x2b4);
    }
    else {
      iVar26 = *(int *)(param_1 + 0x2a0);
      local_140 = *(undefined4 *)(iVar26 + 0x20);
      uStack_138 = *(undefined4 *)(iVar26 + 0x28);
      uStack_134 = *(undefined4 *)(iVar26 + 0x2c);
      local_13c = *(float *)(iVar26 + 0x24) + *(float *)(*(int *)(param_1 + 0x2a0) + 0x17c);
      FUN_089e3584(param_1,auStack_190);
      if (local_18c < 30.0) {
        fVar33 = fVar29 * ((30.0 - local_18c) * 0.008 + 0.6);
        if (1.0 < fVar33) {
          fVar33 = 1.0;
        }
        fVar38 = *(float *)(param_1 + 0x2b4);
      }
      else {
        fVar38 = *(float *)(param_1 + 0x2b4);
      }
    }
    *(float *)(param_1 + 0x2b4) = fVar38 + (fVar35 - fVar38) * fVar33;
  }
  pauVar25 = local_50;
  pauVar24 = local_58;
  fVar33 = *(float *)(param_1 + 800);
  if (1.0 < fVar33) {
    fVar33 = 1.0;
LAB_08849e9c:
    *(float *)(param_1 + 800) = fVar33;
  }
  else {
    if (fVar33 < -1.0) {
      fVar33 = -1.0;
      goto LAB_08849e9c;
    }
    *(float *)(param_1 + 800) = fVar33;
  }
  uVar40 = vmul_s(fVar33 * fVar33 * 3.141593,in_V7C);
  local_ec = (float)vcos_s(uVar40);
  fVar38 = (1.0 - local_ec) * 0.5;
  if (fVar33 < 0.0) {
    fVar38 = -fVar38;
  }
  uVar40 = vmul_s(*(float *)(param_1 + 0x334) * 3.141593,in_V7C);
  local_e8 = (float)vcos_s(uVar40);
  fVar33 = (1.0 - local_e8) * 0.5 * 0.2 + 0.05 + fVar38 * 0.25;
  local_60 = 1.0 - fVar38;
  if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x148) & 8) != 0) {
    fVar33 = 1.0;
  }
  pauVar28 = (undefined (*) [16])(*(int *)(param_1 + 0x2a0) + 0x20);
  auVar5._4_4_ = local_19c;
  auVar5._0_4_ = uVar41;
  auVar5._8_4_ = uVar42;
  auVar5._12_4_ = uVar8;
  auVar4 = vsub_q(auVar5,*pauVar28);
  auVar4 = vscl_q(auVar4,fVar33);
  auVar4 = vadd_q(*pauVar28,auVar4);
  fVar33 = auVar4._4_4_ + *(float *)(param_1 + 0x314);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)*pauVar30;
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x2dc);
  if (bVar13) {
    if (*(char *)(*(int *)(param_1 + 0x2a0) + 0x194) != '\0') {
      iVar26 = *(int *)(param_1 + 0x2a0);
      goto LAB_08849fec;
    }
    auVar16._4_4_ = fVar33;
    auVar16._0_4_ = auVar4._0_4_;
    auVar16._8_4_ = auVar4._8_4_;
    auVar16._12_4_ = auVar4._12_4_;
    auVar4 = vsub_q(auVar16,*pauVar30);
    auVar4 = vscl_q(auVar4,fVar29);
    auVar4 = vadd_q(*pauVar30,auVar4);
    *(int *)*pauVar30 = auVar4._0_4_;
    *(int *)(param_1 + 0x2d4) = auVar4._4_4_;
    *(int *)(param_1 + 0x2d8) = auVar4._8_4_;
    *(int *)(param_1 + 0x2dc) = auVar4._12_4_;
  }
  else {
    iVar26 = *(int *)(param_1 + 0x2a0);
LAB_08849fec:
    auVar17._4_4_ = fVar33;
    auVar17._0_4_ = auVar4._0_4_;
    auVar17._8_4_ = auVar4._8_4_;
    auVar17._12_4_ = auVar4._12_4_;
    auVar4 = vsub_q(auVar17,*pauVar30);
    auVar4 = vscl_q(auVar4,fVar29 * *(float *)(iVar26 + 400) * 0.1);
    auVar4 = vadd_q(*pauVar30,auVar4);
    *(int *)*pauVar30 = auVar4._0_4_;
    *(int *)(param_1 + 0x2d4) = auVar4._4_4_;
    *(int *)(param_1 + 0x2d8) = auVar4._8_4_;
    *(int *)(param_1 + 0x2dc) = auVar4._12_4_;
  }
  auVar2 = vsub_t(*(undefined (*) [12])*pauVar30,*local_58);
  fVar33 = 1.22173;
  if (*(char *)(param_1 + 0x324) != '\0') {
    fVar33 = DAT_08aba758 + 1.22173;
  }
  auVar3 = vsub_t(*local_58,*(undefined (*) [12])*local_50);
  fVar36 = (float)atan2f(auVar3._8_4_,auVar3._0_4_);
  fVar31 = (float)atan2f(auVar2._8_4_,auVar2._0_4_);
  fVar31 = (fVar36 - fVar31) - (float)(int)((fVar36 - fVar31) * 0.3183099) * 6.283185;
  if (fVar31 < 0.0) {
    fVar31 = fVar31 + 6.283185;
  }
  if (3.141593 <= fVar31) {
    fVar31 = 6.283185 - fVar31;
  }
  else {
    fVar31 = -fVar31;
  }
  uVar41 = vmul_s(*(float *)(param_1 + 0x318) * 3.141593,in_V7C);
  local_bc = (float)vcos_s(uVar41);
  fVar32 = 1.0 - (1.0 - local_bc) * 0.5 * 0.3;
  fVar37 = (1.396263 - (1.0 - local_5c) * 1.396263 * 0.7) * fVar32;
  fVar33 = (fVar33 - fVar33 * (1.0 - local_5c) * 0.7) * fVar32;
  uVar41 = vmin_s(fVar29 + fVar32 * 0.5,in_V7F);
  local_b8 = (float)vmax_s(uVar41,in_V7D);
  if (fVar31 < 0.0) {
    fVar29 = fVar38 * (fVar36 + (fVar31 + 1.815142) * local_b8 * 0.5);
    if (-fVar37 <= fVar31) {
      if (((-fVar33 < fVar31) && (!bVar1)) && (*(char *)(param_1 + 0x324) != '\0')) {
        uVar41 = vmin_s(fVar31 + fVar33,in_V7F);
        local_b0 = (float)vmax_s(uVar41,in_V7D);
        uVar41 = vmul_s(*(float *)(param_1 + 0x318) * 3.141593,in_V7C);
        local_ac = (float)vcos_s(uVar41);
        fVar36 = fVar36 - (-fVar31 - fVar33) * local_b8 * local_b0 * 3.0 * (1.0 - local_ac) * 0.5;
      }
    }
    else {
      uVar41 = vmin_s(fVar37 - fVar31,in_V7F);
      local_b4 = (float)vmax_s(uVar41,in_V7D);
      fVar36 = fVar36 + (fVar31 + fVar37) * local_b8 * local_b4;
    }
  }
  else {
    fVar29 = fVar38 * (fVar36 + (fVar31 - 1.815142) * local_b8 * 0.5);
    if (fVar37 < fVar31) {
      uVar41 = vmin_s(fVar31 - fVar37,in_V7F);
      local_a8 = (float)vmax_s(uVar41,in_V7D);
      fVar36 = fVar36 + (fVar31 - fVar37) * local_b8 * local_a8;
    }
    else if (((fVar31 < fVar33) && (!bVar1)) && (*(char *)(param_1 + 0x324) != '\0')) {
      uVar41 = vmin_s(fVar33 - fVar31,in_V7F);
      local_a4 = (float)vmax_s(uVar41,in_V7D);
      uVar41 = vmul_s(*(float *)(param_1 + 0x318) * 3.141593,in_V7C);
      local_a0 = (float)vcos_s(uVar41);
      fVar36 = fVar36 - (fVar33 - fVar31) * local_b8 * local_a4 * 3.0 * (1.0 - local_a0) * 0.5;
    }
  }
  fVar33 = 0.2;
  fVar31 = fVar31 * 0.2;
  fVar29 = fVar36 * local_60 + fVar29;
  if (0.04 < fVar31) {
    fVar31 = fVar31 - 0.04;
  }
  else if (fVar31 < -0.04) {
    fVar31 = fVar31 + 0.04;
  }
  else {
    fVar31 = 0.0;
  }
  uVar41 = vmul_s(fVar31 * local_60,in_V7C);
  local_9c = vsin_s(uVar41);
  uVar41 = vmul_s(fVar31 * local_60,in_V7C);
  local_98 = vcos_s(uVar41);
  uVar41 = vmul_s(fVar29 + 1.570796,in_V7C);
  auVar21._4_4_ = local_98;
  auVar21._0_4_ = local_9c;
  auVar21._8_4_ = 0;
  auVar20._4_4_ = local_98;
  auVar20._0_4_ = local_9c;
  auVar20._8_4_ = 0;
  auVar22._4_4_ = local_98;
  auVar22._0_4_ = local_9c;
  auVar22._8_8_ = 0;
  auVar4 = vmov_q(auVar22);
  local_16c = auVar4._4_4_;
  local_164 = auVar4._12_4_;
  auVar4 = vrot_q(uVar41,1,0,3,0);
  auVar5 = vrot_q(uVar41,2,0,1,0);
  local_170 = vdot_t(auVar20,auVar4._0_12_);
  local_168 = vdot_t(auVar21,auVar5._0_12_);
  pauVar28 = (undefined (*) [16])(param_1 + 0x80);
  auVar23._4_4_ = local_16c;
  auVar23._0_4_ = local_170;
  auVar23._8_4_ = local_168;
  auVar23._12_4_ = local_164;
  auVar4 = vsub_q(auVar23,*pauVar28);
  auVar4 = vscl_q(auVar4,0x3e4ccccd);
  auVar4 = vadd_q(*pauVar28,auVar4);
  *(int *)*pauVar28 = auVar4._0_4_;
  *(int *)(param_1 + 0x84) = auVar4._4_4_;
  *(int *)(param_1 + 0x88) = auVar4._8_4_;
  *(int *)(param_1 + 0x8c) = auVar4._12_4_;
  uVar41 = vdot_t(*(undefined (*) [12])*pauVar28,*(undefined (*) [12])*pauVar28);
  uVar42 = vcmp_s(8,uVar41,*(undefined4 *)*pauVar28);
  vrsq_s(uVar41);
  uVar41 = vcmovt_s(in_V7D,(byte)uVar42 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(*(undefined (*) [12])*pauVar28,uVar41);
  *(int *)*pauVar28 = auVar2._0_4_;
  *(int *)(param_1 + 0x84) = auVar2._4_4_;
  *(int *)(param_1 + 0x88) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x8c) = in_V7D;
  if (3.141593 < fVar29) {
    fVar29 = fVar29 - 6.283185;
  }
  else {
    if (-3.141593 < fVar29) {
      iVar26 = *(int *)(param_1 + 0x2a0);
      goto LAB_0884a4f8;
    }
    fVar29 = fVar29 + 6.283185;
  }
  iVar26 = *(int *)(param_1 + 0x2a0);
LAB_0884a4f8:
  fVar36 = *(float *)(iVar26 + 0x180);
  if (bVar1) {
    fVar36 = 220.0;
  }
  fVar31 = 0.1;
  fVar32 = *(float *)(param_1 + 0x31c) - 1.0;
  uVar41 = vmul_s((1.0 - fVar32 * fVar32) * 3.141593,in_V7C);
  local_88 = (float)vcos_s(uVar41);
  *(float *)(param_1 + 0x300) = fVar29;
  uVar41 = vmul_s(fVar29,in_V7C);
  auVar4 = vrot_q(uVar41,1,0,2,0);
  auVar2 = vscl_t(auVar4._0_12_,
                  (-*(float *)(*(int *)(param_1 + 0x400) + 8) - fVar38 * (fVar36 - 180.0) * 1.3) -
                  ((1.0 - local_88) * 0.5 * 60.0 + local_54));
  fVar29 = local_5c;
  fVar38 = (float)FUN_08846f40(*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2b4),
                               *(undefined4 *)(param_1 + 0x348),local_5c);
  *(float *)(param_1 + 0x350) =
       *(float *)(param_1 + 0x350) + (fVar38 - *(float *)(param_1 + 0x350)) * fVar33;
  vpfxs(2,1,0x10,3);
  auVar3 = vmov_t(auVar2);
  uVar41 = vdot_t(auVar3,auVar3);
  uVar42 = vcmp_s(8,uVar41,auVar3._0_4_);
  vrsq_s(uVar41);
  uVar41 = vcmovt_s(in_V7D,(byte)uVar42 & 1);
  vpfxd(4,4,4,5);
  auVar3 = vscl_t(auVar3,uVar41);
  local_160 = auVar3._0_4_;
  uStack_15c = auVar3._4_4_;
  uStack_158 = auVar3._8_4_;
  uVar41 = vcst_s(6);
  uVar41 = vmul_s(uVar41,-*(float *)(param_1 + 0x350));
  uVar42 = vcos_s(uVar41);
  uVar41 = vsin_s(uVar41);
  auVar3 = vscl_t(auVar3,uVar41);
  fVar31 = *(float *)(param_1 + 0x30c) + fVar31;
  if (1.0 < fVar31) {
    fVar31 = 1.0;
  }
  *(float *)(param_1 + 0x30c) = fVar31;
  auVar19._12_4_ = uVar42;
  auVar19._0_12_ = auVar3;
  auVar18._12_4_ = uVar42;
  auVar18._0_12_ = auVar3;
  vpfxs(0x10,0x11,0x12,3);
  auVar5 = vmov_q(auVar18);
  uVar41 = vmov_s(in_V73);
  auVar12._12_4_ = uVar41;
  auVar12._8_4_ = auVar2._8_4_;
  auVar12._4_4_ = auVar2._4_4_;
  auVar12._0_4_ = auVar2._0_4_;
  auVar4 = vqmul_q(auVar19,auVar12);
  auVar4 = vqmul_q(auVar4,auVar5);
  auVar2 = vadd_t(*pauVar24,auVar4._0_12_);
  auVar14._12_4_ = *(undefined4 *)pauVar24[1];
  auVar14._0_12_ = auVar2;
  auVar4 = vsub_q(auVar14,*pauVar25);
  auVar4 = vscl_q(auVar4,*(float *)(param_1 + 0x30c) * *(float *)(param_1 + 0x30c));
  auVar4 = vadd_q(*pauVar25,auVar4);
  *(int *)*pauVar25 = auVar4._0_4_;
  *(int *)(*pauVar25 + 4) = auVar4._4_4_;
  *(int *)(*pauVar25 + 8) = auVar4._8_4_;
  *(int *)(*pauVar25 + 0xc) = auVar4._12_4_;
  pauVar28 = (undefined (*) [16])(param_1 + 0x60);
  auVar4 = vsub_q(*pauVar30,*pauVar28);
  auVar4 = vscl_q(auVar4,*(float *)(param_1 + 0x30c) * *(float *)(param_1 + 0x30c));
  auVar4 = vadd_q(*pauVar28,auVar4);
  *(int *)*pauVar28 = auVar4._0_4_;
  *(int *)(param_1 + 100) = auVar4._4_4_;
  *(int *)(param_1 + 0x68) = auVar4._8_4_;
  *(int *)(param_1 + 0x6c) = auVar4._12_4_;
  if ((*(float *)(param_1 + 0x2b4) + 30.0 < *(float *)(param_1 + 0x2d4)) &&
     (fVar29 = (-*(float *)(param_1 + 0x350) - -0.08726646) * fVar29, 0.0 < fVar29)) {
    fVar33 = 10.0;
    iVar26 = FUN_0885fcf8(*(undefined4 *)(param_1 + 0x2a0));
    if (iVar26 != 0) {
      fVar33 = 15.0;
    }
    auVar15._4_4_ = fVar35 + fVar33 * fVar29 * *(float *)(param_1 + 0x314);
    auVar15._0_4_ = fVar34;
    auVar15._8_4_ = fVar6;
    auVar15._12_4_ = uVar9;
    auVar4 = vsub_q(auVar15,*pauVar25);
    auVar4 = vscl_q(auVar4,fVar29);
    auVar4 = vadd_q(*pauVar25,auVar4);
    *(int *)*pauVar25 = auVar4._0_4_;
    *(int *)(*pauVar25 + 4) = auVar4._4_4_;
    *(int *)(*pauVar25 + 8) = auVar4._8_4_;
    *(int *)(*pauVar25 + 0xc) = auVar4._12_4_;
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + fVar29 * 140.0;
  }
  FUN_08848028(param_1);
  return;
}

