#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f89cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar2 == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = iVar2 + 1;
  }
  return iVar1;
}

