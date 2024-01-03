#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088aec3c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [64];
  undefined4 uVar10;
  undefined auVar11 [64];
  undefined auVar12 [64];
  undefined auVar13 [64];
  undefined auVar15 [64];
  undefined auVar16 [12];
  undefined auVar17 [12];
  undefined auVar18 [12];
  float *pfVar19;
  int iVar20;
  int iVar21;
  undefined (*pauVar22) [12];
  undefined4 *puVar23;
  int iVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar29;
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
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
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
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_60;
  float local_58;
  float local_54;
  undefined auVar14 [64];
  
  switch(*(undefined4 *)(param_1 + 0x1fc)) {
  case 0:
    pauVar22 = (undefined (*) [12])(param_1 + 0x1b0);
    if (*(int *)(param_1 + 0x148) == 0) {
      uVar26 = *(undefined4 *)(param_1 + 0x2c);
      auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),*(undefined (*) [12])(param_1 + 0x270));
      *(int *)*pauVar22 = auVar1._0_4_;
      *(int *)(param_1 + 0x1b4) = auVar1._4_4_;
      *(int *)(param_1 + 0x1b8) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x1bc) = uVar26;
    }
    else {
      iVar20 = *(int *)(param_1 + 0x148);
      uVar26 = vmul_s(*(undefined4 *)(iVar20 + 0x34),in_V7C);
      auVar2 = vrot_q(uVar26,1,0,2,0);
      *(undefined4 *)(iVar20 + 0x20) = auVar2._0_4_;
      *(int *)(iVar20 + 0x24) = auVar2._4_4_;
      *(int *)(iVar20 + 0x28) = auVar2._8_4_;
      *(int *)(iVar20 + 0x2c) = auVar2._12_4_;
      uVar26 = *(undefined4 *)(iVar20 + 0x24);
      uVar29 = *(undefined4 *)(iVar20 + 0x28);
      uVar10 = *(undefined4 *)(iVar20 + 0x2c);
      *(undefined4 *)*pauVar22 = *(undefined4 *)(iVar20 + 0x20);
      *(undefined4 *)(param_1 + 0x1b4) = uVar26;
      *(undefined4 *)(param_1 + 0x1b8) = uVar29;
      *(undefined4 *)(param_1 + 0x1bc) = uVar10;
    }
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    uVar26 = vdot_t(*pauVar22,*pauVar22);
    uVar29 = vcmp_s(8,uVar26,*(undefined4 *)*pauVar22);
    vrsq_s(uVar26);
    uVar26 = vcmovt_s(in_V7D,(byte)uVar29 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar22,uVar26);
    *(int *)*pauVar22 = auVar1._0_4_;
    *(int *)(param_1 + 0x1b4) = auVar1._4_4_;
    *(int *)(param_1 + 0x1b8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x1bc) = in_V7D;
    uVar26 = *(undefined4 *)(param_1 + 0x1bc);
    vpfxs(2,1,0x10,3);
    auVar1 = vmov_t(*pauVar22);
    *(int *)*pauVar22 = auVar1._0_4_;
    *(int *)(param_1 + 0x1b4) = auVar1._4_4_;
    *(int *)(param_1 + 0x1b8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x1bc) = uVar26;
    *(undefined4 *)(param_1 + 0x260) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined *)(param_1 + 0x314) = 0;
    iVar20 = *(int *)(param_1 + 0x130);
    uVar26 = *(undefined4 *)(iVar20 + 0xb4);
    uVar29 = *(undefined4 *)(iVar20 + 0xb8);
    uVar10 = *(undefined4 *)(iVar20 + 0xbc);
    *(undefined4 *)*(undefined (*) [12])(param_1 + 0x20) = *(undefined4 *)(iVar20 + 0xb0);
    *(undefined4 *)(param_1 + 0x24) = uVar26;
    *(undefined4 *)(param_1 + 0x28) = uVar29;
    *(undefined4 *)(param_1 + 0x2c) = uVar10;
    *(undefined *)(param_1 + 0x287) = 0;
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    break;
  case 1:
    auVar9 = vmidt_q();
    local_100 = auVar9._0_4_;
    local_f0 = auVar9._4_4_;
    local_e0 = auVar9._8_4_;
    local_d0 = auVar9._12_4_;
    uStack_fc = auVar9._16_4_;
    uStack_ec = auVar9._20_4_;
    uStack_dc = auVar9._24_4_;
    local_cc = auVar9._28_4_;
    uStack_f8 = auVar9._32_4_;
    uStack_e8 = auVar9._36_4_;
    uStack_d8 = auVar9._40_4_;
    uStack_c8 = auVar9._44_4_;
    uStack_f4 = auVar9._48_4_;
    uStack_e4 = auVar9._52_4_;
    uStack_d4 = auVar9._56_4_;
    uStack_c4 = auVar9._60_4_;
    if ((*(char *)(param_1 + 0x314) == '\0') && (0.06283186 <= *(float *)(param_1 + 0x260))) {
      *(undefined *)(param_1 + 0x314) = 1;
      iVar20 = DONE_NotZero_DAT_08AC5258();
      if (iVar20 != 0) {
        uVar26 = DONE_Get_DAT_08AC5258();
        FUN_089c00c4(uVar26,0x2000e7,*(int *)(param_1 + 0x130) + 0xb0,0,1);
      }
    }
    if (*(float *)(param_1 + 0x30c) < 0.2) {
      fVar25 = *(float *)(param_1 + 0x2b4);
      iVar20 = FUN_088a95c0(param_1,*(byte *)(param_1 + 0x2b1) & 0x1f);
      fVar27 = *(float *)(param_1 + 0x2b8);
      *(float *)(param_1 + 0x20) = fVar25 + (float)iVar20;
      iVar20 = FUN_088a95c0(param_1,*(char *)(param_1 + 0x2b1) + 8U & 0x1f);
      *(char *)(param_1 + 0x2b1) = *(char *)(param_1 + 0x2b1) + '\x01';
      *(float *)(param_1 + 0x28) = fVar27 + (float)iVar20;
      fVar25 = *(float *)(param_1 + 0x30c);
    }
    else {
      fVar25 = *(float *)(param_1 + 0x30c);
    }
    fVar25 = fVar25 + 0.004166667;
    *(float *)(param_1 + 0x30c) = fVar25;
    uVar26 = vmul_s(fVar25 * fVar25 * 3.141593,in_V7C);
    local_60 = (float)vcos_s(uVar26);
    fVar25 = *(float *)(param_1 + 0x260) + (1.0 - local_60) * 0.5 * 1.570796;
    *(float *)(param_1 + 0x260) = fVar25;
    if (1.570796 <= fVar25) {
      *(undefined4 *)(param_1 + 0x260) = 0x3fc90fdb;
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    }
    uVar26 = vcst_s(6);
    uVar26 = vmul_s(uVar26,*(undefined4 *)(param_1 + 0x260));
    uVar29 = vcos_s(uVar26);
    uVar26 = vsin_s(uVar26);
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x1b0),uVar26);
    puVar23 = &local_140;
    auVar11._60_4_ = uVar29;
    auVar11._48_12_ = auVar1;
    auVar8._12_4_ = uVar29;
    auVar8._0_12_ = auVar1;
    auVar7._12_4_ = uVar29;
    auVar7._0_12_ = auVar1;
    auVar6._12_4_ = uVar29;
    auVar6._0_12_ = auVar1;
    auVar5._12_4_ = uVar29;
    auVar5._0_12_ = auVar1;
    auVar4._12_4_ = uVar29;
    auVar4._0_12_ = auVar1;
    auVar3._12_4_ = uVar29;
    auVar3._0_12_ = auVar1;
    auVar2._12_4_ = uVar29;
    auVar2._0_12_ = auVar1;
    vpfxs(3,2,0x11,0x10);
    auVar2 = vmov_q(auVar2);
    vpfxs(0x12,3,0,0x11);
    auVar3 = vmov_q(auVar3);
    vpfxs(1,0x10,3,0x12);
    auVar4 = vmov_q(auVar4);
    vpfxs(3,2,0x11,0);
    auVar5 = vmov_q(auVar5);
    vpfxs(0x12,3,0,1);
    auVar6 = vmov_q(auVar6);
    vpfxs(1,0x10,3,2);
    auVar7 = vmov_q(auVar7);
    vpfxs(0x10,0x11,0x12,3);
    auVar8 = vmov_q(auVar8);
    auVar9._48_16_ = auVar8;
    auVar9._44_4_ = auVar7._12_4_;
    auVar9._40_4_ = auVar7._8_4_;
    auVar9._36_4_ = auVar7._4_4_;
    auVar9._32_4_ = auVar7._0_4_;
    auVar9._28_4_ = auVar6._12_4_;
    auVar9._24_4_ = auVar6._8_4_;
    auVar9._20_4_ = auVar6._4_4_;
    auVar9._16_4_ = auVar6._0_4_;
    auVar9._12_4_ = auVar5._12_4_;
    auVar9._8_4_ = auVar5._8_4_;
    auVar9._4_4_ = auVar5._4_4_;
    auVar9._0_4_ = auVar5._0_4_;
    auVar11._44_4_ = auVar4._12_4_;
    auVar11._40_4_ = auVar4._8_4_;
    auVar11._36_4_ = auVar4._4_4_;
    auVar11._32_4_ = auVar4._0_4_;
    auVar11._28_4_ = auVar3._12_4_;
    auVar11._24_4_ = auVar3._8_4_;
    auVar11._20_4_ = auVar3._4_4_;
    auVar11._16_4_ = auVar3._0_4_;
    auVar11._12_4_ = auVar2._12_4_;
    auVar11._8_4_ = auVar2._8_4_;
    auVar11._4_4_ = auVar2._4_4_;
    auVar11._0_4_ = auVar2._0_4_;
    auVar9 = vmmul_q(auVar9,auVar11);
    local_140 = auVar9._0_4_;
    uStack_13c = auVar9._4_4_;
    uStack_138 = auVar9._8_4_;
    local_130 = auVar9._16_4_;
    uStack_12c = auVar9._20_4_;
    uStack_128 = auVar9._24_4_;
    local_120 = auVar9._32_4_;
    uStack_11c = auVar9._36_4_;
    uStack_118 = auVar9._40_4_;
    auVar2 = vidt_q();
    uStack_134 = auVar2._0_4_;
    uStack_124 = auVar2._4_4_;
    uStack_114 = auVar2._8_4_;
    auVar2 = vidt_q();
    local_10c = auVar2._4_4_;
    uStack_104 = auVar2._12_4_;
    local_110 = *(undefined4 *)(param_1 + 0x20);
    local_108 = *(undefined4 *)(param_1 + 0x28);
    fVar27 = *(float *)(param_1 + 0x310);
    uVar26 = vmul_s(*(float *)(param_1 + 0x30c) * *(float *)(param_1 + 0x30c) * 3.141593,in_V7C);
    local_58 = (float)vcos_s(uVar26);
    fVar25 = (1.0 - local_58) * 0.5;
    iVar20 = FUN_088a9614(param_1);
    fVar28 = *(float *)(iVar20 + 0x10);
    pfVar19 = (float *)FUN_088a9614(param_1);
    *(float *)(param_1 + 0x310) = fVar27 + (fVar28 - *pfVar19) * 0.5 * fVar25;
    uVar26 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
    auVar4 = vrot_q(uVar26,1,0,3,0);
    auVar2 = vidt_q();
    auVar5 = vrot_q(uVar26,2,0,1,0);
    auVar3 = vidt_q();
    auVar15._4_4_ = uStack_fc;
    auVar15._0_4_ = local_100;
    auVar15._8_4_ = uStack_f8;
    auVar15._12_4_ = uStack_f4;
    auVar15._16_4_ = local_f0;
    auVar15._20_4_ = uStack_ec;
    auVar15._24_4_ = uStack_e8;
    auVar15._28_4_ = uStack_e4;
    auVar15._32_4_ = local_e0;
    auVar15._36_4_ = uStack_dc;
    auVar15._40_4_ = uStack_d8;
    auVar15._44_4_ = uStack_d4;
    auVar15._48_4_ = local_d0;
    auVar15._52_4_ = *(undefined4 *)(param_1 + 0x24);
    auVar15._56_4_ = uStack_c8;
    auVar15._60_4_ = uStack_c4;
    auVar12._48_16_ = auVar3;
    auVar12._44_4_ = auVar5._12_4_;
    auVar12._40_4_ = auVar5._8_4_;
    auVar12._36_4_ = auVar5._4_4_;
    auVar12._32_4_ = auVar5._0_4_;
    auVar12._28_4_ = auVar2._12_4_;
    auVar12._24_4_ = auVar2._8_4_;
    auVar12._20_4_ = auVar2._4_4_;
    auVar12._16_4_ = auVar2._0_4_;
    auVar12._12_4_ = auVar4._12_4_;
    auVar12._8_4_ = auVar4._8_4_;
    auVar12._4_4_ = auVar4._4_4_;
    auVar12._0_4_ = auVar4._0_4_;
    auVar9 = vmmul_q(auVar15,auVar12);
    auVar13._60_4_ = puVar23[0xf];
    auVar13._56_4_ = puVar23[0xb];
    auVar13._52_4_ = puVar23[7];
    auVar13._48_4_ = puVar23[3];
    auVar13._44_4_ = puVar23[0xe];
    auVar13._40_4_ = puVar23[10];
    auVar13._36_4_ = puVar23[6];
    auVar13._32_4_ = puVar23[2];
    auVar13._28_4_ = puVar23[0xd];
    auVar13._24_4_ = puVar23[9];
    auVar13._20_4_ = puVar23[5];
    auVar13._16_4_ = puVar23[1];
    auVar13._12_4_ = puVar23[0xc];
    auVar13._8_4_ = puVar23[8];
    auVar13._4_4_ = puVar23[4];
    auVar13._0_4_ = *puVar23;
    auVar14._60_4_ = auVar9._60_4_;
    auVar14._56_4_ = auVar9._44_4_;
    auVar14._52_4_ = auVar9._28_4_;
    auVar14._48_4_ = auVar9._12_4_;
    auVar14._44_4_ = auVar9._56_4_;
    auVar14._40_4_ = auVar9._40_4_;
    auVar14._36_4_ = auVar9._24_4_;
    auVar14._32_4_ = auVar9._8_4_;
    auVar14._28_4_ = auVar9._52_4_;
    auVar14._24_4_ = auVar9._36_4_;
    auVar14._20_4_ = auVar9._20_4_;
    auVar14._16_4_ = auVar9._4_4_;
    auVar14._12_4_ = auVar9._48_4_;
    auVar14._8_4_ = auVar9._32_4_;
    auVar14._4_4_ = auVar9._16_4_;
    auVar14._0_4_ = auVar9._0_4_;
    auVar9 = vmmul_q(auVar13,auVar14);
    iVar20 = *(int *)(param_1 + 0x130);
    *(int *)(iVar20 + 0x80) = auVar9._0_4_;
    *(int *)(iVar20 + 0x84) = auVar9._16_4_;
    *(int *)(iVar20 + 0x88) = auVar9._32_4_;
    *(int *)(iVar20 + 0x8c) = auVar9._48_4_;
    *(int *)(iVar20 + 0x90) = auVar9._4_4_;
    *(int *)(iVar20 + 0x94) = auVar9._20_4_;
    *(int *)(iVar20 + 0x98) = auVar9._36_4_;
    *(int *)(iVar20 + 0x9c) = auVar9._52_4_;
    *(int *)(iVar20 + 0xa0) = auVar9._8_4_;
    *(int *)(iVar20 + 0xa4) = auVar9._24_4_;
    *(int *)(iVar20 + 0xa8) = auVar9._40_4_;
    *(int *)(iVar20 + 0xac) = auVar9._56_4_;
    *(int *)(iVar20 + 0xb0) = auVar9._12_4_;
    *(int *)(iVar20 + 0xb4) = auVar9._28_4_;
    *(int *)(iVar20 + 0xb8) = auVar9._44_4_;
    *(int *)(iVar20 + 0xbc) = auVar9._60_4_;
    if (*(int *)(param_1 + 0x140) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x140) + 0x10c) = 1;
    }
    break;
  case 2:
    iVar20 = DONE_NotZero_DAT_08AC5258();
    if (iVar20 != 0) {
      uVar26 = DONE_Get_DAT_08AC5258();
      FUN_089c00c4(uVar26,0x2000e6,*(int *)(param_1 + 0x130) + 0xb0,0,1);
    }
    iVar24 = 0;
    iVar20 = *(int *)(param_1 + 0x130);
    while( true ) {
      iVar20 = iVar20 + 0x80;
      iVar21 = FUN_088a9614(param_1);
      uVar26 = vrndf1_s();
      local_54 = (float)vsub_s(uVar26,in_V7F);
      fVar25 = *(float *)(iVar21 + 0x14) * 2.0 * local_54;
      iVar21 = FUN_088a9614(param_1);
      local_8c = fVar25 - *(float *)(iVar21 + 0x14);
      local_90 = 0;
      local_88 = 0;
      local_84 = 0;
      FUN_08a29834(iVar20,&local_a0,&local_90);
      local_c0 = local_a0;
      uStack_bc = uStack_9c;
      uStack_b8 = uStack_98;
      uStack_b4 = uStack_94;
      local_84 = *(undefined4 *)(param_1 + 0x2c);
      auVar1._4_4_ = uStack_9c;
      auVar1._0_4_ = local_a0;
      auVar1._8_4_ = uStack_98;
      auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),auVar1);
      local_90 = auVar1._0_4_;
      local_8c = auVar1._4_4_;
      local_88 = auVar1._8_4_;
      auVar18._4_4_ = 0;
      auVar18._0_4_ = local_90;
      auVar18._8_4_ = local_88;
      auVar17._4_4_ = 0;
      auVar17._0_4_ = local_90;
      auVar17._8_4_ = local_88;
      auVar16._4_4_ = 0;
      auVar16._0_4_ = local_90;
      auVar16._8_4_ = local_88;
      uVar26 = vdot_t(auVar16,auVar17);
      uVar29 = vcmp_s(8,uVar26,local_90);
      vrsq_s(uVar26);
      uVar26 = vcmovt_s(in_V7D,(byte)uVar29 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar18,uVar26);
      local_b0 = auVar1._0_4_;
      local_ac = auVar1._4_4_;
      uStack_a8 = auVar1._8_4_;
      FUN_08824024(DAT_08abd5b0,0xd,&local_c0,&local_b0);
      iVar24 = iVar24 + 1;
      if (0xb < iVar24) break;
      iVar20 = *(int *)(param_1 + 0x130);
    }
    *(undefined4 *)(param_1 + 0x308) = 0x3c;
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    break;
  case 3:
    if (*(int *)(param_1 + 0x308) == 0) {
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    }
    else {
      *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + -1;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x308) == 0x20) {
      FUN_089e0a70(param_1,&LAB_088a90e0,0);
      *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    }
    else {
      if ((*(uint *)(param_1 + 0x308) & 2) == 0) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x228) = uVar26;
      *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + 1;
    }
    break;
  case 5:
    fVar25 = *(float *)(param_1 + 0x228) - 0.05;
    *(float *)(param_1 + 0x228) = fVar25;
    if (fVar25 <= 0.0) {
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    }
    break;
  case 6:
    *(undefined *)(param_1 + 0x282) = 1;
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
  }
  return;
}

