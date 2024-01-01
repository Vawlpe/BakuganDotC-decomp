#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b3de4(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_08abd628 != (int *)0x0) {
    iVar1 = *DAT_08abd628;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      while( true ) {
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
        }
        if (iVar2 == 0) break;
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
      }
    }
    if (DAT_08abd628 != (int *)0x0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08abd628,0,0);
      FUN_089d866c();
      DAT_08abd628 = (int *)0x0;
    }
  }
  return;
}

