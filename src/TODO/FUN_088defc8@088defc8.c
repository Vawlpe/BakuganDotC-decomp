#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088defc8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x170) + 0x134) = param_2;
  }
  if (*(int *)(param_1 + 0x174) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x134) = param_2;
  }
  return;
}

