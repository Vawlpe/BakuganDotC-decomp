#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a4e08(char param_1,int param_2)

{
  memset_jak((undefined *)&DAT_08b01040,0,0x10);
  DAT_08b01040 = param_2;
  if (param_1 == '\0') {
    *(undefined4 *)(param_2 + 0x128) = 2;
    *(uint *)(DAT_08b01040 + 0xd0) = *(uint *)(DAT_08b01040 + 0xd0) | 1;
    FUN_089f46dc(DAT_08b01040);
    *(uint *)(DAT_08b01040 + 0xd0) = *(uint *)(DAT_08b01040 + 0xd0) | 0x20;
    *(undefined4 *)(DAT_08b01040 + 0x90) = 0x3f800000;
    *(undefined4 *)(DAT_08b01040 + 0x94) = 0x3f800000;
    *(undefined4 *)(DAT_08b01040 + 0x9c) = 0;
    FUN_089f4954(*(undefined4 *)(DAT_08b01040 + 0x90),*(undefined4 *)(DAT_08b01040 + 0x94),
                 *(undefined4 *)(DAT_08b01040 + 0x9c),DAT_08b01040,0);
    *(undefined4 *)(DAT_08b01040 + 0x60) = 0x43700000;
  }
  else {
    *(undefined4 *)(param_2 + 0x90) = 0x3f800000;
    *(undefined4 *)(DAT_08b01040 + 0x94) = 0x3f800000;
    *(undefined4 *)(DAT_08b01040 + 0x9c) = 0;
    FUN_089f4954(*(undefined4 *)(DAT_08b01040 + 0x90),*(undefined4 *)(DAT_08b01040 + 0x94),
                 *(undefined4 *)(DAT_08b01040 + 0x9c),DAT_08b01040,0);
  }
  return;
}

