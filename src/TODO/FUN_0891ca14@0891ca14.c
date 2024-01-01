#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891ca14(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = 0;
  do {
    piVar1 = (int *)(iVar2 + 0x218);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
    *(undefined4 *)(param_1 + 0x2264) = *(undefined4 *)(*piVar1 + 0x60);
    param_1 = param_1 + 4;
  } while (iVar3 < 6);
  return;
}

