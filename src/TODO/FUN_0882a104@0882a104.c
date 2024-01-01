#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882a104(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = *(byte *)(param_1 + 0x16e);
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0x70) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x74) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x78) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 1;
    uVar2 = FUN_089f7720("shockwave");
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
    *(undefined4 *)(param_1 + 0xe0) = 2;
    *(undefined4 *)(param_1 + 0xb0) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xb4) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xb8) = 0x3f333333;
    *(undefined4 *)(param_1 + 0xbc) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0x170) = 0x40400000;
    *(char *)(param_1 + 0x16e) = *(char *)(param_1 + 0x16e) + '\x01';
  }
  else {
    fVar4 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x170);
    fVar3 = *(float *)(param_1 + 0x170) - 0.25;
    *(float *)(param_1 + 0x70) = fVar4;
    *(float *)(param_1 + 0x78) = fVar4;
    *(float *)(param_1 + 0x74) = fVar4;
    *(float *)(param_1 + 0x170) = fVar3;
    if (fVar3 < 0.8) {
      *(undefined4 *)(param_1 + 0x170) = 0x3f4ccccd;
    }
    if (8 < bVar1) {
      fVar3 = *(float *)(param_1 + 0xbc) - 0.045;
      *(float *)(param_1 + 0xbc) = fVar3;
      if (fVar3 < 0.0) {
        FUN_089f5124(*(undefined4 *)(param_1 + 0x188),param_1);
        return;
      }
    }
    *(byte *)(param_1 + 0x16e) = bVar1 + 1;
  }
  return;
}

