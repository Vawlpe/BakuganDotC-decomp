#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08849360(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af18bc;
    iVar1 = FUN_0884b248();
    if (iVar1 != 0) {
      iVar1 = FUN_0884b268();
      *(undefined4 *)(iVar1 + 0x4e0) = 0;
    }
    FUN_089e10cc(0x3f800000);
    FUN_089e2950(param_1 + 0x10,2);
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

