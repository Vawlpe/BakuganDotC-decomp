#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e9fd4(undefined4 param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088be274();
  iVar1 = *(int *)(iVar1 + 0x628);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x350);
    while( true ) {
      if (*(char *)(iVar2 + 0x37) == '\0') {
        iVar1 = *(int *)(iVar1 + 4);
      }
      else {
        if (*(int *)(iVar1 + 0x3a0) != 6) {
          *(undefined *)(*(int *)(iVar1 + 0x418) + 0x25) = param_2;
        }
        iVar1 = *(int *)(iVar1 + 4);
      }
      if (iVar1 == 0) break;
      iVar2 = *(int *)(iVar1 + 0x350);
    }
  }
  return;
}

