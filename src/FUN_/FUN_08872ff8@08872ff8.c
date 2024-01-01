#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08872ff8(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  int iVar7;
  uint uVar8;
  undefined (*pauVar9) [12];
  float fVar10;
  undefined4 uVar11;
  undefined auVar3 [12];
  undefined auVar6 [12];
  
  iVar7 = FUN_089df684(0x3e4ccccd,param_1);
  if (iVar7 != 0) {
    iVar7 = FUN_0886002c(param_1);
    if (iVar7 != 0) {
      FUN_088715b0(param_1,0);
      return;
    }
    if ((*(uint *)(param_1 + 0x16c) & 2) == 0) {
      uVar8 = *(uint *)(param_1 + 0x16c);
    }
    else {
      iVar7 = FUN_088886fc(param_1 + 0x434);
      if (iVar7 != 0) {
        FUN_088706f0(param_1,0xc,0);
        return;
      }
      uVar8 = *(uint *)(param_1 + 0x16c);
    }
    if (((uVar8 & 4) != 0) && (iVar7 = FUN_088886fc(param_1 + 0x434), iVar7 != 0)) {
      FUN_088706f0(param_1,2,0);
      return;
    }
  }
  iVar7 = FUN_089df684(0x3ecccccd,param_1);
  pauVar9 = (undefined (*) [12])(param_1 + 0x80);
  if ((iVar7 != 0) && ((*(uint *)(param_1 + 0x16c) & 1) != 0)) {
    uVar11 = vzero_s();
    auVar1._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar1._4_4_ = uVar11;
    auVar1._0_4_ = *(undefined4 *)*pauVar9;
    auVar4._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar4._4_4_ = uVar11;
    auVar4._0_4_ = *(undefined4 *)*pauVar9;
    uVar11 = vdot_t(auVar1,auVar4);
    uVar11 = vsqrt_s(uVar11);
    *(undefined4 *)(param_1 + 0x174) = uVar11;
    FUN_088706f0(param_1,1,0);
    return;
  }
  iVar7 = FUN_089df684(0x3f666666,param_1);
  if (iVar7 != 0) {
    uVar11 = vzero_s();
    auVar2._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar2._4_4_ = uVar11;
    auVar2._0_4_ = *(undefined4 *)*pauVar9;
    auVar3._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar3._4_4_ = uVar11;
    auVar3._0_4_ = *(undefined4 *)*pauVar9;
    uVar11 = vdot_t(auVar2,auVar3);
    uVar11 = vsqrt_s(uVar11);
    *(undefined4 *)(param_1 + 0x174) = uVar11;
    FUN_088706f0(param_1,0,0);
    return;
  }
  FUN_088718a4(param_1);
  iVar7 = FUN_088608b0(param_1,0xc);
  if (iVar7 == 0) {
    auVar1 = vscl_t(*pauVar9,0x3f4ccccd);
    *(int *)*pauVar9 = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    iVar7 = *(int *)(param_1 + 0x3cc);
  }
  else {
    auVar1 = vscl_t(*pauVar9,0x3f6b851f);
    *(int *)*pauVar9 = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    iVar7 = *(int *)(param_1 + 0x3cc);
  }
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0x3cc) = 1;
    FUN_08864cb4(param_1,0);
    iVar7 = FUN_0885fc80(param_1);
    if ((iVar7 != 0) && (*(float *)(*(int *)(param_1 + 0x4bc) + 0x70) == 0.0)) {
      FUN_089e3260(0x41100000,0x3f000000,DAT_08ac5c90,0x14);
    }
  }
  else {
    if (*(int *)(param_1 + 0x3cc) == 1) {
      FUN_088605cc(param_1);
      *(undefined4 *)(param_1 + 0x3cc) = 2;
      iVar7 = *(int *)(param_1 + 0x4bc);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x4bc);
    }
    if ((*(char *)(iVar7 + 2) != '\0') && (*(float *)(*(int *)(param_1 + 0x4bc) + 0x70) == 0.0)) {
      uVar11 = vzero_s();
      auVar5._8_4_ = *(undefined4 *)(param_1 + 0x88);
      auVar5._4_4_ = uVar11;
      auVar5._0_4_ = *(undefined4 *)*pauVar9;
      auVar6._8_4_ = *(undefined4 *)(param_1 + 0x88);
      auVar6._4_4_ = uVar11;
      auVar6._0_4_ = *(undefined4 *)*pauVar9;
      fVar10 = (float)vdot_t(auVar5,auVar6);
      if (4.0 < fVar10) {
        FUN_08864fe0(param_1);
      }
    }
  }
  return;
}

