#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888ccac(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_0889b534(*(undefined4 *)(param_1 + 0x2c4),param_1 + 0x2cc);
    FUN_0889b43c(*(undefined4 *)(param_1 + 0x2c4));
    if (param_1 != -0xa04) {
      if (*(char *)(param_1 + 0xa11) == '\0') {
        iVar1 = *(int *)(param_1 + 0xa04);
      }
      else {
        *(undefined4 *)(param_1 + 0xa04) = 0;
        *(undefined *)(param_1 + 0xa11) = 0;
        iVar1 = *(int *)(param_1 + 0xa04);
      }
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0xa08) = 0;
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar1,0,0);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0xa04) = 0;
        *(undefined4 *)(param_1 + 0xa08) = 0;
      }
      *(undefined4 *)(param_1 + 0xa0c) = 0;
      *(undefined *)(param_1 + 0xa10) = 0;
    }
    if (param_1 != -0x9f4) {
      if (*(char *)(param_1 + 0xa01) == '\0') {
        iVar1 = *(int *)(param_1 + 0x9f4);
      }
      else {
        *(undefined4 *)(param_1 + 0x9f4) = 0;
        *(undefined *)(param_1 + 0xa01) = 0;
        iVar1 = *(int *)(param_1 + 0x9f4);
      }
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x9f8) = 0;
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar1,0,0);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0x9f4) = 0;
        *(undefined4 *)(param_1 + 0x9f8) = 0;
      }
      *(undefined4 *)(param_1 + 0x9fc) = 0;
      *(undefined *)(param_1 + 0xa00) = 0;
    }
    FUN_08899650(param_1 + 0x788,2);
    FUN_08a02fb0(param_1 + 0x2d8,4,300,FUN_0888cba4,0,0);
    if (param_1 + 0x1b0 != 0) {
      FUN_088848b4(param_1 + 0x220,2);
      FUN_088848b4(param_1 + 0x1b0,2);
    }
    if (param_1 != -0x150) {
      *(undefined **)(param_1 + 0x198) = &DAT_08af6220;
    }
    if (param_1 != -0xf0) {
      *(undefined **)(param_1 + 0x138) = &DAT_08af6220;
    }
    if (param_1 != -0xa0) {
      *(undefined **)(param_1 + 0xe8) = &DAT_08af6268;
      *(undefined **)(param_1 + 0xe8) = &DAT_08af6220;
    }
    if (param_1 != -0x50) {
      *(undefined **)(param_1 + 0x98) = &DAT_08af6250;
      *(undefined **)(param_1 + 0x98) = &DAT_08af6220;
    }
    *(undefined **)(param_1 + 0x48) = &DAT_08af6220;
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

