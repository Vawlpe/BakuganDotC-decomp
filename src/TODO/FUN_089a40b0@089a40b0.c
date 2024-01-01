#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a40b0(int param_1)

{
  undefined (*pauVar1) [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [64];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 in_V7C;
  undefined auStack_a0 [64];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar19 = 0;
  iVar18 = param_1;
  do {
    if ((*(int *)(iVar18 + 0x68c) != 0) && (uVar19 < 5)) {
      if (uVar19 == 1) {
        iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x14);
        (**(code **)(iVar17 + 0x3c))(*(int *)(iVar18 + 0x68c) + (int)*(short *)(iVar17 + 0x38));
      }
      else if (uVar19 == 2) {
        iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x14);
        (**(code **)(iVar17 + 0x3c))(*(int *)(iVar18 + 0x68c) + (int)*(short *)(iVar17 + 0x38));
      }
      else if (uVar19 == 3) {
        iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x14);
        (**(code **)(iVar17 + 0x3c))(*(int *)(iVar18 + 0x68c) + (int)*(short *)(iVar17 + 0x38));
      }
      else if (uVar19 == 4) {
        if (*(char *)(param_1 + 0x74) == *(char *)(param_1 + 0x76)) {
          iVar17 = *(int *)(iVar18 + 0x68c);
        }
        else {
          if (*(char *)(param_1 + 0x74) == '\x04') {
            FUN_089a3ff4(0,auStack_a0);
            FUN_089e0860(*(undefined4 *)(iVar18 + 0x68c));
            FUN_089df3b0(0x3e4ccccd,*(undefined4 *)(iVar18 + 0x68c),auStack_a0,0);
            iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x14);
            (**(code **)(iVar17 + 0x34))
                      (0x3f800000,*(int *)(iVar18 + 0x68c) + (int)*(short *)(iVar17 + 0x30));
            uVar16 = *(undefined *)(param_1 + 0x74);
          }
          else {
            if (*(char *)(param_1 + 0x76) == '\x04') {
              FUN_089a3ff4(1,auStack_a0);
              FUN_089e0860(*(undefined4 *)(iVar18 + 0x68c));
              FUN_089df3b0(0x3e4ccccd,*(undefined4 *)(iVar18 + 0x68c),auStack_a0,0);
              iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x14);
              (**(code **)(iVar17 + 0x34))
                        (0x3f800000,*(int *)(iVar18 + 0x68c) + (int)*(short *)(iVar17 + 0x30));
            }
            uVar16 = *(undefined *)(param_1 + 0x74);
          }
          *(undefined *)(param_1 + 0x76) = uVar16;
          iVar17 = *(int *)(iVar18 + 0x68c);
        }
        (**(code **)(*(int *)(iVar17 + 0x14) + 0x3c))
                  (iVar17 + *(short *)(*(int *)(iVar17 + 0x14) + 0x38));
      }
      else {
        FUN_089a3f44(param_1);
        FUN_089a3f9c(param_1);
        iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x130);
        local_50 = *(undefined4 *)(iVar17 + 0xb0);
        uStack_4c = *(undefined4 *)(iVar17 + 0xb4);
        uStack_48 = *(undefined4 *)(iVar17 + 0xb8);
        uStack_44 = *(undefined4 *)(iVar17 + 0xbc);
        iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x130);
        uVar20 = vmul_s(0x3ca3d70a,in_V7C);
        auVar10 = vrot_q(uVar20,1,0,3,0);
        auVar5 = vidt_q();
        auVar11 = vrot_q(uVar20,2,0,1,0);
        auVar6 = vidt_q();
        auVar9._48_16_ = auVar6;
        auVar9._44_4_ = auVar11._12_4_;
        auVar9._40_4_ = auVar11._8_4_;
        auVar9._36_4_ = auVar11._4_4_;
        auVar9._32_4_ = auVar11._0_4_;
        auVar9._28_4_ = auVar5._12_4_;
        auVar9._24_4_ = auVar5._8_4_;
        auVar9._20_4_ = auVar5._4_4_;
        auVar9._16_4_ = auVar5._0_4_;
        auVar9._12_4_ = auVar10._12_4_;
        auVar9._8_4_ = auVar10._8_4_;
        auVar9._4_4_ = auVar10._4_4_;
        auVar9._0_4_ = auVar10._0_4_;
        auVar9 = vmmul_q(*(undefined (*) [64])(iVar17 + 0x80),auVar9);
        *(int *)*(undefined (*) [64])(iVar17 + 0x80) = auVar9._0_4_;
        *(int *)(iVar17 + 0x84) = auVar9._4_4_;
        *(int *)(iVar17 + 0x88) = auVar9._8_4_;
        *(int *)(iVar17 + 0x8c) = auVar9._12_4_;
        *(int *)(iVar17 + 0x90) = auVar9._16_4_;
        *(int *)(iVar17 + 0x94) = auVar9._20_4_;
        *(int *)(iVar17 + 0x98) = auVar9._24_4_;
        *(int *)(iVar17 + 0x9c) = auVar9._28_4_;
        *(int *)(iVar17 + 0xa0) = auVar9._32_4_;
        *(int *)(iVar17 + 0xa4) = auVar9._36_4_;
        *(int *)(iVar17 + 0xa8) = auVar9._40_4_;
        *(int *)(iVar17 + 0xac) = auVar9._44_4_;
        *(int *)(iVar17 + 0xb0) = auVar9._48_4_;
        *(int *)(iVar17 + 0xb4) = auVar9._52_4_;
        *(int *)(iVar17 + 0xb8) = auVar9._56_4_;
        *(int *)(iVar17 + 0xbc) = auVar9._60_4_;
        iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x130);
        pauVar1 = (undefined (*) [12])(iVar17 + 0x90);
        uVar14 = *(undefined4 *)(iVar17 + 0x9c);
        uVar20 = *(undefined4 *)(iVar17 + 0xb0);
        uVar12 = *(undefined4 *)(iVar17 + 0xb4);
        uVar13 = *(undefined4 *)(iVar17 + 0xb8);
        uVar15 = *(undefined4 *)(iVar17 + 0xbc);
        auVar7 = vzero_t();
        auVar3 = vcrsp_t(*(undefined (*) [12])(iVar17 + 0x80),*pauVar1);
        auVar4 = vcrsp_t(*pauVar1,auVar3);
        uVar21 = vdot_t(auVar4,auVar4);
        uVar22 = vdot_t(*pauVar1,*pauVar1);
        uVar23 = vdot_t(auVar3,auVar3);
        auVar2._8_4_ = uVar23;
        auVar2._4_4_ = uVar22;
        auVar2._0_4_ = uVar21;
        auVar8 = vrsq_t(auVar2);
        auVar4 = vscl_t(auVar4,auVar8._0_4_);
        auVar2 = vscl_t(*pauVar1,auVar8._4_4_);
        auVar3 = vscl_t(auVar3,auVar8._8_4_);
        *(int *)*(undefined (*) [12])(iVar17 + 0x80) = auVar4._0_4_;
        *(int *)(iVar17 + 0x84) = auVar4._4_4_;
        *(int *)(iVar17 + 0x88) = auVar4._8_4_;
        *(int *)(iVar17 + 0x8c) = auVar7._0_4_;
        *(int *)(iVar17 + 0x90) = auVar2._0_4_;
        *(int *)(iVar17 + 0x94) = auVar2._4_4_;
        *(int *)(iVar17 + 0x98) = auVar2._8_4_;
        *(undefined4 *)(iVar17 + 0x9c) = uVar14;
        *(int *)(iVar17 + 0xa0) = auVar3._0_4_;
        *(int *)(iVar17 + 0xa4) = auVar3._4_4_;
        *(int *)(iVar17 + 0xa8) = auVar3._8_4_;
        *(int *)(iVar17 + 0xac) = auVar7._8_4_;
        *(undefined4 *)(iVar17 + 0xb0) = uVar20;
        *(undefined4 *)(iVar17 + 0xb4) = uVar12;
        *(undefined4 *)(iVar17 + 0xb8) = uVar13;
        *(undefined4 *)(iVar17 + 0xbc) = uVar15;
        iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x130);
        local_58 = 0x3f000000;
        local_5c = 0x3f000000;
        local_60 = 0x3f000000;
        local_54 = 0;
        auVar5 = vscl_q(*(undefined (*) [16])(iVar17 + 0x80),0x3f000000);
        auVar6 = vscl_q(*(undefined (*) [16])(iVar17 + 0x90),0x3f000000);
        auVar10 = vscl_q(*(undefined (*) [16])(iVar17 + 0xa0),0x3f000000);
        *(int *)*(undefined (*) [16])(iVar17 + 0x80) = auVar5._0_4_;
        *(int *)(iVar17 + 0x84) = auVar5._4_4_;
        *(int *)(iVar17 + 0x88) = auVar5._8_4_;
        *(int *)(iVar17 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar17 + 0x90) = auVar6._0_4_;
        *(int *)(iVar17 + 0x94) = auVar6._4_4_;
        *(int *)(iVar17 + 0x98) = auVar6._8_4_;
        *(int *)(iVar17 + 0x9c) = auVar6._12_4_;
        *(int *)(iVar17 + 0xa0) = auVar10._0_4_;
        *(int *)(iVar17 + 0xa4) = auVar10._4_4_;
        *(int *)(iVar17 + 0xa8) = auVar10._8_4_;
        *(int *)(iVar17 + 0xac) = auVar10._12_4_;
        iVar17 = *(int *)(*(int *)(iVar18 + 0x68c) + 0x130);
        *(undefined4 *)(iVar17 + 0xb0) = local_50;
        *(undefined4 *)(iVar17 + 0xb4) = uStack_4c;
        *(undefined4 *)(iVar17 + 0xb8) = uStack_48;
        *(undefined4 *)(iVar17 + 0xbc) = uStack_44;
      }
    }
    uVar19 = uVar19 + 1;
    iVar18 = iVar18 + 4;
  } while ((int)uVar19 < 5);
  return;
}

