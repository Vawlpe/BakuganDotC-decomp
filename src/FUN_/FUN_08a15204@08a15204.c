#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a15204(undefined2 *param_1)

{
  undefined2 uVar1;
  
  if (param_1 != (undefined2 *)0x0) {
    uVar1 = *param_1;
    FUN_08a14e7c();
    *param_1 = 1;
    param_1[0x11] = 0xffff;
    *(undefined4 *)(param_1 + 0x14) = 0xff;
    *(undefined4 *)(param_1 + 0x12) = 0xbf800000;
    param_1[0x17] = 0xfcff;
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1a) = 0x10001;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x24) = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
    FUN_08a13c14(0,0,0,0x3f800000,param_1 + 0x30);
    FUN_08a13c94(0,0,0x3f800000,0x3f800000,param_1 + 0x38);
    FUN_08a13c2c(0,0,0,0x3f800000,0x3f800000,0x3f800000,param_1 + 0x40);
    *param_1 = uVar1;
  }
  return;
}

