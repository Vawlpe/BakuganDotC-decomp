#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08859f1c(int param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (2 < param_2) {
    param_2 = 2;
  }
  if (param_3 < 0) {
    *(undefined4 *)(param_1 + param_2 * 4 + 0x9ac) = 0;
    return;
  }
  if (9 < param_3) {
    *(undefined4 *)(param_1 + param_2 * 4 + 0x9ac) = 9;
    return;
  }
  *(int *)(param_1 + param_2 * 4 + 0x9ac) = param_3;
  return;
}

