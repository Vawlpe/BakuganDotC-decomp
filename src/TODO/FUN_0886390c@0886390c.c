#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886390c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [64];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [64];
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  
  puVar16 = (undefined4 *)(param_1 + 0x220);
  iVar14 = *(int *)(param_1 + 0x130);
  puVar13 = (undefined4 *)FUN_089defd8(param_1,"Bip01_Pelvis");
  auVar2._60_4_ = *(undefined4 *)(iVar14 + 0xbc);
  auVar2._56_4_ = *(undefined4 *)(iVar14 + 0xac);
  auVar2._52_4_ = *(undefined4 *)(iVar14 + 0x9c);
  auVar2._48_4_ = *(undefined4 *)(iVar14 + 0x8c);
  auVar2._44_4_ = *(undefined4 *)(iVar14 + 0xb8);
  auVar2._40_4_ = *(undefined4 *)(iVar14 + 0xa8);
  auVar2._36_4_ = *(undefined4 *)(iVar14 + 0x98);
  auVar2._32_4_ = *(undefined4 *)(iVar14 + 0x88);
  auVar2._28_4_ = *(undefined4 *)(iVar14 + 0xb4);
  auVar2._24_4_ = *(undefined4 *)(iVar14 + 0xa4);
  auVar2._20_4_ = *(undefined4 *)(iVar14 + 0x94);
  auVar2._16_4_ = *(undefined4 *)(iVar14 + 0x84);
  auVar2._12_4_ = *(undefined4 *)(iVar14 + 0xb0);
  auVar2._8_4_ = *(undefined4 *)(iVar14 + 0xa0);
  auVar2._4_4_ = *(undefined4 *)(iVar14 + 0x90);
  auVar2._0_4_ = *(undefined4 *)(iVar14 + 0x80);
  auVar12._60_4_ = puVar13[0xf];
  auVar12._56_4_ = puVar13[0xb];
  auVar12._52_4_ = puVar13[7];
  auVar12._48_4_ = puVar13[3];
  auVar12._44_4_ = puVar13[0xe];
  auVar12._40_4_ = puVar13[10];
  auVar12._36_4_ = puVar13[6];
  auVar12._32_4_ = puVar13[2];
  auVar12._28_4_ = puVar13[0xd];
  auVar12._24_4_ = puVar13[9];
  auVar12._20_4_ = puVar13[5];
  auVar12._16_4_ = puVar13[1];
  auVar12._12_4_ = puVar13[0xc];
  auVar12._8_4_ = puVar13[8];
  auVar12._4_4_ = puVar13[4];
  auVar12._0_4_ = *puVar13;
  auVar2 = vmmul_q(auVar2,auVar12);
  *puVar16 = auVar2._0_4_;
  *(int *)(param_1 + 0x224) = auVar2._16_4_;
  *(int *)(param_1 + 0x228) = auVar2._32_4_;
  *(int *)(param_1 + 0x22c) = auVar2._48_4_;
  *(int *)(param_1 + 0x230) = auVar2._4_4_;
  *(int *)(param_1 + 0x234) = auVar2._20_4_;
  *(int *)(param_1 + 0x238) = auVar2._36_4_;
  *(int *)(param_1 + 0x23c) = auVar2._52_4_;
  *(int *)(param_1 + 0x240) = auVar2._8_4_;
  *(int *)(param_1 + 0x244) = auVar2._24_4_;
  *(int *)(param_1 + 0x248) = auVar2._40_4_;
  *(int *)(param_1 + 0x24c) = auVar2._56_4_;
  *(int *)(param_1 + 0x250) = auVar2._12_4_;
  *(int *)(param_1 + 0x254) = auVar2._28_4_;
  *(int *)(param_1 + 600) = auVar2._44_4_;
  *(int *)(param_1 + 0x25c) = auVar2._60_4_;
  if (*(int *)(param_1 + 8) == 10) {
    if (DAT_08af7b40 == 0) {
      DAT_08af7b40 = 1;
      DAT_08af7b50 = 0;
      DAT_08af7b54 = 0x420c0000;
      DAT_08af7b58 = 0;
      DAT_08af7b5c = 0;
    }
    auVar9._8_8_ = *(undefined8 *)(param_1 + 0x230);
    auVar9._4_4_ = *(undefined4 *)(param_1 + 0x224);
    auVar9._0_4_ = *puVar16;
    auVar7._12_4_ = DAT_08af7b5c;
    auVar7._8_4_ = DAT_08af7b58;
    auVar7._4_4_ = DAT_08af7b54;
    auVar7._0_4_ = DAT_08af7b50;
    auVar3 = vtfm4_q(auVar9,auVar7);
    uVar5 = *(undefined4 *)(param_1 + 0x25c);
    auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x250),auVar3._0_12_);
    *(int *)*(undefined (*) [12])(param_1 + 0x250) = auVar1._0_4_;
    *(int *)(param_1 + 0x254) = auVar1._4_4_;
    *(int *)(param_1 + 600) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x25c) = uVar5;
    iVar14 = *(int *)(param_1 + 0x20c);
  }
  else if (*(int *)(param_1 + 8) == 0xc) {
    if (DAT_08af7b60 == 0) {
      DAT_08af7b60 = 1;
      DAT_08af7b70 = 0xc20c0000;
      DAT_08af7b74 = 0;
      DAT_08af7b78 = 0;
      DAT_08af7b7c = 0;
    }
    auVar10._8_8_ = *(undefined8 *)(param_1 + 0x230);
    auVar10._4_4_ = *(undefined4 *)(param_1 + 0x224);
    auVar10._0_4_ = *puVar16;
    auVar8._12_4_ = DAT_08af7b7c;
    auVar8._8_4_ = DAT_08af7b78;
    auVar8._4_4_ = DAT_08af7b74;
    auVar8._0_4_ = DAT_08af7b70;
    auVar3 = vtfm4_q(auVar10,auVar8);
    uVar5 = *(undefined4 *)(param_1 + 0x25c);
    auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x250),auVar3._0_12_);
    *(int *)*(undefined (*) [12])(param_1 + 0x250) = auVar1._0_4_;
    *(int *)(param_1 + 0x254) = auVar1._4_4_;
    *(int *)(param_1 + 600) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x25c) = uVar5;
    iVar14 = *(int *)(param_1 + 0x20c);
  }
  else {
    if (*(int *)(param_1 + 8) == 8) {
      if (DAT_08af7b80 == 0) {
        DAT_08af7b80 = 1;
        DAT_08af7b90 = 0xc1c80000;
        DAT_08af7b94 = 0;
        DAT_08af7b98 = 0;
        DAT_08af7b9c = 0;
      }
      auVar11._8_8_ = *(undefined8 *)(param_1 + 0x230);
      auVar11._4_4_ = *(undefined4 *)(param_1 + 0x224);
      auVar11._0_4_ = *puVar16;
      auVar3._12_4_ = DAT_08af7b9c;
      auVar3._8_4_ = DAT_08af7b98;
      auVar3._4_4_ = DAT_08af7b94;
      auVar3._0_4_ = DAT_08af7b90;
      auVar3 = vtfm4_q(auVar11,auVar3);
      uVar5 = *(undefined4 *)(param_1 + 0x25c);
      auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x250),auVar3._0_12_);
      *(int *)*(undefined (*) [12])(param_1 + 0x250) = auVar1._0_4_;
      *(int *)(param_1 + 0x254) = auVar1._4_4_;
      *(int *)(param_1 + 600) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x25c) = uVar5;
    }
    iVar14 = *(int *)(param_1 + 0x20c);
  }
  *(undefined *)(iVar14 + 0x10c) = 1;
  iVar14 = *(int *)(*(int *)(param_1 + 0x208) + 0xf4);
  iVar15 = *(int *)(param_1 + 0x130);
  uVar5 = *(undefined4 *)(iVar15 + 0xb4);
  uVar4 = *(undefined4 *)(iVar15 + 0xb8);
  uVar6 = *(undefined4 *)(iVar15 + 0xbc);
  *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(iVar15 + 0xb0);
  *(undefined4 *)(iVar14 + 0x14) = uVar5;
  *(undefined4 *)(iVar14 + 0x18) = uVar4;
  *(undefined4 *)(iVar14 + 0x1c) = uVar6;
  *(float *)(iVar14 + 0x14) = *(float *)(iVar14 + 0x14) + *(float *)(iVar14 + 0x20);
  (**(code **)(*(int *)(iVar14 + 4) + 0x4c))(iVar14 + *(short *)(*(int *)(iVar14 + 4) + 0x48));
  if ((*(uint *)(param_1 + 0x144) & 0x200000) == 0) {
    *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
         *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xfffffff7;
  }
  else {
    *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) = *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 8;
  }
  return;
}

