#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bb880(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar1 = zz_sceKernelLockMutexCB(*(int *)(param_1 + 4),1,0), iVar1 == 0)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

