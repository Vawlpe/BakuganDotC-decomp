#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b9a68(void)

{
  undefined4 uVar1;
  
  uVar1 = zz_sceKernelCpuSuspendIntr();
  if (DAT_08af8254 == 0) {
    DAT_08af8258 = uVar1;
  }
  DAT_08af8254 = DAT_08af8254 + 1;
  return;
}

