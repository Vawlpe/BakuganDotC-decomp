#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f7b98(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xad) == '\0') {
    iVar1 = *(int *)(param_1 + 0xb0);
    *(undefined *)(param_1 + 0xad) = 1;
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    *(int *)(param_1 + 0xb0) = param_1 + 0xb4;
  }
  return;
}

