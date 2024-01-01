#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a10a1c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xc);
  if ((piVar2 != (int *)0x0) && (param_2 != 0)) {
    for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (iVar1 == param_2) {
        *piVar2 = *(int *)(param_2 + 4);
        *(undefined4 *)(param_2 + 4) = 0;
        return;
      }
      piVar2 = (int *)(iVar1 + 4);
    }
  }
  return;
}

