#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089cec48(int param_1)

{
  int iVar1;
  
  iVar1 = zz_sceDisplayGetAccumulatedHcount();
  return iVar1 - *(int *)(param_1 + 0x28);
}

