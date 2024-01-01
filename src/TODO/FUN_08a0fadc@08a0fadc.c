#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a0fadc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    zz_sceKernelReleaseSubIntrHandler(0x1e,param_1,0,param_3);
  }
  else {
    iVar1 = zz_sceKernelRegisterSubIntrHandler(0x1e,param_1);
    if (-1 < iVar1) {
      zz_sceKernelEnableSubIntr(0x1e,param_1);
    }
  }
  return;
}

