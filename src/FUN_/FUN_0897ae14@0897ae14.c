#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897ae14(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x5c);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = param_1;
  iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x68);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = param_1;
  if (*(char *)(param_2 + 0xee1) == '\0') {
    iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x5c);
    *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xbc) = param_1;
    cVar1 = *(char *)(param_2 + 0xee5);
  }
  else {
    cVar1 = *(char *)(param_2 + 0xee5);
  }
  if (cVar1 < '\x02') {
    if ((-1 < cVar1) &&
       ((int)*(char *)(param_2 + 0xee1) == (*(byte *)(param_2 + 0xeec) + 5) / 6 - 1)) {
      iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x68);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = param_1;
      return;
    }
  }
  else if ((cVar1 < '\x03') && (*(char *)(param_2 + 0xee1) == '\x05')) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x68);
    *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xbc) = param_1;
  }
  return;
}

