#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088299c0(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  float fVar3;
  undefined4 in_V70;
  undefined4 in_V78;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar4;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (*(char *)(param_1 + 0x16e) == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0x41400000;
    *(undefined4 *)(param_1 + 0x74) = 0x41400000;
    *(undefined4 *)(param_1 + 0x78) = 0x41400000;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 2;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    if ((DAT_08ab9f50 & 1) == 0) {
      uVar2 = FUN_089f7720("eyelight");
      *(undefined4 *)(param_1 + 0xd4) = uVar2;
      *(undefined4 *)(param_1 + 0x174) = 0xbca3d70a;
      *(undefined *)(param_1 + 0x16d) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    else {
      uVar2 = FUN_089f7720("corelight");
      *(undefined4 *)(param_1 + 0xd4) = uVar2;
      *(undefined4 *)(param_1 + 0x174) = 0x3c23d70a;
      *(undefined *)(param_1 + 0x16d) = 4;
      uVar2 = vrndf1_s();
      uVar2 = vsub_s(uVar2,in_V7F);
      uVar2 = vmul_s(uVar2,in_V70);
      uVar2 = vsub_s(uVar2,in_V78);
      *(undefined4 *)(param_1 + 0x88) = uVar2;
    }
    DAT_08ab9f50 = DAT_08ab9f50 + 1;
    *(undefined *)(param_1 + 0x16f) = 0;
    *(char *)(param_1 + 0x16e) = *(char *)(param_1 + 0x16e) + '\x01';
  }
  else if (*(int *)(param_1 + 0x160) == 0) {
    fVar3 = *(float *)(param_1 + 0xbc) - 0.3;
    *(float *)(param_1 + 0xbc) = fVar3;
    if (fVar3 < 0.0) {
      FUN_089f5124(*(undefined4 *)(param_1 + 0x188),param_1);
      return;
    }
  }
  else {
    auVar1 = vsub_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x50),
                    **(undefined (**) [12])(param_1 + 0x160));
    fVar3 = (float)vdot_t(*(undefined (*) [12])(*(int *)(param_1 + 0x160) + 0x20),
                          *(undefined (*) [12])(DAT_08ac5c90 + 0x70));
    if (fVar3 < -0.1) {
      uVar2 = vdot_t(auVar1,auVar1);
      uVar4 = vcmp_s(8,uVar2,auVar1._0_4_);
      vrsq_s(uVar2);
      uVar2 = vcmovt_s(in_V7D,(byte)uVar4 & 1);
      uVar2 = vmul_s(uVar2,0x40400000);
      auVar1 = vscl_t(auVar1,uVar2);
      local_60 = auVar1._0_4_;
      uStack_5c = auVar1._4_4_;
      uStack_58 = auVar1._8_4_;
    }
    else {
      uVar2 = vdot_t(auVar1,auVar1);
      uVar4 = vcmp_s(8,uVar2,auVar1._0_4_);
      vrsq_s(uVar2);
      uVar2 = vcmovt_s(in_V7D,(byte)uVar4 & 1);
      uVar2 = vmul_s(uVar2,0xc0400000);
      auVar1 = vscl_t(auVar1,uVar2);
      local_60 = auVar1._0_4_;
      uStack_5c = auVar1._4_4_;
      uStack_58 = auVar1._8_4_;
    }
    uVar2 = *(undefined4 *)(*(undefined (**) [12])(param_1 + 0x160))[1];
    auVar1._4_4_ = uStack_5c;
    auVar1._0_4_ = local_60;
    auVar1._8_4_ = uStack_58;
    auVar1 = vadd_t(**(undefined (**) [12])(param_1 + 0x160),auVar1);
    *(int *)(param_1 + 0x60) = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    if (0.0 < *(float *)(param_1 + 0x174)) {
      fVar3 = *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x174);
      *(float *)(param_1 + 0x88) = fVar3;
      if (3.141593 < fVar3) {
        *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) - 6.283185;
      }
      else if (*(float *)(param_1 + 0x88) <= -3.141593) {
        *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + 6.283185;
      }
      uVar2 = vrndf1_s();
      fVar3 = (float)vsub_s(uVar2,in_V7F);
      fVar3 = fVar3 * 0.6 + 0.2 + *(float *)(param_1 + 0x178);
      *(float *)(param_1 + 0x178) = fVar3;
      if (3.141593 < fVar3) {
        *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) - 6.283185;
      }
      else if (*(float *)(param_1 + 0x178) <= -3.141593) {
        *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) + 6.283185;
      }
      uVar2 = vmul_s(*(undefined4 *)(param_1 + 0x178),in_V7C);
      fVar3 = (float)vsin_s(uVar2);
      fVar3 = *(float *)(*(int *)(param_1 + 0x160) + 0xc) * 0.3 * (fVar3 * 3.0 + 16.0);
      *(float *)(param_1 + 0x70) = fVar3;
      *(float *)(param_1 + 0x74) = fVar3;
      *(float *)(param_1 + 0x78) = fVar3;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      fVar3 = *(float *)(*(int *)(param_1 + 0x160) + 0xc);
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(float *)(param_1 + 0x70) = fVar3 * 12.0;
      *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
      *(float *)(param_1 + 0x74) = fVar3 * 6.0;
    }
    *(char *)(param_1 + 0x16f) = *(char *)(param_1 + 0x16f) + '\x01';
    if (*(char *)(param_1 + 0x16e) == '\x01') {
      uVar2 = vrndf1_s();
      fVar3 = (float)vsub_s(uVar2,in_V7F);
      fVar3 = fVar3 * 2.0 + 0.5 + *(float *)(param_1 + 0x170);
      *(float *)(param_1 + 0x170) = fVar3;
      if (3.141593 < fVar3) {
        *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) - 6.283185;
      }
      else if (*(float *)(param_1 + 0x170) <= -3.141593) {
        *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) + 6.283185;
      }
      if (0.0 < *(float *)(param_1 + 0x174)) {
        uVar2 = vmul_s(*(undefined4 *)(param_1 + 0x170),in_V7C);
        fVar3 = (float)vsin_s(uVar2);
        fVar3 = fVar3 * 0.4 + 0.2;
      }
      else {
        uVar2 = vmul_s(*(undefined4 *)(param_1 + 0x170),in_V7C);
        fVar3 = (float)vsin_s(uVar2);
        fVar3 = fVar3 * 0.4 + 0.6;
      }
      *(float *)(param_1 + 0xbc) = fVar3;
    }
    else {
      fVar3 = *(float *)(param_1 + 0xbc) - 0.05;
      *(float *)(param_1 + 0xbc) = fVar3;
      if (fVar3 < 0.0) {
        FUN_089f5124(*(undefined4 *)(param_1 + 0x188),param_1);
      }
    }
  }
  return;
}

