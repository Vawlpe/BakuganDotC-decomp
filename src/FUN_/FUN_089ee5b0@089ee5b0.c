#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ee5b0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x14) + param_2 * 4) != 0) {
      FUN_089f5124();
      *(undefined4 *)(*(int *)(param_1 + 0x14) + param_2 * 4) = 0;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
  }
  return 1;
}

