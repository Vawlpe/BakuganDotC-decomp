#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b4fa0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0884df98();
  if ((((iVar1 == 0) && (*(char *)(param_1 + 0x395) != '\0')) && (DAT_08aba77e == '\0')) &&
     (iVar1 = *(int *)(param_1 + 0x33c) + -1, *(int *)(param_1 + 0x33c) = iVar1, iVar1 < 1)) {
    iVar1 = FUN_089bed14(0x96);
    *(int *)(param_1 + 0x33c) = iVar1 + 0x5a;
    FUN_088b4b34(param_1,1);
  }
  return;
}

