#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08829f38(int param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x16e) != '\0') {
    fVar1 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x170);
    *(float *)(param_1 + 0x70) = fVar1;
    fVar2 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0x174);
    *(float *)(param_1 + 0x78) = fVar1;
    *(float *)(param_1 + 0x74) = fVar1;
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) * 0.83;
    *(float *)(param_1 + 0xbc) = fVar2;
    if (fVar2 < 0.0) {
      FUN_089f5124(*(undefined4 *)(param_1 + 0x188),param_1);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x74) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x78) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 2;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined *)(param_1 + 0x16e) = 1;
  *(undefined4 *)(param_1 + 0x170) = 0x40000000;
  *(undefined4 *)(param_1 + 0x174) = 0x3e4ccccd;
  return;
}

