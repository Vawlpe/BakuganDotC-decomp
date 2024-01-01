#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089383c0(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined auVar9 [64];
  undefined auVar10 [64];
  undefined auVar12 [64];
  undefined auVar13 [64];
  undefined auVar14 [64];
  ushort uVar16;
  undefined4 uVar17;
  uint *puVar18;
  undefined (*pauVar19) [16];
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  short sVar24;
  uint *puVar25;
  float fVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 in_V74;
  undefined4 in_V7C;
  uint *local_a0 [4];
  undefined auStack_90 [16];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_34;
  float local_30;
  undefined auVar11 [64];
  undefined auVar15 [64];
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar17 = FUN_089f2178(0x44fa0000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar17);
  }
  FUN_08938230(param_1);
  FUN_089382f8(param_1);
  if (*(int *)(param_1 + 0x794) != 0) {
    uVar17 = FUN_089f2178(0x44ed8000);
    local_a0[0] = (uint *)FUN_089f1308(uVar17);
    puVar18 = (uint *)FUN_089f1490(local_a0[0],*(undefined4 *)(param_1 + 0x798),1);
    puVar21 = puVar18 + 2;
    puVar20 = puVar18 + 0x62;
    *puVar18 = ((uint)puVar20 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    local_30 = 0.0;
    puVar18[1] = (uint)puVar20 & 0xffffff | 0x8000000;
    iVar23 = 0;
    puVar25 = puVar21;
    do {
      uVar16 = (ushort)iVar23 & 1;
      if (iVar23 < 0) {
        uVar16 = -uVar16;
      }
      *(ushort *)(puVar25 + 1) = ((short)(iVar23 / 2) + uVar16) * 0x20;
      uVar16 = (ushort)iVar23 & 1;
      if (iVar23 < 0) {
        sVar24 = uVar16 * -0x110;
      }
      else {
        sVar24 = uVar16 * 0x110;
      }
      *(short *)((int)puVar25 + 6) = sVar24;
      *(undefined2 *)(puVar25 + 2) = 0;
      iVar23 = iVar23 + 1;
      puVar25 = puVar25 + 3;
    } while (iVar23 < 0x20);
    *puVar20 = 0xd3000401;
    puVar18[99] = 0x1280011c;
    local_a0[0] = puVar18 + 100;
    if (puVar21 != (uint *)0x0) {
      *local_a0[0] = ((uint)puVar21 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      puVar18[0x65] = (uint)puVar21 & 0xffffff | 0x1000000;
      local_a0[0] = puVar18 + 0x66;
    }
    *local_a0[0] = 0x4060020;
    local_a0[0][1] = 0xd3000000;
    fVar26 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar26 = 1.0;
    }
    if (fVar26 <= 0.0001) {
      local_34 = 10000.0;
      uVar27 = 0xcf000000;
      local_30 = local_34;
    }
    else {
      fVar26 = (1.0 - fVar26) * 800.0 + 1.0;
      local_34 = fVar26 + 20000.0;
      if (0.0 < fVar26) {
        local_30 = 1.0 / fVar26;
      }
      else if (fVar26 < 0.0) {
        local_30 = 1.0 / fVar26;
      }
      auVar7._12_4_ = DAT_08b0019c;
      auVar7._8_4_ = DAT_08b00198;
      auVar7._4_4_ = DAT_08b00194;
      auVar7._0_4_ = DAT_08b00190;
      auVar7 = vsat0_q(auVar7);
      auVar7 = vscl_q(auVar7,in_V74);
      auVar7 = vf2iz_q(auVar7,0x17);
      uVar27 = vi2uc_q(auVar7);
      uVar27 = uVar27 & 0xffffff | 0xcf000000;
    }
    local_a0[0][2] = uVar27;
    local_a0[0][3] = (uint)local_34 >> 8 | 0xcd000000;
    local_a0[0][4] = (uint)local_30 >> 8 | 0xce000000;
    local_a0[0] = local_a0[0] + 5;
    pauVar19 = (undefined (*) [16])FUN_08a2954c(auStack_90,&DAT_08b001a0);
    vpfxs(3,2,0x11,0x10);
    auVar7 = vmov_q(*pauVar19);
    vpfxs(0x12,3,0,0x11);
    auVar1 = vmov_q(*pauVar19);
    vpfxs(1,0x10,3,0x12);
    auVar2 = vmov_q(*pauVar19);
    vpfxs(3,2,0x11,0);
    auVar3 = vmov_q(*pauVar19);
    vpfxs(0x12,3,0,1);
    auVar4 = vmov_q(*pauVar19);
    vpfxs(1,0x10,3,2);
    auVar5 = vmov_q(*pauVar19);
    vpfxs(0x10,0x11,0x12,3);
    auVar6 = vmov_q(*pauVar19);
    auVar8._48_16_ = auVar6;
    auVar8._44_4_ = auVar5._12_4_;
    auVar8._40_4_ = auVar5._8_4_;
    auVar8._36_4_ = auVar5._4_4_;
    auVar8._32_4_ = auVar5._0_4_;
    auVar8._28_4_ = auVar4._12_4_;
    auVar8._24_4_ = auVar4._8_4_;
    auVar8._20_4_ = auVar4._4_4_;
    auVar8._16_4_ = auVar4._0_4_;
    auVar8._12_4_ = auVar3._12_4_;
    auVar8._8_4_ = auVar3._8_4_;
    auVar8._4_4_ = auVar3._4_4_;
    auVar8._0_4_ = auVar3._0_4_;
    auVar9._48_16_ = *pauVar19;
    auVar9._44_4_ = auVar2._12_4_;
    auVar9._40_4_ = auVar2._8_4_;
    auVar9._36_4_ = auVar2._4_4_;
    auVar9._32_4_ = auVar2._0_4_;
    auVar9._28_4_ = auVar1._12_4_;
    auVar9._24_4_ = auVar1._8_4_;
    auVar9._20_4_ = auVar1._4_4_;
    auVar9._16_4_ = auVar1._0_4_;
    auVar9._12_4_ = auVar7._12_4_;
    auVar9._8_4_ = auVar7._8_4_;
    auVar9._4_4_ = auVar7._4_4_;
    auVar9._0_4_ = auVar7._0_4_;
    auVar8 = vmmul_q(auVar8,auVar9);
    local_80 = auVar8._0_4_;
    uStack_7c = auVar8._4_4_;
    uStack_78 = auVar8._8_4_;
    local_70 = auVar8._16_4_;
    uStack_6c = auVar8._20_4_;
    uStack_68 = auVar8._24_4_;
    local_60 = auVar8._32_4_;
    uStack_5c = auVar8._36_4_;
    uStack_58 = auVar8._40_4_;
    auVar7 = vidt_q();
    uStack_74 = auVar7._0_4_;
    uStack_64 = auVar7._4_4_;
    uStack_54 = auVar7._8_4_;
    auVar7 = vidt_q();
    local_50 = auVar7._0_4_;
    uStack_4c = auVar7._4_4_;
    uStack_48 = auVar7._8_4_;
    uStack_44 = auVar7._12_4_;
    iVar22 = *(int *)(param_1 + 0x794);
    iVar23 = *(int *)(iVar22 + 0x130);
    fVar26 = 1.570796 - *(float *)(iVar22 + 0x34);
    if (3.141593 < fVar26) {
      fVar26 = fVar26 - 6.283185;
    }
    else if (fVar26 <= -3.141593) {
      fVar26 = fVar26 + 6.283185;
    }
    auVar8 = vmidt_q();
    uVar29 = vmov_s(*(undefined4 *)(iVar22 + 0x40));
    uVar30 = vmov_s(*(undefined4 *)(iVar22 + 0x44));
    uVar31 = vmov_s(*(undefined4 *)(iVar22 + 0x48));
    uVar28 = vmul_s(fVar26,in_V7C);
    auVar2 = vrot_q(uVar28,1,0,3,0);
    auVar7 = vidt_q();
    auVar3 = vrot_q(uVar28,2,0,1,0);
    auVar1 = vidt_q();
    auVar10._60_4_ = auVar8._60_4_;
    auVar10._56_4_ = auVar8._44_4_;
    auVar10._52_4_ = auVar8._28_4_;
    auVar10._48_4_ = auVar8._12_4_;
    auVar10._44_4_ = auVar8._56_4_;
    auVar10._40_4_ = uVar31;
    auVar10._36_4_ = auVar8._24_4_;
    auVar10._32_4_ = auVar8._8_4_;
    auVar10._28_4_ = auVar8._52_4_;
    auVar10._24_4_ = auVar8._36_4_;
    auVar10._20_4_ = uVar30;
    auVar10._16_4_ = auVar8._4_4_;
    auVar10._12_4_ = auVar8._48_4_;
    auVar10._8_4_ = auVar8._32_4_;
    auVar10._4_4_ = auVar8._16_4_;
    auVar10._0_4_ = uVar29;
    auVar11._48_16_ = auVar1;
    auVar11._44_4_ = auVar3._12_4_;
    auVar11._40_4_ = auVar3._8_4_;
    auVar11._36_4_ = auVar3._4_4_;
    auVar11._32_4_ = auVar3._0_4_;
    auVar11._28_4_ = auVar7._12_4_;
    auVar11._24_4_ = auVar7._8_4_;
    auVar11._20_4_ = auVar7._4_4_;
    auVar11._16_4_ = auVar7._0_4_;
    auVar11._12_4_ = auVar2._12_4_;
    auVar11._8_4_ = auVar2._8_4_;
    auVar11._4_4_ = auVar2._4_4_;
    auVar11._0_4_ = auVar2._0_4_;
    auVar8 = vmmul_q(auVar10,auVar11);
    *(int *)(iVar23 + 0x80) = auVar8._0_4_;
    *(int *)(iVar23 + 0x84) = auVar8._4_4_;
    *(int *)(iVar23 + 0x88) = auVar8._8_4_;
    *(int *)(iVar23 + 0x8c) = auVar8._12_4_;
    *(int *)(iVar23 + 0x90) = auVar8._16_4_;
    *(int *)(iVar23 + 0x94) = auVar8._20_4_;
    *(int *)(iVar23 + 0x98) = auVar8._24_4_;
    *(int *)(iVar23 + 0x9c) = auVar8._28_4_;
    *(int *)(iVar23 + 0xa0) = auVar8._32_4_;
    *(int *)(iVar23 + 0xa4) = auVar8._36_4_;
    *(int *)(iVar23 + 0xa8) = auVar8._40_4_;
    *(int *)(iVar23 + 0xac) = auVar8._44_4_;
    *(int *)(iVar23 + 0xb0) = auVar8._48_4_;
    *(int *)(iVar23 + 0xb4) = auVar8._52_4_;
    *(int *)(iVar23 + 0xb8) = auVar8._56_4_;
    *(int *)(iVar23 + 0xbc) = auVar8._60_4_;
    iVar23 = *(int *)(*(int *)(param_1 + 0x794) + 0x130);
    fVar26 = 1.570796 - *(float *)(*(int *)(param_1 + 0x794) + 0x30);
    if (3.141593 < fVar26) {
      fVar26 = fVar26 - 6.283185;
    }
    else if (fVar26 <= -3.141593) {
      fVar26 = fVar26 + 6.283185;
    }
    uVar28 = vmul_s(fVar26,in_V7C);
    auVar7 = vidt_q();
    auVar2 = vrot_q(uVar28,0,1,2,0);
    auVar3 = vrot_q(uVar28,0,3,1,0);
    auVar1 = vidt_q();
    auVar12._48_16_ = auVar1;
    auVar12._44_4_ = auVar3._12_4_;
    auVar12._40_4_ = auVar3._8_4_;
    auVar12._36_4_ = auVar3._4_4_;
    auVar12._32_4_ = auVar3._0_4_;
    auVar12._28_4_ = auVar2._12_4_;
    auVar12._24_4_ = auVar2._8_4_;
    auVar12._20_4_ = auVar2._4_4_;
    auVar12._16_4_ = auVar2._0_4_;
    auVar12._12_4_ = auVar7._12_4_;
    auVar12._8_4_ = auVar7._8_4_;
    auVar12._4_4_ = auVar7._4_4_;
    auVar12._0_4_ = auVar7._0_4_;
    auVar8 = vmmul_q(*(undefined (*) [64])(iVar23 + 0x80),auVar12);
    *(int *)*(undefined (*) [64])(iVar23 + 0x80) = auVar8._0_4_;
    *(int *)(iVar23 + 0x84) = auVar8._4_4_;
    *(int *)(iVar23 + 0x88) = auVar8._8_4_;
    *(int *)(iVar23 + 0x8c) = auVar8._12_4_;
    *(int *)(iVar23 + 0x90) = auVar8._16_4_;
    *(int *)(iVar23 + 0x94) = auVar8._20_4_;
    *(int *)(iVar23 + 0x98) = auVar8._24_4_;
    *(int *)(iVar23 + 0x9c) = auVar8._28_4_;
    *(int *)(iVar23 + 0xa0) = auVar8._32_4_;
    *(int *)(iVar23 + 0xa4) = auVar8._36_4_;
    *(int *)(iVar23 + 0xa8) = auVar8._40_4_;
    *(int *)(iVar23 + 0xac) = auVar8._44_4_;
    *(int *)(iVar23 + 0xb0) = auVar8._48_4_;
    *(int *)(iVar23 + 0xb4) = auVar8._52_4_;
    *(int *)(iVar23 + 0xb8) = auVar8._56_4_;
    *(int *)(iVar23 + 0xbc) = auVar8._60_4_;
    iVar23 = *(int *)(*(int *)(param_1 + 0x794) + 0x130);
    fVar26 = 1.570796 - *(float *)(*(int *)(param_1 + 0x794) + 0x38);
    if (3.141593 < fVar26) {
      fVar26 = fVar26 - 6.283185;
    }
    else if (fVar26 <= -3.141593) {
      fVar26 = fVar26 + 6.283185;
    }
    uVar28 = vmul_s(fVar26,in_V7C);
    auVar2 = vrot_q(uVar28,1,2,0,0);
    auVar3 = vrot_q(uVar28,3,1,0,0);
    auVar7 = vidt_q();
    auVar1 = vidt_q();
    auVar13._48_16_ = auVar1;
    auVar13._44_4_ = auVar7._12_4_;
    auVar13._40_4_ = auVar7._8_4_;
    auVar13._36_4_ = auVar7._4_4_;
    auVar13._32_4_ = auVar7._0_4_;
    auVar13._28_4_ = auVar3._12_4_;
    auVar13._24_4_ = auVar3._8_4_;
    auVar13._20_4_ = auVar3._4_4_;
    auVar13._16_4_ = auVar3._0_4_;
    auVar13._12_4_ = auVar2._12_4_;
    auVar13._8_4_ = auVar2._8_4_;
    auVar13._4_4_ = auVar2._4_4_;
    auVar13._0_4_ = auVar2._0_4_;
    auVar8 = vmmul_q(*(undefined (*) [64])(iVar23 + 0x80),auVar13);
    *(int *)*(undefined (*) [64])(iVar23 + 0x80) = auVar8._0_4_;
    *(int *)(iVar23 + 0x84) = auVar8._4_4_;
    *(int *)(iVar23 + 0x88) = auVar8._8_4_;
    *(int *)(iVar23 + 0x8c) = auVar8._12_4_;
    *(int *)(iVar23 + 0x90) = auVar8._16_4_;
    *(int *)(iVar23 + 0x94) = auVar8._20_4_;
    *(int *)(iVar23 + 0x98) = auVar8._24_4_;
    *(int *)(iVar23 + 0x9c) = auVar8._28_4_;
    *(int *)(iVar23 + 0xa0) = auVar8._32_4_;
    *(int *)(iVar23 + 0xa4) = auVar8._36_4_;
    *(int *)(iVar23 + 0xa8) = auVar8._40_4_;
    *(int *)(iVar23 + 0xac) = auVar8._44_4_;
    *(int *)(iVar23 + 0xb0) = auVar8._48_4_;
    *(int *)(iVar23 + 0xb4) = auVar8._52_4_;
    *(int *)(iVar23 + 0xb8) = auVar8._56_4_;
    *(int *)(iVar23 + 0xbc) = auVar8._60_4_;
    iVar23 = *(int *)(*(int *)(param_1 + 0x794) + 0x130);
    auVar14._60_4_ = uStack_44;
    auVar14._56_4_ = uStack_54;
    auVar14._52_4_ = uStack_64;
    auVar14._48_4_ = uStack_74;
    auVar14._44_4_ = uStack_48;
    auVar14._40_4_ = uStack_58;
    auVar14._36_4_ = uStack_68;
    auVar14._32_4_ = uStack_78;
    auVar14._28_4_ = uStack_4c;
    auVar14._24_4_ = uStack_5c;
    auVar14._20_4_ = uStack_6c;
    auVar14._16_4_ = uStack_7c;
    auVar14._12_4_ = local_50;
    auVar14._8_4_ = local_60;
    auVar14._4_4_ = local_70;
    auVar14._0_4_ = local_80;
    auVar15._60_4_ = *(undefined4 *)(iVar23 + 0xbc);
    auVar15._56_4_ = *(undefined4 *)(iVar23 + 0xac);
    auVar15._52_4_ = *(undefined4 *)(iVar23 + 0x9c);
    auVar15._48_4_ = *(undefined4 *)(iVar23 + 0x8c);
    auVar15._44_4_ = *(undefined4 *)(iVar23 + 0xb8);
    auVar15._40_4_ = *(undefined4 *)(iVar23 + 0xa8);
    auVar15._36_4_ = *(undefined4 *)(iVar23 + 0x98);
    auVar15._32_4_ = *(undefined4 *)(iVar23 + 0x88);
    auVar15._28_4_ = *(undefined4 *)(iVar23 + 0xb4);
    auVar15._24_4_ = *(undefined4 *)(iVar23 + 0xa4);
    auVar15._20_4_ = *(undefined4 *)(iVar23 + 0x94);
    auVar15._16_4_ = *(undefined4 *)(iVar23 + 0x84);
    auVar15._12_4_ = *(undefined4 *)(iVar23 + 0xb0);
    auVar15._8_4_ = *(undefined4 *)(iVar23 + 0xa0);
    auVar15._4_4_ = *(undefined4 *)(iVar23 + 0x90);
    auVar15._0_4_ = *(undefined4 *)(iVar23 + 0x80);
    auVar8 = vmmul_q(auVar14,auVar15);
    *(undefined4 *)(iVar23 + 0x80) = auVar8._0_4_;
    *(int *)(iVar23 + 0x84) = auVar8._16_4_;
    *(int *)(iVar23 + 0x88) = auVar8._32_4_;
    *(int *)(iVar23 + 0x8c) = auVar8._48_4_;
    *(int *)(iVar23 + 0x90) = auVar8._4_4_;
    *(int *)(iVar23 + 0x94) = auVar8._20_4_;
    *(int *)(iVar23 + 0x98) = auVar8._36_4_;
    *(int *)(iVar23 + 0x9c) = auVar8._52_4_;
    *(int *)(iVar23 + 0xa0) = auVar8._8_4_;
    *(int *)(iVar23 + 0xa4) = auVar8._24_4_;
    *(int *)(iVar23 + 0xa8) = auVar8._40_4_;
    *(int *)(iVar23 + 0xac) = auVar8._56_4_;
    *(int *)(iVar23 + 0xb0) = auVar8._12_4_;
    *(int *)(iVar23 + 0xb4) = auVar8._28_4_;
    *(int *)(iVar23 + 0xb8) = auVar8._44_4_;
    *(int *)(iVar23 + 0xbc) = auVar8._60_4_;
    iVar23 = *(int *)(param_1 + 0x794);
    iVar22 = *(int *)(iVar23 + 0x130);
    uVar28 = *(undefined4 *)(iVar23 + 0x24);
    uVar29 = *(undefined4 *)(iVar23 + 0x28);
    uVar30 = *(undefined4 *)(iVar23 + 0x2c);
    *(undefined4 *)(iVar22 + 0xb0) = *(undefined4 *)(iVar23 + 0x20);
    *(undefined4 *)(iVar22 + 0xb4) = uVar28;
    *(undefined4 *)(iVar22 + 0xb8) = uVar29;
    *(undefined4 *)(iVar22 + 0xbc) = uVar30;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x794) + 0x130) + 0xbc) = 0x3f800000;
    FUN_089dfc04(*(undefined4 *)(param_1 + 0x794));
    FUN_089dfdb0(*(undefined4 *)(param_1 + 0x794));
    iVar23 = *(int *)(*(int *)(param_1 + 0x794) + 0x14);
    (**(code **)(iVar23 + 0x44))
              (*(int *)(param_1 + 0x794) + (int)*(short *)(iVar23 + 0x40),local_a0);
    FUN_089f13c8(uVar17,local_a0[0]);
    if (*(int *)(param_1 + 0x79c) != 0) {
      DAT_08ac5c90 = *(undefined4 *)(param_1 + 0x79c);
    }
  }
  return;
}

