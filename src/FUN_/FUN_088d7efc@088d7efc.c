#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d7efc(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined auVar2 [64];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [64];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af325c;
  *(undefined **)(param_1 + 0x160) = &DAT_08af3304;
  *(undefined *)(param_1 + 0x254) = 1;
  *(undefined *)(param_1 + 0x255) = 1;
  iVar8 = *(int *)(param_1 + 0x130);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar8 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar8 + 0xb4) = uVar6;
  *(undefined4 *)(iVar8 + 0xb8) = uVar3;
  *(undefined4 *)(iVar8 + 0xbc) = uVar4;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  FUN_089d8634();
  uVar6 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar7 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar6);
  FUN_089d866c();
  puVar10 = (undefined4 *)(param_1 + 0x1f0);
  iVar8 = 0;
  if (iVar7 != 0) {
    FUN_0881a358(iVar7,2);
    iVar8 = iVar7;
  }
  *(int *)(param_1 + 0x174) = iVar8;
  uVar6 = FUN_089be054(DAT_08ac520c,PTR_s_NPC_VXS_003_col_ctc_08abf0a0);
  FUN_0881a484(iVar8,uVar6,9,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x144) = 0;
  *(int *)(*(int *)(param_1 + 0x174) + 0x138) = param_1;
  iVar8 = *(int *)(param_1 + 0x174);
  *(int *)(iVar8 + 0x110) = *(int *)(param_1 + 0x130) + 0x80;
  *(undefined *)(iVar8 + 0x10c) = 1;
  iVar8 = FUN_089d9680();
  if (iVar8 != 0) {
    FUN_089e0860(param_1);
  }
  FUN_089de8c4(param_1,1);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x240) = 0;
  iVar8 = FUN_089ded60(param_1,"NPC_VXS_003_03");
  *(int *)(param_1 + 0x244) = iVar8;
  if (iVar8 != 0) {
    iVar8 = *(int *)(param_1 + 0x244);
    uVar6 = *(undefined4 *)(iVar8 + 100);
    uVar3 = *(undefined4 *)(iVar8 + 0x68);
    uVar4 = *(undefined4 *)(iVar8 + 0x6c);
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(iVar8 + 0x60);
    *(undefined4 *)(param_1 + 0x1d4) = uVar6;
    *(undefined4 *)(param_1 + 0x1d8) = uVar3;
    *(undefined4 *)(param_1 + 0x1dc) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x230) = 0x3f060a92;
  *(undefined4 *)(param_1 + 0x234) = 0;
  auVar2 = vmidt_q();
  *puVar10 = auVar2._0_4_;
  *(int *)(param_1 + 500) = auVar2._16_4_;
  *(int *)(param_1 + 0x1f8) = auVar2._32_4_;
  *(int *)(param_1 + 0x1fc) = auVar2._48_4_;
  *(int *)(param_1 + 0x200) = auVar2._4_4_;
  *(int *)(param_1 + 0x204) = auVar2._20_4_;
  *(int *)(param_1 + 0x208) = auVar2._36_4_;
  *(int *)(param_1 + 0x20c) = auVar2._52_4_;
  *(int *)(param_1 + 0x210) = auVar2._8_4_;
  *(int *)(param_1 + 0x214) = auVar2._24_4_;
  *(int *)(param_1 + 0x218) = auVar2._40_4_;
  *(int *)(param_1 + 0x21c) = auVar2._56_4_;
  *(int *)(param_1 + 0x220) = auVar2._12_4_;
  *(int *)(param_1 + 0x224) = auVar2._28_4_;
  *(int *)(param_1 + 0x228) = auVar2._44_4_;
  *(int *)(param_1 + 0x22c) = auVar2._60_4_;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(int *)(param_1 + 0x244) == 0) {
    cVar1 = *(char *)(param_3 + 0x23);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x130);
    iVar7 = *(int *)(param_1 + 0x244);
    auVar2._60_4_ = *(undefined4 *)(iVar8 + 0xbc);
    auVar2._56_4_ = *(undefined4 *)(iVar8 + 0xac);
    auVar2._52_4_ = *(undefined4 *)(iVar8 + 0x9c);
    auVar2._48_4_ = *(undefined4 *)(iVar8 + 0x8c);
    auVar2._44_4_ = *(undefined4 *)(iVar8 + 0xb8);
    auVar2._40_4_ = *(undefined4 *)(iVar8 + 0xa8);
    auVar2._36_4_ = *(undefined4 *)(iVar8 + 0x98);
    auVar2._32_4_ = *(undefined4 *)(iVar8 + 0x88);
    auVar2._28_4_ = *(undefined4 *)(iVar8 + 0xb4);
    auVar2._24_4_ = *(undefined4 *)(iVar8 + 0xa4);
    auVar2._20_4_ = *(undefined4 *)(iVar8 + 0x94);
    auVar2._16_4_ = *(undefined4 *)(iVar8 + 0x84);
    auVar2._12_4_ = *(undefined4 *)(iVar8 + 0xb0);
    auVar2._8_4_ = *(undefined4 *)(iVar8 + 0xa0);
    auVar2._4_4_ = *(undefined4 *)(iVar8 + 0x90);
    auVar2._0_4_ = *(undefined4 *)(iVar8 + 0x80);
    auVar5._60_4_ = *(undefined4 *)(iVar7 + 0xbc);
    auVar5._56_4_ = *(undefined4 *)(iVar7 + 0xac);
    auVar5._52_4_ = *(undefined4 *)(iVar7 + 0x9c);
    auVar5._48_4_ = *(undefined4 *)(iVar7 + 0x8c);
    auVar5._44_4_ = *(undefined4 *)(iVar7 + 0xb8);
    auVar5._40_4_ = *(undefined4 *)(iVar7 + 0xa8);
    auVar5._36_4_ = *(undefined4 *)(iVar7 + 0x98);
    auVar5._32_4_ = *(undefined4 *)(iVar7 + 0x88);
    auVar5._28_4_ = *(undefined4 *)(iVar7 + 0xb4);
    auVar5._24_4_ = *(undefined4 *)(iVar7 + 0xa4);
    auVar5._20_4_ = *(undefined4 *)(iVar7 + 0x94);
    auVar5._16_4_ = *(undefined4 *)(iVar7 + 0x84);
    auVar5._12_4_ = *(undefined4 *)(iVar7 + 0xb0);
    auVar5._8_4_ = *(undefined4 *)(iVar7 + 0xa0);
    auVar5._4_4_ = *(undefined4 *)(iVar7 + 0x90);
    auVar5._0_4_ = *(undefined4 *)(iVar7 + 0x80);
    auVar2 = vmmul_q(auVar2,auVar5);
    *puVar10 = auVar2._0_4_;
    *(int *)(param_1 + 500) = auVar2._16_4_;
    *(int *)(param_1 + 0x1f8) = auVar2._32_4_;
    *(int *)(param_1 + 0x1fc) = auVar2._48_4_;
    *(int *)(param_1 + 0x200) = auVar2._4_4_;
    *(int *)(param_1 + 0x204) = auVar2._20_4_;
    *(int *)(param_1 + 0x208) = auVar2._36_4_;
    *(int *)(param_1 + 0x20c) = auVar2._52_4_;
    *(int *)(param_1 + 0x210) = auVar2._8_4_;
    *(int *)(param_1 + 0x214) = auVar2._24_4_;
    *(int *)(param_1 + 0x218) = auVar2._40_4_;
    *(int *)(param_1 + 0x21c) = auVar2._56_4_;
    *(int *)(param_1 + 0x220) = auVar2._12_4_;
    *(int *)(param_1 + 0x224) = auVar2._28_4_;
    *(int *)(param_1 + 0x228) = auVar2._44_4_;
    *(int *)(param_1 + 0x22c) = auVar2._60_4_;
    uVar6 = FUN_088242dc(DAT_08ac5c70,0x2f,puVar10);
    *(undefined4 *)(param_1 + 0x24c) = uVar6;
    iVar8 = FUN_08823eac(DAT_08ac5c70,0x31);
    *(int *)(param_1 + 0x250) = iVar8;
    if (iVar8 != 0) {
      iVar8 = *(int *)(param_1 + 0x250);
      iVar7 = *(int *)(param_1 + 0x130);
      uVar6 = *(undefined4 *)(iVar7 + 0xb4);
      uVar3 = *(undefined4 *)(iVar7 + 0xb8);
      uVar4 = *(undefined4 *)(iVar7 + 0xbc);
      *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)(iVar7 + 0xb0);
      *(undefined4 *)(iVar8 + 100) = uVar6;
      *(undefined4 *)(iVar8 + 0x68) = uVar3;
      *(undefined4 *)(iVar8 + 0x6c) = uVar4;
      pfVar9 = (float *)(*(int *)(param_1 + 0x250) + 100);
      *pfVar9 = *pfVar9 + 0.1;
    }
    cVar1 = *(char *)(param_3 + 0x23);
  }
  *(uint *)(param_1 + 0x25c) = (int)cVar1 & 0xfU;
  if (2 < ((int)cVar1 & 0xfU)) {
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  FUN_088d9868(param_1);
  return param_1;
}

