#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 * FUN_08a124c8(undefined2 *param_1)

{
  if (param_1 != (undefined2 *)0x0) {
    *(undefined *)(param_1 + 0xf) = 0xff;
    *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
    *(undefined *)(param_1 + 0x1a) = 1;
    *(undefined *)((int)param_1 + 0x35) = 7;
    *param_1 = 1;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined *)(param_1 + 0xc) = 0;
    *(undefined *)((int)param_1 + 0x19) = 0xff;
    param_1[0xd] = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)((int)param_1 + 0x1d) = 0;
    *(undefined *)((int)param_1 + 0x1f) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    *(undefined *)(param_1 + 0x18) = 1;
    *(undefined *)(param_1 + 0x19) = 0;
    *(undefined *)((int)param_1 + 0x33) = 1;
    *(undefined *)(param_1 + 0x1b) = 0;
    *(undefined *)((int)param_1 + 0x37) = 0;
  }
  return param_1;
}

