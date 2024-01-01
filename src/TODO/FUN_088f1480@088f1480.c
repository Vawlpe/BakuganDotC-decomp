#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f1480(int param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
    *(byte *)(param_1 + 0x273) = *(byte *)(param_1 + 0x273) & 0xfb;
  }
  DAT_08b00dc4 = 3;
  DAT_08b00dc7 = DAT_08b00dc7 & 0xfe | param_2 & 1;
  return;
}

