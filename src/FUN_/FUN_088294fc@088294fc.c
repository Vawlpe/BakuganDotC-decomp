#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088294fc(int param_1)

{
  byte bVar1;
  undefined auVar2 [12];
  undefined (*pauVar3) [12];
  undefined4 uVar4;
  float fVar5;
  undefined4 in_V7D;
  undefined4 in_V7F;
  
  bVar1 = *(byte *)(param_1 + 0x16e);
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0xd4) = DAT_08af7920;
    uVar4 = vrndf1_s();
    fVar5 = (float)vsub_s(uVar4,in_V7F);
    fVar5 = fVar5 * 0.2 + 0.7;
    *(float *)(param_1 + 0xb0) = fVar5;
    *(float *)(param_1 + 0xb4) = fVar5;
    *(float *)(param_1 + 0xb8) = fVar5 * 0.9;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0x3f333333;
    *(char *)(param_1 + 0x16e) = *(char *)(param_1 + 0x16e) + '\x01';
    return;
  }
  if (bVar1 < 2) {
    *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) + 0.1;
    auVar2 = vscl_t(*(undefined (*) [12])(param_1 + 0x90),0x3f547ae1);
    *(int *)*(undefined (*) [12])(param_1 + 0x90) = auVar2._0_4_;
    *(int *)(param_1 + 0x94) = auVar2._4_4_;
    *(int *)(param_1 + 0x98) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x9c) = in_V7D;
    if (*(float *)(param_1 + 0x170) <= *(float *)(param_1 + 0xbc)) {
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x170);
      *(char *)(param_1 + 0x16e) = *(char *)(param_1 + 0x16e) + '\x01';
    }
  }
  else if (bVar1 < 3) {
    auVar2 = vscl_t(*(undefined (*) [12])(param_1 + 0x90),0x3f5eb852);
    *(int *)*(undefined (*) [12])(param_1 + 0x90) = auVar2._0_4_;
    *(int *)(param_1 + 0x94) = auVar2._4_4_;
    *(int *)(param_1 + 0x98) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x9c) = in_V7D;
    fVar5 = *(float *)(param_1 + 0xbc) - 0.03;
    *(float *)(param_1 + 0xbc) = fVar5;
    if (fVar5 <= 0.0) {
      FUN_089f5124(*(undefined4 *)(param_1 + 0x188),param_1);
      return;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  auVar2._8_4_ = DAT_08ab9f08;
  auVar2._4_4_ = DAT_08ab9f04;
  auVar2._0_4_ = DAT_08ab9f00;
  auVar2 = vadd_t(*(undefined (*) [12])(param_1 + 0x70),auVar2);
  *(int *)*(undefined (*) [12])(param_1 + 0x70) = auVar2._0_4_;
  *(int *)(param_1 + 0x74) = auVar2._4_4_;
  *(int *)(param_1 + 0x78) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  pauVar3 = (undefined (*) [12])(param_1 + 0x90);
  uVar4 = *(undefined4 *)(param_1 + 0x9c);
  auVar2 = vadd_t(*pauVar3,*(undefined (*) [12])(param_1 + 0x20));
  *(int *)*pauVar3 = auVar2._0_4_;
  *(int *)(param_1 + 0x94) = auVar2._4_4_;
  *(int *)(param_1 + 0x98) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x6c);
  auVar2 = vadd_t(*(undefined (*) [12])(param_1 + 0x60),*pauVar3);
  *(int *)*(undefined (*) [12])(param_1 + 0x60) = auVar2._0_4_;
  *(int *)(param_1 + 100) = auVar2._4_4_;
  *(int *)(param_1 + 0x68) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  return;
}

