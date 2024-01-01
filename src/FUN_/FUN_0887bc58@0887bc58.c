#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887bc58(int param_1)

{
  undefined auVar1 [64];
  undefined auVar2 [64];
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  uVar3 = FUN_088660c8();
  iVar4 = FUN_089d86f4(uVar3,*(undefined4 *)(param_1 + 0xb0));
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 0x14;
    *(undefined4 *)(param_1 + 0xf8) = 2;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0xb0) + 0x130);
  iVar5 = *(int *)(param_1 + 200);
  auVar1._60_4_ = *(undefined4 *)(iVar4 + 0xbc);
  auVar1._56_4_ = *(undefined4 *)(iVar4 + 0xac);
  auVar1._52_4_ = *(undefined4 *)(iVar4 + 0x9c);
  auVar1._48_4_ = *(undefined4 *)(iVar4 + 0x8c);
  auVar1._44_4_ = *(undefined4 *)(iVar4 + 0xb8);
  auVar1._40_4_ = *(undefined4 *)(iVar4 + 0xa8);
  auVar1._36_4_ = *(undefined4 *)(iVar4 + 0x98);
  auVar1._32_4_ = *(undefined4 *)(iVar4 + 0x88);
  auVar1._28_4_ = *(undefined4 *)(iVar4 + 0xb4);
  auVar1._24_4_ = *(undefined4 *)(iVar4 + 0xa4);
  auVar1._20_4_ = *(undefined4 *)(iVar4 + 0x94);
  auVar1._16_4_ = *(undefined4 *)(iVar4 + 0x84);
  auVar1._12_4_ = *(undefined4 *)(iVar4 + 0xb0);
  auVar1._8_4_ = *(undefined4 *)(iVar4 + 0xa0);
  auVar1._4_4_ = *(undefined4 *)(iVar4 + 0x90);
  auVar1._0_4_ = *(undefined4 *)(iVar4 + 0x80);
  auVar2._60_4_ = *(undefined4 *)(iVar5 + 0xbc);
  auVar2._56_4_ = *(undefined4 *)(iVar5 + 0xac);
  auVar2._52_4_ = *(undefined4 *)(iVar5 + 0x9c);
  auVar2._48_4_ = *(undefined4 *)(iVar5 + 0x8c);
  auVar2._44_4_ = *(undefined4 *)(iVar5 + 0xb8);
  auVar2._40_4_ = *(undefined4 *)(iVar5 + 0xa8);
  auVar2._36_4_ = *(undefined4 *)(iVar5 + 0x98);
  auVar2._32_4_ = *(undefined4 *)(iVar5 + 0x88);
  auVar2._28_4_ = *(undefined4 *)(iVar5 + 0xb4);
  auVar2._24_4_ = *(undefined4 *)(iVar5 + 0xa4);
  auVar2._20_4_ = *(undefined4 *)(iVar5 + 0x94);
  auVar2._16_4_ = *(undefined4 *)(iVar5 + 0x84);
  auVar2._12_4_ = *(undefined4 *)(iVar5 + 0xb0);
  auVar2._8_4_ = *(undefined4 *)(iVar5 + 0xa0);
  auVar2._4_4_ = *(undefined4 *)(iVar5 + 0x90);
  auVar2._0_4_ = *(undefined4 *)(iVar5 + 0x80);
  auVar1 = vmmul_q(auVar1,auVar2);
  *(int *)(param_1 + 0x20) = auVar1._0_4_;
  *(int *)(param_1 + 0x24) = auVar1._16_4_;
  *(int *)(param_1 + 0x28) = auVar1._32_4_;
  *(int *)(param_1 + 0x2c) = auVar1._48_4_;
  *(int *)(param_1 + 0x30) = auVar1._4_4_;
  *(int *)(param_1 + 0x34) = auVar1._20_4_;
  *(int *)(param_1 + 0x38) = auVar1._36_4_;
  *(int *)(param_1 + 0x3c) = auVar1._52_4_;
  *(int *)(param_1 + 0x40) = auVar1._8_4_;
  *(int *)(param_1 + 0x44) = auVar1._24_4_;
  *(int *)(param_1 + 0x48) = auVar1._40_4_;
  *(int *)(param_1 + 0x4c) = auVar1._56_4_;
  *(int *)(param_1 + 0x50) = auVar1._12_4_;
  *(int *)(param_1 + 0x54) = auVar1._28_4_;
  *(int *)(param_1 + 0x58) = auVar1._44_4_;
  *(int *)(param_1 + 0x5c) = auVar1._60_4_;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0xf8);
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      *(uint *)(*(int *)(param_1 + 0xb0) + 0x148) =
           *(uint *)(*(int *)(param_1 + 0xb0) + 0x148) | 0x10;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
  }
  else if (iVar4 < 2) {
    FUN_088787a0(param_1);
    if ((*(uint *)(*(int *)(param_1 + 0xb0) + 0x148) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0xf8);
    }
    else {
      fVar6 = (float)FUN_08888890(*(int *)(param_1 + 0xb0) + 0x434,7);
      if (0.0 < fVar6) {
        return;
      }
      iVar4 = *(int *)(param_1 + 0xf8);
    }
    *(int *)(param_1 + 0xf8) = iVar4 + 1;
  }
  else if (iVar4 < 3) {
    FUN_08824790(DAT_08b00920,0xffffffff,(undefined4 *)(param_1 + 0x60),2);
    *(uint *)(*(int *)(param_1 + 0xb0) + 0x148) =
         *(uint *)(*(int *)(param_1 + 0xb0) + 0x148) & 0xffffffef;
    FUN_08876ee0(param_1);
  }
  return;
}

