#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894f0c0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0894e060(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    FUN_0894e6cc(param_1,*(undefined *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

