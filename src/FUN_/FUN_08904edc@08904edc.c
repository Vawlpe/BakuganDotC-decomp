#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08904edc(int param_1)

{
  FUN_08904cbc(param_1 + 0x1a0);
  FUN_08908574(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  memset_jak(param_1,0,0x60);
  memset_jak(param_1 + 0x60,0,0x40);
  memset_jak(param_1 + 0xa0,0,0x40);
  memset_jak(param_1 + 0xe0,0,0x40);
  memset_jak(param_1 + 0x120,0,0x40);
  memset_jak(param_1 + 0x160,0,0x40);
  return param_1;
}

