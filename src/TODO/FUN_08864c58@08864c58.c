#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08864c58(int param_1)

{
  if (((*(uint *)(param_1 + 0x16c) & 0x400) != 0) && (*(char *)(param_1 + 0x4c1) == '\0')) {
    FUN_0886004c(100.0 / *(float *)(*(int *)(param_1 + 0x4bc) + 0xcc));
    return;
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  return;
}

