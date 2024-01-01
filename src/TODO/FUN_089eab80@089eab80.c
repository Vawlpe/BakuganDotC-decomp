#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089eab80(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_089bfa40(0x2742);
  if (iVar1 != 0) {
    FUN_089bf850(0x2742);
  }
  if (DAT_08ac5d80 != (int *)0x0) {
    piVar2 = DAT_08ac5d80;
    if (*DAT_08ac5d80 != 0) {
      FUN_089eafac(*DAT_08ac5d80,3);
      piVar2 = DAT_08ac5d80;
      *DAT_08ac5d80 = 0;
    }
    if (piVar2 != (int *)0x0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08ac5d80,0,0);
      FUN_089d866c();
      DAT_08ac5d80 = (int *)0x0;
    }
  }
  return;
}

