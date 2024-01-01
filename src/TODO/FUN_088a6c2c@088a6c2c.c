#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_088a6c2c(int param_1,int param_2)

{
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x330);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (10 < param_2) {
    param_2 = 10;
  }
  return (float)(&DAT_08a8558c)[param_2 * 4];
}

