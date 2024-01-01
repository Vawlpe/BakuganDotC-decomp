#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a13b68(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_08afceb4 == (code *)0x0) {
    return 0;
  }
  if (param_1 != 0) {
                    // WARNING: Could not recover jumptable at 0x08a13b80. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*DAT_08afceb4)();
    return uVar1;
  }
                    // WARNING: Could not recover jumptable at 0x08a13b8c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_08afceb4)(&UNK_08aa5214);
  return uVar1;
}

