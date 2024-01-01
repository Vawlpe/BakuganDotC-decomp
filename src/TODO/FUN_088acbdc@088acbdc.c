#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088acbdc(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  if ((DAT_08abd5bc != (int *)0x0) && (iVar2 = *DAT_08abd5bc, iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + 0x288);
    while( true ) {
      if (cVar1 == '\0') {
        iVar2 = *(int *)(iVar2 + 4);
      }
      else {
        (**(code **)(*(int *)(iVar2 + 0x14) + 0x44))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 0x40),param_1);
        iVar2 = *(int *)(iVar2 + 4);
      }
      if (iVar2 == 0) break;
      cVar1 = *(char *)(iVar2 + 0x288);
    }
  }
  return;
}

