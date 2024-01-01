#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880ce1c(undefined4 param_1,int param_2)

{
  undefined *ptr;
  int iVar1;
  int iVar2;
  
  ptr = (undefined *)FUN_0880cdf0();
  if (ptr != (undefined *)0x0) {
    iVar1 = param_2 + -1;
    if (param_2 == 0) {
      memset_jak(ptr,0,0x1e0);
    }
    else if ((-1 < iVar1) && (iVar2 = iVar1 * 8, iVar1 < 0x14)) {
      memset_jak(ptr + iVar2,0,8);
      memset_jak(ptr + iVar2 + 0x140,0,8);
      memset_jak(ptr + iVar2 + 0xa0,0,8);
    }
  }
  return;
}

