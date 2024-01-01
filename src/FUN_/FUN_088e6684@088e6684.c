#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e6684(int param_1,undefined (*param_2) [12],int param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  float fVar7;
  undefined4 uVar8;
  undefined4 in_V7D;
  undefined4 uVar9;
  
  bVar4 = true;
  if ((0x50 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0x54)) {
    bVar4 = false;
  }
  if (param_3 < 2) {
    if (param_3 < 1) {
      return;
    }
    if (!bVar4) {
      return;
    }
    if (*(int *)(param_1 + 0x3a0) == 6) {
      return;
    }
    if (*(int *)(param_1 + 0x3a0) == 0xb) {
      return;
    }
    if (*(int *)(param_1 + 0x3a0) == 4) {
      return;
    }
    pauVar6 = (undefined (*) [12])(param_1 + 0x20);
    auVar2 = vsub_t(*param_2,*pauVar6);
    fVar7 = (float)vdot_t(auVar2,auVar2);
    if (fVar7 < *(float *)(param_1 + 0x404) * *(float *)(param_1 + 0x404)) {
      DAT_08b00410 = *(undefined4 *)*pauVar6;
      DAT_08b00414 = *(undefined4 *)(param_1 + 0x24);
      DAT_08b00418 = *(undefined4 *)(param_1 + 0x28);
      DAT_08b0041c = *(undefined4 *)(param_1 + 0x2c);
      uVar8 = vdot_t(auVar2,auVar2);
      fVar7 = (float)vsqrt_s(uVar8);
      uVar8 = vdot_t(auVar2,auVar2);
      uVar9 = vcmp_s(8,uVar8,auVar2._0_4_);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(auVar2,uVar8);
      auVar2 = vscl_t(auVar2,fVar7 - 1.0);
      DAT_08b00420 = auVar2._0_4_;
      DAT_08b00424 = auVar2._4_4_;
      DAT_08b00428 = auVar2._8_4_;
      DAT_08b0042c = in_V7D;
      (**(code **)(DAT_08b00404 + 0x4c))((int)&DAT_08b00400 + (int)*(short *)(DAT_08b00404 + 0x48));
      uVar3 = DAT_08b0028c;
      uVar9 = DAT_08b00288;
      uVar8 = DAT_08b00284;
      *(undefined4 *)(param_1 + 0x3c0) = DAT_08b00280;
      *(undefined4 *)(param_1 + 0x3c4) = uVar8;
      *(undefined4 *)(param_1 + 0x3c8) = uVar9;
      *(undefined4 *)(param_1 + 0x3cc) = uVar3;
      if (*(int *)(param_1 + 0x3a0) == 5) {
        *(undefined4 *)(param_1 + 0x3a0) = 5;
      }
      else {
        if (*(int *)(param_1 + 0x3a0) != 7) {
          *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)*pauVar6;
          *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x24);
          *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x2c);
        }
        *(undefined4 *)(param_1 + 0x3a0) = 5;
      }
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      uVar8 = *(undefined4 *)(*param_2 + 4);
      uVar9 = *(undefined4 *)(*param_2 + 8);
      uVar3 = *(undefined4 *)param_2[1];
      *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)*param_2;
      *(undefined4 *)(param_1 + 0x3c4) = uVar8;
      *(undefined4 *)(param_1 + 0x3c8) = uVar9;
      *(undefined4 *)(param_1 + 0x3cc) = uVar3;
    }
  }
  else if (2 < param_3) {
    if (3 < param_3) {
      return;
    }
    if (!bVar4) {
      return;
    }
    if (*(int *)(param_1 + 0x3a0) == 6) {
      return;
    }
    if (*(int *)(param_1 + 0x3a0) == 0xb) {
      return;
    }
    if (*(int *)(param_1 + 0x3a0) == 4) {
      return;
    }
    pauVar6 = (undefined (*) [12])(param_1 + 0x20);
    auVar2 = vsub_t(*param_2,*pauVar6);
    fVar7 = (float)vdot_t(auVar2,auVar2);
    if (*(float *)(param_1 + 0x404) * *(float *)(param_1 + 0x404) <= fVar7) {
      return;
    }
    DAT_08b0041c = *(undefined4 *)(param_1 + 0x2c);
    auVar1._8_4_ = 0x41200000;
    auVar1._0_8_ = 0x4120000041200000;
    auVar1 = vadd_t(*pauVar6,auVar1);
    DAT_08b00410 = auVar1._0_4_;
    DAT_08b00414 = auVar1._4_4_;
    DAT_08b00418 = auVar1._8_4_;
    DAT_08b00420 = auVar2._0_4_;
    DAT_08b00424 = auVar2._4_4_;
    DAT_08b00428 = auVar2._8_4_;
    DAT_08b0042c = *(undefined4 *)param_2[1];
    (**(code **)(DAT_08b00404 + 0x4c))((int)&DAT_08b00400 + (int)*(short *)(DAT_08b00404 + 0x48));
    if ((*(int *)(param_1 + 0x3a0) != 5) && (*(int *)(param_1 + 0x3a0) != 7)) {
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)*pauVar6;
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x2c);
    }
    *(undefined4 *)(param_1 + 0x3a0) = 6;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    uVar8 = *(undefined4 *)(*param_2 + 4);
    uVar9 = *(undefined4 *)(*param_2 + 8);
    uVar3 = *(undefined4 *)param_2[1];
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)*param_2;
    *(undefined4 *)(param_1 + 0x3c4) = uVar8;
    *(undefined4 *)(param_1 + 0x3c8) = uVar9;
    *(undefined4 *)(param_1 + 0x3cc) = uVar3;
    return;
  }
  if (((bVar4) && (*(int *)(param_1 + 0x174) != 0)) &&
     ((*(uint *)(*(int *)(param_1 + 0x174) + 0x130) & 0x10) != 0)) {
    iVar5 = *(int *)(param_1 + 0x174);
    *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) & 0xffffffef;
    if (*(int *)(iVar5 + 0x16c) == 0xbb) {
      if (*(int *)(param_1 + 0x3a0) != 5) {
        *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x2c);
      }
      *(undefined4 *)(param_1 + 0x3a0) = 5;
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      uVar8 = *(undefined4 *)(*param_2 + 4);
      uVar9 = *(undefined4 *)(*param_2 + 8);
      uVar3 = *(undefined4 *)param_2[1];
      *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)*param_2;
      *(undefined4 *)(param_1 + 0x3c4) = uVar8;
      *(undefined4 *)(param_1 + 0x3c8) = uVar9;
      *(undefined4 *)(param_1 + 0x3cc) = uVar3;
    }
  }
  return;
}

