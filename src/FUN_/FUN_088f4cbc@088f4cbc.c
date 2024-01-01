#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f4cbc(int param_1,undefined param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xcc);
  *(byte *)(param_1 + 0xcc) = bVar1 + 1;
  *(undefined *)(param_1 + (uint)bVar1 + 0xcd) = param_2;
  return;
}

