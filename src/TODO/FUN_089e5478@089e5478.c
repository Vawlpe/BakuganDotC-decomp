#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e5478(uint param_1)

{
  if (param_1 < 5) {
    if (param_1 == 1) {
      DAT_08ac5ce8 = FUN_089e4f6c;
      return;
    }
    if (param_1 == 2) {
      DAT_08ac5ce8 = FUN_089e5008;
      return;
    }
    if (param_1 == 3) {
      DAT_08ac5ce8 = FUN_089e50a4;
      return;
    }
    if (param_1 != 4) {
      DAT_08ac5ce8 = (code *)0x0;
      return;
    }
    DAT_08ac5ce8 = FUN_089e5138;
  }
  return;
}

