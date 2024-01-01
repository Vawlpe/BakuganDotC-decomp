#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bf43c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (((DAT_08af8270 != 0) && (0 < *(int *)(DAT_08af8270 + 4))) &&
       (piVar1 = (int *)FUN_08a2dc90(DAT_08af8270), piVar1 != (int *)0x0)) {
      iVar2 = piVar1[3];
      while( true ) {
        FUN_089bf7a8(iVar2,1);
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) break;
        iVar2 = piVar1[3];
      }
    }
    if (DAT_08af8270 != 0) {
      FUN_08a2d7d8(DAT_08af8270,3);
      DAT_08af8270 = 0;
    }
    FUN_089f6c50();
    FUN_089c86b4();
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

