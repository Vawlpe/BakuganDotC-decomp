#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c2104(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x658);
  if (iVar2 == 0) {
    return;
  }
  iVar1 = *(int *)(iVar2 + 0x14);
  while( true ) {
    iVar1 = (**(code **)(iVar1 + 0x5c))(iVar2 + *(short *)(iVar1 + 0x58));
    if (iVar1 == 0) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    else if (*(char *)(iVar2 + 0x15e) == '\0') {
      iVar2 = *(int *)(iVar2 + 4);
    }
    else {
      iVar1 = FUN_088d93fc(iVar2);
      if (iVar1 == param_2) {
        (**(code **)(*(int *)(iVar2 + 0x14) + 0x84))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 0x80),0);
        return;
      }
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar2 + 0x14);
  }
  return;
}

