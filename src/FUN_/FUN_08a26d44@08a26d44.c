#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_08a26d44(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 < 0) {
    piVar2 = (int *)0x0;
  }
  else if (param_3 < *(short *)(param_1 + 6)) {
    piVar2 = (int *)(param_1 + 0x10);
    if (*(char *)(param_1 + 5) != '\0') {
      piVar2 = (int *)(param_1 + 0x80);
    }
    if (0 < param_3) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        piVar2 = (int *)((int)piVar2 + *piVar2);
      } while (param_3 != iVar1);
      return piVar2;
    }
  }
  else {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

