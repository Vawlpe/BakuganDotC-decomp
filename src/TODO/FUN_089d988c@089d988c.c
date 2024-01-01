#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d988c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_08ac5bcc + 4);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x20);
    while( true ) {
      iVar2 = *(int *)(iVar3 + 4);
      iVar1 = (**(code **)(iVar1 + 0x2c))(iVar3 + *(short *)(iVar1 + 0x28),param_2);
      if (iVar1 != 0) {
        FUN_089d97b0(param_1,iVar3);
      }
      if (iVar2 == 0) break;
      iVar1 = *(int *)(iVar2 + 0x20);
      iVar3 = iVar2;
    }
  }
  return;
}

