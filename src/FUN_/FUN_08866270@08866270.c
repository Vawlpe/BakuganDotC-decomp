#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08866270(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *DAT_08aba808;
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x14);
    while( true ) {
      iVar1 = (**(code **)(iVar1 + 0x54))(iVar3 + *(short *)(iVar1 + 0x50));
      if ((iVar1 == 0) &&
         (iVar1 = (**(code **)(*(int *)(iVar3 + 0x14) + 100))
                            (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x60)), iVar1 == 0)) {
        iVar3 = *(int *)(iVar3 + 4);
      }
      else {
        iVar2 = iVar2 + 1;
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 == 0) break;
      iVar1 = *(int *)(iVar3 + 0x14);
    }
  }
  return iVar2;
}

