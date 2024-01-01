#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0887e40c(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [12];
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined (*pauVar10) [12];
  float fVar11;
  undefined4 in_V7D;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  iVar7 = *(int *)(param_1 + 0xf8);
  if (iVar7 < 0x1f) {
    if (0x1d < iVar7) {
      fVar11 = *(float *)(param_1 + 0x104) + (240.0 - *(float *)(param_1 + 0x104)) * 0.2;
      *(float *)(param_1 + 0x104) = fVar11;
      if (200.0 < fVar11) {
        *(undefined4 *)(param_1 + 0x104) = 0x43480000;
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      }
      goto LAB_0887e59c;
    }
  }
  else if (iVar7 < 0x20) {
    if (0x3c < *(int *)(param_1 + 0xf4)) {
      FUN_08876ee0(param_1);
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0xb0) + 0x140) < 3) {
      bVar6 = false;
    }
    else {
      bVar6 = false;
      if (*(int *)(*(int *)(param_1 + 0xb0) + 0x140) < 7) {
        bVar6 = true;
      }
    }
    if (bVar6) {
      *(undefined4 *)(param_1 + 0xf4) = 0x1c;
    }
    goto LAB_0887e59c;
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
LAB_0887e59c:
  pauVar10 = (undefined (*) [12])(param_1 + 0xd0);
  puVar9 = (undefined4 *)(param_1 + 0x60);
  iVar7 = FUN_088249a8(DAT_08b00920,0x21e,puVar9);
  if (iVar7 != 0) {
    *(undefined4 *)(iVar7 + 0x74) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(iVar7 + 0x1d0) = 0x40400000;
  }
  iVar7 = FUN_088249a8(DAT_08b00920,0x21f,puVar9);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0xb0);
  }
  else {
    *(undefined4 *)(iVar7 + 0x74) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(iVar7 + 0x1d0) = 0x40d00000;
    iVar7 = *(int *)(param_1 + 0xb0);
  }
  iVar7 = FUN_08a29654(param_1 + 0x20,*(int *)(iVar7 + 0x130) + 0x80,*(int *)(param_1 + 200) + 0x80)
  ;
  uVar2 = *(undefined4 *)(iVar7 + 0x34);
  uVar3 = *(undefined4 *)(iVar7 + 0x38);
  uVar4 = *(undefined4 *)(iVar7 + 0x3c);
  *puVar9 = *(undefined4 *)(iVar7 + 0x30);
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)*pauVar10 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined4 *)(param_1 + 0xdc) = uVar4;
  auVar1 = vscl_t(*pauVar10,*(float *)(param_1 + 0x104) * 12.0);
  *(int *)*pauVar10 = auVar1._0_4_;
  *(int *)(param_1 + 0xd4) = auVar1._4_4_;
  *(int *)(param_1 + 0xd8) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0xdc) = in_V7D;
  if (((*(int *)(param_1 + 0xf4) < 0x34) && (10 < *(int *)(param_1 + 0xf4))) &&
     (iVar7 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,puVar9,pauVar10,0x47,0,1,
                           0x31bf337e), iVar7 != 0)) {
    if (DAT_08aba940 == 0) {
      if (*(int *)(param_1 + 0x100) % 3 == 0) {
        auVar1 = vscl_t(_DAT_08b00290,0x40400000);
        local_50 = auVar1._0_4_;
        uStack_4c = auVar1._4_4_;
        uStack_48 = auVar1._8_4_;
        auVar5._8_4_ = DAT_08aba938;
        auVar5._4_4_ = DAT_08aba934;
        auVar5._0_4_ = DAT_08aba930;
        auVar1 = vadd_t(auVar5,auVar1);
        local_60 = auVar1._0_4_;
        uStack_5c = auVar1._4_4_;
        uStack_58 = auVar1._8_4_;
        uStack_54 = DAT_08aba93c;
        FUN_08824024(DAT_08b00920,0xc5,&local_60);
        FUN_08877060(param_1,0x200099,0,0,0);
        iVar7 = *(int *)(param_1 + 0x100);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x100);
      }
      *(int *)(param_1 + 0x100) = iVar7 + 1;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x100);
      if ((int)uVar8 < 0) {
        uVar8 = -(uVar8 & 1);
      }
      else {
        uVar8 = uVar8 & 1;
      }
      if (uVar8 == 0) {
        FUN_08824024(DAT_08b00920,0xc5,&DAT_08aba930,(undefined4 *)(param_1 + 0x70));
        FUN_08877060(param_1,0x200099,0,0,0);
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
  }
  FUN_088787a0(param_1);
  return;
}

