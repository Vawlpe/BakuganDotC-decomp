#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d2df4(void)

{
  int *piVar1;
  
  piVar1 = DAT_08ac5978;
  if (*DAT_08ac5978 != 0) {
    FUN_089d2f1c(*DAT_08ac5978,3);
    piVar1 = DAT_08ac5978;
    *DAT_08ac5978 = 0;
  }
  if (piVar1 != (int *)0x0) {
    FUN_089d8634();
    FUN_089d7fd8(DAT_08ac5978,0,0);
    FUN_089d866c();
    DAT_08ac5978 = (int *)0x0;
  }
  return;
}

