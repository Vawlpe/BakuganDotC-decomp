#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e533c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  param_1[0x30] = *param_2;
  param_1[0x31] = param_2;
  *(undefined *)(param_1 + 0x35) = 1;
  switch(param_1[0x30]) {
  case 0:
    return;
  case 1:
    puVar1 = (undefined4 *)0x0;
    if (param_1 != (undefined4 *)0x0) {
      param_1[1] = &DAT_08af5504;
      *param_1 = 1;
      puVar1 = param_1;
    }
    param_1[0x39] = puVar1;
    return;
  case 2:
    puVar1 = (undefined4 *)0x0;
    if (param_1 != (undefined4 *)0x0) {
      param_1[1] = &DAT_08af5564;
      *param_1 = 2;
      puVar1 = param_1;
    }
    param_1[0x39] = puVar1;
    return;
  case 3:
    puVar1 = (undefined4 *)0x0;
    if (param_1 != (undefined4 *)0x0) {
      param_1[1] = &DAT_08af55c4;
      *param_1 = 3;
      puVar1 = param_1;
    }
    param_1[0x39] = puVar1;
    return;
  case 4:
    puVar1 = (undefined4 *)0x0;
    if (param_1 != (undefined4 *)0x0) {
      param_1[1] = &DAT_08af5624;
      param_1[5] = &DAT_08af5564;
      param_1[4] = 2;
      *param_1 = 4;
      puVar1 = param_1;
    }
    param_1[0x39] = puVar1;
  case 5:
    return;
  case 6:
    puVar1 = (undefined4 *)0x0;
    if (param_1 != (undefined4 *)0x0) {
      param_1[1] = &DAT_08af5684;
      *(undefined *)(param_1 + 0x2c) = 0;
      *param_1 = 6;
      puVar1 = param_1;
    }
    param_1[0x39] = puVar1;
  default:
    return;
  }
}

