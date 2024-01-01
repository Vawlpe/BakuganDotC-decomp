#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884b414(float param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 == 0) {
    param_4 = 1;
  }
  *(int *)(param_3 + 0x568) = param_4;
  *(float *)(param_3 + 0x56c) = param_1;
  *(undefined4 *)(param_3 + 0x570) = param_2;
  *(undefined4 *)(param_3 + 0x574) = 0;
  *(float *)(param_3 + 0x578) = param_1 / (float)param_4;
  return;
}

