#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d8c60(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int **ppiVar2;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (param_3 == '\0') {
    iVar1 = *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 4) == 0) {
      *(int **)(param_2 + 4) = param_1;
    }
    else {
      do {
        param_2 = iVar1;
        iVar1 = *(int *)(param_2 + 4);
      } while (*(int *)(param_2 + 4) != 0);
      *(int **)(param_2 + 4) = param_1;
    }
    *param_1 = param_2;
    param_1[1] = 0;
    return;
  }
  ppiVar2 = *(int ***)(param_2 + 4);
  if (ppiVar2 == (int **)0x0) {
    *(int **)(param_2 + 4) = param_1;
    *param_1 = param_2;
    param_1[1] = 0;
    return;
  }
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  *ppiVar2 = param_1;
  param_1[1] = (int)ppiVar2;
  return;
}

