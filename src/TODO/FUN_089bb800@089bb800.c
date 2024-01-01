#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bb800(int param_1)

{
  int iVar1;
  
  iVar1 = zz_sceKernelCreateMutex(*(undefined4 *)(param_1 + 0x10),0x300,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

