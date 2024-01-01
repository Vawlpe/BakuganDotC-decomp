#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088acd4c(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((DAT_08abd5bc != (int *)0x0) && (iVar2 = *DAT_08abd5bc, iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + 0x281);
    while( true ) {
      if (cVar1 == '\0') {
        if (iVar2 == param_1) {
          return iVar2;
        }
        iVar2 = *(int *)(iVar2 + 4);
      }
      else {
        iVar2 = *(int *)(iVar2 + 4);
      }
      if (iVar2 == 0) break;
      cVar1 = *(char *)(iVar2 + 0x281);
    }
  }
  return 0;
}

