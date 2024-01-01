#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c0c4c(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x658);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 0x15e);
    while( true ) {
      if (cVar1 == '\0') {
        iVar3 = *(int *)(iVar3 + 4);
      }
      else {
        iVar2 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x7c))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x78));
        if (iVar2 != 0) {
          FUN_088d6784(iVar3,param_2);
        }
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 == 0) break;
      cVar1 = *(char *)(iVar3 + 0x15e);
    }
  }
  return;
}

