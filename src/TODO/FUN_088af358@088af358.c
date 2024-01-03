#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088af358(int param_1)

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
  undefined4 uVar11;
  undefined auVar12 [64];
  undefined auVar13 [64];
  undefined auVar15 [64];
  undefined auVar16 [12];
  undefined auVar17 [12];
  undefined auVar18 [12];
  int iVar19;
  int iVar20;
  undefined (*pauVar21) [12];
  undefined (*pauVar22) [12];
  int iVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 local_b0;
  float local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_44;
  undefined auVar14 [64];
  
  switch(*(undefined4 *)(param_1 + 0x1fc)) {
  case 0:
    uVar25 = 0;
    pauVar22 = (undefined (*) [12])(param_1 + 0x1b0);
    pauVar21 = (undefined (*) [12])(param_1 + 0x20);
    if (*(int *)(param_1 + 0x148) == 0) {
      uVar27 = *(undefined4 *)(param_1 + 0x2c);
      auVar1 = vsub_t(*pauVar21,*(undefined (*) [12])(param_1 + 0x270));
      *(int *)*pauVar22 = auVar1._0_4_;
      *(int *)(param_1 + 0x1b4) = auVar1._4_4_;
      *(int *)(param_1 + 0x1b8) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x1bc) = uVar27;
    }
    else {
      iVar19 = *(int *)(param_1 + 0x148);
      uVar27 = vmul_s(*(undefined4 *)(iVar19 + 0x34),in_V7C);
      auVar2 = vrot_q(uVar27,1,0,2,0);
      *(undefined4 *)(iVar19 + 0x20) = auVar2._0_4_;
      *(int *)(iVar19 + 0x24) = auVar2._4_4_;
      *(int *)(iVar19 + 0x28) = auVar2._8_4_;
      *(int *)(iVar19 + 0x2c) = auVar2._12_4_;
      uVar27 = *(undefined4 *)(iVar19 + 0x24);
      uVar26 = *(undefined4 *)(iVar19 + 0x28);
      uVar11 = *(undefined4 *)(iVar19 + 0x2c);
      *(undefined4 *)*pauVar22 = *(undefined4 *)(iVar19 + 0x20);
      *(undefined4 *)(param_1 + 0x1b4) = uVar27;
      *(undefined4 *)(param_1 + 0x1b8) = uVar26;
      *(undefined4 *)(param_1 + 0x1bc) = uVar11;
    }
    iVar19 = FUN_088acda0(param_1);
    if (iVar19 != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = uVar25;
    }
    *(undefined4 *)(param_1 + 0x1b4) = uVar25;
    uVar27 = vdot_t(*pauVar22,*pauVar22);
    uVar26 = vcmp_s(8,uVar27,*(undefined4 *)*pauVar22);
    vrsq_s(uVar27);
    uVar27 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar22,uVar27);
    *(int *)*pauVar22 = auVar1._0_4_;
    *(int *)(*pauVar22 + 4) = auVar1._4_4_;
    *(int *)(*pauVar22 + 8) = auVar1._8_4_;
    *(undefined4 *)pauVar22[1] = in_V7D;
    uVar27 = *(undefined4 *)pauVar22[1];
    vpfxs(2,1,0x10,3);
    auVar1 = vmov_t(*pauVar22);
    *(int *)*pauVar22 = auVar1._0_4_;
    *(int *)(*pauVar22 + 4) = auVar1._4_4_;
    *(int *)(*pauVar22 + 8) = auVar1._8_4_;
    *(undefined4 *)pauVar22[1] = uVar27;
    *(undefined4 *)(param_1 + 0x260) = uVar25;
    *(undefined4 *)(param_1 + 0x30c) = uVar25;
    *(undefined4 *)(param_1 + 0x310) = uVar25;
    *(undefined *)(param_1 + 0x314) = 0;
    iVar19 = *(int *)(param_1 + 0x130);
    uVar25 = *(undefined4 *)(iVar19 + 0xb4);
    uVar27 = *(undefined4 *)(iVar19 + 0xb8);
    uVar26 = *(undefined4 *)(iVar19 + 0xbc);
    *(undefined4 *)*pauVar21 = *(undefined4 *)(iVar19 + 0xb0);
    *(undefined4 *)(*pauVar21 + 4) = uVar25;
    *(undefined4 *)(*pauVar21 + 8) = uVar27;
    *(undefined4 *)pauVar21[1] = uVar26;
    *(undefined *)(param_1 + 0x287) = 0;
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    break;
  case 1:
    auVar10 = vmidt_q();
    fVar24 = *(float *)(param_1 + 0x30c) + 0.01666667;
    *(float *)(param_1 + 0x30c) = fVar24;
    uVar25 = vmul_s(fVar24 * fVar24 * 3.141593,in_V7C);
    fVar24 = (float)vcos_s(uVar25);
    fVar24 = *(float *)(param_1 + 0x260) + (1.0 - fVar24) * 0.5 * 1.570796;
    *(float *)(param_1 + 0x260) = fVar24;
    if (1.570796 <= fVar24) {
      *(undefined4 *)(param_1 + 0x260) = 0x3fc90fdb;
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    }
    uVar25 = vcst_s(6);
    uVar25 = vmul_s(uVar25,*(undefined4 *)(param_1 + 0x260));
    uVar27 = vcos_s(uVar25);
    uVar25 = vsin_s(uVar25);
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x1b0),uVar25);
    auVar12._60_4_ = uVar27;
    auVar12._48_12_ = auVar1;
    auVar8._12_4_ = uVar27;
    auVar8._0_12_ = auVar1;
    auVar7._12_4_ = uVar27;
    auVar7._0_12_ = auVar1;
    auVar6._12_4_ = uVar27;
    auVar6._0_12_ = auVar1;
    auVar5._12_4_ = uVar27;
    auVar5._0_12_ = auVar1;
    auVar4._12_4_ = uVar27;
    auVar4._0_12_ = auVar1;
    auVar3._12_4_ = uVar27;
    auVar3._0_12_ = auVar1;
    auVar2._12_4_ = uVar27;
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
    auVar12._44_4_ = auVar4._12_4_;
    auVar12._40_4_ = auVar4._8_4_;
    auVar12._36_4_ = auVar4._4_4_;
    auVar12._32_4_ = auVar4._0_4_;
    auVar12._28_4_ = auVar3._12_4_;
    auVar12._24_4_ = auVar3._8_4_;
    auVar12._20_4_ = auVar3._4_4_;
    auVar12._16_4_ = auVar3._0_4_;
    auVar12._12_4_ = auVar2._12_4_;
    auVar12._8_4_ = auVar2._8_4_;
    auVar12._4_4_ = auVar2._4_4_;
    auVar12._0_4_ = auVar2._0_4_;
    auVar9 = vmmul_q(auVar9,auVar12);
    auVar2 = vidt_q();
    auVar3 = vidt_q();
    uVar25 = vmul_s(*(float *)(param_1 + 0x30c) * *(float *)(param_1 + 0x30c) * 3.141593,in_V7C);
    fVar24 = (float)vcos_s(uVar25);
    fVar24 = *(float *)(param_1 + 0x310) + (1.0 - fVar24) * 0.5 * 25.0;
    *(float *)(param_1 + 0x310) = fVar24;
    uVar25 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
    auVar6 = vrot_q(uVar25,1,0,3,0);
    auVar4 = vidt_q();
    auVar7 = vrot_q(uVar25,2,0,1,0);
    auVar5 = vidt_q();
    auVar15._4_4_ = auVar10._16_4_;
    auVar15._0_4_ = auVar10._0_4_;
    auVar15._8_4_ = auVar10._32_4_;
    auVar15._12_4_ = auVar10._48_4_;
    auVar15._16_4_ = auVar10._4_4_;
    auVar15._20_4_ = auVar10._20_4_;
    auVar15._24_4_ = auVar10._36_4_;
    auVar15._28_4_ = auVar10._52_4_;
    auVar15._32_4_ = auVar10._8_4_;
    auVar15._36_4_ = auVar10._24_4_;
    auVar15._40_4_ = auVar10._40_4_;
    auVar15._44_4_ = auVar10._56_4_;
    auVar15._48_4_ = auVar10._12_4_;
    auVar15._52_4_ = *(undefined4 *)(param_1 + 0x24);
    auVar15._56_4_ = auVar10._44_4_;
    auVar15._60_4_ = auVar10._60_4_;
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
    auVar10 = vmmul_q(auVar15,auVar10);
    auVar13._60_4_ = auVar3._12_4_;
    auVar13._56_4_ = auVar2._8_4_;
    auVar13._52_4_ = auVar2._4_4_;
    auVar13._48_4_ = auVar2._0_4_;
    auVar13._44_4_ = *(undefined4 *)(param_1 + 0x28);
    auVar13._40_4_ = auVar9._40_4_;
    auVar13._36_4_ = auVar9._24_4_;
    auVar13._32_4_ = auVar9._8_4_;
    auVar13._28_4_ = fVar24;
    auVar13._24_4_ = auVar9._36_4_;
    auVar13._20_4_ = auVar9._20_4_;
    auVar13._16_4_ = auVar9._4_4_;
    auVar13._12_4_ = *(undefined4 *)(param_1 + 0x20);
    auVar13._8_4_ = auVar9._32_4_;
    auVar13._4_4_ = auVar9._16_4_;
    auVar13._0_4_ = auVar9._0_4_;
    auVar14._60_4_ = auVar10._60_4_;
    auVar14._56_4_ = auVar10._44_4_;
    auVar14._52_4_ = auVar10._28_4_;
    auVar14._48_4_ = auVar10._12_4_;
    auVar14._44_4_ = auVar10._56_4_;
    auVar14._40_4_ = auVar10._40_4_;
    auVar14._36_4_ = auVar10._24_4_;
    auVar14._32_4_ = auVar10._8_4_;
    auVar14._28_4_ = auVar10._52_4_;
    auVar14._24_4_ = auVar10._36_4_;
    auVar14._20_4_ = auVar10._20_4_;
    auVar14._16_4_ = auVar10._4_4_;
    auVar14._12_4_ = auVar10._48_4_;
    auVar14._8_4_ = auVar10._32_4_;
    auVar14._4_4_ = auVar10._16_4_;
    auVar14._0_4_ = auVar10._0_4_;
    auVar10 = vmmul_q(auVar13,auVar14);
    iVar19 = *(int *)(param_1 + 0x130);
    *(int *)(iVar19 + 0x80) = auVar10._0_4_;
    *(int *)(iVar19 + 0x84) = auVar10._16_4_;
    *(int *)(iVar19 + 0x88) = auVar10._32_4_;
    *(int *)(iVar19 + 0x8c) = auVar10._48_4_;
    *(int *)(iVar19 + 0x90) = auVar10._4_4_;
    *(int *)(iVar19 + 0x94) = auVar10._20_4_;
    *(int *)(iVar19 + 0x98) = auVar10._36_4_;
    *(int *)(iVar19 + 0x9c) = auVar10._52_4_;
    *(int *)(iVar19 + 0xa0) = auVar10._8_4_;
    *(int *)(iVar19 + 0xa4) = auVar10._24_4_;
    *(int *)(iVar19 + 0xa8) = auVar10._40_4_;
    *(int *)(iVar19 + 0xac) = auVar10._56_4_;
    *(int *)(iVar19 + 0xb0) = auVar10._12_4_;
    *(int *)(iVar19 + 0xb4) = auVar10._28_4_;
    *(int *)(iVar19 + 0xb8) = auVar10._44_4_;
    *(int *)(iVar19 + 0xbc) = auVar10._60_4_;
    if (*(int *)(param_1 + 0x140) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x140) + 0x10c) = 1;
    }
    break;
  case 2:
    iVar19 = DONE_NotZero_DAT_08AC5258();
    if (iVar19 != 0) {
      uVar25 = DONE_Get_DAT_08AC5258();
      FUN_089c00c4(uVar25,0x2000e6,*(int *)(param_1 + 0x130) + 0xb0,0,1);
    }
    iVar19 = FUN_088ace70(param_1);
    if (iVar19 != 0) {
      iVar23 = 0;
      iVar19 = *(int *)(param_1 + 0x130);
      while( true ) {
        iVar19 = iVar19 + 0x80;
        iVar20 = FUN_088a9614(param_1);
        uVar25 = vrndf1_s();
        local_44 = (float)vsub_s(uVar25,in_V7F);
        fVar24 = *(float *)(iVar20 + 0x14) * 2.0 * local_44;
        iVar20 = FUN_088a9614(param_1);
        local_7c = fVar24 - *(float *)(iVar20 + 0x14);
        local_80 = 0;
        local_78 = 0;
        local_74 = 0;
        FUN_08a29834(iVar19,&local_90,&local_80);
        local_b0 = local_90;
        uStack_a8 = uStack_88;
        uStack_a4 = uStack_84;
        local_74 = *(undefined4 *)(param_1 + 0x2c);
        auVar1._4_4_ = fStack_8c;
        auVar1._0_4_ = local_90;
        auVar1._8_4_ = uStack_88;
        auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),auVar1);
        local_80 = auVar1._0_4_;
        local_7c = auVar1._4_4_;
        local_78 = auVar1._8_4_;
        local_ac = fStack_8c + 30.0;
        fVar24 = local_7c + 30.0;
        auVar18._4_4_ = fVar24;
        auVar18._0_4_ = local_80;
        auVar18._8_4_ = local_78;
        auVar17._4_4_ = fVar24;
        auVar17._0_4_ = local_80;
        auVar17._8_4_ = local_78;
        auVar16._4_4_ = fVar24;
        auVar16._0_4_ = local_80;
        auVar16._8_4_ = local_78;
        uVar25 = vdot_t(auVar16,auVar17);
        uVar27 = vcmp_s(8,uVar25,local_80);
        vrsq_s(uVar25);
        uVar25 = vcmovt_s(in_V7D,(byte)uVar27 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar18,uVar25);
        local_a0 = auVar1._0_4_;
        local_9c = auVar1._4_4_;
        uStack_98 = auVar1._8_4_;
        FUN_08824024(DAT_08abd5b0,0xd,&local_b0,&local_a0);
        iVar23 = iVar23 + 1;
        if (7 < iVar23) break;
        iVar19 = *(int *)(param_1 + 0x130);
      }
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
        uVar25 = 0;
      }
      else {
        uVar25 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x228) = uVar25;
      *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + 1;
    }
    break;
  case 5:
    fVar24 = *(float *)(param_1 + 0x228) - 0.05;
    *(float *)(param_1 + 0x228) = fVar24;
    if (fVar24 <= 0.0) {
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

