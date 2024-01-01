#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088289e0(int param_1,undefined param_2)

{
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_089f3aa8();
  *(undefined **)(param_1 + 0x14) = &DAT_08af1704;
  *(undefined *)(param_1 + 0x16c) = param_2;
  *(undefined *)(param_1 + 0x16e) = 0;
  *(undefined *)(param_1 + 0x16f) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x20;
  FUN_089f4044(param_1,1);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0x80) = in_V72;
  *(undefined4 *)(param_1 + 0x84) = in_V76;
  *(undefined4 *)(param_1 + 0x88) = in_V7A;
  *(undefined4 *)(param_1 + 0x8c) = in_V7E;
  return param_1;
}

