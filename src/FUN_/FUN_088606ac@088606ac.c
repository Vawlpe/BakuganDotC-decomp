#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088606ac(int param_1,int param_2,int param_3)

{
  undefined auVar1 [64];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  undefined auVar8 [64];
  int iVar9;
  int iVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined auVar7 [64];
  
  if (*(int *)(param_1 + 8) == 0xc) {
    if (DAT_08af7a90 == 0) {
      DAT_08af7a90 = 1;
      DAT_08af7aa0 = 0x42c80000;
      DAT_08af7aa4 = 0;
      DAT_08af7aa8 = 0;
      DAT_08af7aac = 0x3f800000;
    }
    if (param_2 == 2) {
      iVar10 = *(int *)(param_1 + 0x130);
      iVar9 = FUN_089ded10(param_1,0x1d);
      auVar6._60_4_ = *(undefined4 *)(iVar10 + 0xbc);
      auVar6._56_4_ = *(undefined4 *)(iVar10 + 0xac);
      auVar6._52_4_ = *(undefined4 *)(iVar10 + 0x9c);
      auVar6._48_4_ = *(undefined4 *)(iVar10 + 0x8c);
      auVar6._44_4_ = *(undefined4 *)(iVar10 + 0xb8);
      auVar6._40_4_ = *(undefined4 *)(iVar10 + 0xa8);
      auVar6._36_4_ = *(undefined4 *)(iVar10 + 0x98);
      auVar6._32_4_ = *(undefined4 *)(iVar10 + 0x88);
      auVar6._28_4_ = *(undefined4 *)(iVar10 + 0xb4);
      auVar6._24_4_ = *(undefined4 *)(iVar10 + 0xa4);
      auVar6._20_4_ = *(undefined4 *)(iVar10 + 0x94);
      auVar6._16_4_ = *(undefined4 *)(iVar10 + 0x84);
      auVar6._12_4_ = *(undefined4 *)(iVar10 + 0xb0);
      auVar6._8_4_ = *(undefined4 *)(iVar10 + 0xa0);
      auVar6._4_4_ = *(undefined4 *)(iVar10 + 0x90);
      auVar6._0_4_ = *(undefined4 *)(iVar10 + 0x80);
      auVar7._60_4_ = *(undefined4 *)(iVar9 + 0xbc);
      auVar7._56_4_ = *(undefined4 *)(iVar9 + 0xac);
      auVar7._52_4_ = *(undefined4 *)(iVar9 + 0x9c);
      auVar7._48_4_ = *(undefined4 *)(iVar9 + 0x8c);
      auVar7._44_4_ = *(undefined4 *)(iVar9 + 0xb8);
      auVar7._40_4_ = *(undefined4 *)(iVar9 + 0xa8);
      auVar7._36_4_ = *(undefined4 *)(iVar9 + 0x98);
      auVar7._32_4_ = *(undefined4 *)(iVar9 + 0x88);
      auVar7._28_4_ = *(undefined4 *)(iVar9 + 0xb4);
      auVar7._24_4_ = *(undefined4 *)(iVar9 + 0xa4);
      auVar7._20_4_ = *(undefined4 *)(iVar9 + 0x94);
      auVar7._16_4_ = *(undefined4 *)(iVar9 + 0x84);
      auVar7._12_4_ = *(undefined4 *)(iVar9 + 0xb0);
      auVar7._8_4_ = *(undefined4 *)(iVar9 + 0xa0);
      auVar7._4_4_ = *(undefined4 *)(iVar9 + 0x90);
      auVar7._0_4_ = *(undefined4 *)(iVar9 + 0x80);
      auVar1 = vmmul_q(auVar6,auVar7);
      auVar4._12_4_ = auVar1._20_4_;
      auVar4._8_4_ = auVar1._4_4_;
      auVar4._4_4_ = auVar1._16_4_;
      auVar4._0_4_ = auVar1._0_4_;
      auVar3._12_4_ = DAT_08af7aac;
      auVar3._8_4_ = DAT_08af7aa8;
      auVar3._4_4_ = DAT_08af7aa4;
      auVar3._0_4_ = DAT_08af7aa0;
      auVar2 = vtfm4_q(auVar4,auVar3);
      DAT_08af7a80 = auVar2._0_4_;
      DAT_08af7a84 = auVar2._4_4_;
      DAT_08af7a88 = auVar2._8_4_;
      DAT_08af7a8c = auVar2._12_4_;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x130);
      iVar9 = FUN_089ded10(param_1,0x1f);
      auVar1._60_4_ = *(undefined4 *)(iVar10 + 0xbc);
      auVar1._56_4_ = *(undefined4 *)(iVar10 + 0xac);
      auVar1._52_4_ = *(undefined4 *)(iVar10 + 0x9c);
      auVar1._48_4_ = *(undefined4 *)(iVar10 + 0x8c);
      auVar1._44_4_ = *(undefined4 *)(iVar10 + 0xb8);
      auVar1._40_4_ = *(undefined4 *)(iVar10 + 0xa8);
      auVar1._36_4_ = *(undefined4 *)(iVar10 + 0x98);
      auVar1._32_4_ = *(undefined4 *)(iVar10 + 0x88);
      auVar1._28_4_ = *(undefined4 *)(iVar10 + 0xb4);
      auVar1._24_4_ = *(undefined4 *)(iVar10 + 0xa4);
      auVar1._20_4_ = *(undefined4 *)(iVar10 + 0x94);
      auVar1._16_4_ = *(undefined4 *)(iVar10 + 0x84);
      auVar1._12_4_ = *(undefined4 *)(iVar10 + 0xb0);
      auVar1._8_4_ = *(undefined4 *)(iVar10 + 0xa0);
      auVar1._4_4_ = *(undefined4 *)(iVar10 + 0x90);
      auVar1._0_4_ = *(undefined4 *)(iVar10 + 0x80);
      auVar8._60_4_ = *(undefined4 *)(iVar9 + 0xbc);
      auVar8._56_4_ = *(undefined4 *)(iVar9 + 0xac);
      auVar8._52_4_ = *(undefined4 *)(iVar9 + 0x9c);
      auVar8._48_4_ = *(undefined4 *)(iVar9 + 0x8c);
      auVar8._44_4_ = *(undefined4 *)(iVar9 + 0xb8);
      auVar8._40_4_ = *(undefined4 *)(iVar9 + 0xa8);
      auVar8._36_4_ = *(undefined4 *)(iVar9 + 0x98);
      auVar8._32_4_ = *(undefined4 *)(iVar9 + 0x88);
      auVar8._28_4_ = *(undefined4 *)(iVar9 + 0xb4);
      auVar8._24_4_ = *(undefined4 *)(iVar9 + 0xa4);
      auVar8._20_4_ = *(undefined4 *)(iVar9 + 0x94);
      auVar8._16_4_ = *(undefined4 *)(iVar9 + 0x84);
      auVar8._12_4_ = *(undefined4 *)(iVar9 + 0xb0);
      auVar8._8_4_ = *(undefined4 *)(iVar9 + 0xa0);
      auVar8._4_4_ = *(undefined4 *)(iVar9 + 0x90);
      auVar8._0_4_ = *(undefined4 *)(iVar9 + 0x80);
      auVar1 = vmmul_q(auVar1,auVar8);
      auVar5._12_4_ = auVar1._20_4_;
      auVar5._8_4_ = auVar1._4_4_;
      auVar5._4_4_ = auVar1._16_4_;
      auVar5._0_4_ = auVar1._0_4_;
      auVar2._12_4_ = DAT_08af7aac;
      auVar2._8_4_ = DAT_08af7aa8;
      auVar2._4_4_ = DAT_08af7aa4;
      auVar2._0_4_ = DAT_08af7aa0;
      auVar2 = vtfm4_q(auVar5,auVar2);
      DAT_08af7a80 = auVar2._0_4_;
      DAT_08af7a84 = auVar2._4_4_;
      DAT_08af7a88 = auVar2._8_4_;
      DAT_08af7a8c = auVar2._12_4_;
    }
  }
  else if (*(int *)(param_1 + 8) == 10) {
    iVar9 = 0;
    if (param_3 == 0) {
      iVar9 = 2;
    }
    if (param_2 == 3) {
      iVar9 = iVar9 + 1;
    }
    iVar9 = *(int *)(param_1 + iVar9 * 4 + 0x41c);
    DAT_08af7a80 = *(undefined4 *)(iVar9 + 400);
    DAT_08af7a84 = *(undefined4 *)(iVar9 + 0x194);
    DAT_08af7a88 = *(undefined4 *)(iVar9 + 0x198);
    DAT_08af7a8c = *(undefined4 *)(iVar9 + 0x19c);
  }
  else if (param_2 == 2) {
    FUN_089dedf8(param_1,&local_50,"Bip01_L_Foot");
    DAT_08af7a80 = local_50;
    DAT_08af7a84 = uStack_4c;
    DAT_08af7a88 = uStack_48;
    DAT_08af7a8c = uStack_44;
  }
  else {
    FUN_089dedf8(param_1,&local_40,"Bip01_R_Foot");
    DAT_08af7a80 = local_40;
    DAT_08af7a84 = uStack_3c;
    DAT_08af7a88 = uStack_38;
    DAT_08af7a8c = uStack_34;
  }
  return &DAT_08af7a80;
}

