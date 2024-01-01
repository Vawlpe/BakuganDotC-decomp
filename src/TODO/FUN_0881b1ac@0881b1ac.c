#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881b1ac(void)

{
  if (DAT_08ab0300 != (int *)0x0) {
    if (*DAT_08ab0300 != 0) {
      FUN_0881b104(*DAT_08ab0300,3);
      *DAT_08ab0300 = 0;
    }
    if (DAT_08ab0300 != (int *)0x0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08ab0300,0,0);
      FUN_089d866c();
      DAT_08ab0300 = (int *)0x0;
    }
  }
  FUN_089bf850(0x7d2);
  return;
}

