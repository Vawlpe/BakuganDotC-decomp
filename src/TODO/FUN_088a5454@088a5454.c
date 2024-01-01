#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a5454(int param_1)

{
  if (*(char *)(param_1 + 900) == '\0') {
    *(undefined *)(param_1 + 900) = 1;
    *(undefined *)(param_1 + 0x282) = 1;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
    FUN_088a4508(param_1);
  }
  return;
}

