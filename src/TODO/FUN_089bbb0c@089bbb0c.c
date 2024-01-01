#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bbb0c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    if (0 < *(int *)(param_1 + 8)) {
      do {
        FUN_089bbbb0(param_1);
      } while (0 < *(int *)(param_1 + 8));
      iVar1 = *(int *)(param_1 + 0x14);
    }
    iVar1 = zz_sceKernelDeleteLwMutex(iVar1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

