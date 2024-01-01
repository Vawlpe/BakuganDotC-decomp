#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088f3ff0(int param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined *)(param_1 + 0x88) = 0;
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xcb) = 0;
  DAT_08abf710 = param_1;
  memset_jak(param_1,0,0x80);
  memset_jak(param_1 + 0xa9,0,0x20);
  memset_jak(param_1 + 0x89,0,0x20);
  return param_1;
}

