#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088efd88(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x284);
  if (iVar1 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x284) = 0;
  }
  FUN_088ef410(param_1);
  return;
}

