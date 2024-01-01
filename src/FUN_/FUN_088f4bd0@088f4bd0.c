#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f4bd0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    FUN_088df788(*(undefined4 *)(param_1 + iVar1));
    uVar2 = uVar2 + 1 & 0xff;
    iVar1 = uVar2 << 2;
  } while (uVar2 < *(byte *)(param_1 + 0xc9));
  return;
}

