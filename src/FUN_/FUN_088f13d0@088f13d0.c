#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f13d0(int param_1,undefined2 param_2)

{
  if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
    *(byte *)(param_1 + 0x273) = *(byte *)(param_1 + 0x273) & 0xfb;
  }
  DAT_08b00dc4 = 1;
  DAT_08b00dc0 = param_2;
  return;
}

