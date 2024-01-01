#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c1f44(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined *)(param_1 + 0x24) = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x28) + iVar2);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 8) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  return;
}

