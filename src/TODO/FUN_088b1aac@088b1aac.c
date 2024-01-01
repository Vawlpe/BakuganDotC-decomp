#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b1aac(int param_1)

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
  undefined auVar10 [64];
  undefined auVar11 [12];
  undefined auVar13 [64];
  undefined auVar14 [64];
  undefined auVar16 [64];
  undefined auVar17 [12];
  undefined auVar18 [12];
  undefined auVar19 [12];
  int iVar20;
  int iVar21;
  int iVar22;
  undefined (*pauVar23) [12];
  float fVar24;
  undefined4 uVar25;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar26;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_4c;
  undefined auVar12 [12];
  undefined auVar15 [64];
  
  switch(*(undefined4 *)(param_1 + 0x328)) {
  case 0:
    FUN_088b119c(param_1,**(undefined4 **)(param_1 + 0x144));
    uVar25 = *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc);
    auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 0x130) + 0xb0),
                    *(undefined (*) [12])(param_1 + 0x360));
    pauVar23 = (undefined (*) [12])(param_1 + 0x1b0);
    *(int *)*pauVar23 = auVar1._0_4_;
    *(int *)(param_1 + 0x1b4) = auVar1._4_4_;
    *(int *)(param_1 + 0x1b8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x1bc) = uVar25;
    iVar20 = FUN_088acda0(param_1);
    if (iVar20 != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    uVar25 = vdot_t(*pauVar23,*pauVar23);
    uVar26 = vcmp_s(8,uVar25,*(undefined4 *)*pauVar23);
    vrsq_s(uVar25);
    uVar25 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar23,uVar25);
    *(int *)*pauVar23 = auVar1._0_4_;
    *(int *)(param_1 + 0x1b4) = auVar1._4_4_;
    *(int *)(param_1 + 0x1b8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x1bc) = in_V7D;
    uVar25 = *(undefined4 *)(param_1 + 0x1bc);
    vpfxs(2,1,0x10,3);
    auVar1 = vmov_t(*pauVar23);
    *(int *)*pauVar23 = auVar1._0_4_;
    *(int *)(param_1 + 0x1b4) = auVar1._4_4_;
    *(int *)(param_1 + 0x1b8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x1bc) = uVar25;
    uVar25 = vzero_s();
    auVar11._8_4_ = *(undefined4 *)(param_1 + 0x378);
    auVar11._4_4_ = uVar25;
    auVar11._0_4_ = *(undefined4 *)(param_1 + 0x370);
    auVar12._8_4_ = *(undefined4 *)(param_1 + 0x378);
    auVar12._4_4_ = uVar25;
    auVar12._0_4_ = *(undefined4 *)(param_1 + 0x370);
    uVar25 = vdot_t(auVar11,auVar12);
    fVar24 = (float)vsqrt_s(uVar25);
    *(float *)(param_1 + 0x34c) = fVar24;
    if (45.0 < fVar24) {
      *(undefined4 *)(param_1 + 0x34c) = 0x42340000;
    }
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(undefined4 *)(param_1 + 0x33c) = 0;
    *(undefined4 *)(param_1 + 0x340) = 0;
    *(undefined *)(param_1 + 0x344) = 0;
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    goto LAB_088b1c8c;
  case 1:
LAB_088b1c8c:
    auVar10 = vmidt_q();
    fVar24 = *(float *)(param_1 + 0x33c) + 1.0 / (50.0 - *(float *)(param_1 + 0x34c));
    *(float *)(param_1 + 0x33c) = fVar24;
    uVar25 = vmul_s(fVar24 * fVar24 * 3.141593,in_V7C);
    fVar24 = (float)vcos_s(uVar25);
    fVar24 = *(float *)(param_1 + 0x338) + (1.0 - fVar24) * 0.5 * 1.570796;
    *(float *)(param_1 + 0x338) = fVar24;
    if (1.570796 <= fVar24) {
      *(undefined4 *)(param_1 + 0x338) = 0x3fc90fdb;
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    }
    uVar25 = vcst_s(6);
    uVar25 = vmul_s(uVar25,*(undefined4 *)(param_1 + 0x338));
    uVar26 = vcos_s(uVar25);
    uVar25 = vsin_s(uVar25);
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x1b0),uVar25);
    auVar13._60_4_ = uVar26;
    auVar13._48_12_ = auVar1;
    auVar8._12_4_ = uVar26;
    auVar8._0_12_ = auVar1;
    auVar7._12_4_ = uVar26;
    auVar7._0_12_ = auVar1;
    auVar6._12_4_ = uVar26;
    auVar6._0_12_ = auVar1;
    auVar5._12_4_ = uVar26;
    auVar5._0_12_ = auVar1;
    auVar4._12_4_ = uVar26;
    auVar4._0_12_ = auVar1;
    auVar3._12_4_ = uVar26;
    auVar3._0_12_ = auVar1;
    auVar2._12_4_ = uVar26;
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
    auVar13._44_4_ = auVar4._12_4_;
    auVar13._40_4_ = auVar4._8_4_;
    auVar13._36_4_ = auVar4._4_4_;
    auVar13._32_4_ = auVar4._0_4_;
    auVar13._28_4_ = auVar3._12_4_;
    auVar13._24_4_ = auVar3._8_4_;
    auVar13._20_4_ = auVar3._4_4_;
    auVar13._16_4_ = auVar3._0_4_;
    auVar13._12_4_ = auVar2._12_4_;
    auVar13._8_4_ = auVar2._8_4_;
    auVar13._4_4_ = auVar2._4_4_;
    auVar13._0_4_ = auVar2._0_4_;
    auVar9 = vmmul_q(auVar9,auVar13);
    auVar2 = vidt_q();
    auVar3 = vidt_q();
    uVar25 = vmul_s(*(float *)(param_1 + 0x33c) * *(float *)(param_1 + 0x33c) * 3.141593,in_V7C);
    fVar24 = (float)vcos_s(uVar25);
    fVar24 = *(float *)(param_1 + 0x340) + (1.0 - fVar24) * 0.5 * 25.0;
    *(float *)(param_1 + 0x340) = fVar24;
    uVar25 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
    auVar6 = vrot_q(uVar25,1,0,3,0);
    auVar4 = vidt_q();
    auVar7 = vrot_q(uVar25,2,0,1,0);
    auVar5 = vidt_q();
    auVar16._4_4_ = auVar10._16_4_;
    auVar16._0_4_ = auVar10._0_4_;
    auVar16._8_4_ = auVar10._32_4_;
    auVar16._12_4_ = auVar10._48_4_;
    auVar16._16_4_ = auVar10._4_4_;
    auVar16._20_4_ = auVar10._20_4_;
    auVar16._24_4_ = auVar10._36_4_;
    auVar16._28_4_ = auVar10._52_4_;
    auVar16._32_4_ = auVar10._8_4_;
    auVar16._36_4_ = auVar10._24_4_;
    auVar16._40_4_ = auVar10._40_4_;
    auVar16._44_4_ = auVar10._56_4_;
    auVar16._48_4_ = auVar10._12_4_;
    auVar16._52_4_ = *(undefined4 *)(param_1 + 0x24);
    auVar16._56_4_ = auVar10._44_4_;
    auVar16._60_4_ = auVar10._60_4_;
    auVar10._48_16_ = auVar5;
    auVar10._44_4_ = auVar7._12_4_;
    auVar10._40_4_ = auVar7._8_4_;
    auVar10._36_4_ = auVar7._4_4_;
    auVar10._32_4_ = auVar7._0_4_;
    auVar10._28_4_ = auVar4._12_4_;
    auVar10._24_4_ = auVar4._8_4_;
    auVar10._20_4_ = auVar4._4_4_;
    auVar10._16_4_ = auVar4._0_4_;
    auVar10._12_4_ = auVar6._12_4_;
    auVar10._8_4_ = auVar6._8_4_;
    auVar10._4_4_ = auVar6._4_4_;
    auVar10._0_4_ = auVar6._0_4_;
    auVar10 = vmmul_q(auVar16,auVar10);
    auVar14._60_4_ = auVar3._12_4_;
    auVar14._56_4_ = auVar2._8_4_;
    auVar14._52_4_ = auVar2._4_4_;
    auVar14._48_4_ = auVar2._0_4_;
    auVar14._44_4_ = *(undefined4 *)(param_1 + 0x28);
    auVar14._40_4_ = auVar9._40_4_;
    auVar14._36_4_ = auVar9._24_4_;
    auVar14._32_4_ = auVar9._8_4_;
    auVar14._28_4_ = fVar24;
    auVar14._24_4_ = auVar9._36_4_;
    auVar14._20_4_ = auVar9._20_4_;
    auVar14._16_4_ = auVar9._4_4_;
    auVar14._12_4_ = *(undefined4 *)(param_1 + 0x20);
    auVar14._8_4_ = auVar9._32_4_;
    auVar14._4_4_ = auVar9._16_4_;
    auVar14._0_4_ = auVar9._0_4_;
    auVar15._60_4_ = auVar10._60_4_;
    auVar15._56_4_ = auVar10._44_4_;
    auVar15._52_4_ = auVar10._28_4_;
    auVar15._48_4_ = auVar10._12_4_;
    auVar15._44_4_ = auVar10._56_4_;
    auVar15._40_4_ = auVar10._40_4_;
    auVar15._36_4_ = auVar10._24_4_;
    auVar15._32_4_ = auVar10._8_4_;
    auVar15._28_4_ = auVar10._52_4_;
    auVar15._24_4_ = auVar10._36_4_;
    auVar15._20_4_ = auVar10._20_4_;
    auVar15._16_4_ = auVar10._4_4_;
    auVar15._12_4_ = auVar10._48_4_;
    auVar15._8_4_ = auVar10._32_4_;
    auVar15._4_4_ = auVar10._16_4_;
    auVar15._0_4_ = auVar10._0_4_;
    auVar10 = vmmul_q(auVar14,auVar15);
    iVar20 = *(int *)(param_1 + 0x130);
    *(int *)(iVar20 + 0x80) = auVar10._0_4_;
    *(int *)(iVar20 + 0x84) = auVar10._16_4_;
    *(int *)(iVar20 + 0x88) = auVar10._32_4_;
    *(int *)(iVar20 + 0x8c) = auVar10._48_4_;
    *(int *)(iVar20 + 0x90) = auVar10._4_4_;
    *(int *)(iVar20 + 0x94) = auVar10._20_4_;
    *(int *)(iVar20 + 0x98) = auVar10._36_4_;
    *(int *)(iVar20 + 0x9c) = auVar10._52_4_;
    *(int *)(iVar20 + 0xa0) = auVar10._8_4_;
    *(int *)(iVar20 + 0xa4) = auVar10._24_4_;
    *(int *)(iVar20 + 0xa8) = auVar10._40_4_;
    *(int *)(iVar20 + 0xac) = auVar10._56_4_;
    *(int *)(iVar20 + 0xb0) = auVar10._12_4_;
    *(int *)(iVar20 + 0xb4) = auVar10._28_4_;
    *(int *)(iVar20 + 0xb8) = auVar10._44_4_;
    *(int *)(iVar20 + 0xbc) = auVar10._60_4_;
    break;
  case 2:
    FUN_088b119c(param_1,0x2000e6);
    *(undefined4 *)(param_1 + 0x348) = 0x1e;
    iVar20 = FUN_088ace70(param_1);
    if (iVar20 != 0) {
      iVar20 = 0;
      do {
        iVar22 = *(int *)(param_1 + 0x130);
        iVar21 = FUN_088a9614(param_1);
        uVar25 = vrndf1_s();
        local_4c = (float)vsub_s(uVar25,in_V7F);
        fVar24 = *(float *)(iVar21 + 0x14) * 2.0 * local_4c;
        iVar21 = FUN_088a9614(param_1);
        local_7c = fVar24 - *(float *)(iVar21 + 0x14);
        local_80 = 0;
        local_78 = 0;
        local_74 = 0;
        FUN_08a29834(iVar22 + 0x80,&local_90,&local_80);
        local_b0 = local_90;
        uStack_ac = uStack_8c;
        uStack_a8 = uStack_88;
        uStack_a4 = uStack_84;
        local_74 = *(undefined4 *)(param_1 + 0x2c);
        auVar1._4_4_ = uStack_8c;
        auVar1._0_4_ = local_90;
        auVar1._8_4_ = uStack_88;
        auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),auVar1);
        local_80 = auVar1._0_4_;
        local_7c = auVar1._4_4_;
        local_78 = auVar1._8_4_;
        auVar19._4_4_ = 0;
        auVar19._0_4_ = local_80;
        auVar19._8_4_ = local_78;
        auVar18._4_4_ = 0;
        auVar18._0_4_ = local_80;
        auVar18._8_4_ = local_78;
        auVar17._4_4_ = 0;
        auVar17._0_4_ = local_80;
        auVar17._8_4_ = local_78;
        uVar25 = vdot_t(auVar17,auVar18);
        uVar26 = vcmp_s(8,uVar25,local_80);
        vrsq_s(uVar25);
        uVar25 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar19,uVar25);
        local_a0 = auVar1._0_4_;
        local_9c = auVar1._4_4_;
        uStack_98 = auVar1._8_4_;
        FUN_08824024(DAT_08abd5b0,0xd,&local_b0,&local_a0);
        iVar20 = iVar20 + 1;
      } while (iVar20 < 8);
      *(undefined4 *)(param_1 + 0x348) = 0x3c;
    }
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    break;
  case 3:
    if (*(int *)(param_1 + 0x348) == 0) {
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    }
    else {
      *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + -1;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x348) == 0x20) {
      FUN_089e0a70(param_1,&LAB_088b09d0,0);
      *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    }
    else {
      if ((*(uint *)(param_1 + 0x348) & 2) == 0) {
        uVar25 = 0;
      }
      else {
        uVar25 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x228) = uVar25;
      *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + 1;
    }
    break;
  case 5:
    fVar24 = *(float *)(param_1 + 0x228) - 0.05;
    *(float *)(param_1 + 0x228) = fVar24;
    if (fVar24 <= 0.0) {
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    }
    break;
  case 6:
    (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
  }
  return;
}

