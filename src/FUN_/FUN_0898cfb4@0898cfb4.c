#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898cfb4(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x54);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = param_1;
  iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x60);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = param_1;
  if (*(char *)(param_2 + 0xe79) == '\0') {
    iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x54);
    *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xbc) = param_1;
    bVar1 = *(byte *)(param_2 + 0xe84);
  }
  else {
    bVar1 = *(byte *)(param_2 + 0xe84);
  }
  if ((int)*(char *)(param_2 + 0xe79) == (bVar1 + 5) / 6 - 1) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x60);
    *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xbc) = param_1;
  }
  return;
}

