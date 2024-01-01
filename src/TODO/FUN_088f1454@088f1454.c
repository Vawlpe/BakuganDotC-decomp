#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f1454(int param_1)

{
  if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
    *(byte *)(param_1 + 0x273) = *(byte *)(param_1 + 0x273) & 0xfb;
  }
  DAT_08b00dc4 = 2;
  return;
}

