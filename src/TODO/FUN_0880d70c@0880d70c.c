#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880d70c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + param_2 * 4);
    FUN_0880cd9c(param_1,param_2,param_3 + iVar1);
  }
  return iVar1;
}

