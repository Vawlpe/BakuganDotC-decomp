#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d9ddc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_08ac5bcc + 4);
  for (iVar2 = 0; (iVar1 != 0 && (iVar2 != param_2)); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  return;
}

