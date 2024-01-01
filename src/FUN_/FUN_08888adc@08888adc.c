#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08888adc(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (1 < param_2) {
    param_2 = 1;
  }
  param_1 = param_1 + param_2 * 4;
  if (((*(int *)(param_1 + 0xd4) != -1) && (*(int *)(param_1 + 0xe8) == 0)) &&
     (10000.0 <= *(float *)(param_1 + 0xbc))) {
    return 1;
  }
  return 0;
}

