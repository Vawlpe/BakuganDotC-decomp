#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089be054(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    while( true ) {
      iVar1 = FUN_089bd750(uVar2,param_2);
      if (iVar1 != 0) {
        return *(undefined4 *)(iVar1 + 4);
      }
      param_1 = *(int *)(param_1 + 4);
      if (param_1 == 0) break;
      uVar2 = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return 0;
}

