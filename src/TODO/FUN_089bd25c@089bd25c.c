#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bd25c(int param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    zz_sceKernelVolatileMemUnlock(0);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined *)(param_1 + 5) = 0;
  }
  return;
}

