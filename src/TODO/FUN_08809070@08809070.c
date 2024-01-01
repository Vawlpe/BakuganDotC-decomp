#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08809070(int param_1,char param_2)

{
  *(char *)(param_1 + 0x14) = param_2;
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

