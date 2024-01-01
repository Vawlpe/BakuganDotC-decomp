#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884d86c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    FUN_0884d6bc(param_1);
  }
  else {
    uVar1 = FUN_0880cc48();
    iVar2 = FUN_0880d0ac(uVar1,7);
    if (iVar2 < 2) {
      if (0 < iVar2) {
        FUN_0884d7bc(param_1);
        return;
      }
    }
    else if (iVar2 < 3) {
      FUN_0884d7bc(param_1);
      return;
    }
    FUN_0884d6bc(param_1);
  }
  return;
}

