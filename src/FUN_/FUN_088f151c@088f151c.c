#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f151c(int param_1,undefined param_2)

{
  if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
    *(byte *)(param_1 + 0x273) = *(byte *)(param_1 + 0x273) & 0xfb;
  }
  DAT_08b00dc4 = 5;
  DAT_08b00bd4 = param_2;
  return;
}
