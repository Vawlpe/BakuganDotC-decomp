#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088eabd0(int param_1)

{
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af41b4;
  *(undefined *)(param_1 + 0x50) = 0;
  *(undefined *)(param_1 + 0x51) = 0;
  memset_jak((undefined *)(param_1 + 0x10),0,0x40);
  return param_1;
}

