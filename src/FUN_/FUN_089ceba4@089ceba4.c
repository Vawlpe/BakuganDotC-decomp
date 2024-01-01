#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ceba4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar1 = 0;
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      if (0 < iVar2) {
        return 0x1e;
      }
      return 0x3c;
    }
  }
  else {
    if (iVar2 < 3) {
      return 0x14;
    }
    if (iVar2 < 4) {
      uVar1 = 0xf;
    }
  }
  return uVar1;
}

