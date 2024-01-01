#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fa3d4(int param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x3c);
    *(undefined **)(param_1 + 0x2c) = &DAT_08af453c;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x38);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    FUN_088fdad0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

