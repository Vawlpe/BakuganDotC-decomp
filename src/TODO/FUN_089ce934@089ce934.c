#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ce934(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_089d6e7c(*(int *)(param_1 + 0x48),3);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    FUN_089f2490();
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

