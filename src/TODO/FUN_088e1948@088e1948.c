#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e1948(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_088dfa48();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_088dfa48();
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x14c);
      while( true ) {
        if (cVar1 != '\0') {
          return iVar2;
        }
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) break;
        cVar1 = *(char *)(iVar2 + 0x14c);
      }
    }
  }
  return 0;
}

