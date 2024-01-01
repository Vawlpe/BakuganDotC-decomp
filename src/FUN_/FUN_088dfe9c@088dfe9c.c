#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dfe9c(undefined param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_08abf618;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x350);
    while( true ) {
      if (*(char *)(iVar2 + 0x37) == '\0') {
        iVar1 = *(int *)(iVar1 + 4);
      }
      else {
        *(undefined *)(*(int *)(iVar1 + 0x418) + 0x25) = param_1;
        iVar1 = *(int *)(iVar1 + 4);
      }
      if (iVar1 == 0) break;
      iVar2 = *(int *)(iVar1 + 0x350);
    }
  }
  return;
}

