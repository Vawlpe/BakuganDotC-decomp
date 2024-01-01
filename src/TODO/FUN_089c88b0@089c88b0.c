#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c88b0(int param_1)

{
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af526c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined *)(param_1 + 0x28) = 0;
  *(undefined *)(param_1 + 0x29) = 0;
  if (DAT_08ac5880 == 0) {
    FUN_089c8614(8);
  }
  FUN_08a2fa8c(DAT_08ac5880,param_1,1000);
  return param_1;
}

