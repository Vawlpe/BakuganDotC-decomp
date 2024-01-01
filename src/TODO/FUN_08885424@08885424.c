#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08885424(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c) = 2;
    }
    else {
      FUN_089f5124(DAT_08ac5c6c,*(int *)(param_1 + 4));
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

