#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bbbb0(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    zz_sceKernelUnlockLwMutex(*(int *)(param_1 + 0x14),1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  return;
}

