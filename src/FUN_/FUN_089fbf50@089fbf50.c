#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089fbf50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    while( true ) {
      if (iVar2 == param_2) {
        return 1;
      }
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 == 0) break;
      iVar2 = *(int *)(iVar1 + 0x24);
    }
  }
  return 0;
}

