#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d82c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x250);
  }
  else {
    if (*(char *)(param_1 + 0x254) == '\0') {
      *(undefined4 *)(iVar1 + 0xbc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0xbc) = 0x3e4ccccd;
    }
    iVar1 = *(int *)(param_1 + 0x250);
  }
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x255) != '\0') {
      *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
      return;
    }
    *(undefined4 *)(iVar1 + 0xbc) = 0;
  }
  return;
}

