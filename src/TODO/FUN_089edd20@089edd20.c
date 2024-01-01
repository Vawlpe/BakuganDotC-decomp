#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089edd20(char *param_1)

{
  if (*param_1 != '\0') {
    (**(code **)(*(int *)(param_1 + 0x50) + 0x2c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x50) + 0x28));
  }
  if ((param_1[1] == '\0') && (*(int *)(param_1 + 8) == *(int *)(param_1 + 4))) {
    param_1[1] = '\x01';
  }
  return;
}

