#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e2950(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_08af54d4;
    if (DAT_08ac5c90 == param_1) {
      DAT_08ac5c90 = 0;
    }
    if (DAT_08ac5c8c == param_1) {
      DAT_08ac5c8c = 0;
    }
    FUN_089d8bf0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

