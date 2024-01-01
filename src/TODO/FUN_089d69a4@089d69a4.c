#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d69a4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af533c;
    uVar1 = FUN_089c487c(0);
    FUN_089c4af8(uVar1,0);
    FUN_089d5708();
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

