#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bc618(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar3 = *param_2;
    do {
      uVar1 = FUN_089c487c(uVar3);
      iVar2 = FUN_089c546c(uVar1);
    } while (iVar2 != 0);
    FUN_089c4734(uVar3);
  }
  return 0;
}

