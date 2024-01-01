#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ebc24(int param_1,undefined2 param_2)

{
  if ((*(byte *)(param_1 + 0x273) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x260) = param_2;
    *(undefined *)(param_1 + 0x269) = 1;
  }
  return;
}

