#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08982f2c(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_08982bc0(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

