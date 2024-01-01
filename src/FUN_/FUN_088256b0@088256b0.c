#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088256b0(int param_1,char param_2,uint param_3)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x1b4) = 0xdd020000;
    *(uint *)(param_1 + 0x1b0) = (param_3 & 0xff) << 8 | 0xdcff0001;
    return;
  }
  *(undefined4 *)(param_1 + 0x1b4) = 0xdd000000;
  return;
}

