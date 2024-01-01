#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882a3b0(int *param_1)

{
  undefined auVar1 [64];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
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
  
  if (DAT_08af7930 == 0) {
    DAT_08af7930 = 1;
    DAT_08af7950 = 0xc1f00000;
    DAT_08af7954 = 0;
    DAT_08af7958 = 0;
    DAT_08af795c = 0;
  }
  if (DAT_08af7934 == 0) {
    DAT_08af7934 = 1;
    DAT_08af7960 = 0x430c0000;
    DAT_08af7964 = 0;
    DAT_08af7968 = 0;
    DAT_08af796c = 0;
  }
  if (DAT_08af7938 == 0) {
    DAT_08af7938 = 1;
    DAT_08af7970 = 0;
    DAT_08af7974 = 0;
    DAT_08af7978 = 0xc04ccccd;
    DAT_08af797c = 0;
  }
  if (DAT_08af793c == 0) {
    DAT_08af793c = 1;
    DAT_08af7980 = 0x42c80000;
    DAT_08af7984 = 0;
    DAT_08af7988 = 0xc04ccccd;
    DAT_08af798c = 0;
  }
  if (DAT_08af7940 == 0) {
    DAT_08af7940 = 1;
    DAT_08af7990 = 0xc1f00000;
    DAT_08af7994 = 0;
    DAT_08af7998 = 0;
    DAT_08af799c = 0;
  }
  if (DAT_08af7944 == 0) {
    DAT_08af7944 = 1;
    DAT_08af79a0 = 0x42f00000;
    DAT_08af79a4 = 0;
    DAT_08af79a8 = 0;
    DAT_08af79ac = 0;
  }
  iVar7 = *(int *)(*param_1 + 0x130);
  iVar9 = param_1[1];
  auVar1._60_4_ = *(undefined4 *)(iVar7 + 0xbc);
  auVar1._56_4_ = *(undefined4 *)(iVar7 + 0xac);
  auVar1._52_4_ = *(undefined4 *)(iVar7 + 0x9c);
  auVar1._48_4_ = *(undefined4 *)(iVar7 + 0x8c);
  auVar1._44_4_ = *(undefined4 *)(iVar7 + 0xb8);
  auVar1._40_4_ = *(undefined4 *)(iVar7 + 0xa8);
  auVar1._36_4_ = *(undefined4 *)(iVar7 + 0x98);
  auVar1._32_4_ = *(undefined4 *)(iVar7 + 0x88);
  auVar1._28_4_ = *(undefined4 *)(iVar7 + 0xb4);
  auVar1._24_4_ = *(undefined4 *)(iVar7 + 0xa4);
  auVar1._20_4_ = *(undefined4 *)(iVar7 + 0x94);
  auVar1._16_4_ = *(undefined4 *)(iVar7 + 0x84);
  auVar1._12_4_ = *(undefined4 *)(iVar7 + 0xb0);
  auVar1._8_4_ = *(undefined4 *)(iVar7 + 0xa0);
  auVar1._4_4_ = *(undefined4 *)(iVar7 + 0x90);
  auVar1._0_4_ = *(undefined4 *)(iVar7 + 0x80);
  auVar6._60_4_ = *(undefined4 *)(iVar9 + 0xbc);
  auVar6._56_4_ = *(undefined4 *)(iVar9 + 0xac);
  auVar6._52_4_ = *(undefined4 *)(iVar9 + 0x9c);
  auVar6._48_4_ = *(undefined4 *)(iVar9 + 0x8c);
  auVar6._44_4_ = *(undefined4 *)(iVar9 + 0xb8);
  auVar6._40_4_ = *(undefined4 *)(iVar9 + 0xa8);
  auVar6._36_4_ = *(undefined4 *)(iVar9 + 0x98);
  auVar6._32_4_ = *(undefined4 *)(iVar9 + 0x88);
  auVar6._28_4_ = *(undefined4 *)(iVar9 + 0xb4);
  auVar6._24_4_ = *(undefined4 *)(iVar9 + 0xa4);
  auVar6._20_4_ = *(undefined4 *)(iVar9 + 0x94);
  auVar6._16_4_ = *(undefined4 *)(iVar9 + 0x84);
  auVar6._12_4_ = *(undefined4 *)(iVar9 + 0xb0);
  auVar6._8_4_ = *(undefined4 *)(iVar9 + 0xa0);
  auVar6._4_4_ = *(undefined4 *)(iVar9 + 0x90);
  auVar6._0_4_ = *(undefined4 *)(iVar9 + 0x80);
  auVar1 = vmmul_q(auVar1,auVar6);
  local_60 = auVar1._0_4_;
  local_50 = auVar1._4_4_;
  local_40 = auVar1._8_4_;
  local_30 = auVar1._12_4_;
  uStack_5c = auVar1._16_4_;
  uStack_4c = auVar1._20_4_;
  uStack_3c = auVar1._24_4_;
  uStack_2c = auVar1._28_4_;
  uStack_58 = auVar1._32_4_;
  uStack_48 = auVar1._36_4_;
  uStack_38 = auVar1._40_4_;
  uStack_28 = auVar1._44_4_;
  uStack_54 = auVar1._48_4_;
  uStack_44 = auVar1._52_4_;
  uStack_34 = auVar1._56_4_;
  uStack_24 = auVar1._60_4_;
  puVar8 = *(undefined4 **)(*param_1 + 8);
  if (puVar8 == (undefined4 *)&DAT_00000014) {
    puVar10 = &DAT_08af7990;
    puVar8 = &DAT_08af79a0;
  }
  else if (puVar8 == (undefined4 *)0x12) {
    puVar10 = &DAT_08af7970;
    puVar8 = &DAT_08af7980;
  }
  else {
    puVar10 = (undefined4 *)&DAT_00000008;
    if (puVar8 == (undefined4 *)&DAT_00000008) {
      puVar10 = &DAT_08af7950;
      puVar8 = &DAT_08af7960;
    }
  }
  auVar4._12_4_ = uStack_4c;
  auVar4._8_4_ = local_50;
  uVar12 = vfim_s(0x3c00);
  auVar4._4_4_ = uStack_5c;
  auVar4._0_4_ = local_60;
  auVar2._12_4_ = uVar12;
  auVar2._8_4_ = puVar10[2];
  auVar2._4_4_ = puVar10[1];
  auVar2._0_4_ = *puVar10;
  auVar2 = vtfm4_q(auVar4,auVar2);
  local_80 = auVar2._0_4_;
  uStack_7c = auVar2._4_4_;
  uStack_78 = auVar2._8_4_;
  uStack_74 = auVar2._12_4_;
  auVar5._12_4_ = uStack_4c;
  auVar5._8_4_ = local_50;
  uVar12 = vfim_s(0x3c00);
  auVar5._4_4_ = uStack_5c;
  auVar5._0_4_ = local_60;
  auVar3._12_4_ = uVar12;
  auVar3._8_4_ = puVar8[2];
  auVar3._4_4_ = puVar8[1];
  auVar3._0_4_ = *puVar8;
  auVar2 = vtfm4_q(auVar5,auVar3);
  local_70 = auVar2._0_4_;
  uStack_6c = auVar2._4_4_;
  uStack_68 = auVar2._8_4_;
  uStack_64 = auVar2._12_4_;
  FUN_0882a320(param_1,&local_80);
  if (*(char *)(param_1 + 0x4c) == '\0') {
    fVar11 = (float)param_1[0x4b];
    param_1[0x4b] = (int)(fVar11 - 0.2);
    if (fVar11 - 0.2 < 0.0) {
      param_1[0x4b] = 0;
    }
    return;
  }
  param_1[0x4b] = 0x3f59999a;
  return;
}

