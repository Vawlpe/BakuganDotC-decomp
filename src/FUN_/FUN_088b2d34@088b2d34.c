#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b2d34(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (DAT_08abd5bc != (int *)0x0) {
    iVar2 = *DAT_08abd5bc;
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14);
    while( true ) {
      iVar1 = (**(code **)(iVar1 + 100))(iVar2 + *(short *)(iVar1 + 0x60));
      if (iVar1 == 0) {
        iVar2 = *(int *)(iVar2 + 4);
      }
      else if (*(char *)(iVar2 + 0x281) == '\0') {
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar2 + 4);
      }
      else {
        iVar2 = *(int *)(iVar2 + 4);
      }
      if (iVar2 == 0) break;
      iVar1 = *(int *)(iVar2 + 0x14);
    }
  }
  return iVar3;
}

