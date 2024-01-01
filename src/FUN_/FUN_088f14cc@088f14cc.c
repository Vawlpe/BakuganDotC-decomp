#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f14cc(int param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
    *(byte *)(param_1 + 0x273) = *(byte *)(param_1 + 0x273) & 0xfb;
  }
  DAT_08b00dc4 = 4;
  DAT_08b00dc7 = DAT_08b00dc7 & 0xfd | (byte)((param_2 & 1) << 1);
  return;
}

