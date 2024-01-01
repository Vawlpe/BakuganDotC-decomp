#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088686b0(int param_1)

{
  char cVar1;
  undefined auVar2 [16];
  undefined auVar3 [12];
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined uVar7;
  uint uVar8;
  undefined (*pauVar9) [16];
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 in_V7D;
  undefined4 uVar13;
  
  *(undefined *)(param_1 + 0x658) = 0;
  if ((((DAT_08aba77e != '\0') && (*(char *)(param_1 + 0x158) != '\0')) &&
      (iVar4 = FUN_0884b248(), iVar4 != 0)) &&
     (iVar4 = FUN_0884b268(), *(int *)(iVar4 + 0x440) == 6)) {
    return;
  }
  iVar4 = FUN_0884b248();
  if ((iVar4 != 0) && (iVar4 = FUN_0884b268(), *(char *)(iVar4 + 0x558) != '\0')) {
    uVar5 = FUN_08884cc8(*(undefined4 *)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x16c) = uVar5;
  }
  iVar4 = FUN_0881a580(*(undefined4 *)(param_1 + 0x20c));
  if (iVar4 != 0) {
    *(undefined *)(param_1 + 0x658) = 1;
  }
  *(bool *)(param_1 + 0x612) = (*(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 1) != 0;
  if ((*(uint *)(param_1 + 0x148) & 0x40) == 0) {
    uVar8 = *(uint *)(param_1 + 0x144);
  }
  else if ((*(uint *)(param_1 + 0x144) & 0x400000) == 0) {
    uVar8 = *(uint *)(param_1 + 0x144);
  }
  else if ((*(uint *)(param_1 + 0x16c) & 0x10) == 0) {
    uVar8 = *(uint *)(param_1 + 0x144);
  }
  else if ((*(uint *)(param_1 + 0x16c) & 0x20000) == 0) {
    uVar7 = 1;
    if (*(int *)(param_1 + 0x5d4) < 8) {
      if ((*(uint *)(param_1 + 0x16c) & 0x10000) != 0) {
        uVar7 = 2;
      }
      *(undefined *)(param_1 + *(int *)(param_1 + 0x5d4) + 0x5d8) = uVar7;
      if (*(int *)(param_1 + 0x5c4) != 0) {
        uVar8 = *(uint *)(param_1 + 0x144);
        goto LAB_08868818;
      }
      *(int *)(param_1 + 0x5d4) = *(int *)(param_1 + 0x5d4) + 1;
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 1;
    }
    uVar8 = *(uint *)(param_1 + 0x144);
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x144);
  }
LAB_08868818:
  *(uint *)(param_1 + 0x144) = uVar8 & 0xffffff3f;
  if (*(int *)(*(int *)(param_1 + 0x20c) + 0x140) == 0) {
    uVar8 = *(uint *)(param_1 + 0x144);
  }
  else {
    if (*(char *)(param_1 + 0x658) == '\0') {
      FUN_088651c4(param_1,1);
      if (*(int *)(param_1 + 8) == 10) {
        iVar10 = 0;
        iVar4 = param_1;
        if ((*(uint *)(param_1 + 0x144) & 0x800000) == 0) {
          do {
            *(undefined4 *)(*(int *)(iVar4 + 0x41c) + 0x170) = 1;
            iVar10 = iVar10 + 1;
            iVar4 = iVar4 + 4;
          } while (iVar10 < 4);
        }
        iVar4 = *(int *)(param_1 + 8);
      }
      else {
        iVar4 = *(int *)(param_1 + 8);
      }
      if (iVar4 != 0xd) {
        return;
      }
      iVar4 = 0;
      if ((*(uint *)(param_1 + 0x144) & 0x800000) != 0) {
        return;
      }
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x41c) + 0x170) = 1;
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 4;
      } while (iVar4 < 2);
      return;
    }
    uVar8 = *(uint *)(param_1 + 0x144);
  }
  *(uint *)(param_1 + 0x144) = uVar8 & 0x40197fe8;
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffd9f;
  if ((*(int *)(param_1 + 0x1d8) != 0) &&
     (iVar4 = *(int *)(param_1 + 0x1d8) + -1, *(int *)(param_1 + 0x1d8) = iVar4, iVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  FUN_088711b4(param_1);
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_08854eb0(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x140),
                 *(undefined4 *)(param_1 + 0x16c));
  }
  FUN_08870fb8(param_1);
  (**(code **)(*(int *)(param_1 + 0x14) + 0x184))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x180));
  FUN_08864afc(param_1);
  if (*(int *)(param_1 + 0x140) == 0xf) goto LAB_088689b4;
  pfVar6 = (float *)FUN_0889dcc8();
  fVar12 = *(float *)(param_1 + 0x260) * 0.8;
  if (*(float *)(param_1 + 0x20) - fVar12 < *pfVar6) {
    *(float *)(param_1 + 0x20) = fVar12 + *pfVar6;
LAB_08868964:
    fVar11 = *(float *)(param_1 + 0x28);
  }
  else {
    if (pfVar6[3] < *(float *)(param_1 + 0x20) + fVar12) {
      *(float *)(param_1 + 0x20) = pfVar6[3] - fVar12;
      goto LAB_08868964;
    }
    fVar11 = *(float *)(param_1 + 0x28);
  }
  if (fVar11 - fVar12 < pfVar6[2]) {
    *(float *)(param_1 + 0x28) = fVar12 + pfVar6[2];
  }
  else if (pfVar6[5] < *(float *)(param_1 + 0x28) + fVar12) {
    *(float *)(param_1 + 0x28) = pfVar6[5] - fVar12;
  }
LAB_088689b4:
  FUN_08864c58(param_1);
  FUN_088635fc(param_1);
  FUN_08866554(param_1);
  FUN_089dfc04(param_1);
  FUN_089dfdb0(param_1);
  FUN_0885fad0(param_1);
  (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
  FUN_08862c34(param_1);
  FUN_08863bcc(param_1);
  *(undefined *)(param_1 + 0x26c) = 0;
  FUN_088854b0(*(undefined4 *)(param_1 + 0x200));
  if ((*(uint *)(param_1 + 0x144) & 4) == 0) {
    cVar1 = *(char *)(param_1 + 0x5e8);
  }
  else {
    FUN_0886bfa0(param_1);
    cVar1 = *(char *)(param_1 + 0x5e8);
  }
  if (cVar1 != '\0') {
    FUN_0886ae80(param_1,param_1 + 0x5e8);
    *(undefined *)(param_1 + 0x5e8) = 0;
  }
  if (*(char *)(param_1 + 0x658) != '\0') {
    (**(code **)(*(int *)(param_1 + 0x14) + 0xc4))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xc0));
  }
  FUN_0886717c(param_1);
  FUN_088680f8(param_1);
  if (*(int *)(param_1 + 0x2f0) == 0) {
    uVar8 = *(uint *)(param_1 + 0x144);
  }
  else {
    *(bool *)(*(int *)(param_1 + 0x2f0) + 0x130) = (*(uint *)(param_1 + 0x144) & 0x8000000) != 0;
    FUN_0882a3b0(*(undefined4 *)(param_1 + 0x2f0));
    uVar8 = *(uint *)(param_1 + 0x144);
  }
  if ((uVar8 & 1) == 0) {
    pauVar9 = (undefined (*) [16])(param_1 + 0x350);
    auVar2._12_4_ = DAT_08b001ac;
    auVar2._8_4_ = DAT_08b001a8;
    auVar2._4_4_ = DAT_08b001a4;
    auVar2._0_4_ = DAT_08b001a0;
    auVar2 = vsub_q(auVar2,*pauVar9);
    auVar2 = vscl_q(auVar2,0x3e4ccccd);
    auVar2 = vadd_q(*pauVar9,auVar2);
    *(int *)*pauVar9 = auVar2._0_4_;
    *(int *)(param_1 + 0x354) = auVar2._4_4_;
    *(int *)(param_1 + 0x358) = auVar2._8_4_;
    *(int *)(param_1 + 0x35c) = auVar2._12_4_;
    uVar5 = vdot_t(*(undefined (*) [12])*pauVar9,*(undefined (*) [12])*pauVar9);
    uVar13 = vcmp_s(8,uVar5,*(undefined4 *)*pauVar9);
    vrsq_s(uVar5);
    uVar5 = vcmovt_s(in_V7D,(byte)uVar13 & 1);
    vpfxd(4,4,4,5);
    auVar3 = vscl_t(*(undefined (*) [12])*pauVar9,uVar5);
    *(int *)*pauVar9 = auVar3._0_4_;
    *(int *)(param_1 + 0x354) = auVar3._4_4_;
    *(int *)(param_1 + 0x358) = auVar3._8_4_;
    *(undefined4 *)(param_1 + 0x35c) = in_V7D;
  }
  FUN_088651c4(param_1,0);
  FUN_08865e8c(param_1);
  if (*(int *)(param_1 + 0x648) != 0) {
    *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x648) + -1;
  }
  return;
}

