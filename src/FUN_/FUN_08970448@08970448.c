#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08970448(int param_1,char param_2)

{
  if (param_2 == '\0') {
    memset_jak(param_1 + 0xb8c,0,0x10);
    *(undefined *)(param_1 + 0xb8c) = 1;
  }
  else {
    memset_jak(param_1 + 0xb8c,0,0x10);
    *(undefined *)(param_1 + 0xb8c) = 1;
    *(undefined4 *)(param_1 + 0xb90) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xb94) = 0x3f4ccccd;
  }
  return;
}

