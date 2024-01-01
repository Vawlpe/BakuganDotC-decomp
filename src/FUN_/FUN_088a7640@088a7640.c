#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a7640(int param_1)

{
  if (*(int *)(param_1 + 0x33c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x33c) + 0x170) = 2;
  }
  *(undefined4 *)(param_1 + 0x3b4) = 1;
  return;
}

