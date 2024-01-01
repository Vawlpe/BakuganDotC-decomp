#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08985750(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0xce8) = 0;
    *(undefined4 *)(param_1 + 0xcdc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xce8) = 0;
  *(undefined4 *)(param_1 + 0xcdc) = 0x3f800000;
  return;
}

