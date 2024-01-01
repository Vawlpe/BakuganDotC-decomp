#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0883a658(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_088660c8();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar4 = *piVar2;
  iVar3 = 0;
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + 0x158);
    while( true ) {
      if (cVar1 != '\0') {
        iVar3 = iVar3 + 1;
      }
      iVar4 = *(int *)(iVar4 + 4);
      if (iVar4 == 0) break;
      cVar1 = *(char *)(iVar4 + 0x158);
    }
  }
  return iVar3;
}

