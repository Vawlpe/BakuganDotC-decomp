#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b2e6c(undefined param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_08abd5bc != (int *)0x0) {
    iVar2 = *DAT_08abd5bc;
  }
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14);
    while( true ) {
      iVar1 = (**(code **)(iVar1 + 100))(iVar2 + *(short *)(iVar1 + 0x60));
      if (iVar1 != 0) {
        *(undefined *)(iVar2 + 0xb8) = param_1;
        FUN_088a7c34(iVar2,param_1);
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) break;
      iVar1 = *(int *)(iVar2 + 0x14);
    }
  }
  return;
}

