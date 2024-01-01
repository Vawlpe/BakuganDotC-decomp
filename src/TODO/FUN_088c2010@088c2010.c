#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_088c2010(int param_1)

{
  if ((*(int *)(param_1 + 0x61c) != 5) && (*(int *)(param_1 + 0x61c) != 0x15)) {
    return false;
  }
  return *(int *)(param_1 + 0x618) == 1;
}

