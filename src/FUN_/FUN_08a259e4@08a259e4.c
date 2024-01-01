#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a259e4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && ((param_2 & 2) != 0)) {
    iVar1 = FUN_08a10958(param_1,1,0);
    iVar2 = FUN_08a10970(param_1,1,0);
    if (iVar1 != 0) {
      FUN_08a10a1c(param_1,iVar1);
      FUN_08a12614(iVar1,1);
    }
    if (iVar2 != 0) {
      FUN_08a10a2c(param_1,iVar2);
      thunk_FUN_08a12614(iVar2,1);
    }
    FUN_08a10a8c(param_1,*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

