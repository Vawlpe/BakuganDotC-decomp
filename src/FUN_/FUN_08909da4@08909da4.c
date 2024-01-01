#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08909da4(int param_1)

{
  if (*(char *)(param_1 + 0x4c) == '\0') {
    if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + 0x1c) != 0)) {
      FUN_08909cd0();
    }
    return;
  }
  FUN_089bf7a8(param_1,1);
  return;
}

