#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ed0c8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      FUN_089f7b98(*(undefined4 *)(param_1 + 0x14));
    }
    FUN_089d7a58(*(undefined4 *)(param_1 + 0x10));
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

