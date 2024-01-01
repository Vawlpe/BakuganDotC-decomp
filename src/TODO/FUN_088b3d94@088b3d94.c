#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b3d94(void)

{
  int iVar1;
  
  if ((DAT_08abd628 != (int *)0x0) && (*DAT_08abd628 != 0)) {
    iVar1 = *(int *)(*DAT_08abd628 + 4);
    while( true ) {
      FUN_088b3c28();
      if (iVar1 == 0) break;
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

