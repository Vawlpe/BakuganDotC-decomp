#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889e908(undefined param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_08abd4a0;
  DAT_08abd4c0 = param_1;
  do {
    if (*piVar1 != 0) {
      *(undefined *)(*piVar1 + 0xbc) = param_1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 3);
  return;
}

