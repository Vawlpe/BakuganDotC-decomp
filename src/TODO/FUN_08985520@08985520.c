#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08985520(int param_1)

{
  if ((float)(uint)*(byte *)(param_1 + 0xcd5) < 5.0) {
    *(byte *)(param_1 + 0xcd5) = *(byte *)(param_1 + 0xcd5) + 1;
    return;
  }
  *(undefined *)(param_1 + 0xcd4) = 0;
  *(undefined *)(param_1 + 0xcd6) = 0;
  return;
}

