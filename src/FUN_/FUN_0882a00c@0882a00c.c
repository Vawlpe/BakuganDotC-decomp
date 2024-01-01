#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882a00c(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 in_V70;
  undefined4 in_V78;
  undefined4 in_V7F;
  
  if (*(char *)(param_1 + 0x16e) == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 2;
    uVar1 = FUN_089f7720("new_flash");
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(char *)(param_1 + 0x16e) = *(char *)(param_1 + 0x16e) + '\x01';
    *(undefined4 *)(param_1 + 0x170) = 0x40000000;
    uVar1 = vrndf1_s();
    uVar1 = vsub_s(uVar1,in_V7F);
    uVar1 = vmul_s(uVar1,in_V70);
    uVar1 = vsub_s(uVar1,in_V78);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x170);
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(float *)(param_1 + 0x70) = fVar2;
    *(float *)(param_1 + 0x74) = fVar2;
    fVar3 = *(float *)(param_1 + 0xbc) - 0.28;
    *(float *)(param_1 + 0x78) = fVar2;
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) * 0.5;
    *(float *)(param_1 + 0xbc) = fVar3;
    if (fVar3 < 0.0) {
      FUN_089f5124(*(undefined4 *)(param_1 + 0x188),param_1);
    }
  }
  return;
}

