#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bc668(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar3 = *param_2;
    do {
      uVar1 = FUN_089c2b48(uVar3);
      iVar2 = FUN_089c3bb0(uVar1);
    } while (iVar2 != 0);
    FUN_089c2aac(uVar3);
  }
  return 0;
}

