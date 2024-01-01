#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a2ec4(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  bool bVar7;
  undefined auVar8 [64];
  char cVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 in_V7C;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0x3f4) == '\0') {
    bVar7 = false;
    FUN_088a29e4(param_1);
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x228);
    if (*(char *)(param_1 + 0x281) == '\0') {
      if (*(int *)(param_1 + 800) == 0) {
        iVar10 = *(int *)(param_1 + 0x32c);
      }
      else {
        iVar10 = FUN_0881a580(*(undefined4 *)(*(int *)(param_1 + 800) + 0x20c));
        if (iVar10 == 0) {
          iVar10 = *(int *)(param_1 + 0x32c);
        }
        else {
          bVar7 = true;
          iVar10 = *(int *)(param_1 + 0x32c);
        }
      }
      if (iVar10 == 0) {
        if (bVar7) {
          FUN_088a2bb4(param_1);
          cVar9 = *(char *)(param_1 + 0x2b0);
        }
        else {
          cVar9 = *(char *)(param_1 + 0x2b0);
        }
      }
      else {
        cVar9 = *(char *)(param_1 + 0x2b0);
      }
      if (cVar9 != '\0') {
        fVar11 = *(float *)(param_1 + 0x2b4);
        iVar10 = FUN_088a95c0(param_1,*(byte *)(param_1 + 0x2b1) & 0x1f);
        fVar12 = *(float *)(param_1 + 0x2b8);
        *(float *)(param_1 + 0x20) = fVar11 + (float)iVar10;
        iVar10 = FUN_088a95c0(param_1,*(char *)(param_1 + 0x2b1) + 8U & 0x1f);
        *(char *)(param_1 + 0x2b1) = *(char *)(param_1 + 0x2b1) + '\x01';
        *(float *)(param_1 + 0x28) = fVar12 + (float)iVar10;
        if (0xf < *(byte *)(param_1 + 0x2b1)) {
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x2b4);
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2b8);
          *(undefined *)(param_1 + 0x2b0) = 0;
        }
      }
      fVar11 = *(float *)(param_1 + 0x3f0) + 0.03;
      *(float *)(param_1 + 0x3f0) = fVar11;
      if (3.141593 < fVar11) {
        *(float *)(param_1 + 0x3f0) = *(float *)(param_1 + 0x3f0) - 6.283185;
      }
      else if (*(float *)(param_1 + 0x3f0) <= -3.141593) {
        *(float *)(param_1 + 0x3f0) = *(float *)(param_1 + 0x3f0) + 6.283185;
      }
      uVar13 = vmul_s(*(undefined4 *)(param_1 + 0x3f0),in_V7C);
      auVar1 = vidt_q();
      auVar4 = vrot_q(uVar13,0,1,2,0);
      auVar5 = vrot_q(uVar13,0,3,1,0);
      auVar2 = vidt_q();
      auVar8._4_4_ = uStack_5c;
      auVar8._0_4_ = local_60;
      auVar8._8_4_ = uStack_58;
      auVar8._12_4_ = uStack_54;
      auVar8._16_4_ = local_50;
      auVar8._20_4_ = uStack_4c;
      auVar8._24_4_ = uStack_48;
      auVar8._28_4_ = uStack_44;
      auVar8._32_4_ = local_40;
      auVar8._36_4_ = uStack_3c;
      auVar8._40_4_ = uStack_38;
      auVar8._44_4_ = uStack_34;
      auVar8._48_4_ = local_30;
      auVar8._52_4_ = uStack_2c;
      auVar8._56_4_ = uStack_28;
      auVar8._60_4_ = uStack_24;
      auVar3._48_16_ = auVar2;
      auVar3._44_4_ = auVar5._12_4_;
      auVar3._40_4_ = auVar5._8_4_;
      auVar3._36_4_ = auVar5._4_4_;
      auVar3._32_4_ = auVar5._0_4_;
      auVar3._28_4_ = auVar4._12_4_;
      auVar3._24_4_ = auVar4._8_4_;
      auVar3._20_4_ = auVar4._4_4_;
      auVar3._16_4_ = auVar4._0_4_;
      auVar3._12_4_ = auVar1._12_4_;
      auVar3._8_4_ = auVar1._8_4_;
      auVar3._4_4_ = auVar1._4_4_;
      auVar3._0_4_ = auVar1._0_4_;
      auVar3 = vmmul_q(auVar8,auVar3);
      uVar13 = vmul_s(*(undefined4 *)(param_1 + 0x3f0),in_V7C);
      auVar4 = vrot_q(uVar13,1,2,0,0);
      auVar5 = vrot_q(uVar13,3,1,0,0);
      auVar1 = vidt_q();
      auVar2 = vidt_q();
      auVar6._48_16_ = auVar2;
      auVar6._44_4_ = auVar1._12_4_;
      auVar6._40_4_ = auVar1._8_4_;
      auVar6._36_4_ = auVar1._4_4_;
      auVar6._32_4_ = auVar1._0_4_;
      auVar6._28_4_ = auVar5._12_4_;
      auVar6._24_4_ = auVar5._8_4_;
      auVar6._20_4_ = auVar5._4_4_;
      auVar6._16_4_ = auVar5._0_4_;
      auVar6._12_4_ = auVar4._12_4_;
      auVar6._8_4_ = auVar4._8_4_;
      auVar6._4_4_ = auVar4._4_4_;
      auVar6._0_4_ = auVar4._0_4_;
      vmmul_q(auVar3,auVar6);
      uVar13 = vmul_s(*(undefined4 *)(param_1 + 0x3f0),in_V7C);
      auVar2 = vrot_q(uVar13,1,0,3,0);
      auVar1 = vidt_q();
      auVar4 = vrot_q(uVar13,2,0,1,0);
      vidt_q();
      if (*(int *)(param_1 + 0x324) != 0) {
        iVar10 = *(int *)(param_1 + 0x324);
        *(int *)(iVar10 + 0x80) = auVar2._0_4_;
        *(int *)(iVar10 + 0x84) = auVar2._4_4_;
        *(int *)(iVar10 + 0x88) = auVar2._8_4_;
        *(int *)(iVar10 + 0x8c) = auVar2._12_4_;
        *(int *)(iVar10 + 0x90) = auVar1._0_4_;
        *(int *)(iVar10 + 0x94) = auVar1._4_4_;
        *(int *)(iVar10 + 0x98) = auVar1._8_4_;
        *(int *)(iVar10 + 0x9c) = auVar1._12_4_;
        *(int *)(iVar10 + 0xa0) = auVar4._0_4_;
        *(int *)(iVar10 + 0xa4) = auVar4._4_4_;
        *(int *)(iVar10 + 0xa8) = auVar4._8_4_;
        *(int *)(iVar10 + 0xac) = auVar4._12_4_;
      }
      FUN_088a250c(param_1);
      FUN_088ac81c(param_1);
    }
    else if (*(char *)(param_1 + 0x3f4) == '\0') {
      *(undefined *)(param_1 + 0x3f4) = 1;
      *(undefined *)(param_1 + 0x282) = 1;
      (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
    }
  }
  return;
}

