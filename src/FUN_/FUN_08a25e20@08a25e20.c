#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a25e20(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = (int)((uint)*(byte *)(param_1 + 0x17) * (uint)*(byte *)(param_1 + 0x18)) >> 3;
  }
  return iVar1;
}

