#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a25ed8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    uVar2 = *(byte *)(param_1 + 0x18) - 1;
    iVar1 = (param_2 + uVar2 & ~uVar2) * (uint)*(byte *)(param_1 + 0x17);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    iVar1 = iVar1 >> 3;
  }
  return iVar1;
}

