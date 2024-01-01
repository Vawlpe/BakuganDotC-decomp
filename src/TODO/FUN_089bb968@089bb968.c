#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bb968(int param_1)

{
  int iVar1;
  
  iVar1 = zz_sceKernelWaitSemaCB(*(undefined4 *)(param_1 + 4),1,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

