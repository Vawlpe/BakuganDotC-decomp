#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a15d28(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined4 *)(param_1 + 4);
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (iVar1 == param_2) {
        *puVar2 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_2 + 4) = 0;
        return;
      }
      puVar2 = (undefined4 *)(iVar1 + 4);
    }
  }
  return;
}

