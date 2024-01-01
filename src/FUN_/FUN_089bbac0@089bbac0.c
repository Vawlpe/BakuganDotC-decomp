#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bbac0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x18;
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 != 0) {
    iVar1 = zz_sceKernelCreateLwMutex(iVar1,*(undefined4 *)(param_1 + 0x10),0x300,0,0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

