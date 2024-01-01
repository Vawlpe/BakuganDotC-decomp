#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089bf6e8(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_088128dc();
  if (piVar1 != (int *)0x0) {
    if (DAT_08af8270 != 0) {
      if (param_1 == 100) {
        param_2 = 200;
      }
      FUN_08a2d8a8(DAT_08af8270,piVar1,param_2);
    }
    *piVar1 = param_1;
  }
  return piVar1;
}

