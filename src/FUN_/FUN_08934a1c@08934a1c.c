#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08934a1c(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x1a68;
  if (param_2 < 2) {
    if (param_2 != 0) {
      memset_jak(iVar1,0,0x10);
      *(byte *)(param_1 + 0x1a68) = param_2;
      return;
    }
  }
  else if (param_2 < 3) {
    memset_jak(iVar1,0,0x10);
    *(byte *)(param_1 + 0x1a68) = param_2;
    return;
  }
  memset_jak(iVar1,0,0x10);
  return;
}

