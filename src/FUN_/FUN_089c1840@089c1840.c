#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c1840(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_089bb728(param_1[3]);
  piVar1 = (int *)FUN_08a2eeec(*param_1);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[3];
    while( true ) {
      piVar1 = (int *)*piVar1;
      if (iVar2 != 0) {
        *(undefined *)(iVar2 + 8) = 1;
      }
      if (piVar1 == (int *)0x0) break;
      iVar2 = piVar1[3];
    }
  }
  FUN_089bb790(param_1[3]);
  return;
}

