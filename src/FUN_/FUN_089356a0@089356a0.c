#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089356a0(int param_1)

{
  if (*(char *)(param_1 + 0x74) == '\0') {
    FUN_089a4f4c(0x40800000,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x38),0,
                 0);
    FUN_089a4f4c(0x40800000,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0xa8),0,
                 1);
  }
  else {
    FUN_089a4f4c(0x40800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98),0,0);
  }
  return;
}

