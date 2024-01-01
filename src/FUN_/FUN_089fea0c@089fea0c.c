#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fea0c(int param_1,int param_2,char param_3)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0xf4) = 2;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  (**(code **)(*(int *)(param_1 + 0x74) + 0x4c))
            (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x74) + 0x48));
  uVar1 = *(uint *)(param_1 + 0x9c);
  *(uint *)(param_1 + 0x9c) = uVar1 | 2;
  *(float *)(param_1 + 0xf8) = 1.0 / (float)param_2;
  if (param_3 == '\0') {
    *(uint *)(param_1 + 0x9c) = uVar1 & 0xfffffff7 | 2;
  }
  else {
    *(uint *)(param_1 + 0x9c) = uVar1 | 10;
  }
  return;
}

