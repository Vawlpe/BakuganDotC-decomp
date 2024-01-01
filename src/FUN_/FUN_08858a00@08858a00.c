#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08858a00(int param_1)

{
  undefined auVar1 [12];
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [64];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [12];
  undefined auVar24 [64];
  int iVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  float fVar28;
  float fVar29;
  undefined4 in_V7C;
  
  if (*(char *)(param_1 + 0x940) == '\0') {
    if (*(char *)(param_1 + 0x4c1) == '\0') {
      uVar26 = FUN_08884cc8(*(undefined4 *)(param_1 + 0x168));
      *(undefined4 *)(param_1 + 0x16c) = uVar26;
      fVar28 = *(float *)(DAT_08ac5c90 + 0x150);
      auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),
                      *(undefined (*) [12])(DAT_08ac5c90 + 0x50));
      auVar1 = vscl_t(auVar1,0x41200000);
      uVar2 = auVar1._0_4_;
      uVar26 = auVar1._8_4_;
      auVar23._4_4_ = 0;
      auVar23._0_4_ = uVar2;
      auVar23._8_4_ = uVar26;
      auVar1._4_4_ = 0;
      auVar1._0_4_ = uVar2;
      auVar1._8_4_ = uVar26;
      fVar29 = (float)vdot_t(auVar1,auVar23);
      if (1.0 < fVar29) {
        fVar28 = (float)atan2f(uVar26,uVar2);
        fVar28 = -fVar28;
      }
      if (3.141593 < fVar28) {
        fVar28 = fVar28 - 6.283185;
      }
      else if (fVar28 <= -3.141593) {
        fVar28 = fVar28 + 6.283185;
      }
      fVar28 = fVar28 + *(float *)(param_1 + 0x34);
      fVar29 = ABS(fVar28) - 1.570796;
      if (fVar29 < 0.0) {
        fVar29 = 0.0;
      }
      uVar26 = vmul_s(fVar28,in_V7C);
      auVar19 = vrot_q(uVar26,1,0,3,0);
      auVar3 = vidt_q();
      auVar20 = vrot_q(uVar26,2,0,1,0);
      auVar4 = vidt_q();
      uVar26 = vmul_s(fVar29 * -0.03184713,in_V7C);
      auVar21 = vrot_q(uVar26,1,2,0,0);
      auVar22 = vrot_q(uVar26,3,1,0,0);
      auVar5 = vidt_q();
      auVar6 = vidt_q();
      auVar24._16_4_ = auVar3._0_4_;
      auVar24._0_16_ = auVar19;
      auVar24._20_4_ = auVar3._4_4_;
      auVar24._24_4_ = auVar3._8_4_;
      auVar24._28_4_ = auVar3._12_4_;
      auVar24._32_4_ = auVar20._0_4_;
      auVar24._36_4_ = auVar20._4_4_;
      auVar24._40_4_ = auVar20._8_4_;
      auVar24._44_4_ = auVar20._12_4_;
      auVar24._48_4_ = auVar4._0_4_;
      auVar24._52_4_ = auVar4._4_4_;
      auVar24._56_4_ = auVar4._8_4_;
      auVar24._60_4_ = auVar4._12_4_;
      auVar7._48_16_ = auVar6;
      auVar7._44_4_ = auVar5._12_4_;
      auVar7._40_4_ = auVar5._8_4_;
      auVar7._36_4_ = auVar5._4_4_;
      auVar7._32_4_ = auVar5._0_4_;
      auVar7._28_4_ = auVar22._12_4_;
      auVar7._24_4_ = auVar22._8_4_;
      auVar7._20_4_ = auVar22._4_4_;
      auVar7._16_4_ = auVar22._0_4_;
      auVar7._12_4_ = auVar21._12_4_;
      auVar7._8_4_ = auVar21._8_4_;
      auVar7._4_4_ = auVar21._4_4_;
      auVar7._0_4_ = auVar21._0_4_;
      auVar7 = vmmul_q(auVar24,auVar7);
      uVar26 = auVar7._0_4_;
      uVar8 = auVar7._4_4_;
      uVar9 = auVar7._8_4_;
      uVar10 = auVar7._12_4_;
      uVar11 = auVar7._16_4_;
      uVar12 = auVar7._20_4_;
      uVar13 = auVar7._24_4_;
      uVar14 = auVar7._28_4_;
      uVar15 = auVar7._32_4_;
      uVar16 = auVar7._36_4_;
      uVar17 = auVar7._40_4_;
      uVar18 = auVar7._44_4_;
      if (*(int *)(param_1 + 0x6b0) == 0) {
        iVar25 = *(int *)(param_1 + 0x6b4);
      }
      else {
        puVar27 = *(undefined4 **)(param_1 + 0x6b0);
        *puVar27 = uVar26;
        puVar27[1] = uVar8;
        puVar27[2] = uVar9;
        puVar27[3] = uVar10;
        puVar27[4] = uVar11;
        puVar27[5] = uVar12;
        puVar27[6] = uVar13;
        puVar27[7] = uVar14;
        puVar27[8] = uVar15;
        puVar27[9] = uVar16;
        puVar27[10] = uVar17;
        puVar27[0xb] = uVar18;
        iVar25 = *(int *)(param_1 + 0x6b4);
      }
      if (iVar25 == 0) {
        iVar25 = *(int *)(param_1 + 0x6b8);
      }
      else {
        puVar27 = *(undefined4 **)(param_1 + 0x6b4);
        *puVar27 = uVar26;
        puVar27[1] = uVar8;
        puVar27[2] = uVar9;
        puVar27[3] = uVar10;
        puVar27[4] = uVar11;
        puVar27[5] = uVar12;
        puVar27[6] = uVar13;
        puVar27[7] = uVar14;
        puVar27[8] = uVar15;
        puVar27[9] = uVar16;
        puVar27[10] = uVar17;
        puVar27[0xb] = uVar18;
        iVar25 = *(int *)(param_1 + 0x6b8);
      }
      if (iVar25 != 0) {
        puVar27 = *(undefined4 **)(param_1 + 0x6b8);
        *puVar27 = uVar26;
        puVar27[1] = uVar8;
        puVar27[2] = uVar9;
        puVar27[3] = uVar10;
        puVar27[4] = uVar11;
        puVar27[5] = uVar12;
        puVar27[6] = uVar13;
        puVar27[7] = uVar14;
        puVar27[8] = uVar15;
        puVar27[9] = uVar16;
        puVar27[10] = uVar17;
        puVar27[0xb] = uVar18;
      }
      FUN_08855840(param_1);
      FUN_08857238(param_1);
      (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
      FUN_08857474(param_1);
      if (*(char *)(param_1 + 0x941) != '\0') {
        FUN_088587b0(param_1);
      }
    }
    else {
      if (*(int *)(param_1 + 0x6c4) != 0) {
        *(undefined *)(*(int *)(param_1 + 0x6c4) + 0x3a) = 1;
        FUN_088b3410(*(undefined4 *)(param_1 + 0x6c4));
        *(undefined4 *)(param_1 + 0x6c4) = 0;
      }
      *(undefined *)(param_1 + 0x940) = 1;
      FUN_08856bc8(param_1);
    }
  }
  else {
    iVar25 = FUN_0884c3d0(1);
    if (iVar25 == 0) {
      fVar28 = *(float *)(param_1 + 0xa84);
      *(float *)(*(int *)(param_1 + 0x6bc) + 0x6c) = fVar28;
      if (fVar28 <= 0.0) {
        FUN_088a37f4(*(undefined4 *)(param_1 + 0x6bc),0);
      }
      else {
        FUN_088a37f4(*(undefined4 *)(param_1 + 0x6bc),1);
      }
    }
    else {
      FUN_088567c8(param_1);
    }
  }
  return;
}

