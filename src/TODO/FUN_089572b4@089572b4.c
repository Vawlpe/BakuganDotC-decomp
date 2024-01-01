#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089572b4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ('\0' < *(char *)(param_1 + 0x4cda)) {
    uVar1 = 0;
    do {
      FUN_08957100(param_1,uVar1);
      uVar2 = uVar2 + 1;
      uVar1 = uVar2 & 0xff;
    } while ((int)uVar2 < (int)*(char *)(param_1 + 0x4cda));
  }
  return;
}

