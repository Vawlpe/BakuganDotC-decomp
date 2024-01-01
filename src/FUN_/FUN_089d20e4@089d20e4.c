#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d20e4(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_08ac5968 != (int *)0x0) {
    if (DAT_08ac5968[1] == 0) {
      iVar2 = *DAT_08ac5968;
      piVar1 = DAT_08ac5968;
    }
    else {
      FUN_089d75e8(DAT_08ac5968[1],3);
      piVar1 = DAT_08ac5968;
      DAT_08ac5968[1] = 0;
      iVar2 = *piVar1;
    }
    if (iVar2 != 0) {
      FUN_089d22b8(iVar2,3);
      piVar1 = DAT_08ac5968;
      *DAT_08ac5968 = 0;
    }
    if (piVar1 != (int *)0x0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08ac5968,0,0);
      FUN_089d866c();
      DAT_08ac5968 = (int *)0x0;
    }
  }
  return;
}

