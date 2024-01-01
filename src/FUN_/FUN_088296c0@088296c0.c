#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088296c0(int param_1)

{
  byte bVar1;
  undefined auVar2 [12];
  undefined4 uVar3;
  float fVar4;
  undefined4 in_V7D;
  
  bVar1 = *(byte *)(param_1 + 0x16e);
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0xd4) = DAT_08af7920;
    *(undefined4 *)(param_1 + 0xb0) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0xb4) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0xb8) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x7c) = 0;
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
    fVar4 = *(float *)(param_1 + 0xbc) - 0.03;
    *(float *)(param_1 + 0xbc) = fVar4;
    if (fVar4 <= 0.0) {
      FUN_089f5124(*(undefined4 *)(param_1 + 0x188),param_1);
      return;
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  auVar2._8_4_ = DAT_08ab9f08;
  auVar2._4_4_ = DAT_08ab9f04;
  auVar2._0_4_ = DAT_08ab9f00;
  auVar2 = vadd_t(*(undefined (*) [12])(param_1 + 0x70),auVar2);
  *(int *)*(undefined (*) [12])(param_1 + 0x70) = auVar2._0_4_;
  *(int *)(param_1 + 0x74) = auVar2._4_4_;
  *(int *)(param_1 + 0x78) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x6c);
  auVar2 = vadd_t(*(undefined (*) [12])(param_1 + 0x60),*(undefined (*) [12])(param_1 + 0x90));
  *(int *)*(undefined (*) [12])(param_1 + 0x60) = auVar2._0_4_;
  *(int *)(param_1 + 100) = auVar2._4_4_;
  *(int *)(param_1 + 0x68) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + 0.1;
  return;
}

