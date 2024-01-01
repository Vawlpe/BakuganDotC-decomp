#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089be228(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    while( true ) {
      if ((iVar1 != 0) && (iVar1 = FUN_089bd750(iVar1,param_2), iVar1 != 0)) {
        return iVar1;
      }
      param_1 = *(int *)(param_1 + 4);
      if (param_1 == 0) break;
      iVar1 = *(int *)(param_1 + 0x24);
    }
  }
  return 0;
}

