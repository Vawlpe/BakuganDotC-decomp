#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08983e00(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x4c);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = param_1;
  iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x58);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = param_1;
  if (*(char *)(param_2 + 0xbcd) == '\0') {
    iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x4c);
    *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xbc) = param_1;
    cVar1 = *(char *)(param_2 + 0xbcd);
  }
  else {
    cVar1 = *(char *)(param_2 + 0xbcd);
  }
  if (cVar1 == '\x13') {
    iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x58);
    *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xbc) = param_1;
  }
  return;
}

