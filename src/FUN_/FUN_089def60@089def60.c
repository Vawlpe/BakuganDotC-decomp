#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089def60(int param_1,undefined4 *param_2,int param_3)

{
  undefined auVar1 [64];
  undefined auVar2 [64];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = DAT_08b007dc;
  uVar4 = DAT_08b007d8;
  uVar3 = DAT_08b007d4;
  if (param_3 != 0) {
    iVar6 = *(int *)(param_1 + 0x130);
    auVar1._60_4_ = *(undefined4 *)(iVar6 + 0xbc);
    auVar1._56_4_ = *(undefined4 *)(iVar6 + 0xac);
    auVar1._52_4_ = *(undefined4 *)(iVar6 + 0x9c);
    auVar1._48_4_ = *(undefined4 *)(iVar6 + 0x8c);
    auVar1._44_4_ = *(undefined4 *)(iVar6 + 0xb8);
    auVar1._40_4_ = *(undefined4 *)(iVar6 + 0xa8);
    auVar1._36_4_ = *(undefined4 *)(iVar6 + 0x98);
    auVar1._32_4_ = *(undefined4 *)(iVar6 + 0x88);
    auVar1._28_4_ = *(undefined4 *)(iVar6 + 0xb4);
    auVar1._24_4_ = *(undefined4 *)(iVar6 + 0xa4);
    auVar1._20_4_ = *(undefined4 *)(iVar6 + 0x94);
    auVar1._16_4_ = *(undefined4 *)(iVar6 + 0x84);
    auVar1._12_4_ = *(undefined4 *)(iVar6 + 0xb0);
    auVar1._8_4_ = *(undefined4 *)(iVar6 + 0xa0);
    auVar1._4_4_ = *(undefined4 *)(iVar6 + 0x90);
    auVar1._0_4_ = *(undefined4 *)(iVar6 + 0x80);
    auVar2._60_4_ = *(undefined4 *)(param_3 + 0xbc);
    auVar2._56_4_ = *(undefined4 *)(param_3 + 0xac);
    auVar2._52_4_ = *(undefined4 *)(param_3 + 0x9c);
    auVar2._48_4_ = *(undefined4 *)(param_3 + 0x8c);
    auVar2._44_4_ = *(undefined4 *)(param_3 + 0xb8);
    auVar2._40_4_ = *(undefined4 *)(param_3 + 0xa8);
    auVar2._36_4_ = *(undefined4 *)(param_3 + 0x98);
    auVar2._32_4_ = *(undefined4 *)(param_3 + 0x88);
    auVar2._28_4_ = *(undefined4 *)(param_3 + 0xb4);
    auVar2._24_4_ = *(undefined4 *)(param_3 + 0xa4);
    auVar2._20_4_ = *(undefined4 *)(param_3 + 0x94);
    auVar2._16_4_ = *(undefined4 *)(param_3 + 0x84);
    auVar2._12_4_ = *(undefined4 *)(param_3 + 0xb0);
    auVar2._8_4_ = *(undefined4 *)(param_3 + 0xa0);
    auVar2._4_4_ = *(undefined4 *)(param_3 + 0x90);
    auVar2._0_4_ = *(undefined4 *)(param_3 + 0x80);
    auVar1 = vmmul_q(auVar1,auVar2);
    *param_2 = auVar1._12_4_;
    param_2[1] = auVar1._28_4_;
    param_2[2] = auVar1._44_4_;
    param_2[3] = auVar1._60_4_;
    return;
  }
  *param_2 = DAT_08b007d0;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  return;
}

