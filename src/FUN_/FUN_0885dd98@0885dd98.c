#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0885dd98(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_08aba808;
  while( true ) {
    while( true ) {
      if (iVar1 == 0) {
        return 1;
      }
      if (iVar1 != param_1) break;
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (*(char *)(iVar1 + 0x4c1) == '\0') break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return 0;
}

