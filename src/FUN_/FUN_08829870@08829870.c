#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08829870(int param_1)

{
  byte bVar1;
  undefined auVar2 [12];
  undefined4 uVar3;
  float fVar4;
  
  bVar1 = *(byte *)(param_1 + 0x16e);
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0xd4) = DAT_08af7920;
    *(undefined4 *)(param_1 + 0xb0) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xb4) = 0x3f19999a;
    *(undefined4 *)(param_1 + 0xb8) = 0x3ecccccd;
    *(undefined4 *)(param_1 + 0xbc) = 0x3e4ccccd;
    *(char *)(param_1 + 0x16e) = *(char *)(param_1 + 0x16e) + '\x01';
    return;
  }
  if (bVar1 < 2) {
    fVar4 = *(float *)(param_1 + 0xbc) + 0.1;
    *(float *)(param_1 + 0xbc) = fVar4;
    if (0.5 <= fVar4) {
      *(char *)(param_1 + 0x16e) = *(char *)(param_1 + 0x16e) + '\x01';
    }
  }
  else if ((bVar1 < 3) &&
          (fVar4 = *(float *)(param_1 + 0xbc) - 0.02, *(float *)(param_1 + 0xbc) = fVar4,
          fVar4 <= 0.0)) {
    FUN_089f5124(*(undefined4 *)(param_1 + 0x188),param_1);
    return;
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
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + 0.1;
  return;
}

