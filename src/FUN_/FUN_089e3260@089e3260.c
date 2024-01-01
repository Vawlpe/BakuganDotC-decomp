#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e3260(float param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 == 0) {
    param_4 = 1;
  }
  *(int *)(param_3 + 0x210) = param_4;
  *(float *)(param_3 + 0x214) = param_1;
  *(undefined4 *)(param_3 + 0x218) = param_2;
  *(float *)(param_3 + 0x220) = param_1 / ABS((float)param_4);
  if (param_4 < 0) {
    *(undefined4 *)(param_3 + 0x21c) = 0;
    return;
  }
  *(undefined4 *)(param_3 + 0x21c) = 0x3fc90fdb;
  return;
}

