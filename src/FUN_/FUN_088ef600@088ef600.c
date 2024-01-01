#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088ef600(int param_1,undefined4 param_2,undefined2 param_3)

{
  if (*(ushort *)(param_1 + 0x252) <= *(ushort *)(param_1 + 0x250)) {
    *(undefined2 *)(param_1 + 0x250) = 0;
    *(undefined2 *)(param_1 + 0x252) = param_3;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined *)(param_1 + 0x26a) = 0;
    *(undefined2 *)(param_1 + 0x256) = 0;
    *(undefined2 *)(param_1 + 600) = 0;
    FUN_088cc6d4(0);
    *(undefined *)(param_1 + 0x272) = 0;
    *(undefined *)(param_1 + 0x267) = 0;
    FUN_088ef540(param_1);
    *(undefined *)(param_1 + 0x264) = 2;
    return 1;
  }
  return 0;
}

