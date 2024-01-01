#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d882c(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
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
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

