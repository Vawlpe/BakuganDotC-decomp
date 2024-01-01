#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a5794(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  FUN_089f3dd4();
  fVar3 = 1.0;
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) | 1;
  *(undefined4 *)(param_2 + 0xbc) = 0x3f800000;
  *(float *)(param_2 + 0x68) = *(float *)(param_1 + 0x68) + 1.0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0xbc);
  *(int *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  *(undefined *)(param_3 + 7) = 0;
  fVar1 = (float)FUN_089f4944(param_1);
  if (fVar1 != 0.0) {
    fVar3 = 24.0 / fVar1 + 1.0;
  }
  *(float *)(param_3 + 0x14) = fVar3;
  if (fVar3 < 1.1) {
    *(undefined4 *)(param_3 + 0x14) = 0x3f8ccccd;
  }
  return;
}

