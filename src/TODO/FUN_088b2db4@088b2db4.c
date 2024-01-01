#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088b2db4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_08abd5bc != (int *)0x0) {
    iVar2 = *DAT_08abd5bc;
  }
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14);
    while( true ) {
      iVar1 = (**(code **)(iVar1 + 100))(iVar2 + *(short *)(iVar1 + 0x60));
      if (iVar1 == 0) {
        iVar2 = *(int *)(iVar2 + 4);
      }
      else {
        if (0.0 < (float)*(int *)(iVar2 + 0x204) - (float)*(int *)(iVar2 + 0x200)) {
          return 1;
        }
        iVar2 = *(int *)(iVar2 + 4);
      }
      if (iVar2 == 0) break;
      iVar1 = *(int *)(iVar2 + 0x14);
    }
  }
  return 0;
}

