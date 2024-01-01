#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d9e8c(int param_1)

{
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - 0.06666667;
  if (*(float *)(param_1 + 0x6c) <= 0.0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_088d9de8(param_1);
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  return;
}

