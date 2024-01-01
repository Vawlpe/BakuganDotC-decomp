#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b9aa4(void)

{
  DAT_08af8254 = DAT_08af8254 + -1;
  if (DAT_08af8254 == 0) {
    zz_sceKernelCpuResumeIntr(DAT_08af8258);
  }
  return;
}

