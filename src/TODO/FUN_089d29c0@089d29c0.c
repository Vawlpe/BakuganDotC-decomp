#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d29c0(void)

{
  int *piVar1;
  
  if (DAT_08ac5970 != (int *)0x0) {
    piVar1 = DAT_08ac5970;
    if (*DAT_08ac5970 != 0) {
      FUN_089d2b0c(*DAT_08ac5970,3);
      piVar1 = DAT_08ac5970;
      *DAT_08ac5970 = 0;
    }
    if (piVar1 != (int *)0x0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08ac5970,0,0);
      FUN_089d866c();
      DAT_08ac5970 = (int *)0x0;
    }
  }
  return;
}

