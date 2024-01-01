#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ea844(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined auVar1 [64];
  undefined auVar2 [64];
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
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_3 == (undefined4 *)0x0) {
    local_50 = *(undefined4 *)(param_1 + 0x30);
    uStack_4c = *(undefined4 *)(param_1 + 0x34);
    uStack_48 = *(undefined4 *)(param_1 + 0x38);
    uStack_44 = *(undefined4 *)(param_1 + 0x3c);
    local_40 = *(undefined4 *)(param_1 + 0x40);
    uStack_3c = *(undefined4 *)(param_1 + 0x44);
    uStack_38 = *(undefined4 *)(param_1 + 0x48);
    uStack_34 = *(undefined4 *)(param_1 + 0x4c);
    local_30 = *(undefined4 *)(param_1 + 0x50);
    uStack_2c = *(undefined4 *)(param_1 + 0x54);
    uStack_28 = *(undefined4 *)(param_1 + 0x58);
    uStack_24 = *(undefined4 *)(param_1 + 0x5c);
    local_20 = *(undefined4 *)(param_1 + 0x60);
    uStack_1c = *(undefined4 *)(param_1 + 100);
    uStack_18 = *(undefined4 *)(param_1 + 0x68);
    uStack_14 = *(undefined4 *)(param_1 + 0x6c);
  }
  else {
    auVar1._60_4_ = *(undefined4 *)(param_1 + 0x6c);
    auVar1._56_4_ = *(undefined4 *)(param_1 + 0x5c);
    auVar1._52_4_ = *(undefined4 *)(param_1 + 0x4c);
    auVar1._48_4_ = *(undefined4 *)(param_1 + 0x3c);
    auVar1._44_4_ = *(undefined4 *)(param_1 + 0x68);
    auVar1._40_4_ = *(undefined4 *)(param_1 + 0x58);
    auVar1._36_4_ = *(undefined4 *)(param_1 + 0x48);
    auVar1._32_4_ = *(undefined4 *)(param_1 + 0x38);
    auVar1._28_4_ = *(undefined4 *)(param_1 + 100);
    auVar1._24_4_ = *(undefined4 *)(param_1 + 0x54);
    auVar1._20_4_ = *(undefined4 *)(param_1 + 0x44);
    auVar1._16_4_ = *(undefined4 *)(param_1 + 0x34);
    auVar1._12_4_ = *(undefined4 *)(param_1 + 0x60);
    auVar1._8_4_ = *(undefined4 *)(param_1 + 0x50);
    auVar1._4_4_ = *(undefined4 *)(param_1 + 0x40);
    auVar1._0_4_ = *(undefined4 *)(param_1 + 0x30);
    auVar2._60_4_ = param_3[0xf];
    auVar2._56_4_ = param_3[0xb];
    auVar2._52_4_ = param_3[7];
    auVar2._48_4_ = param_3[3];
    auVar2._44_4_ = param_3[0xe];
    auVar2._40_4_ = param_3[10];
    auVar2._36_4_ = param_3[6];
    auVar2._32_4_ = param_3[2];
    auVar2._28_4_ = param_3[0xd];
    auVar2._24_4_ = param_3[9];
    auVar2._20_4_ = param_3[5];
    auVar2._16_4_ = param_3[1];
    auVar2._12_4_ = param_3[0xc];
    auVar2._8_4_ = param_3[8];
    auVar2._4_4_ = param_3[4];
    auVar2._0_4_ = *param_3;
    auVar1 = vmmul_q(auVar1,auVar2);
    local_50 = auVar1._0_4_;
    local_40 = auVar1._4_4_;
    local_30 = auVar1._8_4_;
    local_20 = auVar1._12_4_;
    uStack_4c = auVar1._16_4_;
    uStack_3c = auVar1._20_4_;
    uStack_2c = auVar1._24_4_;
    uStack_1c = auVar1._28_4_;
    uStack_48 = auVar1._32_4_;
    uStack_38 = auVar1._36_4_;
    uStack_28 = auVar1._40_4_;
    uStack_18 = auVar1._44_4_;
    uStack_44 = auVar1._48_4_;
    uStack_34 = auVar1._52_4_;
    uStack_24 = auVar1._56_4_;
    uStack_14 = auVar1._60_4_;
  }
  FUN_089f0260(param_1 + 0x10,param_1 + 0x20,param_2,&local_50);
  return;
}

