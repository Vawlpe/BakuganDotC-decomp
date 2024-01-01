#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f0fc4(int param_1,uint param_2)

{
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xfb | (byte)((param_2 & 1) << 2);
  return;
}

