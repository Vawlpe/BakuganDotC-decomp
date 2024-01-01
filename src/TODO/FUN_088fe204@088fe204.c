#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fe204(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined4 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined auVar9 [64];
  undefined auVar10 [12];
  undefined auVar11 [12];
  undefined auVar12 [12];
  undefined auVar13 [64];
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [12];
  undefined auVar17 [12];
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  float local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  undefined4 uStack_1a4;
  float local_1a0;
  float local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
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
  float local_c8;
  float local_c4;
  float local_c0;
  
  fVar23 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  iVar18 = *(int *)(param_1 + 0x354) - *(int *)(param_1 + 0x358);
  iVar19 = *(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x360);
  iVar20 = *(int *)(param_1 + 0x3b4) - *(int *)(param_1 + 0x3b0);
  if (iVar18 == 0) {
    fVar21 = 1.0;
  }
  else if (*(int *)(param_1 + 0x354) != 0) {
    fVar21 = (float)((iVar18 - (*(int *)(param_1 + 0x354) - *(int *)(param_1 + 0x350))) + 1) /
             (float)iVar18;
  }
  if (iVar20 == 0) {
    fVar22 = 1.0;
  }
  else if (*(int *)(param_1 + 0x3b4) != 0) {
    fVar22 = (float)((iVar20 - (*(int *)(param_1 + 0x3b4) - *(int *)(param_1 + 0x350))) + 1) /
             (float)iVar20;
  }
  if (iVar19 == 0) {
    fVar23 = 1.0;
  }
  else if (*(int *)(param_1 + 0x35c) != 0) {
    fVar23 = (float)((iVar19 - (*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x350))) + 1) /
             (float)iVar19;
  }
  uVar24 = vmin_s(fVar23,in_V7F);
  local_c8 = (float)vmax_s(uVar24,in_V7D);
  uVar24 = vmin_s(fVar21,in_V7F);
  local_c4 = (float)vmax_s(uVar24,in_V7D);
  uVar24 = vmin_s(fVar22,in_V7F);
  local_c0 = (float)vmax_s(uVar24,in_V7D);
  if (local_c8 == 1.0) {
    local_1b0 = *(float *)*(undefined (*) [16])(param_1 + 0x2f0);
    local_1ac = *(undefined4 *)(param_1 + 0x2f4);
    local_1a8 = *(float *)(param_1 + 0x2f8);
    uStack_1a4 = *(undefined4 *)(param_1 + 0x2fc);
    fVar21 = *(float *)(param_1 + 0x310);
    fVar22 = *(float *)(param_1 + 0x318);
  }
  else {
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x2f0),*(undefined (*) [16])(param_1 + 0x300));
    auVar1 = vscl_q(auVar1,local_c8);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x300),auVar1);
    local_1b0 = auVar1._0_4_;
    local_1ac = auVar1._4_4_;
    local_1a8 = auVar1._8_4_;
    uStack_1a4 = auVar1._12_4_;
    fVar21 = *(float *)(param_1 + 0x310) * local_c8 + *(float *)(param_1 + 0x314) * (1.0 - local_c8)
    ;
    fVar22 = *(float *)(param_1 + 0x318) * local_c8 + *(float *)(param_1 + 0x31c) * (1.0 - local_c8)
    ;
  }
  if (local_c4 == 1.0) {
    local_1a0 = *(float *)*(undefined (*) [16])(param_1 + 0x2b0);
    local_19c = *(float *)(param_1 + 0x2b4);
    uStack_198 = *(undefined4 *)(param_1 + 0x2b8);
    uStack_194 = *(undefined4 *)(param_1 + 700);
    local_190 = *(undefined4 *)*(undefined (*) [16])(param_1 + 0x2d0);
    uStack_18c = *(undefined4 *)(param_1 + 0x2d4);
    uStack_188 = *(undefined4 *)(param_1 + 0x2d8);
  }
  else {
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x2b0),*(undefined (*) [16])(param_1 + 0x2c0));
    auVar1 = vscl_q(auVar1,local_c4);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x2c0),auVar1);
    local_1a0 = auVar1._0_4_;
    local_19c = auVar1._4_4_;
    uStack_198 = auVar1._8_4_;
    uStack_194 = auVar1._12_4_;
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x2d0),*(undefined (*) [16])(param_1 + 0x2e0));
    auVar1 = vscl_q(auVar1,local_c4);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x2e0),auVar1);
    local_190 = auVar1._0_4_;
    uStack_18c = auVar1._4_4_;
    uStack_188 = auVar1._8_4_;
  }
  if (local_c0 == 1.0) {
    local_180 = *(undefined4 *)*(undefined (*) [16])(param_1 + 0x370);
    uStack_17c = *(undefined4 *)(param_1 + 0x374);
    uStack_178 = *(undefined4 *)(param_1 + 0x378);
  }
  else {
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x370),*(undefined (*) [16])(param_1 + 0x380));
    auVar1 = vscl_q(auVar1,local_c0);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x380),auVar1);
    local_180 = auVar1._0_4_;
    uStack_17c = auVar1._4_4_;
    uStack_178 = auVar1._8_4_;
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x390),*(undefined (*) [16])(param_1 + 0x3a0));
    auVar1 = vscl_q(auVar1,local_c0);
    vadd_q(*(undefined (*) [16])(param_1 + 0x3a0),auVar1);
  }
  auVar2._4_4_ = uStack_18c;
  auVar2._0_4_ = local_190;
  auVar2._8_4_ = uStack_188;
  auVar2 = vneg_t(auVar2);
  local_190 = auVar2._0_4_;
  if (*(int *)(param_1 + 0x2a4) < 0x3e6) {
    switch(*(int *)(param_1 + 0x2a4)) {
    case 3:
    case 4:
      local_1a8 = local_1a8 + 10.0;
      break;
    case 6:
    case 0x12:
      local_19c = local_19c + 1.0;
      fVar21 = fVar21 * 1.2;
      local_1a8 = local_1a8 + 10.0;
      break;
    case 0xe:
      local_1a8 = local_1a8 + 2.0;
      break;
    case 0xf:
      local_1a8 = local_1a8 + 5.0;
      break;
    case 0x19:
    case 0x21:
    case 0x25:
    case 0x29:
    case 0x2d:
    case 0x31:
    case 0x35:
    case 0x39:
    case 0x41:
    case 0x45:
    case 0x49:
    case 0x4d:
    case 0x51:
    case 0x55:
    case 0x59:
    case 0x5d:
    case 0x61:
      local_190 = 0;
      break;
    case 0x1b:
      fVar21 = fVar21 * 1.2;
      break;
    case 0x1d:
    case 0x3d:
      local_1ac = 0x41200000;
      break;
    case 0x23:
      local_1b0 = local_1b0 - 1.0;
      fVar21 = fVar21 * 1.4;
      break;
    case 0x26:
      local_190 = 0;
      fVar21 = fVar21 * 1.4;
      break;
    case 0x2b:
    case 0x5b:
      *(undefined4 *)(param_1 + 0x40) = 0x40400000;
      local_190 = 0;
      fVar21 = fVar21 * 1.2;
      break;
    case 0x33:
      local_1b0 = local_1b0 - 2.0;
      local_1a0 = local_1a0 + 12.0;
      break;
    case 0x37:
      fVar21 = fVar21 * 1.2;
      break;
    case 0x3f:
      local_1b0 = local_1b0 + 1.0;
      break;
    case 0x46:
    case 0x4a:
    case 0x4e:
      fVar21 = fVar21 * 1.2;
      break;
    case 0x47:
    case 0x4b:
      local_190 = 0;
      fVar21 = fVar21 * 1.2;
      break;
    case 0x58:
    case 0x5c:
    case 0x5e:
      local_190 = 0;
      break;
    case 0x65:
      fVar21 = fVar21 * 1.15;
      local_190 = 0;
      local_19c = local_19c + 0.26;
      break;
    case 0x68:
      local_19c = 40.0;
    }
  }
  auVar4 = vmidt_q();
  uVar24 = auVar4._16_4_;
  uVar5 = auVar4._32_4_;
  auVar10._4_4_ = auVar2._4_4_;
  auVar10._0_4_ = local_190;
  auVar10._8_4_ = auVar2._8_4_;
  auVar2 = vscl_t(auVar10,in_V7C);
  auVar13._4_4_ = uVar24;
  auVar13._0_4_ = auVar4._0_4_;
  auVar13._8_4_ = uVar5;
  auVar13._12_4_ = auVar4._48_4_;
  auVar13._16_4_ = auVar4._4_4_;
  auVar13._20_4_ = auVar4._20_4_;
  auVar13._24_4_ = auVar4._36_4_;
  auVar13._28_4_ = auVar4._52_4_;
  auVar13._32_4_ = auVar4._8_4_;
  auVar13._36_4_ = auVar4._24_4_;
  auVar13._40_4_ = auVar4._40_4_;
  auVar13._44_4_ = auVar4._56_4_;
  auVar13._48_4_ = auVar4._12_4_;
  auVar13._52_4_ = auVar4._28_4_;
  auVar13._56_4_ = auVar4._44_4_;
  auVar13._60_4_ = auVar4._60_4_;
  auVar1 = vidt_q();
  auVar6 = vrot_q(auVar2._0_4_,0,1,2,0);
  auVar7 = vrot_q(auVar2._0_4_,0,3,1,0);
  auVar3 = vidt_q();
  auVar4._48_16_ = auVar3;
  auVar4._44_4_ = auVar7._12_4_;
  auVar4._40_4_ = auVar7._8_4_;
  auVar4._36_4_ = auVar7._4_4_;
  auVar4._32_4_ = auVar7._0_4_;
  auVar4._28_4_ = auVar6._12_4_;
  auVar4._24_4_ = auVar6._8_4_;
  auVar4._20_4_ = auVar6._4_4_;
  auVar4._16_4_ = auVar6._0_4_;
  auVar4._12_4_ = auVar1._12_4_;
  auVar4._8_4_ = auVar1._8_4_;
  auVar4._4_4_ = auVar1._4_4_;
  auVar4._0_4_ = auVar1._0_4_;
  auVar4 = vmmul_q(auVar13,auVar4);
  auVar6 = vrot_q(uVar24,1,0,3,0);
  auVar1 = vidt_q();
  auVar7 = vrot_q(uVar24,2,0,1,0);
  auVar8._48_16_ = auVar3;
  auVar8._44_4_ = auVar7._12_4_;
  auVar8._40_4_ = auVar7._8_4_;
  auVar8._36_4_ = auVar7._4_4_;
  auVar8._32_4_ = auVar7._0_4_;
  auVar8._28_4_ = auVar1._12_4_;
  auVar8._24_4_ = auVar1._8_4_;
  auVar8._20_4_ = auVar1._4_4_;
  auVar8._16_4_ = auVar1._0_4_;
  auVar8._12_4_ = auVar6._12_4_;
  auVar8._8_4_ = auVar6._8_4_;
  auVar8._4_4_ = auVar6._4_4_;
  auVar8._0_4_ = auVar6._0_4_;
  auVar4 = vmmul_q(auVar4,auVar8);
  auVar6 = vrot_q(uVar5,1,2,0,0);
  auVar7 = vrot_q(uVar5,3,1,0,0);
  auVar1 = vidt_q();
  auVar9._48_16_ = auVar3;
  auVar9._44_4_ = auVar1._12_4_;
  auVar9._40_4_ = auVar1._8_4_;
  auVar9._36_4_ = auVar1._4_4_;
  auVar9._32_4_ = auVar1._0_4_;
  auVar9._28_4_ = auVar7._12_4_;
  auVar9._24_4_ = auVar7._8_4_;
  auVar9._20_4_ = auVar7._4_4_;
  auVar9._16_4_ = auVar7._0_4_;
  auVar9._12_4_ = auVar6._12_4_;
  auVar9._8_4_ = auVar6._8_4_;
  auVar9._4_4_ = auVar6._4_4_;
  auVar9._0_4_ = auVar6._0_4_;
  auVar4 = vmmul_q(auVar4,auVar9);
  auVar7._4_4_ = local_19c;
  auVar7._0_4_ = local_1a0;
  auVar7._8_4_ = uStack_198;
  auVar7._12_4_ = uStack_194;
  auVar1._8_8_ = auVar4._16_8_;
  auVar1._4_4_ = auVar4._4_4_;
  auVar1._0_4_ = auVar4._0_4_;
  auVar1 = vtfm4_q(auVar1,auVar7);
  uVar24 = auVar1._12_4_;
  auVar6._4_4_ = local_1ac;
  auVar6._0_4_ = local_1b0;
  auVar6._8_4_ = local_1a8;
  auVar6._12_4_ = uStack_1a4;
  auVar3._8_8_ = auVar4._16_8_;
  auVar3._4_4_ = auVar4._4_4_;
  auVar3._0_4_ = auVar4._0_4_;
  auVar3 = vtfm4_q(auVar3,auVar6);
  uVar5 = auVar3._12_4_;
  if (*(char *)(param_1 + 0x34c) == '\0') {
    FUN_088ff3f4(&local_f0);
    auVar16._4_4_ = uStack_ec;
    auVar16._0_4_ = local_f0;
    auVar16._8_4_ = uStack_e8;
    auVar2 = vadd_t(auVar3._0_12_,auVar16);
    local_100 = auVar2._0_4_;
    uStack_fc = auVar2._4_4_;
    uStack_f8 = auVar2._8_4_;
    local_e0 = DAT_08b00fe0;
    uStack_dc = DAT_08b00fe4;
    uStack_d8 = DAT_08b00fe8;
    uStack_d4 = DAT_08b00fec;
    auVar17._4_4_ = DAT_08b00fe4;
    auVar17._0_4_ = DAT_08b00fe0;
    auVar17._8_4_ = DAT_08b00fe8;
    auVar2 = vadd_t(auVar2,auVar17);
    *(undefined4 *)(param_1 + 0x50) = auVar2._0_4_;
    *(int *)(param_1 + 0x54) = auVar2._4_4_;
    *(int *)(param_1 + 0x58) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    uStack_f4 = uVar5;
    FUN_088ff3f4(&local_100);
    auVar15._4_4_ = uStack_fc;
    auVar15._0_4_ = local_100;
    auVar15._8_4_ = uStack_f8;
    auVar2 = vadd_t(auVar1._0_12_,auVar15);
    local_f0 = auVar2._0_4_;
    uStack_ec = auVar2._4_4_;
    uStack_e8 = auVar2._8_4_;
    auVar14._4_4_ = DAT_08b00fe4;
    auVar14._0_4_ = DAT_08b00fe0;
    auVar14._8_4_ = DAT_08b00fe8;
    auVar2 = vadd_t(auVar2,auVar14);
    local_e0 = auVar2._0_4_;
    uStack_dc = auVar2._4_4_;
    uStack_d8 = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x60) = local_e0;
    *(undefined4 *)(param_1 + 100) = uStack_dc;
    *(undefined4 *)(param_1 + 0x68) = uStack_d8;
    *(undefined4 *)(param_1 + 0x6c) = uVar24;
    *(float *)(param_1 + 100) =
         *(float *)(param_1 + 0x54) +
         *(float *)(param_1 + 0x324) * (*(float *)(param_1 + 100) - *(float *)(param_1 + 0x54));
    fVar23 = *(float *)(param_1 + 800);
    uStack_e4 = uVar24;
    uStack_d4 = uVar24;
  }
  else {
    auVar11._4_4_ = uStack_17c;
    auVar11._0_4_ = local_180;
    auVar11._8_4_ = uStack_178;
    auVar2 = vadd_t(auVar3._0_12_,auVar11);
    *(undefined4 *)(param_1 + 0x50) = auVar2._0_4_;
    *(int *)(param_1 + 0x54) = auVar2._4_4_;
    *(int *)(param_1 + 0x58) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    auVar12._4_4_ = uStack_17c;
    auVar12._0_4_ = local_180;
    auVar12._8_4_ = uStack_178;
    auVar2 = vadd_t(auVar1._0_12_,auVar12);
    *(undefined4 *)(param_1 + 0x60) = auVar2._0_4_;
    *(int *)(param_1 + 100) = auVar2._4_4_;
    *(int *)(param_1 + 0x68) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar24;
    fVar23 = *(float *)(param_1 + 800);
  }
  *(float *)(param_1 + 0x158) = fVar23 * fVar21;
  FUN_088fdedc(fVar22 * *(float *)(param_1 + 0x328),param_1);
  return;
}

