#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d8cd8(int *param_1,int param_2)

{
  int **ppiVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    ppiVar1 = *(int ***)(param_2 + 4);
    *(int **)(param_2 + 4) = param_1;
    *param_1 = param_2;
    iVar3 = param_1[1];
    if (param_1[1] == 0) {
      param_1[1] = (int)ppiVar1;
    }
    else {
      do {
        iVar2 = iVar3;
        iVar3 = *(int *)(iVar2 + 4);
      } while (iVar3 != 0);
      *(int ***)(iVar2 + 4) = ppiVar1;
    }
    if (ppiVar1 != (int **)0x0) {
      *ppiVar1 = param_1;
    }
  }
  return;
}

