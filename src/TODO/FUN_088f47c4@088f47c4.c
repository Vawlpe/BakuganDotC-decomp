#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f47c4(int param_1,undefined param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xcb);
  *(undefined *)(param_1 + (uint)bVar1 + 0x89) = param_2;
  *(byte *)(param_1 + 0xcb) = bVar1 + 1;
  return;
}

