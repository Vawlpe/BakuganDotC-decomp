#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08846e68(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = FUN_0884b248();
  if ((iVar2 != 0) && (DAT_08aba778 == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_08846a70(param_1);
  }
  else {
    FUN_089bf7a8(param_1,1);
  }
  return;
}

