#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d8a10(int param_1,int param_2)

{
  if (param_1 != 0) {
    do {
      if (param_1 == param_2) {
        return 1;
      }
      param_1 = *(int *)(param_1 + 4);
    } while (param_1 != 0);
  }
  return 0;
}

