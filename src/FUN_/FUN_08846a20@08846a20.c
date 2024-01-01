#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08846a20(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_08abd628 != (int *)0x0) && (iVar1 = *DAT_08abd628, iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0x50);
    iVar3 = *(int *)(iVar1 + 4);
    while( true ) {
      if (iVar2 == param_2) {
        return iVar1;
      }
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 0x50);
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar3 + 4);
    }
  }
  return 0;
}

