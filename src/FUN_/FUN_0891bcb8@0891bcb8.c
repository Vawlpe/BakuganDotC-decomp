#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891bcb8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (((uint)*(byte *)(param_1 + 0x218c) & 1 << (uVar2 & 0x1f)) == 0) break;
    uVar1 = uVar2 + 1;
  } while ((int)(uVar2 + 1) < 3);
  *(char *)(param_1 + 0x77) = (char)uVar2;
  return;
}

