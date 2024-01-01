#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08848e38(int param_1,uint param_2)

{
  if (param_1 != 0) {
    DAT_08ac5c90 = *(undefined4 *)(param_1 + 0x2b0);
    *(undefined **)(param_1 + 0xc) = &DAT_08af1884;
    FUN_0887800c();
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

