#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088ab67c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_08abd5bc != (int *)0x0) && (iVar3 = *DAT_08abd5bc, iVar3 != 0)) {
    cVar1 = *(char *)(iVar3 + 0x281);
    while( true ) {
      if (cVar1 == '\0') {
        iVar2 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x6c))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x68));
        if (iVar2 == 0) {
          iVar3 = *(int *)(iVar3 + 4);
        }
        else {
          if (*(int *)(iVar3 + 0x21c) == param_1) {
            return iVar3;
          }
          iVar3 = *(int *)(iVar3 + 4);
        }
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 == 0) break;
      cVar1 = *(char *)(iVar3 + 0x281);
    }
  }
  return 0;
}

