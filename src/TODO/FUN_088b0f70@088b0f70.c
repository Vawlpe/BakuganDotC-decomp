#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b0f70(int param_1)

{
  if (*(int *)(param_1 + 0x154) != 0) {
    FUN_088a99f0(param_1);
    *(undefined *)(*(int *)(param_1 + 0x154) + 0x3a) = 1;
    FUN_088b3410(*(undefined4 *)(param_1 + 0x154));
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  FUN_089de940(param_1,0);
  return;
}

