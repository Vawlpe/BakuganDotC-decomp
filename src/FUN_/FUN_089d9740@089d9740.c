#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d9740(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_08ac5bcc + 4);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    if ((param_2 != '\0') || (*(char *)(iVar1 + 0x28) != '\0')) {
      FUN_089d97b0(param_1,iVar1);
    }
  }
  return;
}

