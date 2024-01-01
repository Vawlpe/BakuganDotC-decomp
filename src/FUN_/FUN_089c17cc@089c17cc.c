#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c17cc(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  FUN_089bb728(param_1[3]);
  piVar1 = (int *)FUN_08a2eeec(*param_1);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[3];
    while( true ) {
      piVar1 = (int *)*piVar1;
      if ((piVar2 != (int *)0x0) && (*piVar2 == param_2)) {
        *(undefined *)(piVar2 + 2) = 1;
      }
      if (piVar1 == (int *)0x0) break;
      piVar2 = (int *)piVar1[3];
    }
  }
  FUN_089bb790(param_1[3]);
  return;
}

