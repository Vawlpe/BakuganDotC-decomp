#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b4a64(void)

{
  if (DAT_08af80ac != 0) {
    zz_sceKernelFreePartitionMemory(DAT_08af80ac);
    DAT_08af80ac = 0;
  }
  return;
}

