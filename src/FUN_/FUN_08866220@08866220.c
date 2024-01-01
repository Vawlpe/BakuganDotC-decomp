#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08866220(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_08aba808 != (int *)0x0) {
    iVar2 = *DAT_08aba808;
  }
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x158);
    while( true ) {
      if (cVar1 == '\0') {
        iVar2 = *(int *)(iVar2 + 4);
      }
      else {
        if (*(int *)(iVar2 + 0x150) == param_1) {
          return iVar2;
        }
        iVar2 = *(int *)(iVar2 + 4);
      }
      if (iVar2 == 0) break;
      cVar1 = *(char *)(iVar2 + 0x158);
    }
  }
  return 0;
}

