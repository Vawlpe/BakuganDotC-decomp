#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f1ae0(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xfe | param_2 & 1;
  return;
}

