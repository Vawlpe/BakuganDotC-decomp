#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a012b8(undefined4 param_1,undefined4 param_2)

{
  FUN_089cbd70(param_1,DAT_08ac6230,0x2c4);
  *(undefined4 *)(DAT_08ac6230 + 0x34) = 0;
  *(undefined4 *)(DAT_08ac6230 + 0x38) = param_2;
  *(undefined4 *)(DAT_08ac6230 + 0x2c4) = 1;
  FUN_089cbe08(param_1,1);
  return 1;
}

