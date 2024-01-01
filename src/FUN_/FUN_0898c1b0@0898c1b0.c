#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898c1b0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0898be30(param_1);
    FUN_0898c0b8(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

