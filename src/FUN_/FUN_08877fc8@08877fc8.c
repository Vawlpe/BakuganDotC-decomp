#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08877fc8(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_08b00870 != 0) {
    cVar1 = *(char *)(DAT_08b00870 + 0xe8);
    iVar2 = DAT_08b00870;
    while( true ) {
      if (cVar1 == '\0') {
        iVar2 = *(int *)(iVar2 + 4);
      }
      else {
        if (*(int *)(iVar2 + 0xb0) == param_1) {
          return iVar2;
        }
        iVar2 = *(int *)(iVar2 + 4);
      }
      if (iVar2 == 0) break;
      cVar1 = *(char *)(iVar2 + 0xe8);
    }
  }
  return 0;
}

