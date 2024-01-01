#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cad5c(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined auVar2 [12];
  undefined auVar3 [64];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 in_V7D;
  undefined4 uVar35;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_120;
  float local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined local_110 [4];
  undefined auStack_10c [4];
  undefined auStack_108 [4];
  undefined4 uStack_104;
  undefined local_100 [4];
  undefined local_fc [4];
  undefined auStack_f8 [4];
  undefined4 uStack_f4;
  undefined local_f0 [4];
  undefined auStack_ec [4];
  undefined local_e8 [4];
  undefined4 uStack_e4;
  undefined local_e0 [4];
  undefined local_dc [4];
  undefined local_d8 [4];
  undefined4 local_d4;
  float local_cc;
  float local_ac;
  undefined4 *local_90;
  undefined *local_8c;
  float *local_6c;
  undefined4 local_68;
  float *local_64;
  float *local_60;
  float *local_5c;
  float *local_58;
  undefined4 *local_54;
  float *local_50;
  
  if ((*(char *)(param_1 + 0x1e8) == '\0') && (*(int *)(param_1 + 0x130) != 0)) {
    local_68 = param_2;
    uVar8 = FUN_089f1308(param_2);
    uVar8 = FUN_089f1418(uVar8);
    puVar9 = (undefined4 *)FUN_089e3014(DAT_08ac5c8c,uVar8,0xffffffff);
    iVar15 = *(int *)(param_1 + 0x10);
    local_120 = *(float *)(iVar15 + 0x60);
    local_11c = *(float *)(iVar15 + 100);
    uStack_118 = *(undefined4 *)(iVar15 + 0x68);
    uStack_114 = *(undefined4 *)(iVar15 + 0x6c);
    fVar33 = *(float *)(param_1 + 0x1b0) * 0.05;
    fVar34 = *(float *)(param_1 + 0x1b4) * 0.05;
    local_8c = local_110;
    auVar3 = vmidt_q();
    local_100 = auVar3._4_4_;
    local_f0 = auVar3._8_4_;
    auStack_10c = auVar3._16_4_;
    auStack_ec = auVar3._24_4_;
    auStack_108 = auVar3._32_4_;
    auStack_f8 = auVar3._36_4_;
    uStack_104 = auVar3._48_4_;
    uStack_f4 = auVar3._52_4_;
    uStack_e4 = auVar3._56_4_;
    local_110 = *(undefined (*) [4])(*(int *)(param_1 + 0x130) + 0x7c);
    local_fc = *(undefined (*) [4])(*(int *)(param_1 + 0x130) + 0x7c);
    local_e8 = (undefined  [4])0x3f800000;
    local_d8 = (undefined  [4])0x0;
    local_d4 = 0;
    *puVar9 = 0x3a000000;
    uVar13 = (uint)(local_110 + 1) & 3;
    uVar19 = -1 << (4 - uVar13) * 8 & 0x3b000000U | *(uint *)(local_110 + 1 + -uVar13) >> uVar13 * 8
    ;
    uVar13 = (uint)(auStack_10c + 1) & 3;
    uVar21 = -1 << (4 - uVar13) * 8 & 0x3b000000U |
             *(uint *)(auStack_10c + 1 + -uVar13) >> uVar13 * 8;
    uVar13 = (uint)(auStack_108 + 1) & 3;
    uVar23 = -1 << (4 - uVar13) * 8 & 0x3b000000U |
             *(uint *)(auStack_108 + 1 + -uVar13) >> uVar13 * 8;
    puVar9[1] = uVar19;
    puVar9[2] = uVar21;
    puVar9[3] = uVar23;
    uVar13 = (uint)(local_100 + 1) & 3;
    uVar19 = uVar19 & -1 << (4 - uVar13) * 8 | *(uint *)(local_100 + 1 + -uVar13) >> uVar13 * 8;
    uVar13 = (uint)(local_fc + 1) & 3;
    uVar21 = uVar21 & -1 << (4 - uVar13) * 8 | *(uint *)(local_fc + 1 + -uVar13) >> uVar13 * 8;
    uVar13 = (uint)(auStack_f8 + 1) & 3;
    uVar23 = uVar23 & -1 << (4 - uVar13) * 8 | *(uint *)(auStack_f8 + 1 + -uVar13) >> uVar13 * 8;
    puVar9[4] = uVar19;
    puVar9[5] = uVar21;
    puVar9[6] = uVar23;
    uVar13 = (uint)(local_f0 + 1) & 3;
    uVar20 = uVar19 & -1 << (4 - uVar13) * 8 | *(uint *)(local_f0 + 1 + -uVar13) >> uVar13 * 8;
    uVar13 = (uint)(auStack_ec + 1) & 3;
    uVar22 = uVar21 & -1 << (4 - uVar13) * 8 | *(uint *)(auStack_ec + 1 + -uVar13) >> uVar13 * 8;
    uVar13 = (uint)(local_e8 + 1) & 3;
    uVar24 = uVar23 & -1 << (4 - uVar13) * 8 | *(uint *)(local_e8 + 1 + -uVar13) >> uVar13 * 8;
    puVar9[7] = uVar20;
    puVar9[8] = uVar22;
    puVar9[9] = uVar24;
    uVar13 = (uint)(local_e0 + 1) & 3;
    uVar19 = (uint)(local_dc + 1) & 3;
    uVar23 = *(uint *)(local_dc + 1 + -uVar19);
    uVar21 = (uint)(local_d8 + 1) & 3;
    uVar1 = *(uint *)(local_d8 + 1 + -uVar21);
    puVar9[10] = uVar20 & -1 << (4 - uVar13) * 8 | *(uint *)(local_e0 + 1 + -uVar13) >> uVar13 * 8;
    puVar9[0xb] = uVar22 & -1 << (4 - uVar19) * 8 | uVar23 >> uVar19 * 8;
    puVar9[0xc] = uVar24 & -1 << (4 - uVar21) * 8 | uVar1 >> uVar21 * 8;
    puVar10 = puVar9 + 0x4e;
    puVar9[0xd] = ((uint)puVar10 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar9[0xe] = (uint)puVar10 & 0xffffff | 0x8000000;
    pfVar17 = (float *)(puVar9 + 0xf);
    local_144 = *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc);
    local_150 = 0;
    local_14c = 0;
    local_148 = 0;
    local_e0 = (undefined  [4])local_120;
    local_dc = (undefined  [4])local_11c;
    local_90 = puVar9;
    local_64 = pfVar17;
    local_54 = (undefined4 *)param_1;
    puVar10 = (undefined4 *)FUN_089f202c(puVar10,&local_150,0,1);
    iVar15 = (int)local_54;
    *puVar10 = 0x12000980;
    puVar10[1] = 0x10080000;
    puVar10[2] = 0x2abea3c;
    puVar16 = puVar10 + 3;
    puVar9 = puVar9 + 0x12;
    local_60 = (float *)&DAT_08a93464;
    local_58 = (float *)&DAT_08a933bc;
    local_5c = (float *)&DAT_08a9350c;
    if (pfVar17 != (float *)0x0) {
      *puVar16 = ((uint)local_64 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      puVar10[4] = (uint)local_64 & 0xffffff | 0x1000000;
      puVar16 = puVar10 + 5;
    }
    local_54 = &DAT_08a935c4;
    pfVar18 = (float *)(puVar16 + 3);
    puVar12 = puVar16 + 0x48;
    *puVar16 = 0x4030033;
    puVar16[1] = ((uint)puVar12 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar16[2] = (uint)puVar12 & 0xffffff | 0x8000000;
    local_144 = *(undefined4 *)(*(int *)(iVar15 + 0x130) + 0xbc);
    local_150 = 0x3f800000;
    local_14c = 0x3f800000;
    local_148 = 0x3f800000;
    local_6c = pfVar18;
    local_50 = pfVar17;
    puVar11 = (undefined4 *)FUN_089f202c(puVar12,&local_150,0,1);
    puVar10 = local_54;
    *puVar11 = 0x12000980;
    puVar11[1] = 0x10080000;
    puVar11[2] = 0x2abea6f;
    puVar16 = puVar16 + 6;
    puVar12 = puVar11 + 3;
    if (pfVar18 != (float *)0x0) {
      *puVar12 = ((uint)local_6c >> 0x18 & 0xf) << 0x10 | 0x10000000;
      puVar11[4] = (uint)local_6c & 0xffffff | 0x1000000;
      puVar12 = puVar11 + 5;
    }
    *puVar12 = 0x4030039;
    puVar12[1] = 0x25000001;
    puVar12[2] = 0xdf000032;
    puVar12[3] = 0xe0ffffff;
    puVar12[4] = 0xe1000000;
    local_50 = pfVar18;
    puVar11 = (undefined4 *)FUN_089f1f18(puVar12 + 5);
    *puVar11 = 0x12000180;
    puVar12 = puVar11 + 1;
    if (puVar16 != (uint *)0x0) {
      *puVar12 = ((uint)puVar16 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      puVar11[2] = (uint)puVar16 & 0xffffff | 0x1000000;
      puVar12 = puVar11 + 3;
    }
    *puVar12 = 0x4020016;
    puVar12[1] = 0x12000180;
    puVar16 = puVar12 + 2;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar16 = ((uint)puVar9 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      puVar12[3] = (uint)puVar9 & 0xffffff | 0x1000000;
      puVar16 = puVar12 + 4;
    }
    *puVar16 = 0x4020014;
    puVar16[1] = 0xc9000103;
    puVar16[2] = 0x25000000;
    FUN_089f13c8(local_68,puVar16 + 3);
    fVar26 = *(float *)(iVar15 + 0x160);
    local_cc = *(float *)(iVar15 + 0x164);
    fVar28 = (fVar33 - 5.0) * 0.2 + 5.0;
    fVar27 = (fVar34 - 5.0) * 0.2 + 5.0;
    if (*(char *)(iVar15 + 0x1e9) == '\0') {
      if (local_120 < fVar26) {
        uVar13 = *(uint *)(iVar15 + 0x1e4) | 1;
      }
      else {
        uVar13 = *(uint *)(iVar15 + 0x1e4) & 0xfffffffe;
      }
      *(uint *)(iVar15 + 0x1e4) = uVar13;
      if (local_cc < local_11c) {
        uVar13 = *(uint *)(iVar15 + 0x1e4) | 2;
      }
      else {
        uVar13 = *(uint *)(iVar15 + 0x1e4) & 0xfffffffd;
      }
      *(uint *)(iVar15 + 0x1e4) = uVar13;
      if (2 < *(int *)(iVar15 + 0x4c)) {
        *(undefined *)(iVar15 + 0x1e9) = 1;
      }
    }
    if ((*(uint *)(iVar15 + 0x1e4) & 1) == 0) {
      uVar13 = *(uint *)(iVar15 + 0x1e4);
    }
    else {
      fVar33 = -fVar33;
      fVar28 = -fVar28;
      uVar13 = *(uint *)(iVar15 + 0x1e4);
    }
    if ((uVar13 & 2) != 0) {
      fVar34 = -fVar34;
      fVar27 = -fVar27;
    }
    iVar14 = 0;
    pfVar17 = local_60;
    pfVar18 = local_6c;
    do {
      iVar14 = iVar14 + 1;
      *pfVar18 = *pfVar17 * fVar33;
      fVar29 = pfVar17[1];
      pfVar18[2] = 0.0;
      pfVar17 = pfVar17 + 2;
      pfVar18[1] = fVar29 * fVar34;
      pfVar18 = pfVar18 + 3;
    } while (iVar14 < 0x15);
    iVar14 = 2;
    local_60 = local_60 + 4;
    pfVar17 = local_6c + 6;
    do {
      iVar14 = iVar14 + 1;
      *pfVar17 = fVar33 * -5.0 + (*local_60 - -5.0) * fVar28;
      fVar29 = (float)puVar10[1];
      pfVar18 = local_60 + 1;
      local_60 = local_60 + 2;
      pfVar17[1] = fVar29 * fVar34 + (*pfVar18 - fVar29) * fVar27;
      pfVar17 = pfVar17 + 3;
    } while (iVar14 < 5);
    iVar14 = 0;
    pfVar17 = local_6c;
    pfVar18 = local_64;
    do {
      iVar14 = iVar14 + 1;
      *pfVar18 = *pfVar17 + *local_58 * fVar28 * 1.3;
      fVar29 = local_58[1];
      fVar31 = pfVar17[1];
      pfVar18[2] = 0.0;
      pfVar17 = pfVar17 + 3;
      local_58 = local_58 + 2;
      pfVar18[1] = fVar31 + fVar29 * fVar27 * 1.3;
      pfVar18 = pfVar18 + 3;
    } while (iVar14 < 0x15);
    fVar26 = fVar26 - local_120;
    local_cc = local_cc - local_11c;
    fVar31 = (fVar26 - local_6c[9]) * 0.4;
    fVar29 = -ABS(fVar33 * 1.5);
    fVar30 = ABS(fVar33 * 1.5);
    if ((fVar29 <= fVar31) && (fVar29 = fVar30, fVar31 <= fVar30)) {
      fVar29 = fVar31;
    }
    iVar14 = 2;
    pfVar17 = local_6c + 6;
    pfVar18 = local_64 + 6;
    do {
      iVar14 = iVar14 + 1;
      *pfVar17 = *pfVar17 + fVar29;
      pfVar17 = pfVar17 + 3;
      *pfVar18 = *pfVar18 + fVar29;
      pfVar18 = pfVar18 + 3;
    } while (iVar14 < 5);
    fVar31 = local_6c[9];
    fVar30 = local_6c[7];
    iVar14 = 0;
    pfVar17 = local_5c;
    pfVar18 = local_6c;
    do {
      iVar14 = iVar14 + 1;
      *pfVar18 = *pfVar17 * fVar33;
      fVar25 = pfVar17[1];
      pfVar18[2] = 0.0;
      pfVar17 = pfVar17 + 2;
      pfVar18[1] = fVar25 * fVar34;
      pfVar18 = pfVar18 + 3;
    } while (iVar14 < 0x17);
    iVar14 = 2;
    local_5c = local_5c + 4;
    pfVar17 = local_6c + 6;
    do {
      iVar14 = iVar14 + 1;
      *pfVar17 = fVar33 * -5.0 + (*local_5c - -5.0) * fVar28;
      fVar25 = (float)puVar10[1];
      fVar32 = local_5c[1];
      local_5c = local_5c + 2;
      *pfVar17 = *pfVar17 + fVar29;
      pfVar17[1] = fVar25 * fVar34 + (fVar32 - fVar25) * fVar27;
      pfVar17 = pfVar17 + 3;
    } while (iVar14 < 7);
    if ((*(uint *)(iVar15 + 0x1e4) & 2) == 0) {
      if (local_cc < fVar30 + 20.0) {
        local_cc = fVar30 + 20.0;
      }
    }
    else if (fVar30 - 20.0 < local_cc) {
      local_cc = fVar30 - 20.0;
    }
    auVar2._4_4_ = local_cc;
    auVar2._0_4_ = fVar26;
    auVar2._8_4_ = 0;
    auVar4._4_4_ = fVar30;
    auVar4._0_4_ = fVar31;
    auVar4._8_4_ = 0;
    auVar2 = vsub_t(auVar2,auVar4);
    uVar8 = vdot_t(auVar2,auVar2);
    fVar33 = (float)vsqrt_s(uVar8);
    if (0.1 < fVar33) {
      fVar33 = fVar33 - 40.0;
      if (fVar33 < 8.0) {
        fVar33 = 8.0;
      }
      else if (30.0 < fVar33) {
        fVar33 = 30.0;
      }
      uVar8 = vdot_t(auVar2,auVar2);
      uVar35 = vcmp_s(8,uVar8,auVar2._0_4_);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar35 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(auVar2,uVar8);
      fVar34 = auVar2._0_4_;
      local_ac = auVar2._4_4_;
      uVar8 = auVar2._8_4_;
      if (0.5 < fVar34) {
        fVar34 = 0.5;
      }
      else if (fVar34 < -0.5) {
        fVar34 = -0.5;
      }
      if ((local_ac < 0.0) && (-0.4 < local_ac)) {
        local_ac = -0.4;
      }
      if ((0.0 <= local_ac) && (local_ac < 0.4)) {
        local_ac = 0.4;
      }
      auVar7._4_4_ = local_ac;
      auVar7._0_4_ = fVar34;
      auVar7._8_4_ = uVar8;
      auVar6._4_4_ = local_ac;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = uVar8;
      auVar5._4_4_ = local_ac;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = uVar8;
      uVar8 = vdot_t(auVar5,auVar6);
      uVar35 = vcmp_s(8,uVar8,fVar34);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar35 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(auVar7,uVar8);
      fVar34 = auVar2._0_4_;
      local_6c[0xc] = fVar31 + fVar34 * fVar33;
      local_6c[0xd] = fVar30 + auVar2._4_4_ * fVar33;
      local_6c[9] = local_6c[9] - fVar34 * fVar33 * 0.5;
      local_6c[0xf] = local_6c[0xf] - fVar34 * fVar33 * 0.5;
      local_6c[6] = local_6c[6] - fVar34 * fVar33 * 0.3;
      local_6c[0x12] = local_6c[0x12] - fVar34 * fVar33 * 0.3;
      fVar33 = fVar33 + ABS(fVar27) * 3.0 * ((fVar33 - 8.0) * 0.02 + 0.5);
      local_64[9] = fVar31 + fVar34 * fVar33;
      local_64[10] = fVar30 + auVar2._4_4_ * fVar33;
    }
  }
  return;
}

