#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bb840(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = zz_sceKernelDeleteMutex(), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

