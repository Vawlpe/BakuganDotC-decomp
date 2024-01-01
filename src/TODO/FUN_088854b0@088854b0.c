#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088854b0(int *param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [64];
  undefined auVar12 [64];
  undefined auVar14 [64];
  undefined auVar16 [64];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [12];
  undefined auVar21 [12];
  undefined auVar22 [12];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [12];
  undefined auVar31 [12];
  undefined auVar32 [12];
  undefined auVar33 [12];
  undefined auVar34 [16];
  int iVar35;
  bool bVar36;
  undefined4 *puVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 in_V72;
  float in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 uVar43;
  undefined4 local_1c0;
  float local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0 [2];
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190 [2];
  undefined4 uStack_188;
  undefined4 uStack_184;
  int local_180;
  int local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined auVar13 [64];
  undefined auVar15 [64];
  undefined auVar17 [64];
  
  bVar36 = true;
  if (param_1[3] == 3) {
    bVar36 = false;
  }
  else if (*param_1 == 0) {
    bVar36 = false;
  }
  else if (*(char *)(param_1 + 8) == '\0') {
    bVar36 = false;
  }
  else if (*(char *)(*param_1 + 0xb8) == '\0') {
    bVar36 = false;
  }
  else if (*(float *)(*param_1 + 0x6c) <= 0.001) {
    bVar36 = false;
  }
  if (bVar36) {
    if (param_1[1] == 0) {
      *(undefined *)(param_1[2] + 0x13c) = 1;
    }
    else {
      *(uint *)(param_1[1] + 0xd0) = *(uint *)(param_1[1] + 0xd0) | 1;
    }
    fVar40 = 1.570796 - *(float *)(*param_1 + 0x34);
    if (3.141593 < fVar40) {
      fVar40 = fVar40 - 6.283185;
    }
    else if (fVar40 <= -3.141593) {
      fVar40 = fVar40 + 6.283185;
    }
    fVar41 = *(float *)(*param_1 + 0x6c) * 0.8;
    if (param_1[3] == 0) {
      if ((*(uint *)(*param_1 + 0x144) & 0x40000000) == 0) {
        if (*(int *)(*param_1 + 0x140) == 0xf) {
          FUN_089deeb0(*param_1,local_1a0,0);
          local_1c0 = local_1a0[0];
          uStack_1b8 = uStack_198;
          uStack_1b4 = uStack_194;
          local_1bc = *(float *)(*param_1 + 0x24);
        }
        else {
          iVar35 = *param_1;
          local_1c0 = *(undefined4 *)(iVar35 + 0x20);
          local_1bc = *(float *)(iVar35 + 0x24);
          uStack_1b8 = *(undefined4 *)(iVar35 + 0x28);
          uStack_1b4 = *(undefined4 *)(iVar35 + 0x2c);
        }
      }
      else {
        iVar35 = *param_1;
        local_1c0 = *(undefined4 *)(iVar35 + 0x340);
        local_1bc = *(float *)(iVar35 + 0x344);
        uStack_1b8 = *(undefined4 *)(iVar35 + 0x348);
        uStack_1b4 = *(undefined4 *)(iVar35 + 0x34c);
      }
      iVar35 = FUN_0885fd54(*param_1);
      if (iVar35 == 0) {
        iVar35 = *param_1;
      }
      else {
        fVar39 = (float)FUN_0889d654();
        local_1bc = *(float *)(*param_1 + 0x344) + fVar39 + 10.0;
        iVar35 = *param_1;
      }
      local_1b0 = *(float *)(iVar35 + 0x310);
      local_1ac = *(float *)(iVar35 + 0x314);
      local_1a8 = *(float *)(iVar35 + 0x318);
      uStack_1a4 = *(undefined4 *)(iVar35 + 0x31c);
      iVar35 = param_1[1];
    }
    else if (param_1[3] == 1) {
      if ((*(uint *)(*param_1 + 0x144) & 0x40000000) == 0) {
        iVar35 = *param_1;
        local_1c0 = *(undefined4 *)(iVar35 + 0x20);
        local_1bc = *(float *)(iVar35 + 0x24);
        uStack_1b8 = *(undefined4 *)(iVar35 + 0x28);
        uStack_1b4 = *(undefined4 *)(iVar35 + 0x2c);
        iVar35 = *param_1;
      }
      else {
        iVar35 = *param_1;
        local_1c0 = *(undefined4 *)(iVar35 + 0x290);
        local_1bc = *(float *)(iVar35 + 0x294);
        uStack_1b8 = *(undefined4 *)(iVar35 + 0x298);
        uStack_1b4 = *(undefined4 *)(iVar35 + 0x29c);
        iVar35 = *param_1;
      }
      local_1b0 = *(float *)(iVar35 + 0x260);
      local_1ac = *(float *)(iVar35 + 0x264);
      local_1a8 = *(float *)(iVar35 + 0x268);
      uStack_1a4 = *(undefined4 *)(iVar35 + 0x26c);
      iVar35 = param_1[1];
    }
    else {
      if (param_1[3] == 2) {
        FUN_089deeb0(*param_1,local_190,1);
        local_1c0 = local_190[0];
        uStack_1b8 = uStack_188;
        uStack_1b4 = uStack_184;
        local_1b0 = DAT_08b001a0;
        local_1ac = DAT_08b001a4;
        local_1a8 = DAT_08b001a8;
        uStack_1a4 = DAT_08b001ac;
        local_1bc = *(float *)(*param_1 + 0x1b4);
      }
      else if (param_1[3] == 4) {
        iVar35 = *param_1;
        local_1c0 = *(undefined4 *)(iVar35 + 0x20);
        uStack_1b8 = *(undefined4 *)(iVar35 + 0x28);
        uStack_1b4 = *(undefined4 *)(iVar35 + 0x2c);
        local_1b0 = DAT_08b001a0;
        local_1ac = DAT_08b001a4;
        local_1a8 = DAT_08b001a8;
        uStack_1a4 = DAT_08b001ac;
        local_1bc = *(float *)(*param_1 + 0x194);
      }
      else {
        local_1b0 = DAT_08b001a0;
        local_1ac = DAT_08b001a4;
        local_1a8 = DAT_08b001a8;
        uStack_1a4 = DAT_08b001ac;
        local_1c0 = in_V72;
        local_1bc = in_V76;
        uStack_1b8 = in_V7A;
        uStack_1b4 = in_V7E;
      }
      iVar35 = param_1[1];
      DAT_08b001a0 = local_1b0;
      DAT_08b001a4 = local_1ac;
      DAT_08b001a8 = local_1a8;
      DAT_08b001ac = uStack_1a4;
    }
    if (iVar35 == 0) {
      iVar35 = param_1[2];
      *(float *)(iVar35 + 0xd0) = local_1b0;
      *(float *)(iVar35 + 0xd4) = local_1ac;
      *(float *)(iVar35 + 0xd8) = local_1a8;
      *(undefined4 *)(iVar35 + 0xdc) = uStack_1a4;
      *(int *)(param_1[2] + 0x150) = param_1[4];
      iVar35 = param_1[2];
      puVar37 = (undefined4 *)(iVar35 + 0x30);
      if (local_1b0 * local_1b0 + local_1a8 * local_1a8 < 1e-05) {
        bVar36 = false;
        if (0.0001 < local_1ac * local_1ac) {
          bVar36 = true;
        }
      }
      else {
        bVar36 = false;
      }
      if (bVar36) {
        uVar42 = vmul_s(fVar40,in_V7C);
        auVar3 = vrot_q(uVar42,1,0,3,0);
        auVar9 = vidt_q();
        auVar4 = vrot_q(uVar42,2,0,1,0);
        auVar2 = vidt_q();
        *puVar37 = auVar3._0_4_;
        *(int *)(iVar35 + 0x34) = auVar3._4_4_;
        *(int *)(iVar35 + 0x38) = auVar3._8_4_;
        *(int *)(iVar35 + 0x3c) = auVar3._12_4_;
        *(int *)(iVar35 + 0x40) = auVar4._0_4_;
        *(int *)(iVar35 + 0x44) = auVar4._4_4_;
        *(int *)(iVar35 + 0x48) = auVar4._8_4_;
        *(int *)(iVar35 + 0x4c) = auVar4._12_4_;
        *(int *)(iVar35 + 0x50) = auVar9._0_4_;
        *(int *)(iVar35 + 0x54) = auVar9._4_4_;
        *(int *)(iVar35 + 0x58) = auVar9._8_4_;
        *(int *)(iVar35 + 0x5c) = auVar9._12_4_;
        *(int *)(iVar35 + 0x60) = auVar2._0_4_;
        *(int *)(iVar35 + 100) = auVar2._4_4_;
        *(int *)(iVar35 + 0x68) = auVar2._8_4_;
        *(int *)(iVar35 + 0x6c) = auVar2._12_4_;
        iVar35 = param_1[2];
      }
      else {
        if (local_1b0 * local_1b0 + local_1a8 * local_1a8 < 1e-05) {
          bVar36 = false;
          if (0.0001 < local_1ac * local_1ac) {
            bVar36 = true;
          }
        }
        else {
          bVar36 = false;
        }
        if (bVar36) {
          uVar42 = vcst_s(6);
          uVar42 = vmul_s(fVar40,uVar42);
          auVar9 = vrot_q(uVar42,0,2,0,1);
          auVar10._12_4_ = DAT_08b0084c;
          auVar10._8_4_ = DAT_08b00848;
          auVar10._4_4_ = DAT_08b00844;
          auVar10._0_4_ = DAT_08b00840;
          auVar9 = vqmul_q(auVar10,auVar9);
          local_120 = auVar9._0_4_;
          uStack_11c = auVar9._4_4_;
          uStack_118 = auVar9._8_4_;
          uStack_114 = auVar9._12_4_;
          local_f0 = local_120;
          uStack_ec = uStack_11c;
          uStack_e8 = uStack_118;
          uStack_e4 = uStack_114;
        }
        else {
          fVar39 = -local_1b0;
          auVar32._4_4_ = 0;
          auVar32._0_4_ = local_1a8;
          auVar32._8_4_ = fVar39;
          auVar31._4_4_ = 0;
          auVar31._0_4_ = local_1a8;
          auVar31._8_4_ = fVar39;
          auVar30._4_4_ = 0;
          auVar30._0_4_ = local_1a8;
          auVar30._8_4_ = fVar39;
          uVar42 = vdot_t(auVar30,auVar31);
          uVar43 = vcmp_s(8,uVar42,local_1a8);
          vrsq_s(uVar42);
          uVar42 = vcmovt_s(in_V7D,(byte)uVar43 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(auVar32,uVar42);
          local_110 = auVar1._0_4_;
          local_10c = auVar1._4_4_;
          local_108 = auVar1._8_4_;
          uVar42 = FUN_08a05468(local_1ac);
          auVar33._4_4_ = local_10c;
          auVar33._0_4_ = local_110;
          auVar33._8_4_ = local_108;
          uVar43 = vcst_s(6);
          uVar42 = vmul_s(uVar43,uVar42);
          uStack_f4 = vcos_s(uVar42);
          uVar42 = vsin_s(uVar42);
          auVar1 = vscl_t(auVar33,uVar42);
          local_100 = auVar1._0_4_;
          uStack_fc = auVar1._4_4_;
          uStack_f8 = auVar1._8_4_;
          uVar42 = vcst_s(6);
          uVar42 = vmul_s(fVar40,uVar42);
          auVar9 = vrot_q(uVar42,0,2,0,1);
          auVar34._12_4_ = uStack_f4;
          auVar34._0_12_ = auVar1;
          auVar9 = vqmul_q(auVar34,auVar9);
          local_120 = auVar9._0_4_;
          uStack_11c = auVar9._4_4_;
          uStack_118 = auVar9._8_4_;
          uStack_114 = auVar9._12_4_;
          local_e0 = local_120;
          uStack_dc = uStack_11c;
          uStack_d8 = uStack_118;
          uStack_d4 = uStack_114;
        }
        auVar15._52_4_ = uStack_11c;
        auVar15._48_4_ = local_120;
        auVar15._56_4_ = uStack_118;
        auVar15._60_4_ = uStack_114;
        auVar29._4_4_ = uStack_11c;
        auVar29._0_4_ = local_120;
        auVar29._8_4_ = uStack_118;
        auVar29._12_4_ = uStack_114;
        auVar28._4_4_ = uStack_11c;
        auVar28._0_4_ = local_120;
        auVar28._8_4_ = uStack_118;
        auVar28._12_4_ = uStack_114;
        auVar27._4_4_ = uStack_11c;
        auVar27._0_4_ = local_120;
        auVar27._8_4_ = uStack_118;
        auVar27._12_4_ = uStack_114;
        auVar26._4_4_ = uStack_11c;
        auVar26._0_4_ = local_120;
        auVar26._8_4_ = uStack_118;
        auVar26._12_4_ = uStack_114;
        auVar25._4_4_ = uStack_11c;
        auVar25._0_4_ = local_120;
        auVar25._8_4_ = uStack_118;
        auVar25._12_4_ = uStack_114;
        auVar24._4_4_ = uStack_11c;
        auVar24._0_4_ = local_120;
        auVar24._8_4_ = uStack_118;
        auVar24._12_4_ = uStack_114;
        auVar23._4_4_ = uStack_11c;
        auVar23._0_4_ = local_120;
        auVar23._8_4_ = uStack_118;
        auVar23._12_4_ = uStack_114;
        vpfxs(3,2,0x11,0x10);
        auVar9 = vmov_q(auVar23);
        vpfxs(0x12,3,0,0x11);
        auVar2 = vmov_q(auVar24);
        vpfxs(1,0x10,3,0x12);
        auVar3 = vmov_q(auVar25);
        vpfxs(3,2,0x11,0);
        auVar4 = vmov_q(auVar26);
        vpfxs(0x12,3,0,1);
        auVar5 = vmov_q(auVar27);
        vpfxs(1,0x10,3,2);
        auVar6 = vmov_q(auVar28);
        vpfxs(0x10,0x11,0x12,3);
        auVar7 = vmov_q(auVar29);
        auVar14._48_16_ = auVar7;
        auVar14._44_4_ = auVar6._12_4_;
        auVar14._40_4_ = auVar6._8_4_;
        auVar14._36_4_ = auVar6._4_4_;
        auVar14._32_4_ = auVar6._0_4_;
        auVar14._28_4_ = auVar5._12_4_;
        auVar14._24_4_ = auVar5._8_4_;
        auVar14._20_4_ = auVar5._4_4_;
        auVar14._16_4_ = auVar5._0_4_;
        auVar14._12_4_ = auVar4._12_4_;
        auVar14._8_4_ = auVar4._8_4_;
        auVar14._4_4_ = auVar4._4_4_;
        auVar14._0_4_ = auVar4._0_4_;
        auVar15._44_4_ = auVar3._12_4_;
        auVar15._40_4_ = auVar3._8_4_;
        auVar15._36_4_ = auVar3._4_4_;
        auVar15._32_4_ = auVar3._0_4_;
        auVar15._28_4_ = auVar2._12_4_;
        auVar15._24_4_ = auVar2._8_4_;
        auVar15._20_4_ = auVar2._4_4_;
        auVar15._16_4_ = auVar2._0_4_;
        auVar15._12_4_ = auVar9._12_4_;
        auVar15._8_4_ = auVar9._8_4_;
        auVar15._4_4_ = auVar9._4_4_;
        auVar15._0_4_ = auVar9._0_4_;
        auVar8 = vmmul_q(auVar14,auVar15);
        auVar9 = vidt_q();
        auVar2 = vidt_q();
        *puVar37 = auVar8._0_4_;
        *(int *)(iVar35 + 0x34) = auVar8._4_4_;
        *(int *)(iVar35 + 0x38) = auVar8._8_4_;
        *(int *)(iVar35 + 0x3c) = auVar9._0_4_;
        *(int *)(iVar35 + 0x40) = auVar8._16_4_;
        *(int *)(iVar35 + 0x44) = auVar8._20_4_;
        *(int *)(iVar35 + 0x48) = auVar8._24_4_;
        *(int *)(iVar35 + 0x4c) = auVar9._4_4_;
        *(int *)(iVar35 + 0x50) = auVar8._32_4_;
        *(int *)(iVar35 + 0x54) = auVar8._36_4_;
        *(int *)(iVar35 + 0x58) = auVar8._40_4_;
        *(int *)(iVar35 + 0x5c) = auVar9._8_4_;
        *(int *)(iVar35 + 0x60) = auVar2._0_4_;
        *(int *)(iVar35 + 100) = auVar2._4_4_;
        *(int *)(iVar35 + 0x68) = auVar2._8_4_;
        *(int *)(iVar35 + 0x6c) = auVar2._12_4_;
        auVar16._60_4_ = *(undefined4 *)(iVar35 + 0x6c);
        auVar16._56_4_ = *(undefined4 *)(iVar35 + 0x5c);
        auVar16._52_4_ = *(undefined4 *)(iVar35 + 0x4c);
        auVar16._48_4_ = *(undefined4 *)(iVar35 + 0x3c);
        auVar16._44_4_ = *(undefined4 *)(iVar35 + 0x68);
        auVar16._40_4_ = *(undefined4 *)(iVar35 + 0x58);
        auVar16._36_4_ = *(undefined4 *)(iVar35 + 0x48);
        auVar16._32_4_ = *(undefined4 *)(iVar35 + 0x38);
        auVar16._28_4_ = *(undefined4 *)(iVar35 + 100);
        auVar16._24_4_ = *(undefined4 *)(iVar35 + 0x54);
        auVar16._20_4_ = *(undefined4 *)(iVar35 + 0x44);
        auVar16._16_4_ = *(undefined4 *)(iVar35 + 0x34);
        auVar16._12_4_ = *(undefined4 *)(iVar35 + 0x60);
        auVar16._8_4_ = *(undefined4 *)(iVar35 + 0x50);
        auVar16._4_4_ = *(undefined4 *)(iVar35 + 0x40);
        auVar16._0_4_ = *puVar37;
        auVar17._60_4_ = DAT_08b0082c;
        auVar17._56_4_ = DAT_08b0081c;
        auVar17._52_4_ = DAT_08b0080c;
        auVar17._48_4_ = DAT_08b007fc;
        auVar17._44_4_ = DAT_08b00828;
        auVar17._40_4_ = DAT_08b00818;
        auVar17._36_4_ = DAT_08b00808;
        auVar17._32_4_ = DAT_08b007f8;
        auVar17._28_4_ = DAT_08b00824;
        auVar17._24_4_ = DAT_08b00814;
        auVar17._20_4_ = DAT_08b00804;
        auVar17._16_4_ = DAT_08b007f4;
        auVar17._12_4_ = DAT_08b00820;
        auVar17._8_4_ = DAT_08b00810;
        auVar17._4_4_ = DAT_08b00800;
        auVar17._0_4_ = DAT_08b007f0;
        auVar8 = vmmul_q(auVar16,auVar17);
        *puVar37 = auVar8._0_4_;
        *(int *)(iVar35 + 0x34) = auVar8._16_4_;
        *(int *)(iVar35 + 0x38) = auVar8._32_4_;
        *(int *)(iVar35 + 0x3c) = auVar8._48_4_;
        *(int *)(iVar35 + 0x40) = auVar8._4_4_;
        *(int *)(iVar35 + 0x44) = auVar8._20_4_;
        *(int *)(iVar35 + 0x48) = auVar8._36_4_;
        *(int *)(iVar35 + 0x4c) = auVar8._52_4_;
        *(int *)(iVar35 + 0x50) = auVar8._8_4_;
        *(int *)(iVar35 + 0x54) = auVar8._24_4_;
        *(int *)(iVar35 + 0x58) = auVar8._40_4_;
        *(int *)(iVar35 + 0x5c) = auVar8._56_4_;
        *(int *)(iVar35 + 0x60) = auVar8._12_4_;
        *(int *)(iVar35 + 100) = auVar8._28_4_;
        *(int *)(iVar35 + 0x68) = auVar8._44_4_;
        *(int *)(iVar35 + 0x6c) = auVar8._60_4_;
        iVar35 = param_1[2];
      }
      local_180 = param_1[4];
      local_17c = param_1[6];
      local_178 = 0x3f800000;
      local_174 = 0;
      auVar9 = vscl_q(*(undefined (*) [16])(iVar35 + 0x30),local_180);
      auVar2 = vscl_q(*(undefined (*) [16])(iVar35 + 0x40),local_17c);
      auVar3 = vscl_q(*(undefined (*) [16])(iVar35 + 0x50),0x3f800000);
      *(int *)*(undefined (*) [16])(iVar35 + 0x30) = auVar9._0_4_;
      *(int *)(iVar35 + 0x34) = auVar9._4_4_;
      *(int *)(iVar35 + 0x38) = auVar9._8_4_;
      *(int *)(iVar35 + 0x3c) = auVar9._12_4_;
      *(int *)(iVar35 + 0x40) = auVar2._0_4_;
      *(int *)(iVar35 + 0x44) = auVar2._4_4_;
      *(int *)(iVar35 + 0x48) = auVar2._8_4_;
      *(int *)(iVar35 + 0x4c) = auVar2._12_4_;
      *(int *)(iVar35 + 0x50) = auVar3._0_4_;
      *(int *)(iVar35 + 0x54) = auVar3._4_4_;
      *(int *)(iVar35 + 0x58) = auVar3._8_4_;
      *(int *)(iVar35 + 0x5c) = auVar3._12_4_;
      *(float *)(param_1[2] + 0xec) = fVar41;
      FUN_088256ec(param_1[2],&local_1c0);
    }
    else {
      iVar35 = param_1[1];
      puVar37 = (undefined4 *)(iVar35 + 0x20);
      if (local_1b0 * local_1b0 + local_1a8 * local_1a8 < 1e-05) {
        bVar36 = false;
        if (0.0001 < local_1ac * local_1ac) {
          bVar36 = true;
        }
      }
      else {
        bVar36 = false;
      }
      if (bVar36) {
        uVar42 = vmul_s(fVar40,in_V7C);
        auVar3 = vrot_q(uVar42,1,0,3,0);
        auVar9 = vidt_q();
        auVar4 = vrot_q(uVar42,2,0,1,0);
        auVar2 = vidt_q();
        *puVar37 = auVar3._0_4_;
        *(int *)(iVar35 + 0x24) = auVar3._4_4_;
        *(int *)(iVar35 + 0x28) = auVar3._8_4_;
        *(int *)(iVar35 + 0x2c) = auVar3._12_4_;
        *(int *)(iVar35 + 0x30) = auVar4._0_4_;
        *(int *)(iVar35 + 0x34) = auVar4._4_4_;
        *(int *)(iVar35 + 0x38) = auVar4._8_4_;
        *(int *)(iVar35 + 0x3c) = auVar4._12_4_;
        *(int *)(iVar35 + 0x40) = auVar9._0_4_;
        *(int *)(iVar35 + 0x44) = auVar9._4_4_;
        *(int *)(iVar35 + 0x48) = auVar9._8_4_;
        *(int *)(iVar35 + 0x4c) = auVar9._12_4_;
        *(int *)(iVar35 + 0x50) = auVar2._0_4_;
        *(int *)(iVar35 + 0x54) = auVar2._4_4_;
        *(int *)(iVar35 + 0x58) = auVar2._8_4_;
        *(int *)(iVar35 + 0x5c) = auVar2._12_4_;
        iVar35 = param_1[1];
      }
      else {
        if (local_1b0 * local_1b0 + local_1a8 * local_1a8 < 1e-05) {
          bVar36 = false;
          if (0.0001 < local_1ac * local_1ac) {
            bVar36 = true;
          }
        }
        else {
          bVar36 = false;
        }
        if (bVar36) {
          uVar42 = vcst_s(6);
          uVar42 = vmul_s(fVar40,uVar42);
          auVar9 = vrot_q(uVar42,0,2,0,1);
          auVar2._12_4_ = DAT_08b0084c;
          auVar2._8_4_ = DAT_08b00848;
          auVar2._4_4_ = DAT_08b00844;
          auVar2._0_4_ = DAT_08b00840;
          auVar9 = vqmul_q(auVar2,auVar9);
          local_170 = auVar9._0_4_;
          uStack_16c = auVar9._4_4_;
          uStack_168 = auVar9._8_4_;
          uStack_164 = auVar9._12_4_;
        }
        else {
          fVar39 = -local_1b0;
          auVar21._4_4_ = 0;
          auVar21._0_4_ = local_1a8;
          auVar21._8_4_ = fVar39;
          auVar20._4_4_ = 0;
          auVar20._0_4_ = local_1a8;
          auVar20._8_4_ = fVar39;
          auVar1._4_4_ = 0;
          auVar1._0_4_ = local_1a8;
          auVar1._8_4_ = fVar39;
          uVar42 = vdot_t(auVar1,auVar20);
          uVar43 = vcmp_s(8,uVar42,local_1a8);
          vrsq_s(uVar42);
          uVar42 = vcmovt_s(in_V7D,(byte)uVar43 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(auVar21,uVar42);
          local_160 = auVar1._0_4_;
          local_15c = auVar1._4_4_;
          local_158 = auVar1._8_4_;
          uVar42 = FUN_08a05468(local_1ac);
          auVar22._4_4_ = local_15c;
          auVar22._0_4_ = local_160;
          auVar22._8_4_ = local_158;
          uVar43 = vcst_s(6);
          uVar42 = vmul_s(uVar43,uVar42);
          uVar43 = vcos_s(uVar42);
          uVar42 = vsin_s(uVar42);
          auVar1 = vscl_t(auVar22,uVar42);
          uVar42 = vcst_s(6);
          uVar42 = vmul_s(fVar40,uVar42);
          auVar9 = vrot_q(uVar42,0,2,0,1);
          auVar3._12_4_ = uVar43;
          auVar3._0_12_ = auVar1;
          auVar9 = vqmul_q(auVar3,auVar9);
          local_170 = auVar9._0_4_;
          uStack_16c = auVar9._4_4_;
          uStack_168 = auVar9._8_4_;
          uStack_164 = auVar9._12_4_;
        }
        auVar11._52_4_ = uStack_16c;
        auVar11._48_4_ = local_170;
        auVar11._56_4_ = uStack_168;
        auVar11._60_4_ = uStack_164;
        auVar19._4_4_ = uStack_16c;
        auVar19._0_4_ = local_170;
        auVar19._8_4_ = uStack_168;
        auVar19._12_4_ = uStack_164;
        auVar18._4_4_ = uStack_16c;
        auVar18._0_4_ = local_170;
        auVar18._8_4_ = uStack_168;
        auVar18._12_4_ = uStack_164;
        auVar7._4_4_ = uStack_16c;
        auVar7._0_4_ = local_170;
        auVar7._8_4_ = uStack_168;
        auVar7._12_4_ = uStack_164;
        auVar6._4_4_ = uStack_16c;
        auVar6._0_4_ = local_170;
        auVar6._8_4_ = uStack_168;
        auVar6._12_4_ = uStack_164;
        auVar5._4_4_ = uStack_16c;
        auVar5._0_4_ = local_170;
        auVar5._8_4_ = uStack_168;
        auVar5._12_4_ = uStack_164;
        auVar4._4_4_ = uStack_16c;
        auVar4._0_4_ = local_170;
        auVar4._8_4_ = uStack_168;
        auVar4._12_4_ = uStack_164;
        auVar9._4_4_ = uStack_16c;
        auVar9._0_4_ = local_170;
        auVar9._8_4_ = uStack_168;
        auVar9._12_4_ = uStack_164;
        vpfxs(3,2,0x11,0x10);
        auVar9 = vmov_q(auVar9);
        vpfxs(0x12,3,0,0x11);
        auVar2 = vmov_q(auVar4);
        vpfxs(1,0x10,3,0x12);
        auVar3 = vmov_q(auVar5);
        vpfxs(3,2,0x11,0);
        auVar4 = vmov_q(auVar6);
        vpfxs(0x12,3,0,1);
        auVar5 = vmov_q(auVar7);
        vpfxs(1,0x10,3,2);
        auVar6 = vmov_q(auVar18);
        vpfxs(0x10,0x11,0x12,3);
        auVar7 = vmov_q(auVar19);
        auVar8._48_16_ = auVar7;
        auVar8._44_4_ = auVar6._12_4_;
        auVar8._40_4_ = auVar6._8_4_;
        auVar8._36_4_ = auVar6._4_4_;
        auVar8._32_4_ = auVar6._0_4_;
        auVar8._28_4_ = auVar5._12_4_;
        auVar8._24_4_ = auVar5._8_4_;
        auVar8._20_4_ = auVar5._4_4_;
        auVar8._16_4_ = auVar5._0_4_;
        auVar8._12_4_ = auVar4._12_4_;
        auVar8._8_4_ = auVar4._8_4_;
        auVar8._4_4_ = auVar4._4_4_;
        auVar8._0_4_ = auVar4._0_4_;
        auVar11._44_4_ = auVar3._12_4_;
        auVar11._40_4_ = auVar3._8_4_;
        auVar11._36_4_ = auVar3._4_4_;
        auVar11._32_4_ = auVar3._0_4_;
        auVar11._28_4_ = auVar2._12_4_;
        auVar11._24_4_ = auVar2._8_4_;
        auVar11._20_4_ = auVar2._4_4_;
        auVar11._16_4_ = auVar2._0_4_;
        auVar11._12_4_ = auVar9._12_4_;
        auVar11._8_4_ = auVar9._8_4_;
        auVar11._4_4_ = auVar9._4_4_;
        auVar11._0_4_ = auVar9._0_4_;
        auVar8 = vmmul_q(auVar8,auVar11);
        auVar9 = vidt_q();
        auVar2 = vidt_q();
        *puVar37 = auVar8._0_4_;
        *(int *)(iVar35 + 0x24) = auVar8._4_4_;
        *(int *)(iVar35 + 0x28) = auVar8._8_4_;
        *(int *)(iVar35 + 0x2c) = auVar9._0_4_;
        *(int *)(iVar35 + 0x30) = auVar8._16_4_;
        *(int *)(iVar35 + 0x34) = auVar8._20_4_;
        *(int *)(iVar35 + 0x38) = auVar8._24_4_;
        *(int *)(iVar35 + 0x3c) = auVar9._4_4_;
        *(int *)(iVar35 + 0x40) = auVar8._32_4_;
        *(int *)(iVar35 + 0x44) = auVar8._36_4_;
        *(int *)(iVar35 + 0x48) = auVar8._40_4_;
        *(int *)(iVar35 + 0x4c) = auVar9._8_4_;
        *(int *)(iVar35 + 0x50) = auVar2._0_4_;
        *(int *)(iVar35 + 0x54) = auVar2._4_4_;
        *(int *)(iVar35 + 0x58) = auVar2._8_4_;
        *(int *)(iVar35 + 0x5c) = auVar2._12_4_;
        auVar12._60_4_ = *(undefined4 *)(iVar35 + 0x5c);
        auVar12._56_4_ = *(undefined4 *)(iVar35 + 0x4c);
        auVar12._52_4_ = *(undefined4 *)(iVar35 + 0x3c);
        auVar12._48_4_ = *(undefined4 *)(iVar35 + 0x2c);
        auVar12._44_4_ = *(undefined4 *)(iVar35 + 0x58);
        auVar12._40_4_ = *(undefined4 *)(iVar35 + 0x48);
        auVar12._36_4_ = *(undefined4 *)(iVar35 + 0x38);
        auVar12._32_4_ = *(undefined4 *)(iVar35 + 0x28);
        auVar12._28_4_ = *(undefined4 *)(iVar35 + 0x54);
        auVar12._24_4_ = *(undefined4 *)(iVar35 + 0x44);
        auVar12._20_4_ = *(undefined4 *)(iVar35 + 0x34);
        auVar12._16_4_ = *(undefined4 *)(iVar35 + 0x24);
        auVar12._12_4_ = *(undefined4 *)(iVar35 + 0x50);
        auVar12._8_4_ = *(undefined4 *)(iVar35 + 0x40);
        auVar12._4_4_ = *(undefined4 *)(iVar35 + 0x30);
        auVar12._0_4_ = *puVar37;
        auVar13._60_4_ = DAT_08b0082c;
        auVar13._56_4_ = DAT_08b0081c;
        auVar13._52_4_ = DAT_08b0080c;
        auVar13._48_4_ = DAT_08b007fc;
        auVar13._44_4_ = DAT_08b00828;
        auVar13._40_4_ = DAT_08b00818;
        auVar13._36_4_ = DAT_08b00808;
        auVar13._32_4_ = DAT_08b007f8;
        auVar13._28_4_ = DAT_08b00824;
        auVar13._24_4_ = DAT_08b00814;
        auVar13._20_4_ = DAT_08b00804;
        auVar13._16_4_ = DAT_08b007f4;
        auVar13._12_4_ = DAT_08b00820;
        auVar13._8_4_ = DAT_08b00810;
        auVar13._4_4_ = DAT_08b00800;
        auVar13._0_4_ = DAT_08b007f0;
        auVar8 = vmmul_q(auVar12,auVar13);
        *puVar37 = auVar8._0_4_;
        *(int *)(iVar35 + 0x24) = auVar8._16_4_;
        *(int *)(iVar35 + 0x28) = auVar8._32_4_;
        *(int *)(iVar35 + 0x2c) = auVar8._48_4_;
        *(int *)(iVar35 + 0x30) = auVar8._4_4_;
        *(int *)(iVar35 + 0x34) = auVar8._20_4_;
        *(int *)(iVar35 + 0x38) = auVar8._36_4_;
        *(int *)(iVar35 + 0x3c) = auVar8._52_4_;
        *(int *)(iVar35 + 0x40) = auVar8._8_4_;
        *(int *)(iVar35 + 0x44) = auVar8._24_4_;
        *(int *)(iVar35 + 0x48) = auVar8._40_4_;
        *(int *)(iVar35 + 0x4c) = auVar8._56_4_;
        *(int *)(iVar35 + 0x50) = auVar8._12_4_;
        *(int *)(iVar35 + 0x54) = auVar8._28_4_;
        *(int *)(iVar35 + 0x58) = auVar8._44_4_;
        *(int *)(iVar35 + 0x5c) = auVar8._60_4_;
        iVar35 = param_1[1];
      }
      iVar38 = param_1[6];
      *(int *)(iVar35 + 0x70) = param_1[4];
      *(int *)(iVar35 + 0x74) = iVar38;
      *(undefined4 *)(iVar35 + 0x78) = 0x3f800000;
      *(undefined4 *)(iVar35 + 0x7c) = 0;
      *(float *)(param_1[1] + 0xbc) = fVar41;
      iVar35 = param_1[1];
      *(undefined4 *)(iVar35 + 0x60) = local_1c0;
      *(float *)(iVar35 + 100) = local_1bc;
      *(undefined4 *)(iVar35 + 0x68) = uStack_1b8;
      *(undefined4 *)(iVar35 + 0x6c) = uStack_1b4;
    }
  }
  else if (param_1[1] == 0) {
    *(undefined *)(param_1[2] + 0x13c) = 0;
  }
  else {
    *(uint *)(param_1[1] + 0xd0) = *(uint *)(param_1[1] + 0xd0) & 0xfffffffe;
  }
  return;
}

