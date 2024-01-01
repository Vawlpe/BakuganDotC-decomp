#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c2474(int param_1,int param_2)

{
  int iVar1;
  int **ppiVar2;
  
  ppiVar2 = *(int ***)(param_1 + 0x28);
  if (ppiVar2 != (int **)0x0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        if ((*ppiVar2 != (int *)0x0) && (**ppiVar2 == param_2)) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        ppiVar2 = ppiVar2 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x2c));
    }
  }
  return 0;
}

