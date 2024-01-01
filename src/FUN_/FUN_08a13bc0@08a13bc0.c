#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a13bc0(int param_1)

{
  if (DAT_08afceac == (code *)0x0) {
    return;
  }
  if (param_1 != 0) {
                    // WARNING: Could not recover jumptable at 0x08a13bd8. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_08afceac)();
    return;
  }
                    // WARNING: Could not recover jumptable at 0x08a13be0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_08afceac)(&UNK_08aa5214);
  return;
}

