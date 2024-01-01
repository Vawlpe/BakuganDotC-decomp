#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4534(float param_1,float param_2,int param_3)

{
  if (*(uint *)(param_3 + 0xe4) == 4) {
    *(float *)(param_3 + 0x20) = param_1;
    *(float *)(param_3 + 0x34) = param_2;
    *(undefined4 *)(param_3 + 0x48) = 0x3f800000;
    return;
  }
  if ((*(uint *)(param_3 + 0xe4) & 1) != 0) {
    *(float *)(param_3 + 0x20) = param_1;
    *(float *)(param_3 + 0x34) = param_2;
    *(undefined4 *)(param_3 + 0x48) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_3 + 0x48) = 0x3f800000;
  *(float *)(param_3 + 0x20) = param_1 * 2.0;
  *(float *)(param_3 + 0x34) = param_2 * 2.0;
  return;
}

