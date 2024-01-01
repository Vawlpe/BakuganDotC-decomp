#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a13b9c(void)

{
  undefined4 uVar1;
  
  if (DAT_08afceb0 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x08a13bb0. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*DAT_08afceb0)();
    return uVar1;
  }
  return 0;
}

