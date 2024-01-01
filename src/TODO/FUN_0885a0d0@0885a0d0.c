#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885a0d0(int param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (2 < param_2) {
    param_2 = 2;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (3 < param_3) {
    param_3 = 3;
  }
  *(float *)(param_1 + param_2 * 4 + 0xa20) = (float)param_3;
  return;
}

