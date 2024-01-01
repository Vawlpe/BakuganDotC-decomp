#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a5b0c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_08abd530 != (int *)0x0) && (iVar1 = *DAT_08abd530, iVar1 != 0)) {
    iVar3 = *(int *)(iVar1 + 0x18);
    iVar2 = *(int *)(iVar1 + 4);
    while( true ) {
      if ((iVar3 == param_1) && (iVar1 != 0)) {
        (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      }
      if (iVar2 == 0) break;
      iVar3 = *(int *)(iVar2 + 0x18);
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return;
}

