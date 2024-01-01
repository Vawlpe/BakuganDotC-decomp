#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a8e38(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x664) = 0;
    *(undefined4 *)(param_1 + 0x660) = 0;
    iVar2 = 0;
    iVar1 = param_1;
    do {
      if (*(int *)(iVar1 + 0x68c) != 0) {
        *(undefined4 *)(param_1 + 0x598) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
      param_1 = param_1 + 0x28;
    } while (iVar2 < 5);
  }
  else {
    *(undefined4 *)(param_1 + 0x664) = 0;
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x660) = 0x3f800000;
    iVar1 = param_1;
    do {
      if (*(int *)(iVar1 + 0x68c) != 0) {
        *(undefined4 *)(param_1 + 0x598) = 0x3f800000;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
      param_1 = param_1 + 0x28;
    } while (iVar2 < 5);
  }
  return;
}

