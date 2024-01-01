#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bbe6c(int param_1)

{
  int iVar1;
  
  if (((param_1 < 0x13) && (0 < (int)(&DAT_08ac4f78)[param_1 * 8])) &&
     (iVar1 = zz_sceKernelGetThreadExitStatus(), iVar1 == -0x7ffdfe5c)) {
    return 1;
  }
  return 0;
}

