#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f0fe8(int param_1,uint param_2,char param_3)

{
  param_2 = param_2 & 0xff;
  if (param_2 == 100) {
    param_2 = (uint)*(byte *)(param_1 + 0x2d4);
  }
  if (param_3 == '\0') {
    param_3 = '\x06';
  }
  *(undefined *)((&DAT_08b00d40)[*(byte *)(param_1 + param_2 + 0x292)] + 0x12) = 0;
  *(char *)((&DAT_08b00d40)[*(byte *)(param_1 + param_2 + 0x292)] + 0x40) =
       (char)*(undefined2 *)(param_1 + 0x28e);
  *(byte *)((&DAT_08b00d40)[*(byte *)(param_1 + param_2 + 0x292)] + 0x47) =
       *(byte *)((&DAT_08b00d40)[*(byte *)(param_1 + param_2 + 0x292)] + 0x47) & 0xfb |
       ((*(byte *)(param_1 + 0x2d6) & 4) == 0) << 2;
  *(char *)((&DAT_08b00d40)[*(byte *)(param_1 + param_2 + 0x292)] + 0x44) = param_3;
  return;
}

