#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880ce1c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0880cdf0();
  if (iVar1 != 0) {
    iVar2 = param_2 + -1;
    if (param_2 == 0) {
      memset_jak(iVar1,0,0x1e0);
    }
    else if ((-1 < iVar2) && (iVar2 < 0x14)) {
      memset_jak(iVar1 + iVar2 * 8,0,8);
      iVar1 = iVar1 + iVar2 * 8;
      memset_jak(iVar1 + 0x140,0,8);
      memset_jak(iVar1 + 0xa0,0,8);
    }
  }
  return;
}

