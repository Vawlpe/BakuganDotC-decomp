#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889d8ec(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  DAT_08abd4c8 = 1;
  DAT_08abd4cc = 0;
  DAT_08abd4d0 = 0;
  iVar2 = 0;
  piVar1 = &DAT_08abd4a0;
  DAT_08abd4c4 = param_1;
  do {
    if (*piVar1 != 0) {
      FUN_0889cd84(*piVar1,&DAT_08abd4d0,1);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 3);
  return;
}

