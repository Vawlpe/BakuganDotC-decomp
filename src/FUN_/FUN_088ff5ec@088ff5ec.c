#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ff5ec(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af45fc;
    FUN_088dfa3c();
    FUN_088fdd8c(param_1 + 0x100,2);
    FUN_089bdc4c(param_1 + 0x98,2);
    FUN_089bdc4c(param_1 + 0x54,2);
    FUN_089bdc4c(param_1 + 0x10,2);
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

