#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088892e4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xe0);
  iVar1 = 0;
  if (uVar2 != 0xffffffff) {
    if ((int)uVar2 < 0) {
      iVar1 = 0x3c - (-uVar2 & 3);
    }
    else {
      iVar1 = (uVar2 & 3) + 0x3c;
    }
  }
  return iVar1;
}

