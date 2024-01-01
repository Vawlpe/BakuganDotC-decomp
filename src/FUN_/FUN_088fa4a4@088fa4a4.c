#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fa4a4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x38);
  }
  else {
    (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
    piVar1 = *(int **)(param_1 + 0x38);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  }
  return;
}

