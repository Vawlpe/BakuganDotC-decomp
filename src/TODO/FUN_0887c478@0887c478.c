#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0887c478(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [64];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [12];
  undefined auVar6 [64];
  bool bVar7;
  int iVar8;
  float *pfVar9;
  undefined (*pauVar10) [12];
  undefined (*pauVar11) [12];
  uint uVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_V7D;
  
  iVar8 = *(int *)(param_1 + 0xf8);
  if (iVar8 < 1) {
    if (iVar8 < 0) {
      uVar15 = *(undefined4 *)(param_1 + 0x104);
      goto LAB_0887c58c;
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x6c);
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
LAB_0887c4e8:
    fVar14 = *(float *)(param_1 + 0x104) + (240.0 - *(float *)(param_1 + 0x104)) * 0.2;
    *(float *)(param_1 + 0x104) = fVar14;
    if (200.0 < fVar14) {
      *(undefined4 *)(param_1 + 0x104) = 0x43480000;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
  }
  else {
    if (iVar8 < 2) goto LAB_0887c4e8;
    if (2 < iVar8) {
      uVar15 = *(undefined4 *)(param_1 + 0x104);
      goto LAB_0887c58c;
    }
    if (*(int *)(param_1 + 0xf4) < 0x2e) {
      bVar7 = false;
      if ((2 < *(int *)(*(int *)(param_1 + 0xb0) + 0x140)) &&
         (bVar7 = false, *(int *)(*(int *)(param_1 + 0xb0) + 0x140) < 7)) {
        bVar7 = true;
      }
      if (bVar7) {
        *(undefined4 *)(param_1 + 0xf4) = 0x1c;
      }
    }
    else {
      pfVar9 = (float *)(*(int *)(param_1 + 0xbc) + 0xbc);
      *pfVar9 = *pfVar9 - 0.1;
      if (*(float *)(*(int *)(param_1 + 0xbc) + 0xbc) <= 0.0) {
        FUN_08876ee0(param_1);
        return;
      }
    }
  }
  uVar15 = *(undefined4 *)(param_1 + 0x104);
LAB_0887c58c:
  *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x74) = uVar15;
  iVar8 = *(int *)(*(int *)(param_1 + 0xb0) + 0x130);
  iVar13 = *(int *)(param_1 + 200);
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
  auVar6._60_4_ = *(undefined4 *)(iVar13 + 0xbc);
  auVar6._56_4_ = *(undefined4 *)(iVar13 + 0xac);
  auVar6._52_4_ = *(undefined4 *)(iVar13 + 0x9c);
  auVar6._48_4_ = *(undefined4 *)(iVar13 + 0x8c);
  auVar6._44_4_ = *(undefined4 *)(iVar13 + 0xb8);
  auVar6._40_4_ = *(undefined4 *)(iVar13 + 0xa8);
  auVar6._36_4_ = *(undefined4 *)(iVar13 + 0x98);
  auVar6._32_4_ = *(undefined4 *)(iVar13 + 0x88);
  auVar6._28_4_ = *(undefined4 *)(iVar13 + 0xb4);
  auVar6._24_4_ = *(undefined4 *)(iVar13 + 0xa4);
  auVar6._20_4_ = *(undefined4 *)(iVar13 + 0x94);
  auVar6._16_4_ = *(undefined4 *)(iVar13 + 0x84);
  auVar6._12_4_ = *(undefined4 *)(iVar13 + 0xb0);
  auVar6._8_4_ = *(undefined4 *)(iVar13 + 0xa0);
  auVar6._4_4_ = *(undefined4 *)(iVar13 + 0x90);
  auVar6._0_4_ = *(undefined4 *)(iVar13 + 0x80);
  auVar2 = vmmul_q(auVar2,auVar6);
  *(int *)(param_1 + 0x20) = auVar2._0_4_;
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
  pauVar10 = (undefined (*) [12])(param_1 + 0x60);
  uVar15 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)*pauVar10 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 100) = uVar15;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  pauVar11 = (undefined (*) [12])(param_1 + 0xd0);
  uVar15 = *(undefined4 *)(param_1 + 0x74);
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)*pauVar11 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xd4) = uVar15;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined4 *)(param_1 + 0xdc) = uVar4;
  auVar1 = vscl_t(*pauVar11,*(float *)(param_1 + 0x104) * 10.0);
  *(int *)*pauVar11 = auVar1._0_4_;
  *(int *)(param_1 + 0xd4) = auVar1._4_4_;
  *(int *)(param_1 + 0xd8) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0xdc) = in_V7D;
  auVar1 = vadd_t(*pauVar10,*pauVar11);
  *(int *)(param_1 + 0x90) = auVar1._0_4_;
  *(int *)(param_1 + 0x94) = auVar1._4_4_;
  *(int *)(param_1 + 0x98) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x6c);
  if ((*(int *)(param_1 + 0xf4) < 0x2d) &&
     (iVar8 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar10,pauVar11,0x31,0,1,
                           0x31bf337e), iVar8 != 0)) {
    if (DAT_08aba940 == 0) {
      if ((*(uint *)(param_1 + 0xfc) & 1) != 0) {
        auVar1 = vscl_t(_DAT_08b00290,0x40400000);
        auVar5._8_4_ = DAT_08aba938;
        auVar5._4_4_ = DAT_08aba934;
        auVar5._0_4_ = DAT_08aba930;
        vadd_t(auVar5,auVar1);
        FUN_08824024(DAT_08b00920,0xa1);
        FUN_08877060(param_1,0x200099,0,0,0);
      }
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x100);
      if ((int)uVar12 < 0) {
        uVar12 = -(uVar12 & 1);
      }
      else {
        uVar12 = uVar12 & 1;
      }
      if (uVar12 == 0) {
        FUN_08824024(DAT_08b00920,0xa1,&DAT_08aba930,(undefined4 *)(param_1 + 0x70));
        FUN_08877060(param_1,0x200099,0,0,0);
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  }
  FUN_088787a0(param_1);
  return;
}

