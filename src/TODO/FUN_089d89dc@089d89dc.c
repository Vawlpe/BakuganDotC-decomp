#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d89dc(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    while( true ) {
      if (iVar1 == param_2) {
        return param_1;
      }
      param_1 = *(int *)(param_1 + 4);
      if (param_1 == 0) break;
      iVar1 = *(int *)(param_1 + 8);
    }
  }
  return 0;
}

