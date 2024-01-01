#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899a560(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xd0) & 1) != 0) {
      FUN_0899a418(param_1,uVar2 & 0xff);
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 4;
  } while ((int)uVar2 < 8);
  return;
}

