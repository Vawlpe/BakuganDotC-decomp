#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f77dc(int param_1)

{
  undefined auVar1 [12];
  uint uVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [64];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [36];
  undefined auVar11 [64];
  undefined auVar12 [64];
  undefined auVar13 [12];
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [12];
  undefined auVar17 [12];
  undefined auVar18 [64];
  undefined auVar19 [12];
  undefined (*pauVar20) [12];
  int iVar21;
  undefined (*pauVar22) [12];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined8 uVar28;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  
  if (*(int *)(param_1 + 0x94) != 2) {
    fVar25 = *(float *)(**(int **)(param_1 + 0x104) + 0x40);
    fVar24 = *(float *)((*(int **)(param_1 + 0x104))[1] + 0x40);
    if ((0.0 <= fVar25) || (0.0 <= fVar24)) {
      pauVar22 = (undefined (*) [12])(param_1 + 0x40);
      if (fVar25 < 0.0) {
        fVar25 = 1.570796;
      }
      if (fVar24 < 0.0) {
        fVar24 = 1.570796;
      }
      fVar23 = *(float *)(*(int *)(param_1 + 0x104) + 0x20);
      fVar24 = (1.0 - fVar23) * fVar25 + fVar23 * fVar24;
      iVar21 = *(int *)(*(int *)(param_1 + 8) + 4);
      pauVar20 = (undefined (*) [12])
                 (**(code **)(iVar21 + 0x14))
                           (*(int *)(param_1 + 8) + (int)*(short *)(iVar21 + 0x10));
      auVar1 = vsub_t(*pauVar20,*pauVar22);
      uVar2 = auVar1._0_4_;
      uVar27 = auVar1._8_4_;
      if (DAT_08b00944 == 0) {
        DAT_08b00944 = 1;
        DAT_08b00940 = 0;
      }
      auVar3._4_4_ = 0;
      auVar3._0_4_ = uVar2;
      auVar3._8_4_ = uVar27;
      auVar1._4_4_ = 0;
      auVar1._0_4_ = uVar2;
      auVar1._8_4_ = uVar27;
      uVar26 = vdot_t(auVar1,auVar3);
      fVar25 = (float)vsqrt_s(uVar26);
      if (1e-06 < fVar25) {
        auVar4._4_4_ = 0;
        auVar4._0_4_ = uVar2;
        auVar4._8_4_ = uVar27;
        auVar1 = vscl_t(auVar4,1.0 / fVar25);
        uVar27 = vdot_t(auVar1,auVar1);
        uVar26 = vcmp_s(8,uVar27,auVar1._0_4_);
        vrsq_s(uVar27);
        uVar27 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar1,uVar27);
        local_200 = auVar1._0_4_;
        local_1fc = auVar1._4_4_;
        uStack_1f8 = auVar1._8_4_;
      }
      else {
        local_200 = DAT_08abf920;
        local_1fc = DAT_08abf924;
        uStack_1f8 = DAT_08abf928;
      }
      uVar2 = *(uint *)(*(int *)(param_1 + 0x104) + 0x10);
      uVar27 = *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x18);
      if (DAT_08b00944 == 0) {
        DAT_08b00944 = 1;
        DAT_08b00940 = 0;
      }
      auVar16._4_4_ = 0;
      auVar16._0_4_ = uVar2;
      auVar16._8_4_ = uVar27;
      auVar15._4_4_ = 0;
      auVar15._0_4_ = uVar2;
      auVar15._8_4_ = uVar27;
      auVar14._4_4_ = 0;
      auVar14._0_4_ = uVar2;
      auVar14._8_4_ = uVar27;
      uVar27 = vdot_t(auVar14,auVar15);
      uVar26 = vcmp_s(8,uVar27,uVar2);
      vrsq_s(uVar27);
      uVar27 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar16,uVar27);
      auVar13._4_4_ = local_1fc;
      auVar13._0_4_ = local_200;
      auVar13._8_4_ = uStack_1f8;
      uVar27 = vdot_t(auVar13,auVar1);
      uVar28 = __extendsfdf2(uVar27);
      uVar28 = acos((int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
      fVar23 = (float)FUN_08a0efb8((int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
      if (1.570796 < fVar23) {
        fVar23 = 3.141593 - fVar23;
      }
      if (fVar23 < 0.0) {
        fVar23 = -fVar23;
      }
      if (fVar24 < fVar23) {
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        uVar27 = *(undefined4 *)(param_1 + 0x44);
        if (DAT_08b0094c == 0) {
          DAT_08b0094c = 1;
          DAT_08b00948 = 0;
        }
        uVar26 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x14);
        auVar17._4_4_ = local_1fc;
        auVar17._0_4_ = local_200;
        auVar17._8_4_ = uStack_1f8;
        auVar1 = vcrsp_t(auVar17,auVar1);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        if (0.0 <= auVar1._4_4_) {
          fVar24 = -fVar24;
        }
        uVar28 = __extendsfdf2();
        uVar28 = cos((int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
        fVar25 = (float)FUN_08a0efb8((int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
        auVar3 = vscl_t(*(undefined (*) [12])(*(int *)(param_1 + 0x104) + 0x10),
                        -(fVar25 * *(float *)(param_1 + 0x138)));
        auVar1 = vscl_t(***(undefined (***) [12])(param_1 + 0x104),
                        1.0 - *(float *)(*(int *)(param_1 + 0x104) + 0x20));
        auVar4 = vscl_t(**(undefined (**) [12])(*(int *)(param_1 + 0x104) + 4),
                        *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x20));
        auVar1 = vadd_t(auVar1,auVar4);
        auVar1 = vadd_t(auVar1,auVar3);
        *(int *)*pauVar22 = auVar1._0_4_;
        *(int *)(param_1 + 0x44) = auVar1._4_4_;
        *(int *)(param_1 + 0x48) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x4c) = in_V7D;
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        *(undefined4 *)(param_1 + 0x44) = uVar27;
        auVar19._4_4_ = fVar24;
        auVar19._0_4_ = fVar24;
        auVar19._8_4_ = fVar24;
        auVar1 = vmul_t(ZEXT812(0x3f80000000000000),auVar19);
        auVar1 = vscl_t(auVar1,in_V7C);
        auVar18._4_4_ = uStack_17c;
        auVar18._0_4_ = local_180;
        auVar18._8_4_ = uStack_178;
        auVar18._12_4_ = uStack_174;
        auVar18._16_4_ = local_170;
        auVar18._20_4_ = uStack_16c;
        auVar18._24_4_ = uStack_168;
        auVar18._28_4_ = uStack_164;
        auVar18._32_4_ = local_160;
        auVar18._36_4_ = uStack_15c;
        auVar18._40_4_ = uStack_158;
        auVar18._44_4_ = uStack_154;
        auVar18._48_4_ = local_150;
        auVar18._52_4_ = uStack_14c;
        auVar18._56_4_ = uStack_148;
        auVar18._60_4_ = uStack_144;
        auVar5 = vidt_q();
        auVar8 = vrot_q(auVar1._0_4_,0,1,2,0);
        auVar9 = vrot_q(auVar1._0_4_,0,3,1,0);
        auVar6 = vidt_q();
        auVar7._48_16_ = auVar6;
        auVar7._44_4_ = auVar9._12_4_;
        auVar7._40_4_ = auVar9._8_4_;
        auVar7._36_4_ = auVar9._4_4_;
        auVar7._32_4_ = auVar9._0_4_;
        auVar7._28_4_ = auVar8._12_4_;
        auVar7._24_4_ = auVar8._8_4_;
        auVar7._20_4_ = auVar8._4_4_;
        auVar7._16_4_ = auVar8._0_4_;
        auVar7._12_4_ = auVar5._12_4_;
        auVar7._8_4_ = auVar5._8_4_;
        auVar7._4_4_ = auVar5._4_4_;
        auVar7._0_4_ = auVar5._0_4_;
        auVar7 = vmmul_q(auVar18,auVar7);
        auVar8 = vrot_q(uStack_17c,1,0,3,0);
        auVar5 = vidt_q();
        auVar9 = vrot_q(uStack_17c,2,0,1,0);
        auVar11._48_16_ = auVar6;
        auVar11._44_4_ = auVar9._12_4_;
        auVar11._40_4_ = auVar9._8_4_;
        auVar11._36_4_ = auVar9._4_4_;
        auVar11._32_4_ = auVar9._0_4_;
        auVar11._28_4_ = auVar5._12_4_;
        auVar11._24_4_ = auVar5._8_4_;
        auVar11._20_4_ = auVar5._4_4_;
        auVar11._16_4_ = auVar5._0_4_;
        auVar11._12_4_ = auVar8._12_4_;
        auVar11._8_4_ = auVar8._8_4_;
        auVar11._4_4_ = auVar8._4_4_;
        auVar11._0_4_ = auVar8._0_4_;
        auVar7 = vmmul_q(auVar7,auVar11);
        auVar8 = vrot_q(uStack_178,1,2,0,0);
        auVar9 = vrot_q(uStack_178,3,1,0,0);
        auVar5 = vidt_q();
        auVar12._48_16_ = auVar6;
        auVar12._44_4_ = auVar5._12_4_;
        auVar12._40_4_ = auVar5._8_4_;
        auVar12._36_4_ = auVar5._4_4_;
        auVar12._32_4_ = auVar5._0_4_;
        auVar12._28_4_ = auVar9._12_4_;
        auVar12._24_4_ = auVar9._8_4_;
        auVar12._20_4_ = auVar9._4_4_;
        auVar12._16_4_ = auVar9._0_4_;
        auVar12._12_4_ = auVar8._12_4_;
        auVar12._8_4_ = auVar8._8_4_;
        auVar12._4_4_ = auVar8._4_4_;
        auVar12._0_4_ = auVar8._0_4_;
        auVar7 = vmmul_q(auVar7,auVar12);
        auVar10._24_12_ = auVar7._32_12_;
        auVar10._20_4_ = auVar7._24_4_;
        auVar10._16_4_ = auVar7._20_4_;
        auVar10._12_4_ = auVar7._16_4_;
        auVar10._8_4_ = auVar7._8_4_;
        auVar10._4_4_ = auVar7._4_4_;
        auVar10._0_4_ = auVar7._0_4_;
        auVar1 = vtfm3_t(auVar10,*(undefined (*) [12])(*(int *)(param_1 + 0x104) + 0x10));
        auVar1 = vscl_t(auVar1,*(undefined4 *)(param_1 + 0x138));
        uVar27 = *(undefined4 *)(param_1 + 0x4c);
        auVar1 = vadd_t(*pauVar22,auVar1);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        iVar21 = **(int **)(param_1 + 0x80);
        *(int *)(iVar21 + 0x40) = auVar1._0_4_;
        *(undefined4 *)(iVar21 + 0x44) = uVar26;
        *(int *)(iVar21 + 0x48) = auVar1._8_4_;
        *(undefined4 *)(iVar21 + 0x4c) = uVar27;
        iVar21 = *(int *)(param_1 + 4);
      }
      else {
        *(float *)(param_1 + 0x138) = fVar25;
        iVar21 = *(int *)(param_1 + 4);
      }
      if (*(char *)(iVar21 + 0x4a) != '\0') {
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x130);
      }
    }
  }
  return;
}

