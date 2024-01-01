#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088664bc(int param_1,int param_2)

{
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x5a8) = 0;
    *(int *)(param_1 + 0x4e8) = param_2;
    return;
  }
  if (9 < param_2) {
    *(undefined4 *)(param_1 + 0x5a8) = 9;
    *(int *)(param_1 + 0x4e8) = param_2;
    return;
  }
  *(int *)(param_1 + 0x5a8) = param_2;
  *(int *)(param_1 + 0x4e8) = param_2;
  return;
}

