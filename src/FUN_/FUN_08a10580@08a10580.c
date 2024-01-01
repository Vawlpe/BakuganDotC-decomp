#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a10580(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar3 = 0;
    uVar1 = *param_1;
    puVar2 = param_1;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      FUN_08a10484(uVar1);
      if (iVar3 == 3) break;
      uVar1 = *puVar2;
    }
    memset_jak(param_1,0,0x6c);
    return;
  }
  return;
}

