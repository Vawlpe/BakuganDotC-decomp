#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880c7e0(int param_1)

{
  int iVar1;
  
  DAT_08aac9e4 = param_1;
  if (DAT_08aac9e0 != (int *)0x0) {
    if (param_1 == 0) {
      *DAT_08aac9e0 = 0;
    }
    else {
      iVar1 = FUN_089c9af0();
      *DAT_08aac9e0 = param_1 + iVar1;
    }
  }
  return;
}

