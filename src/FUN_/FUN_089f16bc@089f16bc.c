#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089f16bc(undefined4 *param_1)

{
  if (DAT_08af8764 == 0) {
    DAT_08af8764 = 1;
    DAT_08ac5e18 = 0x63000000;
    DAT_08ac5e1c = 0x64bf8000;
    DAT_08ac5e20 = 0x65000000;
    DAT_08ac5e34 = 0x5b000000;
    DAT_08ac5e48 = 0x10080000;
    DAT_08ac5e4c = 0x1b007e0;
  }
  *param_1 = 0x10080000;
  param_1[1] = 0xaac5e0c;
  return param_1 + 2;
}

