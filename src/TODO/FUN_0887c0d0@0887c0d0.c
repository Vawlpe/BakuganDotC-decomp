#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0887c0d0(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [64];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auVar6 [12];
  undefined auVar7 [16];
  undefined auVar8 [64];
  bool bVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  undefined (*pauVar13) [12];
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 in_V7D;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar10 = *(int *)(param_1 + 0xf8);
  if (iVar10 < 1) {
    if (iVar10 < 0) {
      iVar10 = *(int *)(param_1 + 0xbc);
      goto LAB_0887c1d4;
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
LAB_0887c130:
    fVar15 = *(float *)(param_1 + 0x104) + (240.0 - *(float *)(param_1 + 0x104)) * 0.2;
    *(float *)(param_1 + 0x104) = fVar15;
    if (200.0 < fVar15) {
      *(undefined4 *)(param_1 + 0x104) = 0x43480000;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
  }
  else {
    if (iVar10 < 2) goto LAB_0887c130;
    if (2 < iVar10) {
      iVar10 = *(int *)(param_1 + 0xbc);
      goto LAB_0887c1d4;
    }
    if (*(int *)(param_1 + 0xf4) < 0x2e) {
      bVar9 = false;
      if ((2 < *(int *)(*(int *)(param_1 + 0xb0) + 0x140)) &&
         (bVar9 = false, *(int *)(*(int *)(param_1 + 0xb0) + 0x140) < 7)) {
        bVar9 = true;
      }
      if (bVar9) {
        *(undefined4 *)(param_1 + 0xf4) = 0x1c;
      }
    }
    else {
      pfVar11 = (float *)(*(int *)(param_1 + 0xbc) + 0xbc);
      *pfVar11 = *pfVar11 - 0.1;
      if (*(float *)(*(int *)(param_1 + 0xbc) + 0xbc) <= 0.0) {
        FUN_08876ee0(param_1);
        return;
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0xbc);
LAB_0887c1d4:
  *(undefined4 *)(iVar10 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x1d0) = 0x40000000;
  pauVar13 = (undefined (*) [12])(param_1 + 0xd0);
  if (DAT_08af7de0 == 0) {
    DAT_08af7de0 = 1;
    DAT_08af7df4 = 0;
    DAT_08af7df0 = 0x42b40000;
    DAT_08af7df8 = 0;
    DAT_08af7dfc = 0;
  }
  iVar10 = *(int *)(*(int *)(param_1 + 0xb0) + 0x130);
  iVar14 = *(int *)(param_1 + 200);
  auVar2._60_4_ = *(undefined4 *)(iVar10 + 0xbc);
  auVar2._56_4_ = *(undefined4 *)(iVar10 + 0xac);
  auVar2._52_4_ = *(undefined4 *)(iVar10 + 0x9c);
  auVar2._48_4_ = *(undefined4 *)(iVar10 + 0x8c);
  auVar2._44_4_ = *(undefined4 *)(iVar10 + 0xb8);
  auVar2._40_4_ = *(undefined4 *)(iVar10 + 0xa8);
  auVar2._36_4_ = *(undefined4 *)(iVar10 + 0x98);
  auVar2._32_4_ = *(undefined4 *)(iVar10 + 0x88);
  auVar2._28_4_ = *(undefined4 *)(iVar10 + 0xb4);
  auVar2._24_4_ = *(undefined4 *)(iVar10 + 0xa4);
  auVar2._20_4_ = *(undefined4 *)(iVar10 + 0x94);
  auVar2._16_4_ = *(undefined4 *)(iVar10 + 0x84);
  auVar2._12_4_ = *(undefined4 *)(iVar10 + 0xb0);
  auVar2._8_4_ = *(undefined4 *)(iVar10 + 0xa0);
  auVar2._4_4_ = *(undefined4 *)(iVar10 + 0x90);
  auVar2._0_4_ = *(undefined4 *)(iVar10 + 0x80);
  auVar8._60_4_ = *(undefined4 *)(iVar14 + 0xbc);
  auVar8._56_4_ = *(undefined4 *)(iVar14 + 0xac);
  auVar8._52_4_ = *(undefined4 *)(iVar14 + 0x9c);
  auVar8._48_4_ = *(undefined4 *)(iVar14 + 0x8c);
  auVar8._44_4_ = *(undefined4 *)(iVar14 + 0xb8);
  auVar8._40_4_ = *(undefined4 *)(iVar14 + 0xa8);
  auVar8._36_4_ = *(undefined4 *)(iVar14 + 0x98);
  auVar8._32_4_ = *(undefined4 *)(iVar14 + 0x88);
  auVar8._28_4_ = *(undefined4 *)(iVar14 + 0xb4);
  auVar8._24_4_ = *(undefined4 *)(iVar14 + 0xa4);
  auVar8._20_4_ = *(undefined4 *)(iVar14 + 0x94);
  auVar8._16_4_ = *(undefined4 *)(iVar14 + 0x84);
  auVar8._12_4_ = *(undefined4 *)(iVar14 + 0xb0);
  auVar8._8_4_ = *(undefined4 *)(iVar14 + 0xa0);
  auVar8._4_4_ = *(undefined4 *)(iVar14 + 0x90);
  auVar8._0_4_ = *(undefined4 *)(iVar14 + 0x80);
  auVar2 = vmmul_q(auVar2,auVar8);
  *(undefined4 *)(param_1 + 0x20) = auVar2._0_4_;
  *(int *)(param_1 + 0x24) = auVar2._16_4_;
  *(int *)(param_1 + 0x28) = auVar2._32_4_;
  *(int *)(param_1 + 0x2c) = auVar2._48_4_;
  *(int *)(param_1 + 0x30) = auVar2._4_4_;
  *(int *)(param_1 + 0x34) = auVar2._20_4_;
  *(int *)(param_1 + 0x38) = auVar2._36_4_;
  *(int *)(param_1 + 0x3c) = auVar2._52_4_;
  *(int *)(param_1 + 0x40) = auVar2._8_4_;
  *(int *)(param_1 + 0x44) = auVar2._24_4_;
  *(int *)(param_1 + 0x48) = auVar2._40_4_;
  *(int *)(param_1 + 0x4c) = auVar2._56_4_;
  *(int *)(param_1 + 0x50) = auVar2._12_4_;
  *(int *)(param_1 + 0x54) = auVar2._28_4_;
  *(int *)(param_1 + 0x58) = auVar2._44_4_;
  *(int *)(param_1 + 0x5c) = auVar2._60_4_;
  uVar16 = vfim_s(0x3c00);
  auVar7._8_8_ = *(undefined8 *)(param_1 + 0x30);
  auVar7._4_4_ = *(undefined4 *)(param_1 + 0x24);
  auVar7._0_4_ = *(undefined4 *)(param_1 + 0x20);
  auVar3._12_4_ = uVar16;
  auVar3._8_4_ = DAT_08af7df8;
  auVar3._4_4_ = DAT_08af7df4;
  auVar3._0_4_ = DAT_08af7df0;
  auVar3 = vtfm4_q(auVar7,auVar3);
  *(undefined4 *)(param_1 + 0x60) = auVar3._0_4_;
  *(int *)(param_1 + 100) = auVar3._4_4_;
  *(int *)(param_1 + 0x68) = auVar3._8_4_;
  *(int *)(param_1 + 0x6c) = auVar3._12_4_;
  uVar16 = *(undefined4 *)(param_1 + 0x74);
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  uVar5 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)*pauVar13 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xd4) = uVar16;
  *(undefined4 *)(param_1 + 0xd8) = uVar4;
  *(undefined4 *)(param_1 + 0xdc) = uVar5;
  auVar1 = vscl_t(*pauVar13,*(float *)(param_1 + 0x104) * 12.0);
  *(int *)*pauVar13 = auVar1._0_4_;
  *(int *)(param_1 + 0xd4) = auVar1._4_4_;
  *(int *)(param_1 + 0xd8) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0xdc) = in_V7D;
  if ((*(int *)(param_1 + 0xf4) < 0x34) &&
     (iVar10 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,(undefined4 *)(param_1 + 0x60),
                            pauVar13,0x33,0,1,0x31bf337e), iVar10 != 0)) {
    if (DAT_08aba940 == 0) {
      uVar12 = *(uint *)(param_1 + 0x100);
      if ((int)uVar12 < 0) {
        uVar12 = -(-uVar12 & 3);
      }
      else {
        uVar12 = uVar12 & 3;
      }
      if (uVar12 == 0) {
        auVar1 = vscl_t(_DAT_08b00290,0x40400000);
        local_30 = auVar1._0_4_;
        uStack_2c = auVar1._4_4_;
        uStack_28 = auVar1._8_4_;
        auVar6._8_4_ = DAT_08aba938;
        auVar6._4_4_ = DAT_08aba934;
        auVar6._0_4_ = DAT_08aba930;
        auVar1 = vadd_t(auVar6,auVar1);
        local_40 = auVar1._0_4_;
        uStack_3c = auVar1._4_4_;
        uStack_38 = auVar1._8_4_;
        uStack_34 = DAT_08aba93c;
        FUN_08824024(DAT_08b00920,0x1b,&local_40);
        FUN_08877060(param_1,0x200099,0,0,0);
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    else {
      if (*(int *)(param_1 + 0x100) % 3 == 0) {
        FUN_08824024(DAT_08b00920,0x1b,&DAT_08aba930,(undefined4 *)(param_1 + 0x70));
        FUN_08877060(param_1,0x200099,0,0,0);
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
  }
  FUN_088787a0(param_1);
  return;
}

