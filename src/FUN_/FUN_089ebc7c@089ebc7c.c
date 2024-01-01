#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ebc7c(void)

{
  int *piVar1;
  
  if (DAT_08ac5d90 != (int *)0x0) {
    piVar1 = DAT_08ac5d90;
    if (*DAT_08ac5d90 != 0) {
      FUN_089ebf10(*DAT_08ac5d90,3);
      piVar1 = DAT_08ac5d90;
      *DAT_08ac5d90 = 0;
    }
    if (piVar1 != (int *)0x0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08ac5d90,0,0);
      FUN_089d866c();
      DAT_08ac5d90 = (int *)0x0;
    }
  }
  return;
}

