#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088edddc(int param_1,uint param_2)

{
  *(byte *)(param_1 + 0x273) = *(byte *)(param_1 + 0x273) & 0xf7 | (byte)((param_2 & 1) << 3);
  return;
}

