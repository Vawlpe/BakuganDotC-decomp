#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_08a3279c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 4))) {
    piVar1 = (int *)FUN_08a2d678();
    param_2 = param_2 + -1;
    if (piVar1 != (int *)0x0) {
      for (; (-1 < param_2 && (param_2 = param_2 + -1, piVar1 != (int *)0x0));
          piVar1 = (int *)*piVar1) {
      }
    }
  }
  return piVar1;
}

