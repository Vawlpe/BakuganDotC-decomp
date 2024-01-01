#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c242c(undefined4 param_1)

{
  uint uVar1;
  
  while( true ) {
    uVar1 = FUN_088f4c24(DAT_08abf710);
    if (uVar1 == 0xffffffff) break;
    FUN_088c21dc(param_1,uVar1 & 0xff);
  }
  return;
}

