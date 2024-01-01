#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fe234(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_08af590c;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_089d75e8(*(int *)(param_1 + 0x30),3);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    FUN_089d90f0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

