#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c6d14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  switch(iVar1) {
  case 1:
    FUN_089c6e2c(param_1);
    iVar1 = *(int *)(param_1 + 8);
    break;
  case 2:
    FUN_089c6eb4(param_1);
    iVar1 = *(int *)(param_1 + 8);
    break;
  case 3:
    FUN_089c6f34(param_1);
    iVar1 = *(int *)(param_1 + 8);
    break;
  case 4:
    FUN_089c6ffc(param_1);
    iVar1 = *(int *)(param_1 + 8);
    break;
  case 5:
    FUN_089c7030(param_1);
    iVar1 = *(int *)(param_1 + 8);
    break;
  case 6:
    FUN_089c7128(param_1);
    iVar1 = *(int *)(param_1 + 8);
    break;
  case 7:
    FUN_089c71d4(param_1);
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 == 5) {
    zz_sceDisplayWaitVblankStartCB();
  }
  else {
    zz_sceKernelDelayThreadCB(100);
  }
  return;
}

