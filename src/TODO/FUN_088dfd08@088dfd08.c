#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088dfd08(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_08abf618;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}

