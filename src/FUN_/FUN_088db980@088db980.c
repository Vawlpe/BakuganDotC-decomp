#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088db980(int param_1)

{
  if (*(char *)(param_1 + 0x15e) != '\0') {
    *(undefined4 *)(param_1 + 0x180) = 0xbe800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}

